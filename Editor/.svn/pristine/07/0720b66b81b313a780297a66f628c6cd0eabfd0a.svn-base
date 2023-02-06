/*
 * Copyright 2013 SirsiDynix.  All rights reserved.
 */

Ext.require([
	'MothershipEditor.view.hero.HeroShipAttributesView'
]);

Ext.define('MothershipEditor.view.herolist.ShipAttributeWorkflow', {
	extend: 'Ext.Container',
	xtype: 'shipattributeworkflow',
	controller: 'HeroListController',
	config: {
		padding: '0.4em',
		layout: 'vbox',
		height: '100%',
		items: [
			{
				xtype: 'heroshipattributesview',
				flex: 1
			},
			{
				xtype: 'button',
				text: 'Finish!',
				cls: 'ms-add-button',
				height: '3em',
				margin: '0.2em 0.2em',
				action: 'add_hero_ship_attributes_next',
				docked: 'bottom'
			}
		]
	},

	setShipAttributes: function(records, hero) {
		var heroFieldSet = this.down('#hero_field_set');
		for (var i = 0; i < records.length; i++) {
			var record = records[i];
			var attribs = record.getHeroAttributeData();
			if (attribs.get('type') == 'slider') {
				heroFieldSet.add({
					xtype: 'sliderfield',
					name: record.get('key'),
					label: record.get('label') + ': ' + attribs.get('default'),
					minValue: parseInt(attribs.get('minvalue')),
					maxValue: parseInt(attribs.get('maxvalue')),
					increment: parseFloat(attribs.get('step')),
					value: parseInt(attribs.get('default')),
					labelWrap: true,
					labelWidth: '50%'
				});
			}
			else if (attribs.get('type') == 'toggle') {
				heroFieldSet.add(
					{
						xtype: 'togglefield',
						name: record.get('key'),
						label: record.get('label') + ': ' + (attribs.get('default') ? "On" : "Off"),
						labelWidth: '50%',
						labelWrap: true
					}
				);
			}
		}

		heroFieldSet.setRecord(hero);

		/*
		var items = heroFieldSet.getItems();
		for (var i = 0; i < items.length; i++) {
			var item = heroFieldSet.getAt(i);
			if (item.xtype != 'title') {
				var val = me.hero.get(item.getName());
				item.setValue(val);

				var label = item.getLabel();
				item.setLabel(label.split(':')[0] + ": " + val);
			}
		}*/
	}
})