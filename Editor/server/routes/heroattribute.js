/*
 * Copyright 2013 SirsiDynix.  All rights reserved.
 */
exports.findAllForHeroType = function(req, res) {
	mongo_connect(function(db) {
		var id = req.query["hero_type_id"];
		db.collection('hero_attribute_type', function(err, collection) {
            if (id == "MIXED") {
                collection.find().toArray(function(err, items) {
                    res.send(items);
                });
            }
            else {
                collection.find({"$or": [{hero_type_id: id}, {hero_type_id: "ALL"}]}).toArray(function(err, items) {
                    res.send(items);
                });
            }
		});
	});
};