/**
 * Created by mdaly on 6/25/14.
 */
Ext.require([
    'MothershipEditor.model.Upgrade',
    'MothershipEditor.view.upgradelist.UpgradeEditCard'
]);

Ext.define('MothershipEditor.controller.UpgradesController', {
    extend: 'MothershipEditor.controller.BaseController',

    config: {
        refs: {
            upgradeList: 'upgradelistcard dataview'
        },
        control: {
            upgradeList: {
                itemtap: 'onUpgradeTap'
            },
            'upgradelistcard button[action=save]': {
                tap: 'onSave'
            },
            'upgradeeditcard button[action=save]': {
                tap: 'onSave'
            },
            'upgradelistcard segmentedbutton': {
                toggle: 'onChangeSegment'
            }
        }
    },

    onCardWillAppear: function(card, created) {
        var me = this;
        me.callParent(arguments);

        if (card.xtype == "upgradelistcard") {
            if (created) {
                var list = me.getUpgradeList();

                list.setStore({
                    model: 'MothershipEditor.model.Upgrade',
                    autoLoad: true,
                    storeName: 'minion_upgrade_store',
                    proxy: {
                        type: 'rest',
                        url: '/upgrades/minion',
                        reader: {
                            type: 'json'
                        }
                    }
                });
            }
        }
    },

    onUpgradeTap: function(list, index, target, record, e, eOpts) {
        var view = Ext.create ('MothershipEditor.view.upgradelist.UpgradeEditCard', {
            record: record
        });

        this.currentUpgrade = record;

        var navRoot = Ext.getCmp('navigation_root');
        navRoot.push(view);
    },

    onChangeSegment: function(segment, button, isPressed, eOpts) {
        var list = this.getUpgradeList(),
            buttonId = button.getItemId();

        if (isPressed) {
            list.setStore({
                model: 'MothershipEditor.model.Upgrade',
                autoLoad: true,
                storeName: 'minion_upgrade_store',
                proxy: {
                    type: 'rest',
                    url: '/upgrades/' + buttonId,
                    reader: {
                        type: 'json'
                    }
                }
            });
        }
    },

    onSave: function(button) {
        this.currentUpgrade.saveAssociations = true;
        this.currentUpgrade.save();
    }
});