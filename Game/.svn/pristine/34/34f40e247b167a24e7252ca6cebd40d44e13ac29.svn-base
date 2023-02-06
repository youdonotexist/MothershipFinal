using UnityEngine;
using System.Collections;
using System.Collections.Generic;


public class ResourceManager : Singleton<ResourceManager>
{
	public exAtlas nesAtlas;
	public exAtlas msAtlas;
	public exAtlas snesAtlas;
	public exAtlas psAtlas;

	public static Dictionary<string, string> QualityMapping = new Dictionary<string, string>()
	{
		{ "BASIC", "nes"},
		{ "JUGGERNAUT", "ms"},
		{ "SCIENTIST", "snes"},
		{ "MIXED", "snes"}
	};
	
	protected ResourceManager () {}

	//Only used for debris building
	public void LoadAtlases() {
		this.nesAtlas = (exAtlas) Resources.Load("Atlases/_NES/NESAtlas", typeof(exAtlas));	
		this.msAtlas = (exAtlas) Resources.Load("Atlases/_MS/MSAtlas", typeof(exAtlas));
		this.snesAtlas = (exAtlas) Resources.Load("Atlases/_SNES/ModernAtlas", typeof(exAtlas));
	}

	public void UnloadAtlases() {
		Resources.UnloadAsset(this.nesAtlas);	
		Resources.UnloadAsset(this.snesAtlas);
		Resources.UnloadAsset(this.msAtlas);
	}

	public string GetQualityString() {
		string qualityType = MissionDetails.Instance.encounterType;
		if ("BASIC".Equals(qualityType)) {
			return "nes";
		}
		else if ("JUGGERNAUT".Equals(qualityType)) {
			return "ms";
		}
		else if ("SCIENTIST".Equals(qualityType)) {
			return "snes";
		}
		else {
			return "ps";
		}
	}

	public exAtlas AtlasForType(string type) {
		if ("nes".Equals(type)) {
			return nesAtlas;
		}
		else if ("ms".Equals(type)) {
			return msAtlas;
		}
		else if ("snes".Equals(type)) {
			return snesAtlas;
		}
		else {
			return psAtlas;
		}
	}

	public exAtlas loadNesAtlas() {
		if (nesAtlas == null) {
			this.nesAtlas = (exAtlas) Resources.Load("Atlases/_NES/NESAtlas", typeof(exAtlas));	

			Resources.UnloadAsset(this.snesAtlas);
			Resources.UnloadAsset(this.msAtlas);
			Resources.UnloadAsset(this.psAtlas);

			this.snesAtlas = null;
			this.msAtlas = null;
			this.psAtlas = null;
		}

		return nesAtlas;
	}

	public exAtlas loadMsAtlas() {
		if (msAtlas == null) {
			this.msAtlas = (exAtlas) Resources.Load("Atlases/_MS/MSAtlas", typeof(exAtlas));

			Resources.UnloadAsset(this.snesAtlas);
			Resources.UnloadAsset(this.nesAtlas);
			Resources.UnloadAsset(this.psAtlas);
			
			this.snesAtlas = null;
			this.nesAtlas = null;
			this.psAtlas = null;
		}
		
		return msAtlas;
	}

	public exAtlas loadSnesAtlas() {
		if (snesAtlas == null) {
			this.snesAtlas = (exAtlas) Resources.Load("Atlases/_SNES/ModernAtlas", typeof(exAtlas));

			Resources.UnloadAsset(this.msAtlas);
			Resources.UnloadAsset(this.nesAtlas);
			Resources.UnloadAsset(this.psAtlas);

			this.msAtlas = null;
			this.nesAtlas = null;
			this.psAtlas = null;
		}

		return snesAtlas;
	}
}

