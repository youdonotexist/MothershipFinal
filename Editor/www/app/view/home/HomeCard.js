/*
 * Copyright 2013 SirsiDynix.  All rights reserved.
 */

Ext.require([
	'MothershipEditor.model.HeroType',
	'MothershipEditor.model.HeroList',
	'MothershipEditor.model.Hero',
	'MothershipEditor.view.herolist.HeroListCard',
	'MothershipEditor.view.herolist.HeroListDataItem'
]);

Ext.define('MothershipEditor.view.home.HomeCard', {
	extend: 'Ext.Container',
	alias: 'widget.homecard',
	controller: 'HomeController',
	config: {
		items: [
			{
				xtype: 'list',
				useComponents: true,
				useSimpleItems: false,
				scrollToTopOnRefresh: false,
				refreshHeightOnUpdate: false,
				disableSelection: true,
				infinite: true,
				defaultType: 'herolistdataitem',
				width: '100%',
				height: '100%',
				grouped: true,
				store: {
					model: 'MothershipEditor.model.HeroList',
					autoLoad: true,
					grouper: {
						direction: 'DESC',
						groupFn: function(record) {
							return record.get('story') ? "Story" : "Arcade";
						}
					},
					sorters: [
						{
							// Sort by first letter of last name, in descending order
							sorterFn: function(record1, record2) {
								var story1 = record1.get('story'),
									story2 = record2.get('story');
								if (story1 && story2) {
									var name1 = record1.get('index'),
										name2 = record2.get('index');

									return name1 > name2 ? 1 : (name1 === name2 ? 0 : -1);
								}
								else {
									var name1 = record1.get('name'),
										name2 = record2.get('name');

									return name1 > name2 ? 1 : (name1==name2 ? 0 : -1);
								}
							},
							direction: 'ASC'
						}
					]
				}
			},
			{
				xtype: 'button',
				width: '100%',
				docked: 'bottom',
				text: 'Close Editor',
				cls: 'ms-add-button',
				action: 'close_editor',
				height: '2.5em'
			}
		]
	}
});