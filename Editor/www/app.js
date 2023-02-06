/*
    This file is generated and updated by Sencha Cmd. You can edit this file as
    needed for your application, but these edits will have to be merged by
    Sencha Cmd when it performs code generation tasks such as generating new
    models, controllers or views and when running "sencha app upgrade".

    Ideally changes to this file would be limited and most work would be done
    in other places (such as Controllers). If Sencha Cmd cannot merge your
    changes and its generated code, it will produce a "merge conflict" that you
    will need to resolve manually.
*/

// DO NOT DELETE - this directive is required for Sencha Cmd packages to work.
//@require @packageOverrides

//<debug>
Ext.Loader.setPath({
    'Ext': 'touch/src',
    'MothershipEditor': 'app',
	'Ext.ux': 'touch/src/ux'
});
//</debug>

Ext.application({
    name: 'MothershipEditor',

    requires: [
        'Ext.MessageBox'
    ],

    models:[
        'BulkHero',
        'Directive',
        'DirectiveType',
        'Hero',
        'HeroAttribute',
        'HeroAttributeData',
        'HeroList',
        'HeroType'
    ],

    views: [
        'DirectiveDataItem',
        'DirectiveDataView',
        'DirectiveEditModal',
        'hero.HeroCard',
        'herolist.HeroListCard',
        'Main',
        'hero.HeroDataItem',
	    'home.HomeCard',
        'herolist.HeroListDataItem'
    ],

    controllers: [
        'SpringboardController',
	    'HomeController',
        'HeroController',
        'HeroListController',
	    'WorkflowController',
	    'BattleController',
	    'BackstoryController',
        'StoryController',
	    'HeroShipAttributeController',
	    'HeroDirectivesController',
	    'DirectiveController',
	    'DirectiveController',
        'UpgradesController'
    ],

    icon: {
        '57': 'resources/icons/Icon.png',
        '72': 'resources/icons/Icon~ipad.png',
        '114': 'resources/icons/Icon@2x.png',
        '144': 'resources/icons/Icon~ipad@2x.png'
    },

    isIconPrecomposed: true,

    startupImage: {
        '320x460': 'resources/startup/320x460.jpg',
        '640x920': 'resources/startup/640x920.png',
        '768x1004': 'resources/startup/768x1004.png',
        '748x1024': 'resources/startup/748x1024.png',
        '1536x2008': 'resources/startup/1536x2008.png',
        '1496x2048': 'resources/startup/1496x2048.png'
    },

    launch: function() {
        // Destroy the #appLoadingIndicator element
        Ext.fly('appLoadingIndicator').destroy();

        // Initialize the main view
	    var main = Ext.create('MothershipEditor.view.Main');
        Ext.Viewport.add(main);

	    var homeCard = Ext.create('MothershipEditor.view.springboard.SpringboardCard')
	    var controller = MothershipEditor.app.getController(homeCard.controller);
	    main.push(homeCard);

	    controller.onCardWillAppear(homeCard);

	    MothershipEditor.CurrentBattle = null;
	    MothershipEditor.CurrentHero = null;

        this.applyOverrides();
    },

    applyOverrides: function() {
        Ext.data.writer.Json.override({
            /*
             * This function overrides the default implementation of json writer. Any hasMany relationships will be submitted
             * as nested objects. When preparing the data, only children which have been newly created, modified or marked for
             * deletion will be added. To do this, a depth first bottom -> up recursive technique was used.
             */
            getRecordData: function(record) {
                //Setup variables
                var me = this, i, association, childStore, data = record.data;

                //Iterate over all the hasMany associations
                if (record.saveAssociations) {
                    for (i = 0; i < record.associations.length; i++) {
                        association = record.associations.get(i);
                        data[association._associationKey] = null;
                        childStore = record[association._storeName];

                        //Iterate over all the children in the current association
                        childStore.each(function (childRecord) {

                            if (!data[association._associationKey]) {
                                data[association._associationKey] = [];
                            }

                            //Recursively get the record data for children (depth first)
                            var childData = this.getRecordData.call(this, childRecord);

                            /*
                             * If the child was marked dirty or phantom it must be added. If there was data returned that was neither
                             * dirty or phantom, this means that the depth first recursion has detected that it has a child which is
                             * either dirty or phantom. For this child to be put into the prepared data, it's parents must be in place whether
                             * they were modified or not.
                             */
                            if (childRecord.dirty | childRecord.phantom | (childData != null)) {
                                data[association._associationKey].push(childData);
                                record.setDirty();
                            }
                        }, me);

                        /*
                         * Iterate over all the removed records and add them to the preparedData. Set a flag on them to show that
                         * they are to be deleted
                         */
                        Ext.each(childStore.removed, function (removedChildRecord) {
                            //Set a flag here to identify removed records
                            removedChildRecord.set('forDeletion', true);
                            var removedChildData = this.getRecordData.call(this, removedChildRecord);
                            data[association._associationKey].push(removedChildData);
                            record.setDirty();
                        }, me);
                    }
                }

                var isPhantom = record.phantom === true,
                    writeAll = this.getWriteAllFields() || isPhantom,
                    nameProperty = this.getNameProperty(),
                    fields = record.getFields(),
                    changes, name, field, key, value;

                if (writeAll) {
                    fields.each(function(field) {
                        if (field.getPersist()) {
                            name = field.config[nameProperty] || field.getName();
                            value = record.get(field.getName());
                            if (field.getType().type == 'date') {
                                value = this.writeDate(field, value);
                            }
                            data[name] = value;
                        }
                    }, this);
                } else {
                    // Only write the changes
                    changes = record.getChanges();
                    for (key in changes) {
                        if (changes.hasOwnProperty(key)) {
                            field = fields.get(key);
                            if (field.getPersist()) {
                                name = field.config[nameProperty] || field.getName();
                                value = changes[key];
                                if (field.getType().type == 'date') {
                                    value = this.writeDate(field, value);
                                }
                                data[name] = value;
                            }
                        }
                    }
                    if (!isPhantom) {
                        // always include the id for non phantoms
                        data[record.getIdProperty()] = record.getId();
                    }
                }
                return data;
            }
        });
    },

    onUpdated: function() {
        Ext.Msg.confirm(
            "Application Update",
            "This application has just successfully been updated to the latest version. Reload now?",
            function(buttonId) {
                if (buttonId === 'yes') {
                    window.location.reload();
                }
            }
        );
    }
});
