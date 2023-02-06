using UnityEngine;
using System.Collections;

public class TutorialMission : MonoBehaviour
{
	void Awake() {
		GameObject.Find("LEVEL_BG").GetComponent<Background>().layer0moveSpeed = 1.0f;
		MothershipVehicle mothership = GameObject.Find("Mothership").GetComponent<MothershipVehicle>();
		mothership.AddScrap(1000);

		Messenger.Broadcast("UpdateShipComponent", 0, 1, 2);
		Messenger.Broadcast("UpdateShipComponent", 1, 2, 2);
		Messenger.Broadcast("UpdateShipComponent", 2, 4, 2);
	}
}

