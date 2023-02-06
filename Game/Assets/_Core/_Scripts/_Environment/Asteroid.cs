using UnityEngine;
using System.Collections;

public class Asteroid : MonoBehaviour
{
	float spinSpeed = 10.0f;
	float moveSpeed = 100.0f;
	
	public Vector2 speedRange = new Vector2(150.0f, 500.0f);
	
	void Awake() {
		Reset ();
	}

	// Update is called once per frame
	void Update ()
	{
		Vector3 pos = transform.position;
		pos.x -= moveSpeed * Time.deltaTime;
		transform.position = pos;
		
		Quaternion angle = transform.rotation;
		Vector3 angles = angle.eulerAngles;
		angles.z += spinSpeed * Time.deltaTime;
		angle.eulerAngles = angles;
		transform.rotation = angle;
	}

	public void Reset() {
		//rigidbody.gameObject.SetActive(false);
		//rigidbody.isKinematic = true;
		spinSpeed = Random.Range(10.0f, 50.0f) * (Random.Range (0, 2) == 1 ? -1 : 1);
		moveSpeed = Random.Range(speedRange.x, speedRange.y);
	}
}

