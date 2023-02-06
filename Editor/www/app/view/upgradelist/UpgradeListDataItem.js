/**
 * Created by mdaly on 6/26/14.
 */
Ext.define('MothershipEditor.view.upgradelist.UpgradeListDataItem', {
    extend: 'Ext.dataview.component.ListItem',
    requires: ['Ext.Button', 'Ext.field.Select'],
    alias: 'widget.upgradelistdataitem',

    config: {
        itemCls: 'kitten-list-item-inner',
        cls: 'kitten-list-item',
        padding: '0em 0em 0em 0.5em',
        dataMap: {
            doBuild: ''
        },
        layout: {
            type: 'hbox',
            align: 'center'
        },
        items: [
            {
                xtype: 'img',
                width: '2em',
                height: '2em',
                margin: '0em 0.5em 0em 0em'
            },
            {
                xtype: 'label',
                flex: 10,
                itemId: 'name'
            }
        ]
    },

    doBuild: function () {
        var me = this;
        me.label = me.label || me.down('#name');
        me.image = me.image || me.down('img');
        me.cost = me.cost || me.down('#cost');
    },

    updateRecord: function (record) {
        if (!record) return;
        this.callParent(arguments);

        var me = this,
            dataview = me.up('list');


        me.label.setHtml(record.get('type'));
        //me.image.setSrc(MothershipEditor.util.Utilities.imageForHeroType(record.get('hero_type_id')));
    }
});