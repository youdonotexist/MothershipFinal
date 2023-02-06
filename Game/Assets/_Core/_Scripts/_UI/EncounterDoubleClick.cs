using UnityEngine;
using System.Collections;

public class EncounterDoubleClick : MonoBehaviour {
	
	bool flipping = false;
	bool frontFacing = true;
	
	void OnClick() {
		if (!flipping)
			StartCoroutine(Flip ());
	}

	void Start() {
		//StartCoroutine (Jiggle ());
	}

	IEnumerator Jiggle() {
		float duration = 1.0f, elapsed = 0.5f;
		float direction = 1.0f;

		while (true) {
			if (frontFacing && !flipping) {
				elapsed += direction * Time.deltaTime;
				if (elapsed > duration) {
					direction = -1.0f;
				}
				else if (elapsed < 0.0f) {
					direction = 1.0f;
				}

				//340 -> 20
				Vector3 rot = transform.localEulerAngles;
				rot.y = Mathf.LerpAngle(-20.0f, 0.0f, elapsed/duration);
				transform.localEulerAngles = rot;
			}

			yield return null;
		}
		
	}

	float simplifyAngle(float angle) {
		if (angle < 0) {
			return 360.0f + angle;
		} else {
			return angle;
		}
	}

	IEnumerator Flip () {
		flipping = true;
		float duration = 1.0f, elapsed = 0.0f;
		Transform t = transform;
		Vector3 startRot = t.eulerAngles;

		//Take the current rotation ([340 -> 40], [140 -> 220])
		//Subtract if from the desired state (0 = front, 180 = back)

		float end = frontFacing ? 180.0f : 0.0f;
		Vector3 endRot = new Vector3(startRot.x, end, startRot.z);
		
		while (elapsed < duration) {
			t.eulerAngles = Vector3.Lerp(startRot, endRot, elapsed/duration);
			elapsed += Time.deltaTime;
			yield return null;
		}
		
		t.eulerAngles = endRot;
		
		flipping = false;
		frontFacing = !frontFacing;
	}
}
