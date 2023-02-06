/*
 * Copyright 2013 SirsiDynix.  All rights reserved.
 */
exports.findAll = function(req, res) {
	mongo_connect(function(db) {
		db.collection('herotype', function(err, collection) {
			collection.find().toArray(function(err, items) {
				res.send(items);
			});
		});
	});
};

exports.findById = function(req, res) {
	mongo_connect(function(db) {
		var id = req.params.id;
		db.collection('herotype', function(err, collection) {
			collection.findOne({'_id':new BSON.ObjectID(id)}, function(err, item) {
				res.send(item);
			});
		});
	});
};

/*exports.addHeroType = function(req, res) {
	var wine = req.body;
	db.collection('hero_type', function(err, collection) {
		collection.insert(wine, {safe:true}, function(err, result) {
			if (err) {
				res.send({'error':'An error has occurred'});
			} else {
				console.log('Success: ' + JSON.stringify(result[0]));
				res.send(result[0]);
			}
		});
	});
}*/