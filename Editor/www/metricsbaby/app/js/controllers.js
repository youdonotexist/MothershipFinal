'use strict';

/* Controllers */

angular.module('myApp.controllers', []).
  controller('MyCtrl1', ['$scope', 'Metrics', function($scope, Metrics) {
        $scope.values = Metrics.query();

        $scope.values.$promise.then(function(thing){
            function unique(arr) {
                var hash = {}, result = [];
                for ( var i = 0, l = arr.length; i < l; ++i ) {
                    if ( !hash.hasOwnProperty(arr[i]) ) { //it works with objects! in FF, at least
                        hash[ arr[i] ] = true;
                        result.push(arr[i]);
                    }
                }
                return result;
            }

            //Set up who died
            var columns = ['BASIC', 'JUGGERNAUT', 'SCIENTIST'];
            var buildCol = [
                {
                "id": "basic_hero",
                "label": "BASIC",
                "type": "string",
                "p": {}
                }
            ]



            $scope.diedOnHeroChart = {
                "type": "ColumnChart",
                "displayed": true,
                "cssStyle": "height:600px; width:100%;",
                "data": {
                    "cols": [
                        {
                            "id": "name",
                            "label": "Hero Name",
                            "type": "string",
                            "p": {}
                        }
                    ],
                    "rows": []
                },
                "options": {
                    "title": "Sales per month",
                    "isStacked": "true",
                    "fill": 20,
                    "displayExactValues": true,
                    "vAxis": {
                        "title": "Sales unit",
                        "gridlines": {
                            "count": 10
                        }
                    },
                    "hAxis": {
                        "title": "Date"
                    }
                },
                "formatters": {}

            }
        })



        $scope.chart = {
            "type": "AreaChart",
            "displayed": true,
            "cssStyle": "height:600px; width:100%;",
            "data": {
                "cols": [
                    {
                        "id": "month",
                        "label": "Month",
                        "type": "string",
                        "p": {}
                    },
                    {
                        "id": "laptop-id",
                        "label": "Laptop",
                        "type": "number",
                        "p": {}
                    },
                    {
                        "id": "desktop-id",
                        "label": "Desktop",
                        "type": "number",
                        "p": {}
                    },
                    {
                        "id": "server-id",
                        "label": "Server",
                        "type": "number",
                        "p": {}
                    },
                    {
                        "id": "cost-id",
                        "label": "Shipping",
                        "type": "number"
                    }
                ],
                "rows": [
                    {
                        "c": [
                            {
                                "v": "January"
                            },
                            {
                                "v": 19,
                                "f": "42 items"
                            },
                            {
                                "v": 12,
                                "f": "Ony 12 items"
                            },
                            {
                                "v": 7,
                                "f": "7 servers"
                            },
                            {
                                "v": 4
                            }
                        ]
                    },
                    {
                        "c": [
                            {
                                "v": "February"
                            },
                            {
                                "v": 13
                            },
                            {
                                "v": 1,
                                "f": "1 unit (Out of stock this month)"
                            },
                            {
                                "v": 12
                            },
                            {
                                "v": 2
                            }
                        ]
                    },
                    {
                        "c": [
                            {
                                "v": "March"
                            },
                            {
                                "v": 24
                            },
                            {
                                "v": 5
                            },
                            {
                                "v": 11
                            },
                            {
                                "v": 6
                            }
                        ]
                    }
                ]
            },
            "options": {
                "title": "Sales per month",
                "isStacked": "true",
                "fill": 20,
                "displayExactValues": true,
                "vAxis": {
                    "title": "Sales unit",
                    "gridlines": {
                        "count": 10
                    }
                },
                "hAxis": {
                    "title": "Date"
                }
            },
            "formatters": {}
        }
  }])
  .controller('MyCtrl2', [function() {

  }]);