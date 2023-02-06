/*
 * Copyright 2013 SirsiDynix.  All rights reserved.
 */

Ext.require([
	'MothershipEditor.view.directive.AddDirectiveWorkflow'
]);

Ext.define('MothershipEditor.controller.HeroDirectivesController', {
	extend: 'MothershipEditor.controller.BaseController',
	config: {
		refs: {
			card: 'herodirectiveview',
			directiveDataView: 'herodirectiveview dataview'
		},
		control: {
			'herodirectiveview dataview': {
				itemtap: 'onDirectiveTap'
			},
			'button[action=add_directive]': {
				tap: 'onAddDirectiveButton'
			},
			'button[action=save_directive]': {
				tap: 'onFinishAddDirective'
			},
            'button[action=save_directives]': {
                tap: 'onSaveDirectives'
            },
			'button[action=delete_directive]': {
				tap: 'onDeleteDirective'
			},
            'button[action=delete_all]': {
                tap: 'onDeleteAllDirectives'
            },
			'adddirectiveworkflow carousel': {
				activeitemchange: 'onDirectiveTypeChange'
			},
			'adddirectiveworkflow spinnerfield': {
				change: 'onWaitAfterChange'
			},
			'herodirectiveview button[action=up]': {
				tap: 'moveUp'
			},
			'herodirectiveview button[action=down]': {
				tap: 'moveDown'
			}
		}
	},

	onCardWillAppear: function(card, created) {
		this.callParent(arguments);
		if (created) {
			var directiveList = card.down('dataview');
			directiveList.setStore(
				Ext.create('Ext.data.Store', {
					model: 'MothershipEditor.model.Directive',
					proxy: {
						type: 'rest',
						url: '/directive',
						extraParams: {
							hero_id: MothershipEditor.CurrentHero.getId()
						}
					},
                    sorters: 'order',
					autoLoad: true,
					autoSync: false
				})
			);

			var rightButtons = this.getRightButtons();
            rightButtons.add({
                xtype: 'button',
                text: 'Delete All',
                action: 'delete_all'
            });
			rightButtons.add({
				xtype: 'button',
				text: '+',
				action: 'add_directive'
			});
		}
	},

	onWorkflowViewWillAppear: function(view, created) {
		var spinner = view.down('spinnerfield'),
			directiveSel = view.down('carousel'),
			directiveDataView = this.getDirectiveDataView(),
			workflowController = MothershipEditor.app.getController('WorkflowController'),
			tempDirective = Ext.create('MothershipEditor.model.Directive'),
			saveButton = view.down('button[action=save_directive]'),
			directiveCount = directiveDataView.getStore().getCount();

		tempDirective.set('hero_id', MothershipEditor.CurrentHero.getId());
		tempDirective.set('order', directiveCount ? directiveCount : 0 );
		tempDirective.set('waitAfter', 0.1);

		view.down('button[action=delete_directive]').setHidden(true);
		saveButton.setText("Finish!");
		saveButton.realAction = "new_directive";

		workflowController.addWorkflowData('DirectiveBuilder', tempDirective);
		view.setRecord(tempDirective);

		//Set Directive Dropdown store
		var store = Ext.create('Ext.data.Store', {
			model: 'MothershipEditor.model.DirectiveType',
			storeId: 'directive_type',
			proxy: {
				type: 'rest',
				url: '/directivetype?hero_type_id='+MothershipEditor.CurrentHero.get('hero_type_id')
			},
			autoLoad: true
		});

		store.load(function(records) {
			spinner.records = records;
			for (var i = 0; i < records.length; i++) {
				var dirType = records[i];
				var item = Ext.create('Ext.Container', {
					layout: 'vbox',
					align: 'stretch',
					style: 'text-align:center;',
					items: [
						{
							xtype: 'label',
							html: dirType.get('action'),
							flex: 1,
							style: 'color: black;'
						}
					]
				});
				item.action = dirType.get('action');
				directiveSel.add(item);
			}
		});
	},

	onDirectiveTap: function(list, index, target, record, e, eOpts) {
		MothershipEditor.CurrentDirective = record;
		this.getNavigation().push(Ext.create ('MothershipEditor.view.directive.DirectiveCard', {
			title: 'Edit Directive'
		}));
	},

	moveUp: function(button, event, options) {
		var store = this.getDirectiveList().getStore();
		var record = button.up('directivedataitem').getRecord();
		var index = store.indexOf(record);

		var list = this.getDirectiveList();

		if (index == 0) //Stop
		{}
		else {
			var swap = store.getAt(index-1);
			swap.set('order', index);
			record.set('order', index-1);


            store.sort({
                property : "order",
                direction: "ASC"
            });
            store.sync();
		}

		event.stopEvent();

		//this.getDirectiveList().refresh();
	},

    getDirectiveList: function() {
        return this.getCard().down('dataview');
    },

	moveDown: function(button, event, options) {
		var store = this.getDirectiveList().getStore();
		var record = button.up('directivedataitem').getRecord();
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
		//this.getDirectiveList().refresh();
	},

	onAddDirectiveButton: function() {
		var workflow = MothershipEditor.app.getController('WorkflowController');
		var addList = Ext.create('MothershipEditor.view.directive.AddDirectiveWorkflow', {
			title: 'Add Directive'
		});
		workflow.start(addList);
	},

	onFinishAddDirective: function(button) {
		if (button.realAction == 'new_directive') {
			var workflowController = MothershipEditor.app.getController('WorkflowController'),
				list            = this.getDirectiveDataView();

			var directive = workflowController.getWorkflowData('DirectiveBuilder');

			list.getStore().add(directive);
            list.getStore().sync();

			workflowController.closeModal();
		}
		else {
			var list = this.getDirectiveDataView(),
                array = list.getStore().data.items;

            for (var i = 0; i < array.length; i++) {
                var directive = array[i];
                directive.set('order', i);
            }

			list.getStore().sync();
		}

	},

	onDeleteDirective: function(button) {
        var me = this;
        Ext.Msg.confirm('Delete?', "This can't be un-done (unless you're good friends with the dev)", function(btn) {
            if (btn == 'yes') {
                var list = me.getDirectiveDataView();
                list.getStore().remove(MothershipEditor.CurrentDirective);
                list.getStore().sync();
                me.getNavigation().pop();
            }
        });
	},

    onDeleteAllDirectives: function(button) {
        var me = this;
        Ext.Msg.confirm('Delete?', "This can't be un-done (unless you're good friends with the dev)", function(btn) {
            if (btn == 'yes') {
                var list = me.getDirectiveDataView();
                list.getStore().removeAll();
                list.getStore().sync();
            }
        });
    },

	onDirectiveTypeChange: function ( carousel, value, oldValue, eOpts ) {
		var record = carousel.up('basecard').getRecord();
		record.set('action', value.action);
	},

	onWaitAfterChange: function(spinner, newValue, oldValue, eOpts) {
		var record = spinner.up('basecard').getRecord();
		record.set('waitAfter', newValue);
	},

    onSaveDirectives: function(button) {
        var list = this.getDirectiveDataView(),
            array = list.getStore().data.items;

        for (var i = 0; i < array.length; i++) {
            var directive = array[i];
            directive.set('order', i);
        }

        list.getStore().sync();
    }
});