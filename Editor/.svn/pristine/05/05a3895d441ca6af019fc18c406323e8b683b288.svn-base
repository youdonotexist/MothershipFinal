/*
 * Copyright 2013 SirsiDynix.  All rights reserved.
 */

Ext.require([
	'MothershipEditor.view.DirectiveDataItem'
]);

Ext.define('MothershipEditor.view.hero.HeroDirectivesView', {
	extend: 'MothershipEditor.view.BaseCard',
	xtype: 'herodirectiveview',
	controller: 'HeroDirectivesController',
	config: {
		items: [
			/*{
				xtype: 'container',
				layout: 'hbox',
				cls: 'directive_item_view',
				style: 'background-color: gray',
				padding: 10,
				items: [
					{
						xtype: 'selectfield',
						itemId: 'add_directive_type',
						displayField: 'action',
						valueField: 'action',
						flex: 1
					},
					{
						xtype: 'spinnerfield',
						placeholder: 'Wait After',
						itemId: 'add_directive_wait',
						minValue: 0.1,
						maxValue: 10,
						increment: 0.1,
						cycle: true
					},
					{
						xtype: 'button',
						text: '+',
						width: '44px',
						cls: 'ms-add-button',
						action:'add_directive'
					}
				]
			},*/
			{
				xtype: 'dataview',
				useComponents: true,
				defaultType: 'directivedataitem',
				itemTpl: '{action} | {waitAfter}',
				itemId: 'directive_list',
				baseCls: 'kitten-list',
				scrollable:null
			},
			{
				xtype: 'button',
				width: '100%',
				text: 'Save',
				docked: 'bottom',
				action: 'save',
				cls: 'ms-add-button'
			}
		]
	}
});