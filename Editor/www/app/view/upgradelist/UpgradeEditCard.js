/**
 * Created by mdaly on 6/26/14.
 */
Ext.define('MothershipEditor.view.upgradelist.UpgradeEditCard', {
    extend: 'MothershipEditor.view.BaseCard',
    alias: 'widget.upgradeeditcard',
    controller: 'UpgradesController',
    config: {
        layout: {
            type: 'vbox'
        },
        height: '100%',
        items: [
            {
                xtype: 'button',
                text: 'Save',
                cls: 'ms-add-button',
                height: '3em',
                action: 'save',
                docked: 'bottom'
            }
        ]
    },

    constructor: function(config) {
        var me = this;
        me.callParent(arguments);

        var record = me.getRecord(),
            levels = record.levels();

        me.removeAll();

        for (var i = 0; i < levels.getAllCount(); i++) {
            var view = Ext.create('MothershipEditor.view.upgradelist.UpgradeEditorView', {
                record: levels.getAt(i)
            });

            me.add(view);
        }
    }
});
