/*
 * Copyright 2013 SirsiDynix.  All rights reserved.
 */
Ext.define('MothershipEditor.controller.StoryController', {
    extend: 'MothershipEditor.controller.BaseController',

    config: {
        control: {
            'storycard #storyliner': {
                change: 'onStoryChange',
                keyup: 'onStoryChange'
            },
            'storycard #storyteller': {
                change: 'onTellerChange',
                keyup: 'onTellerChange'
            },
            'storycard button[action=save_story]': {
                tap: 'onSave'
            },
            'storycard selectfield': {
                change: 'onTellerChange'
            }
        }
    },

    onCardWillAppear: function (card, created) {
        var textarea = card.down('#storyliner'),
            select = card.down('selectfield');
        textarea.setValue(MothershipEditor.CurrentBattle.get('storyLine'));
        select.setDisplayField('name');
        select.setValueField('id');
        select.setStore({
            model: 'MothershipEditor.model.Hero',
            storeId: 'hero_type',
            autoLoad: true,
            proxy: {
                type: 'rest',
                url: '/herolist/'+MothershipEditor.CurrentBattle.getId(),
                reader: {
                    type: 'json',
                    rootProperty: 'heroes'
                }
            }
        });
    },

    onStoryChange: function (textarea) {
        MothershipEditor.CurrentBattle.set('storyLine', textarea.getValue());
    },

    onTellerChange: function (select, newValue, oldValue) {
        var displayField = select.getDisplayField();
        if (!oldValue) {
            var currentStoryTeller = MothershipEditor.CurrentBattle.get('storyTellerId');
            if (!currentStoryTeller) {
                currentStoryTeller = select.getStore().getAt(0).get('id');
            }
            select.setValue(currentStoryTeller);
        }

        var store = select.getStore(),
            idx = store.findExact(select.getValueField(), select.getValue()),
            record = select.getRecord();

        if (!record) {
            record = store.getAt(0);
            select.setRecord(record);
        }

        MothershipEditor.CurrentBattle.set('storyTeller', record.get(displayField));
        MothershipEditor.CurrentBattle.set('storyTellerId', select.getValue());
        MothershipEditor.CurrentBattle.set('storyTellerIndex', idx);
    },

    onSave: function () {
        MothershipEditor.CurrentBattle.save();
    }
});