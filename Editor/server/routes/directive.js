/*
 * Copyright 2013 SirsiDynix.  All rights reserved.
 */
exports.findAllForHeroId = function(req, res) {

	mongo_connect(function(db) {
		var id = req.query["hero_id"];

        db.collection('directive', function(err, collection) {
            collection.find({'hero_id': id}).toArray(function(err, items) {
                res.send(items);
            });
        });
	});
};

exports.addDirective = function(req, res) {

	mongo_connect(function(db) {
		var newDirective = req.body;

		if (!newDirective.hero_id) {
			res.send({'error':'Missing Hero Identifier'});
			return;
		}

		db.collection('directive', function(err, collection) {
			collection.save(newDirective, {safe:true}, function(err, resultOrCount) {
				if (err) {
					res.send({'error':'An error has occurred'});
				} else {
					console.log('Success count: ' + JSON.stringify(resultOrCount));
					res.send(resultOrCount);
				}
			});
		});
	});
};

exports.updateDirective = function(req, res) {
	mongo_connect(function(db) {
		var newDirective = req.body;
		var id = req.params.id;

		db.collection('directive', function(err, collection) {
			collection.update({'_id': new BSON.ObjectID(id)}, newDirective, function(err) {
				newDirective._id = id;
				res.send(newDirective);
			});
		});
	});
};

exports.deleteDirective = function(req, res) {
	mongo_connect(function(db) {
	var id = req.params.id;
		db.collection('directive', function(err, collection) {
			collection.remove({'_id':new BSON.ObjectID(id)}, {safe:true}, function(err, result) {
				if (err) {
					res.send({'error':'An error has occurred - ' + err});
				} else {
					console.log('' + result + ' document(s) deleted');
					res.send();
				}
			});
		});
	});
};