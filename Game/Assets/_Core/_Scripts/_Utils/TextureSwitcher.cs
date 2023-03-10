using UnityEngine;
using System.Collections;

public class TextureSwitcher : MonoBehaviour {
	
	public Texture2D nesTexture;
	public Texture2D msTexture;
	public Texture2D latestTexture;

	
	void OnEnable() {
		if (MissionDetails.Instance.encounterType == "BASIC") {
			OnTextureQualityChange("nes");
		}
		else if (MissionDetails.Instance.encounterType == "JUGGERNAUT") {
			OnTextureQualityChange("ms");
		}
		else if (MissionDetails.Instance.encounterType == "SCIENTIST") {
			OnTextureQualityChange("snes");
		}
		else if (MissionDetails.Instance.encounterType == "MIXED"){
			OnTextureQualityChange("snes");
		}
		else {
			OnTextureQualityChange("snes");
		}
	}

	public void OnTextureQualityChange(string qualityType) {
		if ("nes".Equals(qualityType)) {
			renderer.sharedMaterial.SetTexture("_MainTex", nesTexture);
		}
		else if ("ms".Equals(qualityType)) {
			renderer.sharedMaterial.SetTexture("_MainTex", msTexture);
		}
		else if ("snes".Equals(qualityType)) {
			renderer.sharedMaterial.SetTexture("_MainTex", latestTexture);
		}
		else {
			renderer.sharedMaterial.SetTexture("_MainTex", latestTexture);
		}
	}
}
