using UnityEngine;
using System.Collections;

public class MineSprite : MonoBehaviour {

	Mine _mine;
	
	void Awake() {
		_mine = gameObject.transform.parent.GetComponent<Mine>();	
	}
	
	void OnBecameInvisible() {
		if (_mine != null)
			_mine.OnBecameInvisible();	
	}
}
