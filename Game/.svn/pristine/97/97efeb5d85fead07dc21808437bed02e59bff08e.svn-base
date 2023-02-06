using UnityEngine;
using System.Collections;

public class Figure8 : MonoBehaviour
{
	float elapsed = 0.0f;
	
	void Update ()
	{
		elapsed += Random.Range(0.1f, 0.6f) * Time.deltaTime;
		if (elapsed > 1.0f) elapsed = 0.0f;
		
		float t = elapsed;
		float R = 40.0f;
		float pi = Mathf.PI;
		float x = 2.0f*R*Mathf.Cos(2.0f*pi*t)*Mathf.Sqrt(Mathf.Pow(Mathf.Cos(2.0f*pi*t), 2.0f));
		float y = 2.0f*R*Mathf.Cos(2.0f*pi*t)*Mathf.Sin(2.0f*pi*t);
		
		Vector3 pos = transform.localPosition;
		pos.x = y;
		pos.y = x;
		transform.localPosition = pos;
	}
}

