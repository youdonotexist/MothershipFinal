using UnityEngine;
using System.Collections;

public class UIFontSwitcher : MonoBehaviour
{
	void Start() {
		UILabel label = this.gameObject.GetComponent<UILabel>();
		Messenger.Broadcast("InitUiLabel", label);
	}
}

