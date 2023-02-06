/*
 * Copyright 2013 SirsiDynix.  All rights reserved.
 */
Ext.define('MothershipEditor.model.BulkHero', {
	extend: 'Ext.data.Model',
	config: {
		associations:[
			{
				type: 'hasMany',
				model:'MothershipEditor.model.Hero'
			}
		],
		proxy: {
			type: 'rest',
			url: 'bulkhero'
		}
	}
});