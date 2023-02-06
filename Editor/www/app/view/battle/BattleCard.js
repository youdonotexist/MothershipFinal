/*
 * Copyright 2013 SirsiDynix.  All rights reserved.
 */
Ext.define('MothershipEditor.view.battle.BattleCard', {
    extend: 'MothershipEditor.view.BaseCard',
    controller: 'BattleController',
    xtype: 'battlecard',
    config: {
        style: 'background-color: lightgrey',
        items: [
            {
                xtype: 'img',
                height: '40%',
                mode: 'image',
                src: 'resources/images/hero1.png'
            },
            {
                xtype: 'textfield',
                placeHolder: 'Battle Name',
                style: 'border-top: 0.1em solid black; border-bottom: 0.1em solid black;'
            },
            {
                xtype: 'button',
                width: '100%',
                text: 'Battle Backstory',
                cls: 'ms-row-button',
                height: '2.5em',
                action: 'edit_backstory'
            },
            {
                xtype: 'button',
                width: '100%',
                text: 'Hero One-Liner',
                cls: 'ms-row-button',
                height: '2.5em',
                action: 'edit_story'
            },
            {
                xtype: 'button',
                width: '100%',
                text: 'Battle Heroes',
                cls: 'ms-row-button',
                action: 'edit_heroes',
                height: '2.5em'
            },
            {
                xtype: 'button',
                width: '100%',
                text: 'Delete',
                cls: 'ms-destroy-button',
                action: 'delete_battle',
                height: '2.5em'
            },
            {
                xtype: 'button',
                width: '100%',
                text: 'Save',
                cls: 'ms-add-button',
                action: 'save_battle',
                height: '2.5em',
                docked: 'bottom'
            }


        ]
    }
});