/**
 * Created by mdaly on 6/25/14.
 */

Ext.require('MothershipEditor.view.upgradelist.UpgradeListDataItem');

Ext.define('MothershipEditor.view.upgradelist.UpgradeListCard', {
    extend: 'MothershipEditor.view.BaseCard',
    alias: 'widget.upgradelistcard',
    controller: 'UpgradesController',
    config: {
        layout: {
            type: 'vbox'
        },
        height: '100%',
        items: [
            {
                width: '100%',
                xtype: 'segmentedbutton',
                docked: 'top',
                pressedButtons: [0],
                items: [
                    {
                        itemId: 'minion',
                        text: 'Minion',
                        flex: 1
                    },
                    {
                        itemId: 'mothership',
                        text: 'Mothership',
                        flex: 1
                    }
                ]
            },
            {
                xtype: 'list',
                itemId: 'upgrades_list',
                useComponents: true,
                useSimpleItems: false,
                scrollToTopOnRefresh: false,
                refreshHeightOnUpdate: false,
                disableSelection: true,
                infinite: true,
                defaultType: 'upgradelistdataitem',
                flex: 1,
                width: '100%'
            },
            {
                xtype: 'button',
                text: 'Save',
                cls: 'ms-add-button',
                height: '3em',
                action: 'save',
                docked: 'bottom'
            }
        ]
    }
});