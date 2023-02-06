/*
 * Copyright 2013 SirsiDynix.  All rights reserved.
 */
Ext.require([
    'Ext.ux.field.FullScreenTextArea'
]);

Ext.define('MothershipEditor.view.battle.StoryCard', {
    extend: 'MothershipEditor.view.BaseCard',
    xtype: 'storycard',
    controller: 'StoryController',
    config: {
        scrollable: false,
        items: [
            {
                html: 'Hero One-Liner',
                cls: 'hero-heading',
                padding: '5px'
            },
            {
                xtype: 'selectfield',
                cls: 'bm-library-dropdown',
                label: 'Leader',
                autoSelect: true
            },
            {
                html: 'Hero One-Liner',
                cls: 'hero-heading',
                height: '1px'
            },
            {
                xtype: 'fullscreentextarea',
                itemId: 'storyliner',
                placeHolder: 'Hero One-Liner goes here..',
                flex: 1,
                scrollable: null,
                maxRows: 1000
            },
            {
                xtype: 'button',
                text: 'Save',
                cls: 'ms-add-button',
                height: '3em',
                action: 'save_story',
                docked: 'bottom'
            }
        ]
    }
});