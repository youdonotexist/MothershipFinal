using UnityEngine;
using System.Collections;

public class WorldSwipe : MonoBehaviour
{
	public GameObject worldContainer;
	
	bool down = false;
	float velocity = 0.0f;
	
	void OnDrag (Vector2 delta) {
		SetVelocity(delta.x);
		velocity = delta.x;
	}
	
	void OnPress(bool pressed) {
		down = pressed;
		
	}
	
	void Update() {
		if (down == false) {
			velocity *= 0.9f;
			SetVelocity(velocity);
		}
		
		if (Mathf.Abs(velocity) < 0.1f && velocity != 0.0f) {
			velocity = 0.0f;
			
			Debug.Log ("hapened");
			
			//Snap back to closest
			float planetCount = 4.0f;
			float delta = 360.0f/planetCount;
			
			Vector3 rot = worldContainer.transform.eulerAngles;
			float current = rot.y;
			
			for (float i = 0.0f; i < 360.0f; i+= delta) {
				if (current < i) {
					rot.y = i;
					break;
				}
			}
			
			worldContainer.transform.eulerAngles = rot;
		}
	}
	
	void SetVelocity(float vel) {
		Vector3 rot = worldContainer.transform.eulerAngles;
		float oot = rot.y - vel;
		
		float fix = oot > 360.0f ? oot - 360.0f : oot;
		fix = fix < 0.0f ? 360.0f - Mathf.Abs(oot) : fix;
		
		rot.y = oot;
		worldContainer.transform.eulerAngles = rot;
	}
}

