using UnityEngine;
using System.Collections;

public class Gravity : MonoBehaviour
{
	public float power = 800.0f;
	Transform target = null;
	Rigidbody _rigidBody;
	
	Mine _mine;
	
	public enum GRAVITY_TYPE {
		FOLLOW,
		PULL
	};
	
	public GRAVITY_TYPE gravityType;
	
	void Start() {
		_rigidBody = transform.parent.GetComponent<Rigidbody>();	
		_mine = transform.parent.GetComponent<Mine>();
	}
	
	void OnTriggerEnter(Collider c) {
		if (_mine.animating == false) {
			bool isMinion = LayerMaskHelper.IsInLayerMask(c.gameObject, LayerMaskHelper.OnlyIncluding(LayerMask.NameToLayer("Minion")));
			if (isMinion) {
				target = c.transform;

				MasterAudio.PlaySound(_mine._grabClip.name);
			}
		}
	}
	
	void OnTriggerStay(Collider c) {
		if (_mine.animating == false) {
			bool isPoint = LayerMaskHelper.IsInLayerMask(c.gameObject, LayerMaskHelper.OnlyIncluding(LayerMask.NameToLayer("Minion")));
			if (isPoint) {
				
			}
		}
	}
	
	void OnTriggerExit(Collider c) {
		if (gravityType == GRAVITY_TYPE.FOLLOW) {
			
		}
		else {
			if (target == null) {
				MasterAudio.PauseSoundGroup(_mine._grabClip.name);
			}
		}
		//if (target != null && c.transform == target.transform) {
		//	target = null;
		//}
	}
	
	void FixedUpdate() {
		if (target != null) {
			if (gravityType == GRAVITY_TYPE.FOLLOW) {
				Vector3 dir = (target.transform.position - transform.position).normalized;
				_rigidBody.AddForce(dir * power, ForceMode.VelocityChange);
			}
			else {
				Vector3 dir = (transform.position - target.transform.position).normalized;
				target.rigidbody.AddForce(dir * power, ForceMode.Acceleration);
			}
		}
	}
}

