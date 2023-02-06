/*
 * Copyright 2013 SirsiDynix.  All rights reserved.
 */
Ext.define('MothershipEditor.controller.DirectiveController', {
    extend: 'MothershipEditor.controller.BaseController',

    config: {
        control: {
            'directivecard button[action=save_directive]': {
                tap: 'onSaveDirective'
            },
            'directivecard spinnerfield': {
                change: 'onWaitChange'
            },

            'directivecard carousel': {
                activeitemchange: 'onDirectiveTypeChange'
            }
        }
    },

    onCardWillAppear: function (card, created) {
        this.callParent(arguments);
        if (created) {
            var spinner = card.down('spinnerfield'),
                directiveSel = card.down('carousel');
            spinner.setValue(MothershipEditor.CurrentDirective.get('waitAfter'));

            //Set Directive Dropdown store
            var store = Ext.create('Ext.data.Store', {
                model: 'MothershipEditor.model.DirectiveType',
                storeId: 'directive_type',
                proxy: {
                    type: 'rest',
                    url: '/directivetype?hero_type_id=' + MothershipEditor.CurrentHero.get('hero_type_id')
                },
                autoLoad: true
            });

            card.setRecord(MothershipEditor.CurrentDirective);

            store.load(function (records) {
                spinner.records = records;
                var action = MothershipEditor.CurrentDirective.get('action'),
                    setIndex = 0;
                for (var i = 0; i < records.length; i++) {
                    var dirType = records[i];
                    var item = Ext.create('Ext.Container', {
                        layout: 'vbox',
                        align: 'stretch',
                        style: 'text-align:center;',
                        items: [
                            {
                                xtype: 'label',
                                html: dirType.get('action'),
                                flex: 1,
                                style: 'color: black;'
                            }
                        ]
                    });

                    item.action = dirType.get('action');
                    directiveSel.add(item);

                    if (dirType.get('action') == action) {
                        setIndex = i;
                    }
                }

                directiveSel.setActiveItem(setIndex);
            });
        }
    },

    onDirectiveTypeChange: function ( carousel, value, oldValue, eOpts ) {
        if (MothershipEditor.CurrentDirective) {
            MothershipEditor.CurrentDirective.set('action', value.action);
        }
    },

    onWaitChange: function (spinner, value, direction, eOpts) {
        if (MothershipEditor.CurrentDirective) {
            MothershipEditor.CurrentDirective.set('waitAfter', value);
        }
    },

    onSaveDirective: function () {
        if (MothershipEditor.CurrentDirective) {
            MothershipEditor.CurrentDirective.save();
        }
    }
});