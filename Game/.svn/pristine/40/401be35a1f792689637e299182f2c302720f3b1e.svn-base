using UnityEngine;
using System.Collections;

public class ArmGrabber : MonoBehaviour
{
	public IKTest _arm;
	public LayerMask GrabberLayer;
	Transform currentTarget = null;
	
	void OnTriggerEnter(Collider inObject) {
		if (currentTarget == null && !_arm.GetManager().IsInteracted(_arm, inObject.gameObject)) {
			currentTarget = inObject.transform;
			_arm.target = currentTarget;
		}
	}
	
	void OnTriggerLeave(Collider inObject) {
		if (currentTarget != null && currentTarget == inObject.transform) {
			currentTarget = null;
			_arm.target = null;
		}
	}
	
	void OnTriggerStay(Collider inObject) {
		if (currentTarget == null && !_arm.GetManager().IsInteracted(_arm, inObject.gameObject)) {
			currentTarget = inObject.transform;
			_arm.target = currentTarget;
		}
	}

	public Transform GetCurrentTarget() {
		return currentTarget;
	}
	
	void Update() {
		if (currentTarget == null) {
			if (_arm)
				_arm.target = null;	
		}
	}
}

