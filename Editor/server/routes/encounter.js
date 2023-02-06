/*
 * Copyright 2013 SirsiDynix.  All rights reserved.
 */
exports.getEncounters = function(req, res) {
	mongo_connect(function(db) {
		db.collection('herolist', function(err, herolistcollection) {
			var url_parts = url.parse(req.url, true);
			var query = url_parts.query;
			var story = query.story;
			console.log("story is: " + story);
			if (story) {
				herolistcollection.find({$query: {'story':true}, $orderby: {index:1}}).toArray(function(err, items) {
					res.send(items);
				});
			}
			else {
				herolistcollection.find( { $or: [{story: {$exists: false}}, {story: null}, {story: false}] }).toArray(function(err, items) {
					res.send(items);
				});
			}
		});
	});
};

exports.getEncounterById = function(req, res) {
	mongo_connect(function(db) {
		var id = req.params.id;
		if (id) {
			var herolist_collection = db.collection('herolist');
			var cursor = herolist_collection.findOne({'_id': new BSON.ObjectID(id)}, function(err, herolist) {
				var hero_collection = db.collection('hero');
				var heroes = hero_collection.find({$query: {'hero_list_id':herolist._id.toString()}, $orderby: {order:1}}).toArray(function(err, heroes) {
					herolist.heroes = heroes;

					var heroIds = [];
					var heroMap = [];

					for (var i = 0; i < heroes.length; i++) {
						var hero = heroes[i];
						heroIds.push(hero._id.toString());
						heroMap[hero._id.toString()] = hero;
						hero.directives = [];

					}

					var dir_collection = db.collection('directive');

					dir_collection.find({'hero_id': {$in: heroIds}}).toArray(function(err, directives) {
						for (var i = 0; i < directives.length; i++) {
							var directive = directives[i];
							var hero = heroMap[directive.hero_id];
							hero.directives.push(directive);
						}

						res.send(herolist);
					});
				});
			});
		}
	});
};