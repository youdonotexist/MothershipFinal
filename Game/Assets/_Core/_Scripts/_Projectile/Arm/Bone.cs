using UnityEngine;
using System.Collections;

public class Bone : MonoBehaviour
{
	public Transform startJoint;
	public Transform endJoint;
	
	public bool endBone = false;
	public bool topBone = true;
	
	public bool inflating = false;
	public bool finished = false;
	
	public float startLength;
	public Vector3 originalEndDirection;
	public Vector3 collapseDirection;

	public float originalRot = 0.0f;
	public float globalOriginalRot = 0.0f;

	public float globalCollapseRot = 0.0f;
	public float collpaseRot = 0.0f;

	public Damagable _rootDamagable;
	
	private exSprite _sprite;
	private BoxCollider _collider;

	public JointOrientation jointOrientation;

	public enum JointOrientation {
		UP,
		DOWN,
		CARELESS
	}

	void Awake() {
		_sprite = GetComponent<exSprite>();
		_collider = GetComponent<BoxCollider>();	
	}
	
	void Start() {
		startLength = _sprite.width;
		
		_sprite.width = 0.0f;
		if (_collider) {
			_collider.size = new Vector3(0.0f, _collider.size.y, _collider.size.z);
			_collider.center = new Vector3(0.0f, _collider.center.y, _collider.center.z);
		}

		originalEndDirection = (endJoint.position - startJoint.position).normalized;
		endJoint.position = startJoint.position;

		globalOriginalRot = MathUtils.SimplifyAngleDeg(endJoint.eulerAngles.z);
		originalRot = MathUtils.SimplifyAngleDeg(endJoint.localEulerAngles.z);

		finished = true;
		inflating = false;
	}
	
	public void CollapseBone() {
		if (_sprite.width >= 0.0f) {
			inflating = false;
			finished = false;
			
			collapseDirection = (startJoint.position - endJoint.position).normalized;
			originalEndDirection = collapseDirection * -1.0f;
			startLength = _sprite.width;

			globalOriginalRot = MathUtils.SimplifyAngleDeg(endJoint.eulerAngles.z);
			originalRot = MathUtils.SimplifyAngleDeg(endJoint.localEulerAngles.z);
		}
	}
	
	public void InflateBone() {
		inflating = true;
		finished = false;

		//collpaseRot = jointOrientation == JointOrientation.DOWN ? endJoint.localEulerAngles.z : endJoint.localEulerAngles.z - 360.0f;
		//globalCollapseRot = jointOrientation == JointOrientation.DOWN ? endJoint.eulerAngles.z : endJoint.eulerAngles.z - 360.0f;
		globalCollapseRot = MathUtils.SimplifyAngleDeg(endJoint.eulerAngles.z);
		collpaseRot = MathUtils.SimplifyAngleDeg(endJoint.localEulerAngles.z);
	}
	
	public bool IsFinished() {
		return finished;	
	}
	
	public bool IsCollapsed() {
		return !inflating;
	}
	
	void Update() {
		
		if (!finished) {
			if (inflating) {
				if (_sprite.width < startLength) {
					_sprite.width += (300.0f * Time.deltaTime);

					float delta = (_sprite.width / startLength);
					
					endJoint.position += ((Time.deltaTime * 300.0f) * (originalEndDirection));
					
					if (_collider != null) {
						float newWidth = Vector3.Distance(startJoint.position, endJoint.position) * 0.5f;
						_collider.size = new Vector3(newWidth, _collider.size.y, _collider.size.z);
						_collider.center = new Vector3(-newWidth, _collider.center.y, _collider.center.z);
					}

					if (endBone) {
						Vector3 euler = endJoint.localEulerAngles;
						euler.z = Mathf.Lerp(collpaseRot, MathUtils.ClosestAngle(originalRot, collpaseRot), delta);
						endJoint.localEulerAngles = euler;
					}
				}
				else {
					if (endBone) {
						Vector3 euler = endJoint.localEulerAngles;
						euler.z = originalRot;
						endJoint.localEulerAngles = euler;
						Debug.Log ("Inflating(" + collpaseRot + " => " + MathUtils.ClosestAngle(originalRot, collpaseRot) + ")"); 
						//Debug.Log ("Inflating: " + MathUtils.ClosestAngle(originalRot, collpaseRot) + " " + jointOrientation);
						//Debug.Log("Inflated End: " + endJoint.eulerAngles.z);
				    }

					finished = true;	
				}
			}
			else {
				if (_sprite.width >= 0.0f) {
					_sprite.width -= (500.0f * Time.deltaTime);
				
					float delta = (_sprite.width / startLength);
					endJoint.position += ((Time.deltaTime * 500.0f) * (collapseDirection));
					
					if (_collider != null) {
						float newWidth = Vector3.Distance(startJoint.position, endJoint.position) * 0.5f;
						_collider.size = new Vector3(newWidth, _collider.size.y, _collider.size.z);	
						_collider.center = new Vector3(-newWidth, _collider.center.y, _collider.center.z);
					}
					
					if (endBone) {
						Vector3 euler = endJoint.eulerAngles;
						float rotAngle = jointOrientation == JointOrientation.DOWN ? 0.0f : 180.0f;//Quaternion.Euler(new Vector3 (0.0f, 0.0f, jointOrientation == JointOrientation.DOWN ? 0.0f : 180.0f)).eulerAngles.z;
						euler.z = Mathf.Lerp(MathUtils.ClosestAngle(rotAngle, globalOriginalRot), globalOriginalRot, delta);
						endJoint.eulerAngles = euler;
					}
				}
				else {
					if (endBone) {
						Vector3 euler = endJoint.eulerAngles;
						float rotAngle = jointOrientation == JointOrientation.DOWN ? 0.0f : 180.0f;//Quaternion.Euler(new Vector3 (0.0f, 0.0f, jointOrientation == JointOrientation.DOWN ? 0.0f : 180.0f)).eulerAngles.z;
						euler.z = rotAngle;
						endJoint.eulerAngles = euler;
						Debug.Log ("Deflating(" + globalOriginalRot + " => " + rotAngle + ")");
					}

					finished = true;	
				}
			}
		}
	}
}

