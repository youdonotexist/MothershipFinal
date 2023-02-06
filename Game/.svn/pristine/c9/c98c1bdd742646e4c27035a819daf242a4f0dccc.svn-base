using UnityEngine;
using System.Collections;

public class CameraShake : Singleton<CameraShake>
{
	float magnitude = 0.0001f;
	float duration = 0.5f;
	Vector3 originalCamPos;

	void Awake() {
		originalCamPos = Camera.main.transform.position;
	}

	public void DoShake(float mag) {
		magnitude = mag * 2.0f;
		StartCoroutine(Shake ());
	}

	IEnumerator Shake() {
		
		float elapsed = 0.0f;
		
		while (elapsed < duration) {
			if (Time.timeScale >= 0.5f) {
				elapsed += Time.deltaTime;    
				
				float percentComplete = elapsed / duration;         
				float damper = 1.0f - Mathf.Clamp(4.0f * percentComplete - 3.0f, 0.0f, 1.0f);
				
				// map value to [-1, 1]
				float x = (Random.value * magnitude) - (magnitude * 0.5f);
				float y = (Random.value * magnitude) - (magnitude * 0.5f);
				x *= damper;
				y *= damper;
				x += originalCamPos.x;
				y += originalCamPos.y;
				
				Camera.main.transform.position = new Vector3(x, y, originalCamPos.z);
			}
			
			yield return null;
		}
		
		Camera.main.transform.position = originalCamPos;
	}
}

