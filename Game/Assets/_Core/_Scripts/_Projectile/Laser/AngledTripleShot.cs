using UnityEngine;
using System.Collections;

public class AngledTripleShot : LaserProjectile
{
	public bool center = true;
	public bool left = true;
	public bool right = true;
	
	Transform _transform;
	
	void Start() {
		_transform = transform;	
		
		//Vector3 pos = _transform.position;
		//pos.z = LayerManager._4;
		//_transform.position = pos;
	}
	
	
	public override bool Fire(Vector3 inheritedVelocity) {
		bool blocked = Physics.Raycast(transform.position, this.fireForward, Mathf.Infinity, LayerMaskHelper.OnlyIncluding(LayerMask.NameToLayer("HeroShield")));
		if (_projectilePrefab != null && blocked == false) {
			//Center
			if (center) {
				GameObject instance = (GameObject)Instantiate (_projectilePrefab);
				instance.transform.forward = this.fireForward;
				if (inheritedVelocity.x > 0.0f) instance.rigidbody.velocity = inheritedVelocity;
				instance.rigidbody.velocity = this.fireForward * 1000.0f;
				instance.rigidbody.drag = 0.0f;
				instance.transform.parent = _transform;
				
				Vector3 pos = _muzzlePoint.position; pos.z = LayerManager._4;
				instance.transform.position = pos;
			}
			
			//Left
			if (left) {
				float theta = Mathf.Deg2Rad * 45;
				Vector3 forward = this.fireForward;
	
				float cs = Mathf.Cos(theta);
				float sn = Mathf.Sin(theta);
				
				float px = forward.x * cs - forward.z * sn; 
				float py = forward.x * sn + forward.z * cs;
				
				GameObject instance = (GameObject)Instantiate (_projectilePrefab);
				instance.transform.forward = new Vector3(px, py, 0.0f);
				if (inheritedVelocity.x > 0.0f) instance.rigidbody.velocity = inheritedVelocity;
				instance.rigidbody.velocity = new Vector3(px, py, 0.0f) * 1000.0f;
				instance.rigidbody.drag = 0.0f;
				//instance.transform.parent = _transform;
				
				Vector3 pos = _muzzlePoint.position; pos.z = LayerManager._4;
				instance.transform.position = pos;
			}
			
			//Right
			if (right) {
				float theta = Mathf.Deg2Rad * -45;
				Vector3 forward = this.fireForward;
	
				float cs = Mathf.Cos(theta);
				float sn = Mathf.Sin(theta);
				
				float px = forward.x * cs - forward.z * sn; 
				float py = forward.x * sn + forward.z * cs;
				
				GameObject instance = (GameObject)Instantiate (_projectilePrefab);
				instance.transform.forward = new Vector3(px, py, 0.0f);
				if (inheritedVelocity.x > 0.0f) instance.rigidbody.velocity = inheritedVelocity;
				//instance.rigidbody.constantForce.force = new Vector3(px, py, 0.0f) * 0.0001f;
				instance.rigidbody.velocity = new Vector3(px, py, 0.0f) * 1000.0f;
				instance.rigidbody.drag = 0.0f;
				instance.transform.parent = _transform;
				
				Vector3 pos = _muzzlePoint.position; pos.z = LayerManager._4;
				instance.transform.position = pos;
			}
			
			
			return true;
		}
		
		return false;
	}
	
	void OnDrawGizmos() {
		Debug.DrawLine(transform.position, transform.position + (transform.right * 100.0f));	
	}
}

