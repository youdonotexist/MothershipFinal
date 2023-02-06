using UnityEngine;
using System.Collections;

public class NGUIEffects
{

	public static IEnumerator TypewriterSingle(UILabel label, string text, float durationBetweenCharacters, AudioClip clip) {
		float elapsed = 0.0f;
		int index = 0;
		label.text = "";

		if (text != null) {
			while (index <= text.Length) {
				if (elapsed >= durationBetweenCharacters) {
					if (clip != null) {
						MasterAudio.PlaySound(clip.name);
					}
					label.text = text.Substring(0, index++);
					elapsed = 0.0f;
				}
				else {
					elapsed += Time.deltaTime;
				}
				
				yield return null;
			}
		}
	}

}

