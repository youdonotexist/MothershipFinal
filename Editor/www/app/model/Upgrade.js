/**
 * Created by mdaly on 6/25/14.
 */
Ext.require('MothershipEditor.model.UpgradeLevel');
Ext.define('MothershipEditor.model.Upgrade', {
    extend: 'Ext.data.Model',
    config: {
        fields:[
            {name: 'id', mapping: '_id', persist: false},
            'type',
            'usage',
            'component',
            'index'
        ],
        associations: [
            {
                type: 'hasMany',
                name: 'levels',
                model: 'MothershipEditor.model.UpgradeLevel',
                associationKey : 'levels'
            }
        ],
        proxy: {
            type: 'rest',
            url : '/upgrades'
        }
    }
});