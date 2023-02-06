/**
 * Created by mdaly on 2/3/14.
 */

var fs = require('fs'),
    https = require('https'),
    request = require('request'),
    archiver = require('archiver'),
    AWS = require('aws-sdk');

exports.getCurrentBundle = function(req, res) {
    mongo_connect(function(db) {
        db.collection('bundle').findOne({key: 'latestBundle'}, function(err, item) {
            if (!err) {
                res.send(item);
            }
            else {
                res.error(err);
            }
        });
    });
};

exports.getBundle = function(req, res) {

    mongo_connect(function(db) {
        var archive = archiver('zip'),
            herolistcollection = db.collection('herolist'),
            herocollection = db.collection('hero'),
            directivecollection = db.collection('directive'),
            upgradescollection = db.collection('upgrade_type'),
            bundleCollection = db.collection('bundle'),
            tmpFilePath = __dirname + '/tmp-bundle.zip',
            output = fs.createWriteStream(tmpFilePath),
            processing = {},
            filesLeftToProcess = 0;

        archive.pipe(output);

        archive.on('error', function(err) {
            throw err;
        });

        output.on('finish', function() {
            console.log(archive.pointer() + ' total bytes');
            console.log('archiver has been finalized and the output file descriptor has closed.');
            console.log("Finished Archive Finalize. Starting S3 save.");
            saveBundleToS3();

        });

        var incrementFiles = function(amt) {
            amt = !amt ? 1 : amt;
            console.log("Operations left: " + (filesLeftToProcess + amt));
            filesLeftToProcess = filesLeftToProcess + amt;
            return filesLeftToProcess;
        };
        var decrementFiles = function () {
            console.log("Operations left: " + (filesLeftToProcess - 1));
            --filesLeftToProcess;

            if (filesLeftToProcess == 0) { finished();}

            return filesLeftToProcess;
        };

        var incrementProcessing = function(battleId) {
            return ++processing[battleId].tasks;
        };

        var decrementProcessing = function(battleId) {
            console.log("Incrementing Processing For " + battleId);
            processing[battleId].tasks--;
            if (processing[battleId].tasks == 0) {
                processing[battleId].finished = true;
            }

            return processing[battleId].tasks;
        };

        var getUpgrades = function() {
            upgradescollection.find({$query: {'component':'minion'}, $orderby: {index:1}}).toArray(function(err, upgrades) {
                archive.append(JSON.stringify(upgrades), {name: 'minion_upgrades.json'});

                upgradescollection.find({$query: {'component':'mothership'}, $orderby: {index:1}}).toArray(function(err, mother_upgrades) {
                    archive.append(JSON.stringify(mother_upgrades), {name: 'mothership_upgrades.json'});
                    getBattles();
                });
            });
        };

        //Get the list of story heroes
        var getBattles = function() {
            herolistcollection.find({$query: {'story':true}, $orderby: {index:1}}).toArray(function(err, battles) {
                if (err) {
                    console.log(err);
                }

                var battlesCopy = JSON.parse(JSON.stringify(battles));

                for (var i = 0; i < battles.length; i++) {
                    var battle = battles[i];
                    processing[battle._id.toJSON()] = {
                        finished: false,
                        tasks: 0
                    };
                }

                incrementFiles(battles.length + 1);
                for (var sb = 0; sb < battles.length; sb++) {
                    getHeroes(battles[sb], 'battles');
                }

                buildBetterBattles(battlesCopy, 'story');
            });

            herolistcollection.find({$or: [{story: {$exists: false}}, {story: null}, {story: false}]}).toArray(function(err, battles) {
                var battlesCopy = JSON.parse(JSON.stringify(battles));
                for (var i = 0; i < battles.length; i++) {
                    processing[battles[i]._id.toJSON()] = {
                        finished: false,
                        tasks: 0
                    };
                }

                filesLeftToProcess += battles.length;
                filesLeftToProcess += 1;
                for (var ab = 0; ab < battles.length; ab++) {
                    getHeroes(battles[ab], 'battles');
                }

                buildBetterBattles(battlesCopy, 'arcade');
            });
        };

        var buildBetterBattles = function(theseBattles, type) {
            var itemsLeft = theseBattles.length;

            function findBattleStuffs(aBattle) {
                herocollection.find({$query: {'hero_list_id':aBattle._id}, $orderby: {order:1}}).toArray(function(err, heroes) {
                    var heroids = [];

                    console.log("  > " + aBattle.name + " = " + heroes.length);

                    for (var j = 0; j < heroes.length; j++) {
                        var hero = heroes[j];
                        heroids.push(hero._id.toJSON());
                    }
                    aBattle.heroes = heroids;

                    itemsLeft--;
                    console.log("  >* Better battles remaining: " + itemsLeft);

                    if (itemsLeft == 0) {
                        console.log("Finishing Better Battles");
                        archive.append(JSON.stringify(theseBattles), {name: type + '.json'});
                        decrementFiles();
                    }
                });
            }

            console.log("=== Starting Better Battles ===");
            for (var battleKey in theseBattles) {
                if (theseBattles.hasOwnProperty(battleKey)) {
                    findBattleStuffs(theseBattles[battleKey]);
                }
            }
        };

        var getHeroes = function(battle, path) {
            console.log("Started Getting Heroes");
            herocollection.find({$query: {'hero_list_id':battle._id.toJSON()}, $orderby: {order:1}}).toArray(function(err, heroes) {
                console.log("Finished Getting Heroes");
                battle.heroes = heroes;

                if (heroes.length > 0) {
                    for (var i = 0; i < heroes.length; i++) {
                        var hero = heroes[i];
                        getDirectives(battle, hero, path);
                        if (hero.photo_url)
                            getHeroPortrait(battle, hero, path);
                    }
                }
                else {
                    incrementProcessing(battle._id.toJSON());
                    decrementProcessing(battle._id.toJSON()); //We do this so it works like everything else

                    if (processing[battle._id.toJSON()].finished) {
                        archive.append(JSON.stringify(battle), {name: path + '/' + battle._id.toJSON() + '.json'});
                        decrementFiles();
                    }
                }
            });
        };

        var getHeroPortrait = function(battle, hero, path) {
            incrementFiles();
            archive.append(request(hero.photo_url), {name: 'portraits/' + hero._id.toJSON() + '.png'});
            decrementFiles();
        };

        var getDirectives = function(battle, hero, path) {
            incrementProcessing(battle._id.toJSON());
            directivecollection.find({ $query:{'hero_id':hero._id.toString()}, $orderby: {'order': 1}}).toArray(function(err, items) {
                hero.directives = items;

                decrementProcessing(battle._id.toJSON());

                if (processing[battle._id.toJSON()].finished) {
                    archive.append(JSON.stringify(battle), {name: path + '/' + battle._id.toJSON() + '.json'});
                    decrementFiles();
                }
            });
        };

        var saveBundleToS3 = function() {
            var s3bucket = new AWS.S3({params: {Bucket: 'CommonwealthIndustries_Mothership/Bundles'}});
            s3bucket.createBucket(function(err) {
                if (err) { console.log("Error:", err); return; }
                else { console.log("Getting bundle id"); }
                bundleCollection.findOne({key: 'latestBundle'}, function(err, item) {
                    var newBundleKey = (item ? (parseInt(item.value) + 1).toString() : (1).toString());
                    var bucketdata = {
                        Key: newBundleKey + '.zip',
                        Body: fs.readFileSync(tmpFilePath),
                        ACL:'public-read'
                    };
                    s3bucket.putObject(bucketdata, function(err, resp) {
                        fs.unlink(tmpFilePath);
                        if (err) {
                            console.log("Error uploading data: ", err);
                            res.send(err);
                        }
                        else {
                            if (item) {
                                item.value = newBundleKey;
                                bundleCollection.update({'key': 'latestBundle'}, item, function(err) {
                                    if (!err) {
                                        res.send("Success!");
                                    }
                                    else {
                                        res.error("Failure");
                                    }
                                });
                            }
                            else {
                                item = {
                                    key: 'latestBundle',
                                    value: '1'
                                };

                                bundleCollection.insert(item, function(err) {
                                    if (!err) {
                                        res.send("Success!");
                                    }
                                    else {
                                        res.error("Failure");
                                    }
                                });
                            }
                        }
                    });
                });
            });
        };

        var finished = function() {
            console.log("!!! Finishing Bundle !!!");
            archive.finalize();
        };

        getUpgrades();
    });
};