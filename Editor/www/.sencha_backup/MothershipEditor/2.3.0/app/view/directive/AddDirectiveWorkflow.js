/*
 * Copyright 2013 SirsiDynix.  All rights reserved.
 */

Ext.require([
	'MothershipEditor.view.directive.DirectiveCard'
]);

Ext.define('MothershipEditor.view.directive.AddDirectiveWorkflow', {
	extend: 'MothershipEditor.view.directive.DirectiveCard',
	xtype: 'adddirectiveworkflow',
	controller: 'HeroDirectivesController',
	title: 'Add Directive'
})