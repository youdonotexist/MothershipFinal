/*
 * Copyright 2013 SirsiDynix.  All rights reserved.
 */
Ext.define('MothershipEditor.view.directive.DirectiveCard', {
	extend: 'MothershipEditor.view.BaseCard',
	xtype: 'directivecard',
	controller: 'DirectiveController',
	config: {
		height: '100%',
		width: '100%',
		items: [
			{
				xtype: 'carousel',
				width: '100%',
				height: '5em',
				ui: 'dark',
				itemId: 'directive_selector'
			},
			{
				xtype: 'fieldset',
				items: [
					{
						xtype: 'spinnerfield',
						minValue: 0.1,
						maxValue: 10,
						stepValue: 0.1,
						cycle: true,
						label: 'Wait After'
						//listeners: {
						//	spin: {fn: me.controller.onWaitChange, scope:me.controller}
						//}
					}
				]
			},
			{
				xtype: 'container',
				layout: 'hbox',
				docked: 'bottom',
				items: [
					{
						xtype: 'button',
						text: "Delete",
						flex: 1,
						action: 'delete_directive',
						margins: 0,
						cls: 'bm-search-home-button-left'
					},
					{
						xtype: 'button',
						text: "Save",
						flex: 1,
						action: 'save_directive',
						margins: 0,
						cls: 'ms-add-button'
					}
				]
			}
		]
	},

	setDirectiveTypes: function(records) {

	}
});