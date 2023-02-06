/*
 * Copyright 2013 SirsiDynix.  All rights reserved.
 */
exports.findAll = function(req, res) {
	mongo_connect(function(db) {
		db.collection('herolist', function(err, collection) {
			collection.find().toArray(function(err, items) {
				res.send(items);
			});
		});
	});
};

exports.findById = function(req, res) {
	mongo_connect(function(db) {
		var id = req.params.id;
		db.collection('herolist', function(err, collection) {
			collection.findOne({'_id':new BSON.ObjectID(id)}, function(err, item) {

				db.collection('hero', function(err, collection) {
					collection.find({$query: {'hero_list_id':id}, $orderby: {order:1}}).toArray(function(err, items) {
						if (item) {
							item.heroes = items;
							res.send(item);
						}
					});
				});
			});
		});
	});
};

exports.addHeroList = function(req, res) {
	mongo_connect(function(db) {
		var herolist = req.body;
		db.collection('herolist', function(err, collection) {
			collection.insert(herolist, {safe:true}, function(err, result) {
				if (err) {
					res.send({'error':'An error has occurred'});
				} else {
					console.log('Success: ' + JSON.stringify(result[0]));
					res.send(result[0]);
				}
			});
		});
	});
};

exports.exportHeroList = function(req, res) {
    mongo_connect(function(db) {
        var id = req.params.id,
            newList = null,
            remainingOperations = 0,
            herolistcollection = db.collection('herolist'),
            herocollection = db.collection('hero'),
            directivecollection = db.collection('directive');

        var getHeroListFunc = function() {
            herolistcollection.findOne({'_id':new BSON.ObjectID(id)}, function(err, oldList) {
                createNewHeroListFunc(oldList);
            });
        }

        var createNewHeroListFunc = function(oldList) {
            //Make a new Battle
            delete oldList._id;
            oldList.story = false;
            oldList.name += "(copy)"
            herolistcollection.insert(oldList, {safe:true}, function(err, nl) {
                getHeroesFunc(nl[0]._id.toJSON());
            })
        }

        var getHeroesFunc = function(tempNewList) {
            newList = tempNewList;
            herocollection.find({$query: {'hero_list_id':id}, $orderby: {order:1}}).toArray(function(err, oldHeroes) {
                if (oldHeroes) {
                    copyHeroesFunc(oldHeroes);
                }
                else {
                    console.log("heroes not here");
                }
            });
        };

        var copyHeroesFunc = function (oldHeroes) {
            for (var i = 0; i < oldHeroes.length; i++) {
                var oldHero = oldHeroes[i];
                var oid = oldHero._id.toJSON();
                delete oldHero._id;
                oldHero.hero_list_id = newList;
                oldHero.name += "(copy)";


                herocollection.insert(oldHero, {safe:true}, function(err, newHero) {
                    copyDirectivesFunc(oid, newHero[0]._id.toJSON());
                });
            }
        }

        var copyDirectivesFunc = function(oldHeroId, newHeroId) {
            directivecollection.find({'hero_id': oldHeroId}).toArray(function(err, oldDirectives) {
                remainingOperations += oldDirectives.length;
                for (var i = 0; i < oldDirectives.length; i++) {
                    var oldDirective = oldDirectives[i];
                    delete oldDirective._id;
                    oldDirective.hero_id = newHeroId;
                    directivecollection.insert(oldDirective, {safe: true}, function(err, newDirective) {
                        if (decrementOperations() == 0) {
                            res.send("SUCCESS!");
                        }
                    })
                }
            });
        }

        var incrementOperations = function() {return ++remainingOperations;}
        var decrementOperations = function() {return --remainingOperations;}

        getHeroListFunc();

    });
};

exports.updateHeroList = function(req, res) {
	mongo_connect(function(db) {
		var id = req.params.id;
		var herolist = req.body;
		var herolistcollection = db.collection('herolist');

		herolistcollection.update({'_id': new BSON.ObjectID(id)}, herolist, function(err) {
			res.send(herolist);
		});
	});
};

exports.deleteHeroList = function(req, res) {
	mongo_connect(function(db) {
		var id = req.params.id;

		db.collection('herolist', function(err, collection) {
			collection.remove({'_id':new BSON.ObjectID(id)}, {safe:true}, function(err, result) {
				if (err) {
					res.send({'error':'An error has occurred - ' + err});
				} else {
					console.log('' + result + ' document(s) deleted');
					res.send(req.body);
				}
			});
		});
	});
};