using UnityEngine;
using System.Collections;

public class UpgraderDetailStat : MonoBehaviour
{
	UILabel _type;
	UILabel _from;
	UILabel _to;
	UISprite _direction;
	UISprite _arrow;

	void Awake() {
		UILabel[] labels = GetComponentsInChildren<UILabel>();
		UISprite[] sprites = GetComponentsInChildren<UISprite>();

		for (int i = 0; i < labels.Length; i++) {
			UILabel label = labels[i];
			if (label.name == "To") {
				_to = label;
			}
			else if (label.name == "From") {
				_from = label;
			}
			else if (label.name == "Type") {
				_type = label;
			}
		}

		for (int i = 0; i < sprites.Length; i++) {
			UISprite sprite = sprites[i];
			if (sprite.name == "GoodBad") {
				_direction = sprite;
			}
		}
	}

	public void SetDetails(string type, float from, float to) {
		_type.text = type;
		_from.text = from.ToString();
		_to.text = to.ToString();

		int comparison = from.CompareTo(to);

		Vector3 arrowScale = _direction.transform.localScale;
		arrowScale.y = comparison * -1.0f;
		_direction.transform.localScale = arrowScale;

		_direction.color = comparison < 0.0f ? Color.green : Color.red;

	}

	public void SetDetailsMax(string type, float from) {
		_type.text = type;
		_from.text = from.ToString();
		_to.text = "";

		_direction.color = Color.clear;
	}
}

