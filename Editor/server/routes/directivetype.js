/*
 * Copyright 2013 SirsiDynix.  All rights reserved.
 */
exports.getAllByHeroType = function(req, res) {
	mongo_connect(function(db) {
		var id = req.query["hero_type_id"];

        if (id == "MIXED") {
            db.collection('directivetype', function(err, collection) {
                collection.find().toArray(function(err, items) {
                    res.send(items);
                });
            });
        }
        else {
            db.collection('directivetype', function(err, collection) {
                collection.find({'hero_type_id':id}).toArray(function(err, items) {
                    res.send(items);
                });
            });
        }
	});
};