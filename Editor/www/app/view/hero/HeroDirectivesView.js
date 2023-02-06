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
				action: 'save_directives',
				cls: 'ms-add-button'
			}
		]
	}
});