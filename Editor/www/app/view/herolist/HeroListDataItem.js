/*
 * Copyright 2013 SirsiDynix.  All rights reserved.
 */
/*
 * Copyright 2013 SirsiDynix.  All rights reserved.
 */

Ext.require([
	'MothershipEditor.model.HeroList',
	'MothershipEditor.util.Utilities',
	'MothershipEditor.util.HeroCostCalculator'
]);
Ext.define('MothershipEditor.view.herolist.HeroListDataItem', {
	extend: 'Ext.dataview.component.ListItem',
	requires: ['Ext.Button', 'Ext.field.Select'],
	alias: 'widget.herolistdataitem',

	config: {
		itemCls: 'kitten-list-item-inner',
		cls: 'kitten-list-item',
		padding: '0em 0em 0em 0.5em',
		dataMap: {
			doBuild: ''
		},
		layout: {
			type: 'hbox',
			align: 'center'
		},
		items: [
			{
				xtype: 'img',
				width: '2em',
				height: '2em',
				margin: '0em 0.5em 0em 0em'
			},
			{
				xtype: 'label',
				flex: 10,
				itemId: 'name'
			},
			{
				xtype: 'label',
				itemId: 'cost',
				docked: 'right',
				margin: '0.5em 0.5em 0em 0em'
			}
		]
	},

	doBuild: function() {
		var me = this;
		me.label = me.label || me.down('#name');
		me.image = me.image || me.down('img');
		me.cost = me.cost || me.down('#cost');
	},

	updateRecord: function(record) {
		if (!record) return;
		this.callParent(arguments);

		var me = this,
			dataview = me.up('list');


		me.label.setHtml(record.get('name'));
		me.image.setSrc(MothershipEditor.util.Utilities.imageForHeroType(record.get('hero_type_id')));

		if (!dataview.getGrouped()) {
			Ext.Ajax.request({
				url: '/hero/ds/' + record.getId(),
				method: 'GET',
				useDefaultXhrHeader:false,
				disableCaching: false,
				timeout:120000,
				success: function(response) {
					var result = Ext.JSON.decode(response.responseText);
					me.cost.setHtml(result.cost);
				},
				failure: function(response) {
					me.cost.setHtml("");
				}
			});
		}
	},

	onActionChange: function(select, newValue, oldValue, eOpts) {
		var record = this.getRecord();
		record.data.action = newValue;
		record.save({
			success: function() {
				console.log("YAY");
			}
		});
		console.log(record);
		record.stores[0].load();
	},

	onWaitChange: function(select, newValue, oldValue, eOpts) {

	},

	onDelete: function() {
		var record = this.getRecord();
		var dataview = this.up('#heroListList');
		dataview.getStore().remove(record);
		dataview.getStore().sync();
	}
});