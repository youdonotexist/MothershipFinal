/*
 * Copyright 2013 SirsiDynix.  All rights reserved.
 */

Ext.require('MothershipEditor.model.DirectiveType');
Ext.define('MothershipEditor.view.DirectiveDataItem', {
	extend: 'Ext.dataview.component.DataItem',
	requires: ['Ext.Button', 'Ext.field.Select'],
	alias: 'widget.directivedataitem',

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

			var buttonContainer = Ext.create('Ext.Container', {
				layout: 'hbox',
				padding: '0px 4px 0px 0px',
				items: [
					{
						xtype: 'button',
						width: '44px',
						height: '44px',
						iconMask: true,
						iconCls: 'arrow_up',
						cls: 'ms-order-button',
						padding: 0,
						margins: 0,
						ui: 'order-button',
						action: 'up'
					},
					{
						xtype: 'button',
						width: '44px',
						height: '44px',
						iconMask: true,
						iconCls: 'arrow_down',
						padding: 0,
						margins: 0,
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
					xtype: 'container',
					layout: 'vbox',
					items: [
						{
							xtype: 'label',
							html: "Action: " + this.getRecord().data.action,
							padding: '2 2 0 2'
						},
						{
							xtype: 'label',
							style: 'color: grey;',
							html: "Wait after: " + this.getRecord().data.waitAfter,
							padding: '2 2 0 2'
						}
					]
				}
			]);
		}
	},

	onActionChange: function(select, newValue, oldValue, eOpts) {
		var record = this.getRecord();
		record.set('action', newValue);
		var dataview = this.up('directivedataview');
		dataview.getStore().sync();
	},

	onWaitChange: function(spinner, value, direction, eOpts ) {
		var record = this.getRecord();
		record.set('waitAfter', value);
	},

	onDelete: function() {
		var record = this.getRecord();
		var dataview = this.up('directivedataview');
		dataview.getStore().remove(record);
		dataview.getStore().sync();
	}
});