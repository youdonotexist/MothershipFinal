using UnityEngine;
using System.Collections;

public class ShieldMinion : MinionTypeBase
{
	DamagableHitCount _damagable;

	public GameObject leftShield;
	public GameObject rightShield;

	exSprite[] sprites;

	protected override void Awake() {
		base.Awake();

		_damagable = GetComponent<DamagableHitCount>();
		sprites = GetComponentsInChildren<exSprite>();

		Collider lc = leftShield.GetComponentInChildren<Collider>();
		Collider rc = rightShield.GetComponentInChildren<Collider>();

		lc.gameObject.AddComponent<ShieldMinionArm>();
		rc.gameObject.AddComponent<ShieldMinionArm>();

		Physics.IgnoreCollision(rc, collider);
		Physics.IgnoreCollision(lc, collider);

		_damagable.DamageCallback.Add(OnDamage);
	}

	public override void OnPathEnd() {
		_vehicle.StopFollowPath(false);
		rigidbody.isKinematic = true;
		StartCoroutine(ExtendArms());
	}

	void OnDamage(float amt) {
		StartCoroutine(FlashDamage(0.1f));
	}

	public override void SetLevelDetails(PortState.MinionTypeLevelDetail levelDets) {
		levelDetails = levelDets;
		_damagable.hitCount = (int)levelDets.life;
		_damagable.hitsRemaining = (int)levelDets.life;
		_vehicle.maxSpeed *= levelDets.speed;
		_vehicle.damageMultiplier = levelDets.damage;

		if (onDetailsChange != null) {
			onDetailsChange(levelDets);
		}
	}

	IEnumerator ExtendArms() {
		Transform right = rightShield.transform;
		Transform left = leftShield.transform;
		Quaternion localRight = right.localRotation;
		Quaternion localLeft = left.localRotation;

		float t = 0.0f, duration = 0.25f;
		while (t <= 1.0f) {
			//left = -90, right = 90
			t += Time.deltaTime/duration;

			float step = Mathf.SmoothStep(0.0f, 1.0f, t);
			localRight.eulerAngles = new Vector3(Mathf.Lerp(0.0f, 90.0f, step), 0.0f, 0.0f);
			localLeft.eulerAngles = new Vector3(Mathf.Lerp(0.0f, -90.0f, step), 0.0f, 0.0f);

			right.localRotation = localRight;
			left.localRotation = localLeft;

			yield return null;
		}
	}

	IEnumerator FlashDamage(float duration) {
		float elapsed = 0.0f;

		for (int i = 0; i < sprites.Length; i++) {
			sprites[i].color = Color.green;
		}

		while (elapsed < duration) {
			elapsed += Time.deltaTime;
			yield return null;
		}
		
		for (int i = 0; i < sprites.Length; i++) {
			sprites[i].color = Color.white;
		}
		
	}
}

