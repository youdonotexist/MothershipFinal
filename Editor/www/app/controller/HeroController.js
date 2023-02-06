/*
 * Copyright 2013 SirsiDynix.  All rights reserved.
 */
Ext.require([
	'MothershipEditor.view.DirectiveEditModal',
	'MothershipEditor.view.hero.HeroDirectivesView',
	'MothershipEditor.view.herolist.AddHeroWorkflow'
]);
Ext.define('MothershipEditor.controller.HeroController', {
	extend: 'MothershipEditor.controller.BaseController',

	config: {
		refs: {
			directiveList: 'directivedataview',
			heroPanel: 'herodetails'
		},

		control: {
			'heroshipattributesview button[action=save]' : {
				tap: 'onSave'
			},
			'directivedataitem': {
				add: 'onItemShow'
			},
			'heroshipattributesview sliderfield': {
				change: 'onDrag',
				drag: 'onDrag'
			},
            'shipattributeworkflow sliderfield': {
                change: 'onDrag',
                drag: 'onDrag'
            },
			'heroshipattributesview togglefield': {
				change: 'onToggle'
			},
            'shipattributeworkflow togglefield': {
                change: 'onToggle'
            },
			heroPanel: {
				initialize: 'onContainerInit'
			},
			'#heroPortrait': {
				success: 'onPhotoUploadSuccess'
			},
            '#heroNameLabel': {
                change: 'onChangeName'
            },
			'modalpanel button[action=delete]' : {
				onDelete: 'onDelete'
			},
			'herodetails button[action=edit_ship_attirbutes]': {
				tap: 'onEditShipAttributes'
			},
			'herodetails button[action=edit_directives]': {
				tap: 'onEditDirectives'
			},
			'herodetails button[action=save_hero]': {
				tap: 'onSave'
			},
			'herodetails button[action=delete_hero]': {
				tap: 'onDeleteHero'
			}
		}
	},

	onCardWillAppear: function(card, created) {
		this.callParent(arguments);

		var heroLabel = card.down('#heroNameLabel'),
            heroDeathCryLabel = card.down('#heroDeathCry');

        heroLabel.setValue(MothershipEditor.CurrentHero.get('name'));
        heroDeathCryLabel.setValue(MothershipEditor.CurrentHero.get('deathCry'));

		var portrait = card.down('fileupload');
		if (MothershipEditor.CurrentHero.get('photo_url')) {
			portrait.setHtml('<img width="100%" height="100%" src="' + MothershipEditor.CurrentHero.get('photo_url') + '"/>');
			portrait.hide();
			portrait.show();
		}
		else {
			portrait.setHtml('<img width="100%" height="100%" src="resources/images/questionmark.png"/>');
			portrait.hide();
			portrait.show();
		}
		portrait.setUrl('heroportrait/' + MothershipEditor.CurrentHero.getId());
	},

	onContainerInit: function(container, opts) {
		container.buildView();
	},

	onPhotoUploadSuccess: function(resp) {
		var card = this.getHeroPanel();
		var portrait = card.down('#heroPortrait');
		portrait.setHtml('<img width="100%" height="100%" src="' + resp.photo_url + '"/>');
	},

	closeDirectiveModal: function() {
		var modal = Ext.Viewport.down('modalpanel');
		Ext.Viewport.remove(modal, true);

		var dataview = this.getDirectiveList();
		dataview.refresh();

	},

	/*fields*/
	onDrag: function(slider, sl, thumb, newValue, oldValue, eOpts) {
		var value = slider.getValue();
		var label = slider.getLabel();

		var cleanVal = parseFloat(value.toString());
		if (slider.getIncrement() < 1.0)
			cleanVal = cleanVal.toFixed(2);

		slider.setLabel(label.split(':')[0] + ": " + cleanVal);

		var container = slider.up('#hero_field_set');
		container.getRecord().set(slider.getName(), cleanVal);
	},

	onToggle: function(toggle, newValue) {
		var value = toggle.getValue();
		var label = toggle.getLabel();
		var display = value ? "On" : "Off";
		toggle.setLabel(label.split(':')[0] + ": " + display);

		var container = toggle.up('#hero_field_set');
		container.getRecord().set(toggle.getName(), value ? true : false);
	},

	/*modal fields*/
	onActionChange: function(select, newValue, oldValue, eOpts) {
		var container = select.up('modalpanel');
		var dataview = this.getDirectiveList();
		var index = container.list_index;
		var model = dataview.getStore().getAt(index);
		model.set('action', newValue);

		//container.directive.set('action', newValue);


		//dataview.getStore().add(container.directive);
		dataview.getStore().sync();
	},

	onWaitChange: function(spinner, value, direction, eOpts ) {
		var container = spinner.up('modalpanel');
		var record = container.directive;
		record.data.waitAfter = value;

		container.directive.setDirty();

		var dataview = this.getDirectiveList();
		dataview.refresh();
	},

	onAddDirective: function(button) {
		var container       = button.up('herodetails');
		var directiveType   = container.down('#add_directive_type');
		var directiveWait   = container.down('#add_directive_wait');
		var list            = container.down('#directive_list');

		var directive = Ext.create('MothershipEditor.model.Directive', {
			action: directiveType.getValue(),
			waitAfter: directiveWait.getValue(),
			hero_id: container.heroId
		});

		list.getStore().add(directive);
		list.getStore().sync();
	},

	onChangeName: function(textfield, newValue, oldValue, eOpts) {
		MothershipEditor.CurrentHero.set('name', newValue);
	},

	onSave: function(button) {
        var card = button.up('#heropanel'),
            heroLabel = card.down('#heroNameLabel'),
            heroDeathCryLabel = card.down('#heroDeathCry');

        MothershipEditor.CurrentHero.set('name', heroLabel.getValue());
        MothershipEditor.CurrentHero.set('deathCry', heroDeathCryLabel.getValue());
		MothershipEditor.CurrentHero.save();
	},

	onEditShipAttributes: function() {
		this.getNavigation().push(Ext.create ('MothershipEditor.view.hero.HeroShipAttributesView', {
			title: "Ship Attributes"
		}));
	},

	onEditDirectives: function() {
		this.getNavigation().push(Ext.create ('MothershipEditor.view.hero.HeroDirectivesView', {
			title: "AI"
		}));
	},

	onDeleteHero: function() {
        var me = this;
        Ext.Msg.confirm('Delete?', "This can't be un-done (unless you're good friends with the dev)", function(btn) {
            if (btn == 'yes') {
                var listController = MothershipEditor.app.getController('HeroListController'),
                    heroListStore = listController.getHeroList().getStore();

                heroListStore.remove(MothershipEditor.CurrentHero);
                MothershipEditor.CurrentHero.erase();
                MothershipEditor.CurrentHero = null;
                me.getNavigation().pop();
            }
        });
	}
});