/*
 * Copyright 2013 SirsiDynix.  All rights reserved.
 */
Ext.require('Ext.data.proxy.Rest');

Ext.define('MothershipEditor.model.HeroType', {
	extend: 'Ext.data.Model',
	config: {
		fields:[
			{name: "id", persist: false, mapping:'_id'},
			'_id',
			'name'
		],
		proxy: {
			type: 'rest',
			url : '/herotype'
		}

	}
});