using UnityEngine;
using System.Collections;

public class SpawnSwitcher : MonoBehaviour
{
	public GameObject nesObject;
	public GameObject msObject;
	public GameObject snesObject;
	public GameObject psObject;

	void OnEnable() {
		if (MissionDetails.Instance.encounterType == "BASIC") {
			GameObject go = (GameObject) Instantiate(nesObject);
			go.transform.parent = transform;
			go.transform.localPosition = Vector3.zero;
		}
		else if (MissionDetails.Instance.encounterType == "JUGGERNAUT") {
			GameObject go = (GameObject) Instantiate(msObject);
			go.transform.parent = transform;
			go.transform.localPosition = Vector3.zero;
		}
		else if (MissionDetails.Instance.encounterType == "SCIENTIST") {
			GameObject go = (GameObject) Instantiate(snesObject);
			go.transform.parent = transform;
			go.transform.localPosition = Vector3.zero;
		}
		else if (MissionDetails.Instance.encounterType == "MIXED") {
			GameObject go = (GameObject) Instantiate(snesObject);
			go.transform.parent = transform;
			go.transform.localPosition = Vector3.zero;
		}
		else {
			GameObject go = (GameObject) Instantiate(snesObject);
			go.transform.parent = transform;
			go.transform.localPosition = Vector3.zero;
		}
	}
}

