using UnityEngine;
using System.Collections;

public class Controls : MonoBehaviour {
	
	GameObject _controlled = null;
	float forwardForce = 800.0f;
	float brakingForce = -800.0f;
	
	public float maxSpeed = 400.0f;
	public float turnSpeed = 200.0f;
	
	//float maxTurn = 70.0f;
	float currentTurn = 0.0f;
	
	// Use this for initialization
	void Awake() {
		_controlled = GameObject.Find("_PlayerCarRoot");
	}
	
	void Start () {
		
	}
	
	// Update is called once per frame
	void FixedUpdate () {
		float forward = 0.0f;
		float brake = 0.0f;
		//float wheelDirection = 0.0f;
		
		if (Input.GetKey(KeyCode.UpArrow)) {
			forward = 1.0f;
		}
		
		if (Input.GetKey (KeyCode.DownArrow)) {
			brake = 1.0f;
		}
		
		if (Input.GetKey (KeyCode.LeftArrow)) {
			currentTurn += (turnSpeed * Time.deltaTime); 
		}
		else if (Input.GetKey (KeyCode.RightArrow)) {
			currentTurn -= (turnSpeed * Time.deltaTime);
		}
		
		float x = Mathf.Cos(currentTurn * Mathf.Deg2Rad);
		float y = Mathf.Sin(currentTurn * Mathf.Deg2Rad);
		
		//Vector3 velocityDir = _controlled.rigidbody.velocity.normalized;
		
		_controlled.transform.forward = new Vector3(x, _controlled.transform.forward.y, y);
		
		Vector3 negateCurrentForward = (-1.0f * _controlled.rigidbody.velocity);
		Vector3 applyMomentumInCurrentDirection = (_controlled.rigidbody.velocity.magnitude * _controlled.transform.forward);
		Vector3 applyForceFromControls = (_controlled.transform.forward * Time.deltaTime * ((forwardForce*forward) + (brakingForce * brake) ));
		
		Vector3 combinedForce = negateCurrentForward + applyMomentumInCurrentDirection + applyForceFromControls;
		
		Debug.Log (negateCurrentForward + " + " + applyMomentumInCurrentDirection + " + " + applyForceFromControls + " = " + combinedForce);
		
		_controlled.rigidbody.AddForce(negateCurrentForward + applyMomentumInCurrentDirection + applyForceFromControls, ForceMode.VelocityChange);	
		
		float velocity = _controlled.rigidbody.velocity.magnitude;
		if (velocity > maxSpeed) {
			Vector3 velocityDirection = _controlled.rigidbody.velocity.normalized;
			_controlled.rigidbody.velocity = velocityDirection * maxSpeed;
		}
		
		
	}
	
	void OnDrawGizmos() {
		//Debug.DrawLine(_controlled.transform.position, _controlled.transform.position + (_controlled.transform.forward * 100.0f));	
	}
}
