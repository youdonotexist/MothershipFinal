using UnityEngine;
using System.Collections;

public class DoubleHealthMinion : MinionTypeBase {
	DamagableHitCount _damagable;

	protected override void Awake() {
		base.Awake ();
		_damagable = GetComponent<DamagableHitCount>();
		_damagable.MaxHealth *= 2.0f;
		_damagable.Health = _damagable.MaxHealth;
		_damagable.DamageCallback.Add (OnDamage);

		_vehicle.damageMultiplier = _damagable.hitsRemaining * 0.5f;
	}

	void OnDamage(float damage) {
		if (_damagable.hitsRemaining == 1) {
			string spritename = ResourceManager.Instance.GetQualityString() + 
										"-minion-2hit-lvl" + 
										(levelDetails.index + 1).ToString() + 
										"-1";
			int index =  _sprite.atlas.GetIndexByName(spritename);
			_sprite.SetSprite(_sprite.atlas, index);
		}

		_vehicle.damageMultiplier = _damagable.hitsRemaining * 0.5f;
	}	

	void OnDestroy() {
		_damagable.DamageCallback.Remove (OnDamage);
	}
}
