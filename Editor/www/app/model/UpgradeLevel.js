/**
 * Created by mdaly on 6/25/14.
 */
Ext.define('MothershipEditor.model.UpgradeLevel', {
    extend: 'Ext.data.Model',
    config: {
        fields: [
            'id',
            'title',
            'description',
            'damage',
            'cost',
            'speed',
            'life',
            'reload',
            'index'
        ]
    }
});