/*
 * Copyright 2013 SirsiDynix.  All rights reserved.
 */
Ext.define('MothershipEditor.view.home.AddHeroListWorkflow', {
	extend: 'Ext.Container',
	xtype: 'addherolistworkflow',
	config: {
		style: 'background-color: lightgray;',
		items: [
			{
				xtype: 'container',
				width: '100%',
				height: '50%',
				layout: 'fit',
				items: [
					{
						xtype: 'image',
						mode: 'image',
						src: 'resources/images/space_seamless.png',
						width: '100%',
						height: '100%',
						zIndex: 0
					},
					{
						xtype: 'carousel',
						width: '100%',
						height: '100%',
						zIndex: 1,
						ui: 'light'
					}
				]
			},
			{
				xtype: 'textfield',
				placeHolder: 'Battle Name',
				itemId: 'heroNameTextField',
				style: 'border-top: 0.1em solid black; border-bottom: 0.1em solid black;'
			},
			{
				xtype: 'button',
				text: 'Add Battle',
				cls: 'ms-add-button',
				height: '3em',
				margin: '0.2em 0.2em',
				action: 'add_battle_button',
				docked: 'bottom'
			}
		]
	},

	populateHeroTypes: function(types) {
		var caro = this.down('carousel');
		for (var i = 0; i < types.length; i++) {
			var type = types[i];

			var item = Ext.create('Ext.Container', {
				layout: 'vbox',
				align: 'stretch',
				style: 'text-align:center;',
				items: [
					{
						xtype: 'image',
						src: type.imageSrc,
						flex: 4
					},
					{
						xtype: 'label',
						html: type.name,
						flex: 1,
						style: 'color: white;'
					}
				]
			});

			caro.add(item);

		}
	}
});