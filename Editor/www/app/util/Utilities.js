/*
 * Copyright 2013 SirsiDynix.  All rights reserved.
 */
Ext.define('MothershipEditor.util.Utilities', {
	statics: {
		imageForHeroType: function(type) {
			if (type == "BASIC") {
				return "resources/images/hero1.png";
			}
			else if (type == "JUGGERNAUT") {
				return "resources/images/hero2.png";
			}
			else if (type == "SCIENTIST") {
				return "resources/images/hero3.png";
			}
		}
	}
});