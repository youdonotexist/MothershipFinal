using UnityEngine;
using System.Collections;

public class SpriteSwitcherMinion2Hit : SpriteSwitcherMinion
{
	protected override void OnDetailsChange(PortState.MinionTypeLevelDetail levelDets) {
		if (qualityLevel == "nes") {
			string spriteName = nesSpriteName + "-lvl" + (levelDets.index + 1).ToString() + "-2";
			exAtlas atlas = ResourceManager.Instance.nesAtlas;
			_sprite.SetSprite(atlas, atlas.GetIndexByName(spriteName));
			transform.parent.GetComponent<Damagable>().colors = nesColors;
		}
		else if (qualityLevel == "ms") {
			string spriteName = msSpriteName + "-lvl" + (levelDets.index + 1).ToString() + "-2";
			exAtlas atlas = ResourceManager.Instance.msAtlas;
			_sprite.SetSprite(atlas, atlas.GetIndexByName(spriteName));
			transform.parent.GetComponent<Damagable>().colors = msColors;
		}
		else if (qualityLevel == "snes") {
			string spriteName = snesSpriteName + "-lvl" + (levelDets.index + 1).ToString() + "-2";
			exAtlas atlas = ResourceManager.Instance.snesAtlas;
			_sprite.SetSprite(atlas, atlas.GetIndexByName(spriteName));
			transform.parent.GetComponent<Damagable>().colors = snesColors;
		}
	}

	public override int GetSpriteIndexForQuality(string quality) {
		if ("nes".Equals(quality)) {
			return ResourceManager.Instance.nesAtlas.GetIndexByName(nesSpriteName+"-lvl1-2");
		}
		else if ("ms".Equals(quality)) {
			return ResourceManager.Instance.msAtlas.GetIndexByName(msSpriteName+"-lvl1-2");
		}
		else if ("snes".Equals(quality)) {
			return ResourceManager.Instance.snesAtlas.GetIndexByName(snesSpriteName+"-lvl1-2");
		}
		
		return 0;
	}
}

