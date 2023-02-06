using UnityEngine;
using System.Collections;

public class Magnet : MonoBehaviour
{
	
	public LayerMask GrabberLayer;
	public IKTest _ikTest;

	exSpriteAnimation _animation;
	Transform current;
	ArmGrabber _grabberZone;
	
	void Awake() {
		_animation = transform.parent.GetComponent<exSpriteAnimation>();
		_grabberZone = GetComponentInChildren<ArmGrabber>();
	}

	void Update() {
		if (current == null) {
			_grabberZone.enabled = true;
		}
	}
	
	void OnTriggerEnter(Collider c) {
		if (current == null && LayerMaskHelper.IsInLayerMask(c.gameObject.layer, GrabberLayer)) {
			MinionBaseVehicle veh = c.GetComponent<MinionBaseVehicle>();
			veh.StopFollowPath(false);
			veh.OnPortChange(false);
			veh.rigidbody.isKinematic = true;
			
			current = c.transform;
			current.parent = transform;
			current.localPosition = new Vector3(0.0f, 0.0f, current.localPosition.z);

			_grabberZone.enabled = false;
			_ikTest.target = null;
			_ikTest.RetractArm();
		}
	}
	
	public bool HasObject() {
		return current != null;	
	}

	public Transform GetCurrent() {
		return current;
	}
	
	public void OnRetracted() {
		_animation.Stop ();
		_animation.SetFrame("GrapplerAnimation", 0);
	}
	
	public void OnExtended() {
		if (!_animation.IsPlaying("GrapplerAnimation")) {
			_animation.Play ("GrapplerAnimation");
		}
	}
}

