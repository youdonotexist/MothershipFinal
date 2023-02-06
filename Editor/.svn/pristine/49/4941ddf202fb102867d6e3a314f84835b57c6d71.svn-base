/*
 * Copyright 2013 SirsiDynix.  All rights reserved.
 */
Ext.define('MothershipEditor.controller.BackstoryController', {
    extend: 'MothershipEditor.controller.BaseController',

    config: {
        control: {
            'backstorycard textareafield': {
                change: 'onStoryChange',
                keyup: 'onStoryChange'
            },
            'backstorycard button[action=save_backstory]': {
                tap: 'onSave'
            }
        }
    },

    onCardWillAppear: function (card, created) {
        var textarea = card.down('textareafield');
        textarea.setValue(MothershipEditor.CurrentBattle.get('backstory'));
    },

    onStoryChange: function (textarea) {
        MothershipEditor.CurrentBattle.set('backstory', textarea.getValue());
    },

    onSave: function () {
        MothershipEditor.CurrentBattle.save();
    }
});