'use strict';

/* Services */


// Demonstrate how to register services
// In this case it is a simple value service.
var services = angular.module('myApp.services', ['ngResource']).
  value('version', '0.1');


services.factory('Metrics', ['$resource',
    function($resource){
        return $resource('../metrics', {}, {
            query: {method:'GET', params:{}, isArray:false}
        });
    }]);