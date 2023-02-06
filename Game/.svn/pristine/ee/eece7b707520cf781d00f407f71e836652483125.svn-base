using UnityEngine;
using System.Collections;

public class MinionSprite : MonoBehaviour
{
	MinionBaseVehicle _vehicle;
	
	void Start() {
		_vehicle = transform.parent.GetComponent<MinionBaseVehicle>();	
	}
	
	void OnBecameInvisible() {
		_vehicle.OnBecameInvisible();	
	}
	
}

