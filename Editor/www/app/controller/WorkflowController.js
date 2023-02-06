/**
 * Copyright 2013 SirsiDynix.  All rights reserved.
 *
 * Workflow Controller, it does stuff
 */

Ext.require([
	'MothershipEditor.view.Workflow'
]);

 Ext.define('MothershipEditor.controller.WorkflowController', {
    extend:'Ext.app.Controller',

    index:0,
    workflowItems:null,
    modalWindow:null,

	config: {
        control: {
            'workflow button[action=close_modal]': {
                tap: 'closeModal'
            },
            'workflowModal button[action=close_modal]': {
                tap: 'closeModal'
            },
	        'workflowModal button[action=workflow_back]': {
		        tap: 'onBackButtonTapped'
	        }
        }
	},

	/**
	 * Starts a workflow. Only use to start a new workflow task
	 * @param startView
     * @param configs
     *          .backButtonHidden - default: true
     *          .closeButtonHidden - default: false
     *          .isNotHistoryItem
     * @param inConfig
     * @param callbackConfig
	 */
	start: function(startView) {
        var me = this,
	        controllerName = startView.controller;

        me.modalWindow = Ext.create("MothershipEditor.view.Workflow", {
            title: startView ? startView.title : "Loading..",
	        hidden: true
        });

		me.modalWindow.setTitle(startView ? startView.title : "Loading..");

		me.workflowData = {};

        Ext.Viewport.add(me.modalWindow);

		if (controllerName) {
			var controller = MothershipEditor.app.getController(controllerName);
			if (controller) {
				controller.onWorkflowViewWillAppear(startView, true);
			}
		}

        me.modalWindow.start(null, startView, null);
		me.modalWindow.show();
	},

    /**
     * Closes the modal and removes all children
     */
    closeModal: function () {
        var me = this;

        me.finish();
    },

    /**
     * Clears the current modalWindow workflow.  If no modalWindow
     * exists, the WorkflowController init function is called
     *
     */
    clearWorkflow:function () {
        var me = this;

        me.index = 0;
        me.modalWindow.destroy();
        delete me.modalWindow;
        for (var i = 0; i < me.workflowControllers.length; i++) {
            me.workflowControllers[i].cleanup();
        }
        me.workflowControllers = [];
    },

     /**
      * Returns the active workflow view
      * @return {*}
      */
     getActiveItem: function () {
         return this.workflow ? this.workflow.getActiveItem() : null;
     },

     /**
      * Returns the list of workflow views
      * @return {*}
      */
     getWorkflowItems: function () {
         return this.workflowItems.items;
     },

    /**
     * Add a new workflow item
     *
     * @param workflowItem
     * @param callback
     */
    addItem:function (workflowItem, callback) {
        var me = this,
	        controllerName = workflowItem.controller;

	    if (controllerName) {
		    var controller = MothershipEditor.app.getController(controllerName);
		    if (controller) {
			    controller.onWorkflowViewWillAppear(workflowItem, true);
		    }
	    }

        me.modalWindow.setTitle(workflowItem.title);
        me.modalWindow.addItem(workflowItem, callback);
        //me.modalWindow.setBackButtonHidden(me.backButtonHidden);
        //me.modalWindow.setCloseModalHidden(me.closeButtonHidden);
    },

	/**
	 * Used to pop a view from the work flow. Work in conjunction with the 'allowsBackButton' config
	 */
	popItem: function() {
		var me = this;

        me.modalWindow.popItem();
        me.modalWindow.setTitle(me.workflow.getActiveItem().title);
        //me.modalWindow.setBackButtonHidden(me.backButtonHidden || me.workflow.isFirstViewActive());
        //me.modalWindow.setCloseModalHidden(me.closeButtonHidden);
	},

    /**
     * Removes the item from the workflow.
     * @param item - item or index of item
     */
    removeItem: function (item) {
        this.modalWindow.removeItem(item);
    },

    /**
     * Go to the next item in the workflow
     *
     */
    goToNextItem:function () {
        var me = this,
            modalWindow = me.modalWindow;

        me.index++;
        if (me.index > me.workflowItems.items.items.length - 1) {
            me.clearWorkflow();
            return;
        }
        else if (modalWindow.hidden && me.workflowItems.items.items.length > 0) {
            modalWindow.show();
        }
        me.workflowItems.getLayout().next();
        modalWindow.header.setTitle(me.workflowItems.getLayout().getActiveItem().title);
    },

    finish: function () {
        this.modalWindow.finish();
    },

    /**
     * Applies the maskConfig to the workflow view
     * @param maskConfig
     */
    setMaskedWorkflow: function (maskConfig) {
        this.modalWindow.setMasked(maskConfig);
    },

	/**
	 * Button handler for the workflow back button
	 * @param button
	 */
	onBackButtonTapped: function(button) {
		this.popItem();
	},

    /**
     * Hides the close back header buttons. And prevents history from changing on device back button.
     * @param prevent - default: true
     */
    preventWorkflowTransition: function (prevent) {
        var me = this;

        prevent = prevent !== undefined ? prevent : true;
        me.modalWindow.setCloseModalHidden(prevent);
        me.modalWindow.setBackButtonHidden(prevent);
        me.isNotHistoryItem = prevent;
        me.closeButtonHidden = true;
    },

	addWorkflowData: function(key, value) {
		this.workflowData[key] = value;
	},

	 getWorkflowData: function(key) {
		 return this.workflowData[key];
	 }
});