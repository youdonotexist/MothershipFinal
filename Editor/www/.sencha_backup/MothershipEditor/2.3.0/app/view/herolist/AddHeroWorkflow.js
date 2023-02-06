/*
 * Copyright 2013 SirsiDynix.  All rights reserved.
 */

Ext.require([
	'MothershipEditor.view.hero.HeroBasicView'
]);

Ext.define('MothershipEditor.view.herolist.AddHeroWorkflow', {
	extend: 'Ext.Container',
	xtype: 'addherobasicworkflow',
	controller: 'HeroListController',
	title: 'Add Hero',
	config: {
		padding: '0.4em',
		layout: {
			type: 'vbox',
			align: 'stretch'
		},
		items: [
			{
				xtype: 'fileupload',
				label: 'Portriat Image',
				autoUpload: false,
				url: 'heroportrait',
				id: 'heroPortrait',
				height: '50%',
				width: '100%',
				states: {
					browse: {
						//text: 'Browse and load'
					},
					ready: {
						//text: 'Load'
					},

					uploading: {
						//text: 'Loading',
						loading: true// Enable loading spinner on button
					}
				}
			},
			{
				xtype: 'fieldset',
				width: '100%',
				margin: '0.5em 0em 0em 0em',
				items: [
					{
						xtype: 'textfield',
						label: 'Hero Name',
						itemId: 'heroNameLabel',
						height: '100%',
						placeHolder: 'Enter Hero Name'
					}

				]
			},
			{
				xtype: 'button',
				text: 'Next',
				cls: 'ms-add-button',
				height: '3em',
				margin: '0.2em 0.2em',
				action: 'add_hero_basic_next',
				docked: 'bottom'
			}
		]
	},

	buildFromHero: function(hero) {
		if (hero.get('hero_type_id') == 'MIXED') {
			//show the hero type carousel
		}
		else {
			//hide it
		}
	}
});