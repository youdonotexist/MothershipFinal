/**
 * Created by mdaly on 6/25/14.
 */

Ext.require([
    'MothershipEditor.controller.BaseController',
    'MothershipEditor.view.springboard.SpringboardCard',
    'MothershipEditor.view.upgradelist.UpgradeListCard'
]);

Ext.define('MothershipEditor.controller.SpringboardController', {
    extend: 'MothershipEditor.controller.BaseController',
    config: {
        control: {
            'springboardcard button[action=minion_editor]': {
                tap: 'onEditMinions'
            },

            'springboardcard button[action=battle_editor]': {
                tap: 'onEditBattles'
            },

            'button[action=bundlify]' : {
                tap: 'onBundleify'
            }
        }
    },

    onCardWillAppear: function(card, created) {
        var me = this;
        me.callParent(arguments);

        var rightButtons = this.getRightButtons();

        rightButtons.add({
            xtype: 'button',
            text: 'Bundlify!',
            action: 'bundlify'
        });

        rightButtons.add({
            xtype: 'button',
            text: 'Bundle: ?',
            action: 'noaction'
        });

        Ext.Ajax.request({
            url: '/latestBundle',
            method: 'GET',
            useDefaultXhrHeader:false,
            disableCaching: false,
            timeout:120000,
            success: function(bundleResp) {
                var responseObj = JSON.parse(bundleResp.responseText);
                me.getNavigation().down('button[action=noaction]').setText("Bundle: " + responseObj.value);
            }
        });
    },

    onEditMinions: function() {
        this.getNavigation().push(Ext.create('MothershipEditor.view.upgradelist.UpgradeListCard', {
            title: "Upgrades Editor"
        }));
    },

    onEditBattles: function() {
        this.getNavigation().push(Ext.create('MothershipEditor.view.home.HomeCard', {
            title: "Mothership Editor"
        }));
    },

    onBundleify: function(button) {
        Ext.Ajax.request({
            url: '/bundle',
            method: 'GET',
            useDefaultXhrHeader:false,
            disableCaching: false,
            timeout:120000,
            success: function(response) {
                var result = response.responseText;
                if (result == "Success!") {
                    Ext.Ajax.request({
                        url: '/latestBundle',
                        method: 'GET',
                        useDefaultXhrHeader:false,
                        disableCaching: false,
                        timeout:120000,
                        success: function(bundleResp) {
                            var responseObj = JSON.parse(bundleResp.responseText);
                            Ext.Msg.alert('Success!', "New Bundle Id:" + responseObj.value, function (btn) {

                            });
                        }
                    })
                }
            },
            failure: function(response) {
                Ext.Msg.alert('Failure!', "Someting bad happen.", function (btn) {

                });
            }
        });
    }


});