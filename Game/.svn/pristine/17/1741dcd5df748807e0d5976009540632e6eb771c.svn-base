using UnityEngine;
using System.Collections;

public class ShieldMinionArm : MonoBehaviour
{
	MinionPhysicsVehicle _physicsVehicle;

	void Awake() {
		_physicsVehicle = GetComponentInParent<MinionPhysicsVehicle>();
	}

	void OnCollisionEnter(Collision c) {
		_physicsVehicle.OnCollisionEnter(c);
	}

}

