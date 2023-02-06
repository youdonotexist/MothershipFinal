using UnityEngine;
using System.Collections;

public class DamagableHitCount : Damagable
{
	public int hitCount = 3;
	public int hitsRemaining;

	float hitRatio;

	void Start() {
		hitRatio = maxHealth / ((float) hitCount);
		hitsRemaining = hitCount;
	}

	public void OnDamageHitCount(int hits, int layer) {
		if (LayerMaskHelper.IsInLayerMask(layer, damageLayers)) {
			for (int i = 0; i < hits; i++) {
				currentHealth -= hitRatio;
				hitsRemaining--;
			}

			if (currentHealth <= 0.0f) {
				MasterAudio.PlaySound(_destroySound.name);
			}
			
			if (gameObject.layer == LayerMask.NameToLayer("Mothership")) {
				GamePlayHUD.Instance().AddToScore(hitRatio * hits * 100.0f);
			}

			for (int i = 0; i < DamageCallback.Count; i++) {
				DamageCallback[i](hitRatio * hits);
			}
		}
	}

	public override void OnDamage(float amount, int layer) {
		if (LayerMaskHelper.IsInLayerMask(layer, damageLayers)) {
			currentHealth -= hitRatio;
			hitsRemaining--;
			if (currentHealth <= 0.0f) {
				MasterAudio.PlaySound(_destroySound.name);
			}
			
			if (gameObject.layer == LayerMask.NameToLayer("Mothership")) {
				GamePlayHUD.Instance().AddToScore(amount * 100.0f);
			}

			for (int i = 0; i < DamageCallback.Count; i++) {
				DamageCallback[i](amount);
			}
		}
	}

	public override void SetMaxHealth(float max) {
		base.SetMaxHealth(max);

		hitRatio = maxHealth / ((float) max);
		hitsRemaining = (int)max;
	}

	public override bool IsHitCount() {
		return true;
	}
}

