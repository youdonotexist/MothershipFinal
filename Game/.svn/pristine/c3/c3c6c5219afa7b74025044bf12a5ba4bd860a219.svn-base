using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class Damagable : MonoBehaviour
{
	public float currentHealth = 200.0f;
	public float maxHealth;
	public float outDamageAmount = 0.0f;
	
	public LayerMask damageLayers;
	
	public AudioClip _destroySound;

	public Color32[] colors;
	
	public enum COLLISION_TYPE {
		DAMAGE,
		REFLECT,
		DISABLE,
		SHIP,
		MINION,
		SMALL_LASER
	}
	
	public COLLISION_TYPE collisionType = COLLISION_TYPE.DAMAGE;
	
	void Awake() {
		currentHealth = maxHealth;	
	}

	public List<Callback<float>> DamageCallback = new List<Callback<float>>();
	public List<Callback<float>> HealCallback = new List<Callback<float>>();
	
	public virtual void OnDamage(float amount, int layer) {
		if (LayerMaskHelper.IsInLayerMask(layer, damageLayers)) {
			currentHealth -= amount;
			if (currentHealth <= 0.0f && _destroySound != null) {
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
	
	public void OnHeal(float amount) {
		currentHealth += amount;
		currentHealth = Mathf.Min(currentHealth, maxHealth);

		for (int i = 0; i < HealCallback.Count; i++) {
			HealCallback[i](amount);
		}
	}
	
	public virtual void SetMaxHealth(float max) {
		maxHealth = max;
		currentHealth = maxHealth;
	}
	
	public virtual float Health {
		set{ currentHealth = value;}
		get{ return currentHealth; }
	}
	
	public virtual float MaxHealth {
		set { maxHealth = value; }
		get { return maxHealth; } 
	}
	
	public float HealthPercentage {
		get { return currentHealth/maxHealth; }
	}

	public virtual bool IsHitCount() {
		return false;
	}
}

