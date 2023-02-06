/*
 * Copyright 2013 SirsiDynix.  All rights reserved.
 */
Ext.define('MothershipEditor.model.Directive', {
	extend: 'Ext.data.Model',
	config: {
		fields: [
			{name: 'id', mapping: '_id', persist: false},
			'action',
			'waitAfter',
			'hero_id',
			'order'
		],


		proxy: {
			type: 'rest',
			api: {
				create  : '/directive',
				read    : '/directive',
				update  : '/directive',
				destroy : '/directive'
			}
		}
	}
});