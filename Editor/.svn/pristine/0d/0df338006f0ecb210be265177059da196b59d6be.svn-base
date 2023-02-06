/*
 * Copyright 2013 SirsiDynix.  All rights reserved.
 */
Ext.define('MothershipEditor.view.hero.HeroBasicView', {
	extend: 'Ext.Container',
	xtype: 'herobasicview',
	config: {
		items: [
			{
				xtype: 'container',
				layout: 'hbox',
				items: [
					{
						xtype: 'fileupload',
						label: 'Portriat Image',
						autoUpload: false,
						url: 'heroportrait',
						id: 'heroPortrait',
						width: '4em',
						height: '4em',
						margin: '0.2em',
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
						xtype: 'textfield',
						itemId: 'heroNameLabel',
						margin: '0.2em',
						height: '100%',
						width: '100%'

					}

				]
			}
		]
	}
});