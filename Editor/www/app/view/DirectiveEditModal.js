/*
 * Copyright 2013 SirsiDynix.  All rights reserved.
 */

Ext.define('MothershipEditor.view.DirectiveEditModal', {
	extend: 'Ext.Panel',
	alias: 'widget.modalpanel',
	config: {
		centered: true,
		height: 300,
		itemId: 'modalPanel',
		width: 300,
		hideOnMaskTap: true,
		modal: true,
		scrollable: true,
		hideAnimation: {
			type: 'popOut',
			duration: 200,
			easing: 'ease-out'
		},
		showAnimation: {
			type: 'popIn',
			duration: 200,
			easing: 'ease-out'
		}
	},

	constructor: function() {
		var me = this;
		me.callParent(arguments);

		me.directive = arguments[0].directive;
		me.controller = arguments[0].controller;

		me.setItems([
			{
				xtype: 'toolbar',
				docked: 'top',
				title: 'Blah Blah'
			},
			{
				xtype: 'fieldset',
				items: [
					{
						xtype: 'selectfield',
						cls: 'bm-library-dropdown',
						listeners: {
							change: {fn: me.controller.onActionChange, scope: me.controller}
						},
						store: Ext.getStore('directive_type'),
						displayField: 'action',
						valueField: 'action',
						label: 'Action',
						value: me.directive.data.action
					},
					{
						xtype: 'spinnerfield',
						value: me.directive.data.waitAfter,
						minValue: 0.1,
						maxValue: 10,
						increment: 0.1,
						cycle: true,
						label: 'Wait After',
						listeners: {
								spin: {fn: me.controller.onWaitChange, scope:me.controller}
						}
					},
					{
						xtype:'container',
						layout: 'vbox',
						docked: 'bottom',
						items:[
							{
								xtype: 'button',
								name: "X",
								text: "Close",
								width: '100%',
								padding: '0 4 0 4',
								margins: 0,
								//cls: 'ms-add-button',
								ui: 'search-button',
								listeners: {
									tap: {fn: me.controller.closeDirectiveModal, scope:me.controller}
								}
							},
							{
								xtype: 'button',
								name: "X",
								text: "Delete",
								width: '100%',
								padding: '0 4 0 4',
								action: 'delete',
								margins: 0,
								cls: 'bm-search-home-button-left',
								ui: 'search-button',
								listeners: {
									tap: {
										fn: function(button) {
											button.fireEvent('onDelete', me.directive);
										},
										scope:me
									}
								}
							}
						]
					}
				]
			}
		]);
	}
});