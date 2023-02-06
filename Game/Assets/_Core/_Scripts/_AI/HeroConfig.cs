using UnityEngine;
using System.Collections;

public class HeroConfig
{
	public string[] directives;
	public string heroName;
	public string heroId;
	IDictionary heroAttributes;
	
	public HeroConfig (string[] rules, IDictionary attributes, string name) {
		directives = rules;
		heroName = name;
		heroAttributes = attributes;
		heroId = (string) attributes["id"];
	}

	public string GetHeroId() {
		return heroId;
	}
	
	public int getInt(string key) {
		object o = (object) heroAttributes[key];
		if (o == null) {
			Debug.Log ("Missing Value for Key: " + key);
			return 1;
		}
		else{	
			return int.Parse(heroAttributes[key].ToString());
		}
	}
	
	public float getFloat(string key) {
		object o = (object) heroAttributes[key];
		if (o == null) {
			Debug.Log ("Missing Value for Key: " + key);	
			return 1.0f;
		}
		else {
			return float.Parse(o.ToString());		
		}
	}
	
	public string getString(string key) {
		object o = (object) heroAttributes[key];
		if (o == null) {
			Debug.Log ("Missing Value for Key: " + key);	
			return null;
		}
		else {
			return o.ToString();
		}
	}
	
	public bool getBool(string key) {
		object o = (object)heroAttributes [key];
		if (o == null) {
			Debug.Log ("Missing Value for Key: " + key);	
			return false;
		}

		return bool.Parse(heroAttributes[key].ToString());	
	}
	
}

