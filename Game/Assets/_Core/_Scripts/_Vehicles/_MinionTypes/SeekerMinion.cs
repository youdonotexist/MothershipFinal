using UnityEngine;
using System.Collections;

public class SeekerMinion : MinionTypeBase
{
	public LayerMask seekLayers;
	
	public Transform _target;
	Transform _cachedTransform;
	MinionBaseVehicle _cachedVehicle;

	Vector3 lastDirection;
	float launchElapsed = 0.0f;
	float launchWait = 0.2f;

	protected override void Awake() {
		base.Awake();

		_cachedTransform = transform;
		_cachedVehicle = GetComponent<MinionBaseVehicle>();
	}

	void Start() {
		lastDirection = transform.forward;
	}

	// Update is called once per frame
	void Update ()
	{
		if (!collider.enabled) return;

		if (_target == null) {
			rigidbody.velocity = lastDirection * _cachedVehicle.maxSpeed;	
			transform.forward = lastDirection;
		}
		else {
			if (launchElapsed < launchWait) {
				rigidbody.velocity = lastDirection * _cachedVehicle.maxSpeed;	
				transform.forward = lastDirection;
				launchElapsed += Time.deltaTime;
			}
			else {
				lastDirection = (_target.position - _cachedTransform.position).normalized;
				if (!rigidbody.isKinematic)
					rigidbody.velocity = Vector3.Lerp(rigidbody.velocity, lastDirection * _cachedVehicle.maxSpeed, 0.2f);
				transform.forward = Vector3.Lerp(transform.forward, lastDirection, 0.2f);
			}
		}

		/*if (_target == null) {
			Collider[] hits = Physics.OverlapSphere(_cachedTransform.position, radius * 4.0f, seekLayers); 
			float closestDistance = Mathf.Infinity;
			int closestIndex = -1;
			for (int i = 0; i < hits.Length; i++) {
				Collider c = hits[i];
				float d = Vector3.Distance(c.transform.position, _cachedTransform.position);
				if (d < closestDistance) {
					closestDistance = d;
					closestIndex = i;
				}
			}


			if (closestIndex != -1) {
				_target = hits[closestIndex].transform;
				_cachedVehicle.StopFollowPath(false);

				lastDirection = (_target.position - _cachedTransform.position).normalized;
				rigidbody.velocity = lastDirection * _cachedVehicle.maxSpeed;
			}
		}
		else {
			if (_target != null) {
				lastDirection = (_target.position - _cachedTransform.position).normalized;
				rigidbody.velocity = lastDirection * _cachedVehicle.maxSpeed;
				transform.forward = lastDirection;
			}
			else {
				rigidbody.velocity = lastDirection * _cachedVehicle.maxSpeed;	
				transform.forward = lastDirection;
			}

		}*/
	}

	void OnDrawGizmos() {
		if (_target != null) {
			Debug.DrawLine(transform.position, _target.position);
		}
	}

	public void SetTarget(Transform target) {
		_target = target;
		launchElapsed = 0.0f;
	}
}

