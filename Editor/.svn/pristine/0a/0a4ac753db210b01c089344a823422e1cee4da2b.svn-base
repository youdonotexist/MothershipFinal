
Ext.require([
	'MothershipEditor.view.herolist.HeroListCard',
	'MothershipEditor.view.herolist.ShipAttributeWorkflow'
]);

Ext.define('MothershipEditor.controller.HeroListController', {
	extend: 'MothershipEditor.controller.BaseController',
	config: {
		refs: {
			heroList: 'herolist dataview',
			heroListTextArea: 'herolist textareafield'
		},

		control: {
			'herodataitem button[action=up]': {
				tap: 'moveUp'
			},
			'herodataitem button[action=down]': {
				tap: 'moveDown'
			},
			'button[action=add_hero]': {
				tap: 'onHeroAddButton'
			},
			'herodataitem': {
				add: 'onItemShow'
			},
			heroList: {
				itemtap: 'onHeroTap'
			},
			'addherobasicworkflow button[action=add_hero_basic_next]': {
				tap: 'onAddHeroBasicNext'
			},
			'addherobasicworkflow textfield': {
				change: 'onHeroNameChange'
			},
			'shipattributeworkflow button[action=add_hero_ship_attributes_next]': {
				tap: 'onShipAttributesNext'
			}
		}
	},

	onCardWillAppear: function(card, created) {
		var me = this;
		me.callParent(arguments);

		if (created) {
			var list = me.getHeroList();
			//var store = Ext.create('Ext.data.Store', );

			list.setStore({
				model: 'MothershipEditor.model.Hero',
				storeId: 'hero_type',
				autoLoad: true,
				proxy: {
					type: 'rest',
					url: '/herolist/'+MothershipEditor.CurrentBattle.getId(),
					reader: {
						type: 'json',
						rootProperty: 'heroes'
					}
				}
			});

			var rightButtons = this.getRightButtons();
			rightButtons.add({
				xtype: 'button',
				text: '+',
				action: 'add_hero'
			});
		}
	},

	onWorkflowViewWillAppear: function(view, created) {
		if (view.xtype == 'addherobasicworkflow') {
			//Look at the current hero list
				//If we're in a normal, set normal
				//Otherwise, we're in mixed

			var workflowController = MothershipEditor.app.getController('WorkflowController'),
				tempHero = Ext.create('MothershipEditor.model.Hero'),
				fieldSet = view.down('fieldset');

			tempHero.set('hero_type_id', MothershipEditor.CurrentBattle.get('hero_type_id'));
			tempHero.set('hero_list_id', MothershipEditor.CurrentBattle.getId());
			fieldSet.setRecord(tempHero);

			workflowController.addWorkflowData('HeroBuilder', tempHero);
			view.buildFromHero(tempHero);
		}
		else if (view.xtype == 'shipattributeworkflow') {
			view.down('button[action=save_hero_attributes]').setHidden(true);

			var attributeStore = Ext.create('Ext.data.Store', {
				model: 'MothershipEditor.model.HeroAttribute',
				proxy: {
					type: 'rest',
					url: '/heroattribute?hero_type_id='+MothershipEditor.CurrentBattle.get('hero_type_id')
				}
			});

			attributeStore.load(function(records) {
				var workflowController = MothershipEditor.app.getController('WorkflowController');
				view.setShipAttributes(records, workflowController.getWorkflowData('HeroBuilder'));
			});
		}
	},

	onHeroTap: function(list, index, target, record, e, eOpts) {
		var container = list.up('container');

		MothershipEditor.CurrentHero = record;
		var view = Ext.create ('MothershipEditor.view.hero.HeroCard', {
			heroId: record.data.id,
			title: 'Hero: ' + record.get('name'),
			heroType: record.get('hero_type_id'),
			hero: record
		});

		var navRoot = Ext.getCmp('navigation_root');
		navRoot.push(view);
	},

	moveUp: function(button, event, options) {
		var store = this.getHeroList().getStore();
		var record = button.up('herodataitem').getRecord();
		var index = store.indexOf(record);

		if (index != 0) {
			var swap = store.getAt(index-1);
			swap.set('order', index);
			record.set('order', index-1);

			store.sort('order');
			store.sync({
				property : "order",
				direction: "ASC"
			});
		}

		event.stopEvent();
	},

	moveDown: function(button, event, options) {
		var store = this.getHeroList().getStore();
		var record = button.up('herodataitem').getRecord();
		var index = store.indexOf(record);

		if (index == store.getCount() - 1) //Stop
		{}
		else {
			var swap = store.getAt(index+1);
			swap.set('order', index);
			record.set('order', index+1);

			store.sort({
				property : "order",
				direction: "ASC"
			});
			store.sync();
		}

		event.stopEvent();
	},

	onHeroAddButton: function() {
		var workflow = MothershipEditor.app.getController('WorkflowController');
		var addList = Ext.create('MothershipEditor.view.herolist.AddHeroWorkflow');
		workflow.start(addList);
		////addList.populateHeroTypes(this.heroTypes());
		//this.getNavigation().push(Ext.create ('MothershipEditor.view.herolist.AddHeroWorkflow', {
		//	title: "Ship Attributes"
		//}));
	},

	heroTypes: function() {
		var array = [];
		array.push({
			name: 'Basic',
			imageSrc: 'resources/images/hero1.png',
			type :'BASIC'
		});

		array.push({
			name: 'Juggernaut',
			imageSrc: 'resources/images/hero2.png',
			type :'JUGGERNAUT'
		});

		array.push({
			name: 'Scientist',
			imageSrc: 'resources/images/hero3.png',
			type :'SCIENTIST'
		});

		array.push({
			name: 'Mixed',
			type :'MIXED'
		});

		return array;
	},

	onAddHeroBasicNext: function() {
		var workflow = MothershipEditor.app.getController('WorkflowController');
		var addList = Ext.create('MothershipEditor.view.herolist.ShipAttributeWorkflow');
		workflow.addItem(addList);
	},

	onShipAttributesNext: function() {
		//Show the mask
		//POST the hero
		var me = this,
			heroList = me.getHeroList(),
			workflowController = MothershipEditor.app.getController('WorkflowController'),
			hero = workflowController.getWorkflowData('HeroBuilder');

		hero.set('order', heroList.getStore().getAllCount());
		//if (me.heroListType == "MIXED") {
		//	var heroTypeSelect = me.down('selectfield');
		//	var type = heroTypeSelect.getValue();
		//	hero.set('hero_type_id', type);
		//}


		heroList.getStore().add(hero);
		hero.save();
		workflowController.finish();
	},

	onHeroNameChange: function(textfield, newValue, oldValue, eOpts) {
		var container = textfield.up('container');
		container.getRecord().set('name', newValue);
	},

	onDelete: function(record) {
		var dataview = this.getDirectiveList();
		dataview.getStore().remove(record);
		dataview.getStore().sync();

		var modal = Ext.Viewport.down('modalpanel');
		Ext.Viewport.remove(modal, true);
	}
});