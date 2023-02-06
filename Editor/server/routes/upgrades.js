/**
 * Created by mdaly on 6/25/14.
 */
exports.getUpgradesForType = function(req, res) {
    mongo_connect(function(db) {
        var type = req.params.type;
        db.collection('upgrade_type', function(err, upgradescollection) {
            upgradescollection.find({$query: {'component':type}, $orderby: {index:1}}).toArray(function(err, items) {
                res.send(items);
            });
        });
    });
}

exports.putUpgradeType = function(req, res) {
    mongo_connect(function(db) {
        var id = req.params.id,
            body = req.body;
        db.collection('upgrade_type', function(err, upgradescollection) {
            upgradescollection.update({'_id': new BSON.ObjectID(id)}, body, function(err) {
                body._id = id;
                res.send(body);
            });
        });
    });
}