﻿using UnityEngine;
using System.Collections;

public class Scrap : MonoBehaviour {

	void OnTriggerEnter(Collider c) {
		MothershipVehicle veh = GameObject.Find("Mothership").GetComponent<MothershipVehicle>();	
		veh.AddScrap(1);

		MasterAudio.PlaySound("scrap_pickup");
		Destroy (gameObject);
	}
}
