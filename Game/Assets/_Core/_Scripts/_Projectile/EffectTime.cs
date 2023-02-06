using UnityEngine;
using System.Collections;

public class EffectTime : MonoBehaviour
{
	//Effect Disappear
	public bool showForever = false;
	public float playDuration = 2.0f;
	
	public bool fadeOut = false;
	public float fadeOutTime = 0.5f;
	
	public GameObject destroyTarget;
	
	public bool destroyParentOnDestroy = false;
	
	float elapsed = 0.0f;
	float fadeElapsed = 0.0f;
		
	
	exSprite _sprite;
	// Use this for initialization
	void Start ()
	{
		_sprite = GetComponent<exSprite>();
		if (destroyTarget == null) {
			destroyTarget = this.gameObject;	
		}
	}
	
	// Update is called once per frame
	void Update ()
	{
		if (!showForever) {
			if (elapsed > playDuration) {
				if (fadeOut) {
					if (fadeElapsed < fadeOutTime) {
						_sprite.color = new Color(_sprite.color.r, _sprite.color.g, _sprite.color.b, fadeElapsed/fadeOutTime);
						fadeElapsed += Time.deltaTime;
					}
					else {
						Destroy (destroyTarget);	
					}
				}
				else {
					GameObject.Destroy(destroyTarget);
				}
			}
			else {
				elapsed += Time.deltaTime;	
			}
		}
	}
	
	void OnDestroy() {
		if (transform.parent) {
			Destroy (transform.parent.gameObject);	
		}
	}
}

