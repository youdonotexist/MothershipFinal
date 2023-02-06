using UnityEngine;
using System.Collections;

public class MinionVehicle : MinionBaseVehicle
{
	float lastPointTime = 0.0f;
	float lastVelocity = 0.0f;
	Vector3 lastForward;
	
	protected TimestampPoint fromPoint = null;
	protected TimestampPoint goToPoint = null;
	
	AudioSource _audioSource = null;
	
	// Use this for initialization
	void Start ()
	{	
		_damagable = GetComponent<Damagable>();
		collider.enabled = false;
	}
	
	public void SetFollowPath() {
		FollowPath = true;
		MasterAudio.PlaySound(_launchEffect.name);
		MasterAudio.PlaySound (_flyEffect.name + portIndex.ToString());
		
		collider.enabled = true;
	}
	
	public override void StopFollowPath(bool keepMovint) {
		FollowPath = false;
		_audioSource.Stop();
		rigidbody.velocity = Vector3.zero;
		rigidbody.isKinematic = true;
	}
	
	void Update() {
		if (_damagable.Health <= 0.0f) {
			parentPort.MinionDestroyed();
			Destroy (gameObject);
		}
	}
	
	// Update is called once per frame
	void FixedUpdate ()
	{
		if (FollowPath) {
			if (goToPoint == null && path.AtEnd() == false) {
				goToPoint = path.Begin();
				transform.position = goToPoint.point;
				
				fromPoint = goToPoint;
				goToPoint = path.Next();
				
				float dist = (goToPoint.point - fromPoint.point).magnitude;
				float dt = goToPoint.timestamp;
				lastVelocity = Mathf.Min (dist/dt, maxSpeed);
				goToPoint.timestamp = dist/lastVelocity;
				
				lastForward =  (goToPoint.point - fromPoint.point).normalized;
			}
			
			if (goToPoint != null) { //Follow to the next node
				if (lastPointTime < goToPoint.timestamp) {
					rigidbody.MovePosition(Vector3.Slerp(fromPoint.point, goToPoint.point, lastPointTime/goToPoint.timestamp));
					//Vector3 dir = (goToPoint.point - transform.position).normalized;
					//rigidbody.velocity = lastVelocity * dir;
					//rigidbody.AddForce((Time.fixedDeltaTime * lastVelocity) * dir, ForceMode.VelocityChange);
					lastPointTime += Time.fixedDeltaTime;
				}
				else {
					lastPointTime = 0.0f;
					fromPoint = goToPoint;
					goToPoint = path.Next();
					
					if (goToPoint != null) {
						float dist = (goToPoint.point - fromPoint.point).magnitude;
						float dt = goToPoint.timestamp;
						lastVelocity = Mathf.Min (dist/dt, maxSpeed);
						goToPoint.timestamp = dist/lastVelocity;
						
						lastForward =  (goToPoint.point - fromPoint.point).normalized;
						transform.right = new Vector3(0.0f, 0.0f, 1.0f);
						transform.forward = lastForward;
						
						if (transform.right.z > 0.0f) {
							Vector3 scale = transform.localScale;
							transform.localScale = new Vector3(	Mathf.Abs(scale.x), Mathf.Abs(scale.y), Mathf.Abs(scale.z));
						}
						else {
							Vector3 scale = transform.localScale;
							transform.localScale = new Vector3(	-Mathf.Abs(scale.x), -Mathf.Abs(scale.y), -Mathf.Abs(scale.z));
						}
					}
					
					if (path.AtEnd()) {
						rigidbody.velocity = lastForward * Mathf.Min(lastVelocity, maxSpeed);
					}
				}
			}
			else {
				if (path.AtEnd()) {
					rigidbody.velocity = lastForward * Mathf.Min(lastVelocity, maxSpeed);
				}	
			}
		}
	}
	
	public override void SetPath(Path2 p) {
		path = p;	
		SetFollowPath();
	}
	
	public override void OnBecameInvisible() {
		if (parentPort != null) {
			parentPort.MinionDestroyed();
			Destroy (gameObject);
		}
	}
	
	void OnCollisionEnter(Collision c) {
		bool destroySelf = true;
		Damagable dam = c.gameObject.GetComponent<Damagable>();
		if (dam != null) {
			if (dam.collisionType == Damagable.COLLISION_TYPE.REFLECT) {
				destroySelf = false;
				
				lastForward = c.contacts[0].normal * -1.0f;
				goToPoint = null;
				path.points.Clear();
			}
			else if (dam.collisionType == Damagable.COLLISION_TYPE.DISABLE) {
				destroySelf = false;	
			}
			
			dam.OnDamage(50.0f, gameObject.layer);
		}
		
		if (destroySelf) {
			MasterAudio.PlaySound(_damagable._destroySound.name);
			if (explosionPrefab) {
				GameObject.Instantiate(explosionPrefab, c.contacts[0].point, explosionPrefab.transform.rotation);	
			}
			Destroy(gameObject);
		}
	}
	
	public override void SetDisabled() {
		this.StopFollowPath(false);
		//this.path.points.Clear();
		//this.goToPoint = null;
		//this.lastVelocity = 0.0f;
	}

	void OnDestroy() {
		MasterAudio.StopAllOfSound (_launchEffect.name + portIndex.ToString ());
	}
}

