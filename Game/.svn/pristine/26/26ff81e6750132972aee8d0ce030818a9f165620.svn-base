using UnityEngine;
using System.Collections;

public class SpriteSwitcherMinion : SpriteSwitcher
{
	MinionTypeBase _type;

	protected override void Awake() {
		base.Awake();
		_type = transform.parent.GetComponent<MinionTypeBase>();
		_type.onDetailsChange = OnDetailsChange;
	}

	protected virtual void OnDetailsChange(PortState.MinionTypeLevelDetail levelDets) {
		if (qualityLevel == "nes") {
			string spriteName = nesSpriteName + "-lvl" + (levelDets.index + 1).ToString();
			exAtlas atlas = ResourceManager.Instance.nesAtlas;
			_sprite.SetSprite(atlas, atlas.GetIndexByName(spriteName));
			transform.parent.GetComponent<Damagable>().colors = nesColors;
		}
		else if (qualityLevel == "ms") {
			string spriteName = msSpriteName + "-lvl" + (levelDets.index + 1).ToString();
			exAtlas atlas = ResourceManager.Instance.msAtlas;
			_sprite.SetSprite(atlas, atlas.GetIndexByName(spriteName));
			transform.parent.GetComponent<Damagable>().colors = msColors;
		}
		else if (qualityLevel == "snes") {
			string spriteName = snesSpriteName + "-lvl" + (levelDets.index + 1).ToString();
			exAtlas atlas = ResourceManager.Instance.snesAtlas;
			_sprite.SetSprite(atlas, atlas.GetIndexByName(spriteName));
			transform.parent.GetComponent<Damagable>().colors = snesColors;
		}
	}

	[ExecuteInEditMode]
	public override void OnSpriteQualityChange(string qualityType, string appender) {
		base.OnSpriteQualityChange(qualityType, "-lvl1");
	}

	public override int GetSpriteIndexForQuality(string quality) {
		if ("nes".Equals(quality)) {
			return ResourceManager.Instance.nesAtlas.GetIndexByName(nesSpriteName+"-lvl1");
		}
		else if ("ms".Equals(quality)) {
			return ResourceManager.Instance.msAtlas.GetIndexByName(msSpriteName+"-lvl1");
		}
		else if ("snes".Equals(quality)) {
			return ResourceManager.Instance.snesAtlas.GetIndexByName(snesSpriteName+"-lvl1");
		}
		
		return 0;
	}


}

