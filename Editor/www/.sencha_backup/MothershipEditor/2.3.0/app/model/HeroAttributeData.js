/*
 * Copyright 2013 SirsiDynix.  All rights reserved.
 */
Ext.define('MothershipEditor.model.HeroAttributeData', {
	extend: 'Ext.data.Model',
	config: {
		fields: [
			'type',
			'minvalue',
			'maxvalue',
			'step',
			'default'
		]
	}
});