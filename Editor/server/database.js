/*
 * Copyright 2013 SirsiDynix.  All rights reserved.
 */
MONGO = require('mongodb').MongoClient;
BSON = require('bson').BSONPure;

var mongo = require('./config');

var generate_mongo_url = function(obj){
	obj.hostname = (obj.hostname || 'localhost');
	obj.port = (obj.port || 27017);
	obj.db = (obj.db || 'test');
	if(obj.username && obj.password){
		return "mongodb://" + obj.username + ":" + encodeURIComponent(obj.password) + "@" + obj.hostname + ":" + obj.port + "/" + obj.db + "?autoReconnect=true";
	}
	else{
		return "mongodb://" + obj.hostname + ":" + obj.port + "/" + obj.db + "?authSource=" + obj.db + "&autoReconnect=true";
	}
};

mongourl = generate_mongo_url(mongo);
connection = null;

mongo_connect = function(callback) {

    if (connection) {
        callback(connection);
        return;
    }

	MONGO.connect(mongourl, function(err, conn){
		if (conn && !err) {
            connection = conn;
			callback(conn);
            console.log("Connected to mongo instance");
		}
		else {
			console.log("Couldn't connect to DB: ");
			console.log(err);
		}

	});
}





