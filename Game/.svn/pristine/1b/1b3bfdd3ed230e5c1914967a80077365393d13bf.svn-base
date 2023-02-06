using UnityEngine;
using System.Collections;

public class UIColorSwitcher : MonoBehaviour
{
	public Color nesColor;
	public Color msColor;
	public Color snesColor;

	// Use this for initialization
	void Awake ()
	{
		string encounterType = MissionDetails.Instance.encounterType;
		Debug.Log ("Init Color Switcher with Encounter Type: " + encounterType); 
		if (encounterType != null && encounterType.Length > 0) {
			SwitchColor(ResourceManager.QualityMapping[encounterType]);
		}
	}

	public void SwitchColor(string qualityType) {
		UIWidget widget = GetComponent<UIWidget>();

		if (widget == null) return;
		widget.color = ColorForType(qualityType);
	}

	public Color ColorForBattleType(string battleType) {
		if (ResourceManager.QualityMapping.ContainsKey(battleType)) {
			return ColorForType (ResourceManager.QualityMapping[battleType]);
		}
		return ColorForType("nes");
	}

	public Color ColorForType(string qualityType) {
		if ("nes".Equals(qualityType)) {
			return nesColor;
		}
		else if ("ms".Equals(qualityType)) {
			return msColor;
		}
		else if ("snes".Equals(qualityType)) {
			return snesColor;
		}

		return Color.red;
	}
}

