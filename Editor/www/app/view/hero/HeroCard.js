/*
 * Copyright 2013 SirsiDynix.  All rights reserved.
 */
Ext.require([
	'MothershipEditor.model.Directive',
	'MothershipEditor.model.DirectiveType',
	'MothershipEditor.model.HeroAttribute',
	'MothershipEditor.view.DirectiveDataView',
	'MothershipEditor.view.hero.HeroBasicView',
	'Ext.field.File',
	'Ext.ux.Fileup',
	'Ext.Label'
]);



Ext.define('MothershipEditor.view.hero.HeroCard', {
	extend: 'MothershipEditor.view.BaseCard',
	alias: 'widget.herodetails',
	id: 'heropanel',
	controller: 'HeroController',

	config: {
		layout: 'vbox',
		scrollable: 'vertical',
		padding: 0,
		items: [
			{xtype: 'herobasicview'},
			{
				xtype: 'button',
				width: '100%',
				text: 'Configure Ship',
				cls: 'ms-row-button',
				height: '2.5em',
				action: 'edit_ship_attirbutes'
			},
			{
				xtype: 'button',
				width: '100%',
				text: 'Configure AI',
				cls: 'ms-row-button',
				action: 'edit_directives',
				height: '2.5em'
			},
			{
				xtype: 'button',
				width: '100%',
				text: 'Delete',
				cls: 'ms-destroy-button',
				action: 'delete_hero',
				height: '2.5em'
			},
			{
				xtype: 'button',
				width: '100%',
				docked: 'bottom',
				text: 'Save',
				cls: 'ms-add-button',
				action: 'save_hero',
				height: '2.5em'
			}

		]
	},

	constructor: function() {
		var me = this;
		me.heroId = arguments[0].heroId;
		me.hero = arguments[0].hero;
		me.heroType = me.hero.get('hero_type_id');

		me.callParent(arguments);
	},

	onDirectiveTap: function(list, index, target, record, e, eOpts) {
		var container = list.up('container');

		var view = Ext.create ('MothershipEditor.view.hero.HeroCard', {
			heroId: record.data.id,
			title: 'Hero: ' + record.data.name,
			heroType: record.data.hero_type_id,
			hero: record
		});

		var navRoot = Ext.getCmp('navigation_root');
		navRoot.push(view);
	},

	buildView: function() {
		var me = this;

		/*var heroLabel = me.down('#heroNameLabel');
		heroLabel.setHtml(me.hero.get('name'));

		var portrait = me.down('fileupload');
		if (me.hero.get('photo_url')) {
			portrait.setHtml('<img width="100%" height="100%" src="' + me.hero.get('photo_url') + '"/>')
			portrait.hide();
			portrait.show();
		}
		else {
			portrait.setHtml('<img width="100%" height="100%" src="resources/images/questionmark.png"/>');
			portrait.hide();
			portrait.show();
		}
		portrait.setUrl('heroportrait/'+me.heroId);

		//Set Directive Dropdown store
		var directiveDropDown = me.down('#add_directive_type');
		directiveDropDown.setStore(Ext.create('Ext.data.Store', {
			model: 'MothershipEditor.model.DirectiveType',
			storeId: 'directive_type',
			proxy: {
				type: 'rest',
				url: '/directivetype?hero_type_id='+me.heroType
			},
			autoLoad: true
		}));

		//Set directive store
		var directiveList = me.down('directivedataview');
		directiveList.setStore(
			Ext.create('Ext.data.Store', {
				model: 'MothershipEditor.model.Directive',
				proxy: {
					type: 'rest',
					url: '/directive',
					extraParams: {
						hero_id: me.heroId
					}
				},
				autoLoad: true,
				autoSync: true
			})
		);

		//Build the field set
		var attributeStore = Ext.create('Ext.data.Store', {
			model: 'MothershipEditor.model.HeroAttribute',
			proxy: {
				type: 'rest',
				url: '/heroattribute?hero_type_id='+me.heroType
			}
		});

		var heroFieldSet = me.down('#hero_field_set');
		attributeStore.load(function(records, thing, thing2) {
			me.suspendLayout = true;
			for (var i = 0; i < records.length; i++) {
				var record = records[i];
				var attribs = record.getHeroAttributeData();
				if (attribs.get('type') == 'slider') {
					heroFieldSet.add({
						xtype: 'sliderfield',
						name: record.get('key'),
						label: record.get('label') + ': ' + attribs.get('default'),
						minValue: parseInt(attribs.get('minvalue')),
						maxValue: parseInt(attribs.get('maxvalue')),
						increment: parseFloat(attribs.get('step')),
						value: parseInt(attribs.get('default')),
						labelWrap: true,
						labelWidth: '50%'
					});
				}
				else if (attribs.get('type') == 'toggle') {
					heroFieldSet.add(
						{
							xtype: 'togglefield',
							name: record.get('key'),
							label: record.get('label') + ': ' + (attribs.get('default') ? "On" : "Off"),
							labelWidth: '50%',
							labelWrap: true
						}
					);
				}
			}

			heroFieldSet.setRecord(me.hero);

			var items = heroFieldSet.getItems();
			for (var i = 0; i < items.length; i++) {
				var item = heroFieldSet.getAt(i);
				if (item.xtype != 'title') {
					var val = me.hero.get(item.getName());
					item.setValue(val);

					var label = item.getLabel();
					item.setLabel(label.split(':')[0] + ": " + val);
				}
			}

			me.suspendLayout = false;
		});*/
	}

});