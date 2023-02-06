using UnityEngine;
using System.Collections;

public class Health : MonoBehaviour
{

	void OnTriggerEnter(Collider c) {
		Damagable veh = GameObject.Find("Mothership").GetComponent<Damagable>();	
		veh.OnHeal(10.0f);
		
		Destroy (gameObject);
	}
}

