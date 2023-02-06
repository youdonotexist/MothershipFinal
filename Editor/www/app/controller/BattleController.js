/*
 * Copyright 2013 SirsiDynix.  All rights reserved.
 */
Ext.require([
	'MothershipEditor.view.battle.BackstoryCard',
    'MothershipEditor.view.battle.StoryCard'
]);
Ext.define('MothershipEditor.controller.BattleController', {
    extend: 'MothershipEditor.controller.BaseController',
    config: {
        refs: {
            card: 'battlecard'
        },
        control: {
            'battlecard button[action=edit_story]': {
                tap: 'onEditStoryButton'
            },
            'battlecard button[action=edit_backstory]': {
                tap: 'onEditBackstoryButton'
            },
            'battlecard button[action=edit_heroes]': {
                tap: 'onEditHeroesButton'
            },
            'battlecard button[action=save_battle]': {
                tap: 'onBattleSave'
            },
            'battlecard textfield': {
                change: 'onBattleNameChange',
                keyup: 'onBattleNameKeyUp'
            },
            'button[action=delete_battle]': {
                tap: 'onBattleDelete'
            },
            'button[action=arcadify]': {
                tap: 'onArcadifyButton'
            }
        }
    },

    onCardWillAppear: function (card, created) {
        this.callParent(arguments);
        var image = card.down('image'),
            textField = card.down('textfield');

        image.setSrc(MothershipEditor.util.Utilities.imageForHeroType(MothershipEditor.CurrentBattle.get('hero_type_id')));
        textField.setValue(MothershipEditor.CurrentBattle.get('name'));

        var rightButtons = this.getRightButtons();
        rightButtons.add({
            xtype: 'button',
            text: 'Arcadify!',
            action: 'arcadify'
        });
    },

    onArcadifyButton: function(button) {
        Ext.Ajax.request({
            url: '/herolist/export/' + MothershipEditor.CurrentBattle.getId(),
            method: 'GET',
            useDefaultXhrHeader:false,
            disableCaching: false,
            timeout:120000,
            success: function(response) {
                var result = response.responseText;
                if (result == "SUCCESS!") {
                    Ext.Msg.alert('Success!', "This battle has been exported to Arcade mode. Refresh page to see updates.", function (btn) {

                    });
                }
            },
            failure: function(response) {
                Ext.Msg.alert('Failure!', "Someting bad happen.", function (btn) {

                });
            }
        });
    },

    onBattleNameChange: function (textfield, newValue, oldValue) {
        MothershipEditor.CurrentBattle.set('name', newValue);
    },

    onBattleNameKeyUp: function (textfield) {
        MothershipEditor.CurrentBattle.set('name', textfield.getValue());
    },

    onEditBackstoryButton: function (button) {
        this.getNavigation().push(Ext.create('MothershipEditor.view.battle.BackstoryCard', {
            title: "Backstory"
        }));
    },

    onEditStoryButton: function (button) {
        this.getNavigation().push(Ext.create('MothershipEditor.view.battle.StoryCard', {
            title: "One-Liner"
        }));
    },

    onEditHeroesButton: function (button) {
        var card = this.getCard();
        this.getNavigation().push(Ext.create('MothershipEditor.view.herolist.HeroListCard', {
            title: "Edit Heroes"
        }));
    },

    onBattleSave: function (button) {
        MothershipEditor.CurrentBattle.save();
    },

    onBattleDelete: function (button, e) {
        var me = this,
            homeController = MothershipEditor.app.getController('HomeController'),
            dataview = homeController.getDataview();

        Ext.Msg.confirm('Delete?', "This can't be un-done (unless you're good friends with the dev)", function (btn) {
            if (btn == 'yes') {
                dataview.getStore().remove(MothershipEditor.CurrentBattle);
                dataview.getStore().sync();

                me.getNavigation().pop();
            }
        });

    }
});