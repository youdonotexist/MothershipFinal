/*
 * Copyright 2013 SirsiDynix.  All rights reserved.
 */
Ext.require('MothershipEditor.model.HeroAttributeData');
Ext.define('MothershipEditor.model.HeroAttribute', {
	extend: 'Ext.data.Model',
	config: {
		fields:[
			{name: 'id', mapping: '_id', persist: false},
			'label',
			'key',
			'hero_type_id'
		],
		associations: [
			{
				type: 'hasOne',
				name: 'attributes',
				model: 'MothershipEditor.model.HeroAttributeData',
				associationKey : 'attributes'
			}
		],
		proxy: {
			type: 'rest',
			url : '/heroattribute'
		}
	}

});