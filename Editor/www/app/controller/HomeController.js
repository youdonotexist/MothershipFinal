/*
 * Copyright 2013 SirsiDynix.  All rights reserved.
 */
Ext.require([
	'MothershipEditor.view.herolist.HeroListCard',
	'MothershipEditor.controller.BaseController',
	'MothershipEditor.view.home.AddHeroListWorkflow',
	'MothershipEditor.view.battle.BattleCard'
]);

Ext.define('MothershipEditor.controller.HomeController', {
	extend: 'MothershipEditor.controller.BaseController',
	config: {
		refs: {
			view: 'homecard',
			dataview: 'homecard dataview',
			addBattleWorkflow: 'addherolistworkflow'
		},
		control: {
			'homecard dataview': {
				itemtap: 'onHeroListTap'
			},
			'button[action=add_hero_list]': {
				tap: 'onAddHeroList'
			},
			'button[action=add_battle_button]' : {
				tap: 'onAddHeroListConfirm'
			},
			'button[action=close_editor]' : {
				tap: 'onCloseEditor'
			}
		}
	},

	onCardWillAppear: function(card, created) {
        var me = this;
		me.callParent(arguments);

		var rightButtons = this.getRightButtons();
		rightButtons.add({
			    xtype: 'button',
			    text: '+',
			    action: 'add_hero_list'
		    });
	},

	onHeroListTap: function(list, index, target, record, e, eOpts) {
		/*var view = Ext.create ('MothershipEditor.view.herolist.HeroListCard', {
			heroListId: record.getId(),
			heroListType: record.get('hero_type_id'),
			title: 'Hero List: ' + record.get('name')
		});*/


		MothershipEditor.CurrentBattle = record;
		this.getNavigation().push(Ext.create ('MothershipEditor.view.battle.BattleCard', {
			title: record.get('name')
		}));
	},

	onAddHeroList: function(button) {
		var workflow = MothershipEditor.app.getController('WorkflowController');
		var addList = Ext.create('MothershipEditor.view.home.AddHeroListWorkflow');
		workflow.start(addList);
		addList.populateHeroTypes(this.heroTypes());
	},

	onAddHeroListConfirm: function() {
		var me = this;
		var addBattleWorkflow = me.getAddBattleWorkflow(),
			heroTypeField = addBattleWorkflow.down('carousel'),
			heroNameField = addBattleWorkflow.down('textfield'),
			heroNameList = me.getDataview(),
			selectedIndex = heroTypeField.getActiveIndex(),
			workflow = MothershipEditor.app.getController('WorkflowController');

		var herolist = Ext.create('MothershipEditor.model.HeroList', {
			name: heroNameField.getValue(),
			hero_type_id: me.heroTypes()[selectedIndex].type
		});

		heroNameList.getStore().add(herolist);
		heroNameList.getStore().sync();

		workflow.closeModal();


	},

	onCloseEditor: function() {
		window.location = "mothershipts://close_editor"
	},

	heroTypes: function() {
		var array = [];
		array.push({
			name: 'Basic',
			imageSrc: 'resources/images/hero1.png',
			type :'BASIC'
		});

		array.push({
			name: 'Juggernaut',
			imageSrc: 'resources/images/hero2.png',
			type :'JUGGERNAUT'
		});

		array.push({
			name: 'Scientist',
			imageSrc: 'resources/images/hero3.png',
			type :'SCIENTIST'
		});

		array.push({
			name: 'Mixed',
			type :'MIXED'
		});

		return array;
	}

});