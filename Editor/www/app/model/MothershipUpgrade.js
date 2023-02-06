/**
 * Created by mdaly on 6/25/14.
 */
/**
 * Created by mdaly on 6/25/14.
 */
Ext.require('MothershipEditor.model.Upgrade');
Ext.define('MothershipEditor.model.MothershipUpgrade', {
    extend: 'MothershipEditor.model.Upgrade',
    config: {
        proxy: {
            type: 'rest',
            api: {
                read    : '/upgrades/mothership',
                update  : '/upgrades'
            },
            url : '/upgrades'
        }
    }
});