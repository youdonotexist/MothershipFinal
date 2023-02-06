/*
 * Copyright 2013 SirsiDynix.  All rights reserved.
 */
Ext.require([
	'MothershipEditor.model.Directive',
	'MothershipEditor.model.HeroAttribute'
]);

Ext.define('MothershipEditor.model.Hero', {
	extend: 'Ext.data.Model',

	config: {
		fields: [
			{name: 'id', mapping: '_id', persist: false},
			"hero_list_id",
			"hero_type_id",
			"order",
			"name",
			"photo_url",

			//Shared
			"moveSpeed",
			"health",
			"small_projectile_damage",
            "asteroidBattle",

			//Basic
			"maxMines",
			"maxShields",
			"missiles",
			"attackMissiles",

			//Juggernaut
			"maxTurretMines",
			"chargeLaserTime",
			"grappleArmLength",
			"turret_mine_proj_damage",

			//Scientist
			"teleportCount",
			"maxGravityMines",
			"maxReflectShields"



		],
		associations: [
			{
				type:'hasMany',
				key: 'directives',
				model: 'MothershipEditor.model.Directive'
			}
		],

		proxy: {
			type: 'rest',
			url : '/hero'
		}
	}

});