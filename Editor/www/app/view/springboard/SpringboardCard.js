/**
 * Created by mdaly on 6/25/14.
 */

Ext.define('MothershipEditor.view.springboard.SpringboardCard', {
    extend: 'MothershipEditor.view.BaseCard',
    alias: 'widget.springboardcard',
    controller: 'SpringboardController',
    config: {
        layout: {
            type:'vbox',
            pack: 'center',
            align: 'center'
        },
        height: '100%',
        items: [
            {
                xtype: 'button',
                width: '90%',
                text: 'Battle Editor',
                cls: 'ms-add-button',
                flex: 1,
                action: 'battle_editor',
                margin: '1em'
            },
            {
                xtype: 'button',
                width: '90%',
                text: 'Upgrades Editor',
                cls: 'ms-add-button',
                flex: 1,
                action: 'minion_editor',
                margin: '1em'

            }
        ]
    }
});