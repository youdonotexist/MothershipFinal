using UnityEngine;
using System.Collections;

public class MissileSprite : MonoBehaviour
{
	HeroMissile _missile;
	
	void Awake() {
		_missile = transform.parent.GetComponent<HeroMissile>();	
	}
	void OnBecameInvisible() {
		_missile.OnBecameInvisible();
	}
}

