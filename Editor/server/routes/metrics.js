/**
 * Created by youdonotexist on 12/11/13.
 */

//EncounterMetric
    //timestamp
    //battle name
    //hero
    //damage taken
    //death
    //type (encounter)

exports.addMetrics = function(req, res) {
    mongo_connect(function(db) {
        var metric = req.body;

        var metricCollection = db.collection('metrics');


        metricCollection.insert(metric, {safe:true}, function(err, result) {
            if (err) {
                res.send({'error':'An error has occurred'});
            } else {
                res.send(result[0]);
            }
        });
    });
};

exports.getMetrics = function(req, res) {
    var status = {
        totalMetrics: 0,
        finishedMetrics: 0
    };

    var heroGroups = [];

    res.cb = function() {

        //Result structure
        //type
        //died hero
        //total duration
        //longest battle
        //most damage

        if (++status.finishedMetrics >= status.totalMetrics) {

            var url_parts = url.parse(req.url, true);
            var query = url_parts.query;
            var verbose = query.verbose;

            if (verbose) res.send(heroGroups);

            var response = [];
            for (var i = 0; i < heroGroups.length; i++) {
                var group = heroGroups[i],
                    type = "",
                    heroDead = null,// "In Progress or Quit",
                    totalDuration = 0,
                    tempLongestBattle = 0,
                    longestbattle = "",
                    mostDamage = "",
                    tempMostDamage = 0,
                    winning = false;

                for (var j = 0; j < group.length; j++) {
                    var hero = group[j];
                    if (hero && hero.battle_type) {

                        type = hero.battle_type ? hero.battle_type : "unknown";

                        if (hero.death) {
                            heroDead = hero.hero_name;
                        }

                        if (hero.winning) {
                            heroDead = "Player Won";
                        }

                        totalDuration += hero.battle_length;
                        if (hero.battle_length > tempLongestBattle) {
                            tempLongestBattle = hero.battle_length;
                            longestbattle = hero.hero_name + " | " + tempLongestBattle;
                        }

                        if (hero.damage_taken > tempMostDamage) {
                            tempMostDamage = hero.damage_taken;
                            mostDamage = hero.hero_name + " | " + hero.damage_taken;
                        }
                    }
                }

                if (heroDead) {
                    response.push({
                        type: type,
                        heroDead: heroDead,
                        totalDuration: totalDuration,
                        longestBattle: longestbattle,
                        mostDamage: mostDamage,
                        winning: winning
                    });
                }
            }

            var groupedByType = {}

            for (var i = 0; i < response.length; i++) {
                var info = response[i],
                    type = info.type;

                if (!groupedByType[type]) {
                    groupedByType[type] = {
                        heroDead: [],
                        totalDuration: [],
                        longestBattle: [],
                        mostDamage: []
                    }
                }

                groupedByType[type].heroDead.push(info.heroDead);
                groupedByType[type].totalDuration.push(info.totalDuration);
                groupedByType[type].longestBattle.push(info.longestBattle);
                groupedByType[type].mostDamage.push(info.mostDamage);
            }

            for (var key in groupedByType) {
                var value = groupedByType[key];
                value.heroDead.sort();
                value.totalDuration.sort();
                value.longestBattle.sort();
                value.mostDamage.sort();
            }

            res.send(groupedByType);
        }
    };

    mongo_connect(function(db) {
        var metricCollection = db.collection('metrics');
        metricCollection.distinct("timestamp", [], [], function(err, uniques) {
            if (!err) {
                status.totalMetrics = uniques.length;

                for (var i = 0; i < uniques.length; i++) {
                    var u = uniques[i];
                    metricCollection.find({"timestamp": u}).toArray(function (err, items) {
                        if (items) {
                            heroGroups.push(items);
                            res.cb();
                        }
                    });
                }
            }
            else {
                console.log(err);
                res.send(500);
            }
        });




        //Get the unique timestamps
        //Get the heroes for each
            //Set the


    });
}