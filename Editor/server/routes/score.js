/*
 * Copyright 2013 SirsiDynix.  All rights reserved.
 */


exports.getScore = function(req, res) {
	mongo_connect(function(db) {
		var battleId = req.params.encounterId;
		db.collection('score', function(err, scoreCollection) {
			scoreCollection.find({'encounterId': battleId}).toArray(function(err, scoreList) {
				res.send(scoreList);
			})
		});
	});
};

exports.addScore = function(req, res) {
	mongo_connect(function(db) {
		var data = req.body;
		db.collection('score', function(err, scoreCollection) {
			data.encounterId = req.params.encounterId;
			scoreCollection.insert(data, {safe:true}, function (err, result) {
				if (!err) {
					scoreCollection.find({'encounterId': data.encounterId, 'score':{$lt:data.score}}).toArray(function(err2, lowScoreList) {
						if (lowScoreList && lowScoreList.length == 0) {
							res.send({ status: 'new_low_score'});
						}
						else {
							res.send({ status: 'success'});
						}
					});
				}
				else {
					res.send({ status: 'failure'});
				}
			})
		});
	});
};