using UnityEngine;
using System.Collections;

public class MothershipWreckage : MonoBehaviour
{
	Transform[] wreckageParts;
	// Use this for initialization
	void Start ()
	{
		wreckageParts = GetComponentsInChildren<Transform>();
	}
	
	// Update is called once per frame
	void Update ()
	{
		foreach (Transform t in wreckageParts) {
			if (t == transform)
				continue;
			
			Vector3 dir = (t.position - transform.position).normalized;
			Vector3 pos = t.position;
			pos += dir * 100.0f * Time.deltaTime;
			t.position = pos;
		}
	}
}

