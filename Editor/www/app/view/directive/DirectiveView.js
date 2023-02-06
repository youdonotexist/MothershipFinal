/*
 * Copyright 2013 SirsiDynix.  All rights reserved.
 */
Ext.define('MothershipEditor.view.directive.DirectiveView', {
    extend: 'Ext.Container',
    config: {
        items: [
            {
                xtype: 'carousel'
            },
            {
                xtype: 'slider',
                label: 'Wait After'
            }
        ]
    },

    setDirectiveTypes: function (records) {

    }
});