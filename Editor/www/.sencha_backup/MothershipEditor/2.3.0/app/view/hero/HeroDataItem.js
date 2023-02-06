/*
 * Copyright 2013 SirsiDynix.  All rights reserved.
 */
/*
 * Copyright 2013 SirsiDynix.  All rights reserved.
 */

Ext.require('MothershipEditor.model.Hero');
Ext.define('MothershipEditor.view.hero.HeroDataItem', {
	extend: 'Ext.dataview.component.ListItem',
	requires: ['Ext.Button', 'Ext.field.Select'],
	alias: 'widget.herodataitem',

	config: {
		horizontalBox:true,
		cls: 'kitten-list-item',
		dataMap: {
			getHorizontalBox: {
				layout: 'hbox'
			}
		}
	},

	applyHorizontalBox: function(config) {
		return Ext.factory(config, Ext.Container, this.getHorizontalBox());
	},

	updateHorizontalBox: function(newContainer, oldContainer) {

		if (oldContainer) {
			this.remove(oldContainer);
		}

		if (newContainer) {
			this.add(newContainer);

			var record = this.getRecord();
			var store = this._dataview.getStore();

			var buttonContainer = Ext.create('Ext.Container', {
				layout: 'hbox',
				items: [
					{
						xtype: 'button',
						width: '44px',
						iconMask: true,
						iconCls: 'arrow_up',
						cls: 'ms-order-button',
						ui: 'order-button',
						action: 'up'
					},
					{
						xtype: 'button',
						width: '44px',
						iconMask: true,
						iconCls: 'arrow_down',
						cls: 'ms-order-button',
						ui: 'order-button',
						action: 'down'
					}
				]
			});

			newContainer.setLayout('hbox');
			newContainer.setItems([
				buttonContainer,
				{
					xtype: 'label',
					html: record.data.name,
					flex:1
				}
			]);
		}
	},

	onDelete: function() {
		var record = this.getRecord();
		var dataview = this.up('#hero_list');
		dataview.getStore().remove(record);
		dataview.getStore().sync();
	}
});