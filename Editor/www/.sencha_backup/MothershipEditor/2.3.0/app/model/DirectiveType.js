/*
 * Copyright 2013 SirsiDynix.  All rights reserved.
 */
Ext.define('MothershipEditor.model.DirectiveType', {
	extend: 'Ext.data.Model',
	config: {
		fields: [
			{name: 'id', persistent: false},
			'action',
			'hero_type_id'
		],
		proxy: {
			type: 'rest',
			url: '/directivetype'
		}
	}
});