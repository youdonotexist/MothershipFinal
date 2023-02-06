/*
 * Copyright 2013 SirsiDynix.  All rights reserved.
 */
Ext.require([
	'MothershipEditor.model.Hero',
	'MothershipEditor.model.HeroList',
	'MothershipEditor.view.herolist.HeroListDataItem',
	'MothershipEditor.view.hero.HeroCard',
	'MothershipEditor.model.BulkHero',
	'Ext.data.Store'
]);

Ext.define('MothershipEditor.view.herolist.HeroListCard', {
	extend: 'Ext.Container',
	alias: 'widget.herolist',
	controller: 'HeroListController',
	config: {
		layout: 'vbox',
		height: '100%',
		items: [
			{
				xtype: 'list',
				itemId: 'hero_list',
				useComponents: true,
				useSimpleItems: false,
				scrollToTopOnRefresh: false,
				refreshHeightOnUpdate: false,
				disableSelection: true,
				infinite: true,
				defaultType: 'herolistdataitem',
				model: 'MothershipEditor.model.Hero',
				height: '100%',
				width: '100%'
			},
			{
				xtype: 'button',
				text: 'Save',
				cls: 'ms-add-button',
				height: '3em',
				style: 'box-shadow: 0em 2em 2em 2em #000000;',
				action: 'add_battle_button',
				docked: 'bottom'
			}
		]
	},

	constructor: function(config) {
		var me = this;
		me.callParent(arguments);

		/*me.setItems([
			{
				html: 'Battle Heroes',
				cls: 'hero-heading',
				padding: '5px 5px 0px 5px'
			}
		]);

		var args = config;
		me.heroListType = args.heroListType;

		var heroTypeSelect = me.down('selectfield');
		if (me.heroListType == "MIXED") {
			heroTypeSelect.setHidden(false);
		}

		//var textarea = me.down('textareafield');
		//textarea.setDisabled(true);

		//var task = Ext.create('Ext.util.DelayedTask', function () {
		//	textarea.setDisabled(false);
		//});
		//task.delay(1000);*/
	},

	onSave: function() {
		var me = this;
		var heroListModel = me.heroList;
		var textarea = me.down('textareafield');
		heroListModel.set('backstory', textarea.getValue());
		heroListModel.save();

		var store = Ext.create('Ext.data.Store', {
			model: 'MothershipEditor.model.Hero'
		});

		var heroList = this.down('#hero_list');
		var heroListStore = heroList.getStore();

		var array = heroListStore.data.items;
		var newArray = [];

		for (var i = 0; i < array.length; i++) {
			var hero = array[i];
			var copy = hero.copy(hero.getId());
			copy.setDirty();
			copy.set('order', i);

			store.add(copy);
		}

		store.sync();
	},

	addHero: function() {
		var me = this,
			textField = me.down('#heroNameTextField'),
			heroList = me.down('#hero_list');

		var hero = Ext.create('MothershipEditor.model.Hero', {
			name: textField.getValue(),
			hero_list_id: me.heroList.data.id,
			maxMines: 3,
			maxShields: 2,
			moveSpeed: 300,
			missiles: false,
			attackMissile: false,
			order: heroList.getStore().getAllCount()
		});

		if (me.heroListType == "MIXED") {
			var heroTypeSelect = me.down('selectfield');
			var type = heroTypeSelect.getValue();
			hero.set('hero_type_id', type);
		}


		heroList.getStore().add(hero);
		heroList.getStore().sync();
	}
});