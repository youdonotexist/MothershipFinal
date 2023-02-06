/*
 * Copyright 2013 SirsiDynix.  All rights reserved.
 */
Ext.require([
	'Ext.ux.field.FullScreenTextArea'
]);

Ext.define('MothershipEditor.view.battle.BackstoryCard', {
    extend: 'MothershipEditor.view.BaseCard',
    xtype: 'backstorycard',
    controller: 'BackstoryController',
    config: {
        scrollable: false,
        items: [
            {
                html: 'Battle Backstory',
                cls: 'hero-heading',
                padding: '5px'
            },
            {
                xtype: 'fullscreentextarea',
                placeHolder: 'Battle backstory goes here..',
                flex: 1,
                scrollable: null,
                maxRows: 1000
            },
            {
                xtype: 'button',
                text: 'Save',
                cls: 'ms-add-button',
                height: '3em',
                action: 'save_backstory',
                docked: 'bottom'
            }
        ]
    }
});