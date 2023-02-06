using UnityEngine;
using System.Collections;

public class TurretMine : Deployable
{
	AudioSource _source;
	public AudioClip _deployClip;
	public AudioClip _DestroyClip;
	
	//Laser
	float lastFireTime = 1.0f;
	public float waitBetweenFire = 1.0f;
	public float turretMineProjectileDamage = 1.0f;
	int shotsPerWait = 1;
	int currentShotsPerWait = 0;
	public bool canFire = false;
	
	MothershipVehicle _mothership = null;
	TargetedShot _laser = null;
	
	
	void Start() {
		//TODO: Make this use a reference instead of finding
		_mothership = GameObject.Find("Mothership").GetComponent<MothershipVehicle>();
		_laser = GetComponent<TargetedShot>();
		_laser.damageAmt = turretMineProjectileDamage;

		transform.forward = new Vector3(1.0f, 0.0f, 0.0f);
	}
	
	public override void OnCreate(Vector3 start, Vector3 end) {
		//collider.enabled = false;
		rigidbody.MovePosition(start);
		StartCoroutine(AnimateMineRoutine(start, end));	
	}
	
	IEnumerator AnimateMineRoutine(Vector3 start, Vector3 end) {
		float duration = 2.0f;
		float elapsed = 0.0f;
		
		while (elapsed < duration) {
			rigidbody.MovePosition(Vector3.Lerp(start, end, elapsed/duration));
			
			elapsed += Time.deltaTime;
			yield return null;
		}

		rigidbody.MovePosition(end);
		
		OnFullyDeployed();
	}
	
	public override void OnFullyDeployed () {
		canFire = true;
		//collider.enabled = true;
		if (_mothership != null) {
			transform.forward = (_mothership.transform.position - transform.position).normalized;
			_laser.SetTarget(_mothership.transform);
		}
	}
	
	void Update() {
		if (canFire && _laser != null) {
			if (currentShotsPerWait < shotsPerWait) {
				bool didFire = _laser.Fire(Vector3.zero);
				if (didFire) {
					currentShotsPerWait++;
					lastFireTime = 0.0f;
				}
			}
			else {
				lastFireTime += Time.deltaTime;
				if (lastFireTime > waitBetweenFire) {
					currentShotsPerWait = 0;	
				}
			}
		}
	}
	
	void OnCollisionEnter(Collision c) {
		Damagable d = c.gameObject.GetComponent<Damagable>();
		if (d != null)
			d.OnDamage(100.0f, gameObject.layer);

		MasterAudio.PlaySound(_DestroyClip.name);
		Destroy (gameObject);
	}
	
	public void OnBecameInvisible() {
		Destroy (gameObject);	
	}
	
	void OnDestroy() {
		if (_node != null) {
			_node._object = null;
		}
	}
	
	
}

