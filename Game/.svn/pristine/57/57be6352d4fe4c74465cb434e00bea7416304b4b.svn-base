using UnityEngine;
using System.Collections;

public class UpgraderPortButton : MonoBehaviour
{
	UISprite _portSprite;
	UILabel _portLabel;
	UISprite _background;

	public int index;
	// Use this for initialization

	void Awake ()
	{
		UISprite[] sprites = GetComponentsInChildren<UISprite>();
		for (int i = 0; i < sprites.Length; i++) {
			UISprite sprite = sprites[i];
			if (sprite.name == "Sprite") {
				_portSprite = sprite;
			}
			else {
				_background = sprite;
			}
		}

		UILabel[] labels = GetComponentsInChildren<UILabel>();
		for (int i = 0; i < labels.Length; i++) {
			if (labels[i].name == "Label") {
				_portLabel = labels[i];
			}
		}
	}

	public void UpdatePortState(PortState.MinionTypeDetails details) {
		_portSprite.spriteName = ResourceManager.Instance.GetQualityString() + "-minion-" + details.title.ToLower();
	}

	public void UpdateHighlight (bool selected) {
		int highest = 9;
		int baseLayer = selected ? 20 : (highest - (index * 2));
		_background.depth = baseLayer;
		_portLabel.depth = baseLayer + 1;
		_portSprite.depth = baseLayer + 1;

		_background.color = selected ? Color.green : Color.grey;
		_background.GetComponent<UIButton>().defaultColor = selected ? Color.green : Color.grey;
		_background.MarkAsChanged();
	}
}

