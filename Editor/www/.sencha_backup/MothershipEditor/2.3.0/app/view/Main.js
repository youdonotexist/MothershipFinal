Ext.require([
	'MothershipEditor.view.home.HomeCard'
]);

Ext.define('MothershipEditor.view.Main', {
	extend: 'Ext.NavigationView',
	xtype: 'mainnavigation',
	config: {
		id: 'navigation_root'
	},


	constructor: function() {
		var me = this;
		me.callParent(arguments);

		me.getNavigationBar().add({
			xtype: 'container',
			itemId: 'rightNavButtonContainer',
			layout: 'hbox',
			align: 'right'
		});
	},

	push: function(card) {
		this.callParent(arguments);

		var controller = MothershipEditor.app.getController(card.controller);
		if (controller) {
			controller.onCardWillAppear(card, true);
		}
	},

	pop: function(count) {
        var card = this.getActiveItem();
        var controller = MothershipEditor.app.getController(card.controller);
        if (controller) {
            controller.onCardWillDisappear(card);
        }

		this.callParent(arguments);
		card = this.getActiveItem();

		controller = MothershipEditor.app.getController(card.controller);
		if (controller) {
			controller.onCardWillAppear(card, false);
		}
	},

	pushView: function() {
		var me = this;
		var heroTypeField = me.down('selectfield');
		var heroNameField = me.down('#heroNameTextField');
		var heroNameList = me.down('#heroListList');

		var herolist = Ext.create('MothershipEditor.model.herolist.HeroListCard', {
			name: heroNameField.getValue(),
			hero_type_id: heroTypeField.getValue()
		});

		heroNameList.getStore().add(herolist);
		heroNameList.getStore().sync();
	},

	onHeroListTap: function(list, index, target, record, e, eOpts) {
		var view = Ext.create ('MothershipEditor.view.herolist.HeroListCard', {
			heroListId: record.data.id,
			heroListType: record.get('hero_type_id'),
			title: 'Hero List: ' + record.data.name
		});

		this.push(view);
	}
});
