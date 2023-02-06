/**
 * Created by mdaly on 6/26/14.
 */
Ext.define('MothershipEditor.view.upgradelist.UpgradeEditorView', {
    extend: 'Ext.Container',
    config: {
        width: '100%',
        height: '15em',
        items: [
            {
                height: '10%',
                itemId: 'level_container',
                html: 'Level 1',
                style: 'background-color: black; color:white'

            },
            {
                layout: 'hbox',
                items: [
                    {
                        layout: 'vbox',
                        flex: 1,
                        items: [
                            {
                                xtype: 'textfield',
                                placeHolder: 'Name',
                                itemId: 'title'
                            },
                            {
                                xtype: 'fullscreentextarea',
                                placeHolder: 'Description goes here..',
                                flex: 1,
                                scrollable: null,
                                maxRows: 1000,
                                itemId: 'description'
                            }
                        ]
                    },
                    {
                        layout: 'vbox',
                        flex: 1,
                        items: [
                            {
                                xtype: 'textfield',
                                placeHolder: 'Cost',
                                label: 'C',
                                itemId: 'cost'
                            },
                            {
                                xtype: 'textfield',
                                placeHolder: 'Damage',
                                label: 'D',
                                itemId: 'damage'
                            },
                            {
                                xtype: 'textfield',
                                placeHolder: 'Life',
                                label: 'L',
                                itemId: 'life'
                            },
                            {
                                xtype: 'textfield',
                                placeHolder: 'Speed',
                                label: 'S',
                                itemId: 'speed'
                            },
                            {
                                xtype: 'textfield',
                                placeHolder: 'Reload',
                                label: 'R',
                                itemId: 'reload'
                            }
                        ]
                    }
                ]
            }
        ]
    },

    constructor: function(config) {
        var me = this;
        me.callParent(arguments);

        var fields = [
            me.down('#title'),
            me.down('#description'),
            me.down('#cost'),
            me.down('#damage'),
            me.down('#life'),
            me.down('#speed'),
            me.down('#reload')
        ],
            level = me.down('#level_container'),
            record = me.getRecord();

        for (var i = 0; i < fields.length; i++) {
            var field = fields[i];
            field.setValue(record.get(field.getItemId()));
            field.on('change', function(field, newValue) {
                record.set(field.getItemId(), newValue);
            });
        }

        level.setHtml('Level: ' + record.get('index'));
    }
 });