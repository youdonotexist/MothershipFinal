/*
 * Copyright 2013 SirsiDynix.  All rights reserved.
 */

Ext.define('MothershipEditor.view.Workflow', {
    extend: 'Ext.Container',
	xtype: 'workflow',
    config: {
	    style: 'border-radius: 0.5em;',
        showAnimation: {
	        type: 'slideIn',
	        direction: 'up'
        },
	    hideAnimation: {
		    type: 'slideOut',
		    direction: 'down'
	    },

	    modal: true,
	    layout: 'vbox',
	    height: '100%',
	    zIndex: 10,

        items: [
	        {
		        xtype: 'container',
		        layout: {
			        type: 'hbox',
			        align: 'center',
			        pack: 'center'
		        },
		        style: 'border-bottom: 1px solid lightgray;',
		        height: '3em',

		        items: [
			        {
				        xtype: 'button',
				        iconCls: 'delete',
				        docked: 'left',
				        action: 'close_modal',
				        cls: 'workflow-close-button',
				        iconAlign: 'bottom',
				        hidden: true,
				        text: 'c'
			        },
			        {
				        xtype: 'label',
				        itemId: 'workflow_title',
				        html: '[Temporary Title]'
			        },
			        {
				        xtype: 'button',
				        iconCls: 'delete',
				        docked: 'right',
				        action: 'close_modal',
				        cls: 'workflow-close-button'
			        }
		        ]
	        },
	        {
		        xtype: 'container',
		        itemId: 'workflowcontents',
		        flex: 1,
		        layout: {
			        type: 'card',
			        //align: 'middle',
			        animation: {
				        duration: 300,
				        easing: 'ease-in-out',
				        type: 'slide',
				        direction: 'left'
			        }
		        }

	        }
        ]
    },

	/**
	 * Sets the modal title
	 * @param title
	 */
	setTitle: function (title) {
		this.down('#workflow_title').setHtml(title);
	},

    /**
     * Method that begins a workflow. Should be used through WorkflowController.start method.
     *
     * @param clear
     * @param startView
     * @param callback
     */
    start: function (clear, startView, callback) {
        var me = this;

        if (clear) {
            me.removeAll(true, true);
        }

	    me.contents = me.down('#workflowcontents');

	    me.contents.add([startView]);
	    me.contents.setActiveItem(startView);
    },

    /**
     * Adds an item to the stack and animates to that view. Should be used through WorkflowController.addItem method.
     *
     * @param view
     * @param callback
     */
	addItem: function (view, callback) {
        var me = this,
	        index = me.contents.getItems().length,
            animation = new Ext.fx.layout.Card({type: 'slide', direction: 'left', duration: 300});

        animation.on('animationend', callback);
	    me.contents.add([view]);
	    me.contents.animateActiveItem(index, animation);
	},

	/**
	 * Pops an item from the Workflow stack
	 */
	popItem: function() {
		var me = this,
            items = me.getItems(),
			lastIndex = items.length - 1,
			animation = new Ext.fx.layout.Card({type: 'slide', direction: 'right', duration: 300});

		if (me.getActiveItem() === items.getAt(lastIndex)) {
			animation.on('animationend', function () {
                me.removeAt(lastIndex, true);
			});
            me.animateActiveItem(lastIndex-1, animation);
		}
	},

    /**
     * Removes the item from the workflow
     * @param item - item or index of item
     */
    removeItem: function (item) {
        if (typeof item === 'number') {
            this.removeAt(item);
        }
        else {
            this.remove(item)
        }
    },

    /**
     * Performs cleanup on a Workflow after it has completed/is closed.
     */
    finish: function (clear) {
	    this.hide();
        var view = this,
            task = Ext.create(
                'Ext.util.DelayedTask',
                function () {
                    view.removeAll(true, true);
                }
            );
        task.delay(300);
    },

    /**
     * Returns if the first view in the workflow is active
     * @return {Boolean}
     */
    isFirstViewActive: function () {
        return this.getActiveItem() === this.getAt(0);
    }
});