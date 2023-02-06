using UnityEngine;
using System.Collections;

using Vectrosity;

public class TargetedEnergyShot : TargetedShot
{
	public LayerMask hitLayers;
	public LayerMask proxyDamageLayer;
	public Material laserMat;
	public Material laserTracerMat;

	public GameObject muzzleFlash;
	public GameObject mothershipImpactPrefab;
	public GameObject minionImpactPrefab;

	VectorLine shot;
	bool firing = false;
	Damagable _damagable = null;

	void Start() {
		if (_target != null) {
			_damagable = _target.GetComponent<Damagable>();
		}
	}

	public override bool Fire(Vector3 inheritedVelocity) {
		if (shot == null) {
			shot = new VectorLine("phaser", new Vector3[] {transform.position, transform.position}, laserMat, 10.0f);
		}
		if (!firing) {
			firing = true;
			StartCoroutine (FirePhaser());
			return true;
		}

		return false;
	}

	IEnumerator FirePhaser() {
		float duration = 0.2f, 
		elapsed = 0.0f;

		MasterAudio.PlaySound("sci_laser");
		Vector3 mulletPos = _muzzlePoint.position; mulletPos.z = LayerManager._5;
		GameObject mf = (GameObject)Instantiate (muzzleFlash, mulletPos, muzzleFlash.transform.localRotation);
		mf.transform.parent = transform;

		while (elapsed < duration) {
			Vector3 end = Vector3.Lerp(_muzzlePoint.position, _target.position, elapsed/duration);
			float distance = Vector3.Distance(_muzzlePoint.position, end);

			shot.Resize(new Vector3[] {_muzzlePoint.position, end});
			shot.Draw3D();

			RaycastHit[] hits = Physics.RaycastAll(_muzzlePoint.position, (end - _muzzlePoint.position).normalized, distance, hitLayers);
			if (hits.Length > 0) {
				for (int i = 0; i < hits.Length; i++) {
					RaycastHit hit = hits[i];
					MinionPhysicsVehicle mbv = hit.collider.GetComponent<MinionPhysicsVehicle>();
					if (mbv != null) {
						mbv.StopFollowPath(true);
					}

					Damagable dam = hit.collider.GetComponentInParent<Damagable>();
					if (dam != null) {
						dam.OnDamage(dam.maxHealth, LayerMask.NameToLayer("HeroProjectile"));
					}
				}
			}

			elapsed += Time.deltaTime;
			yield return null;
		}

		//Create the tracer
		VectorLine tracer = new VectorLine("tracer", new Vector3[] {_muzzlePoint.position, _target.position}, laserTracerMat, 10.0f);
		tracer.Draw3D();

		_damagable.OnDamage(damageAmt, LayerMask.NameToLayer("HeroProjectile"));
		shot.Resize(new Vector3[] {_muzzlePoint.position, _muzzlePoint.position});

		RaycastHit surface;
		Physics.Raycast(_muzzlePoint.position, (_target.position - _muzzlePoint.position).normalized, out surface, Mathf.Infinity, 1 << LayerMask.NameToLayer("Mothership"));
		Vector3 pos = surface.point; pos.z = LayerManager._3;
		GameObject impact = (GameObject)Instantiate (mothershipImpactPrefab, pos, mothershipImpactPrefab.transform.localRotation);
		impact.transform.right = -surface.normal;

		float tracerDuration = 0.25f;
		float tracerElapsed = 0.0f;
		Material mat = tracer.vectorObject.renderer.material;
		while (tracerElapsed < tracerDuration) {
			Color c = mat.color;
			c.a = Mathf.Lerp(1.0f, 0.0f, tracerElapsed/tracerDuration);
			mat.color = c; 
			tracerElapsed += Time.deltaTime;

			if (gameObject == null) {//In case the component is destroyed in the  middle of the coroutine
				VectorLine.Destroy(ref tracer);
			}

			yield return null;
		}

		if (tracer != null) {
			VectorLine.Destroy(ref tracer);
		}

		firing = false;
	}

	void OnDestroy() {
		if (shot != null) {
			VectorLine.Destroy(ref shot);
		}
	}
}

