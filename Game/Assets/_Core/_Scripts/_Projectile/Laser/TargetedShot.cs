using UnityEngine;
using System.Collections;

public class TargetedShot : LaserProjectile
{
	protected Transform _target;
	
	public override bool Fire(Vector3 inheritedVelocity) {
		if (_target != null) {
			if (_projectilePrefab != null) {
				Vector3 forward = Vector3.Normalize(_target.transform.position - transform.position);
				GameObject instance = (GameObject)Instantiate (_projectilePrefab);
				HeroSingleShot _shot = instance.GetComponent<HeroSingleShot>();
				_shot.damageAmt = damageAmt;
				instance.transform.forward = forward;
				if (inheritedVelocity.x > 0.0f) instance.rigidbody.velocity = new Vector3(inheritedVelocity.x, 0.0f, 0.0f); 
				instance.rigidbody.constantForce.force = (forward * 0.0001f);
				instance.transform.parent = transform;
				
				Vector3 pos = transform.position; pos.z = LayerManager._4;
				instance.transform.position = pos;
			
				return true;
			}
		}
		
		return false;
	}
	
	public void SetTarget(Transform target) {
		_target = target;
	}
}

