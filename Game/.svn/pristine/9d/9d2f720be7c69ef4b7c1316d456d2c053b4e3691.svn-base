using UnityEngine;
using System.Collections;

public class CurtainHelper : MonoBehaviour
{
	public UIAtlas uiAtlas;
	public string spriteName;
	
	private UISprite _sprite;
	
	void Awake() {
		GameObject panelGO = new GameObject("CurtainPanel");
		panelGO.layer = LayerMask.NameToLayer("UILayer");
		panelGO.transform.parent = gameObject.transform;
		UIPanel p = panelGO.AddComponent<UIPanel>();
		p.depth = 1000;

		GameObject go = new GameObject("Curtain");
		go.layer = LayerMask.NameToLayer("UILayer");
		
		_sprite = go.AddComponent<UISprite>();
		_sprite.atlas = uiAtlas;
		_sprite.depth = 1000;
		_sprite.color = Color.black;
		_sprite.spriteName = spriteName;
		
		go.AddComponent<BoxCollider>();

		panelGO.transform.localPosition = new Vector3(0.0f, 0.0f, 600.0f);
		go.transform.parent = panelGO.transform;
		go.transform.localPosition = new Vector3(0.0f, 0.0f, 0.0f);
		go.transform.localScale = new Vector3(100000, 100000, 100000);
	}
	
	public delegate void CurtainChangeCallback();
	
	public void AnimateCurtain(bool open, Color fr, Color to, float d, CurtainChangeCallback callback) {
		StartCoroutine(AnimateCurtainRoutine(open, fr, to, d, callback));		
	}
	
	public IEnumerator AnimateCurtainRoutine(bool open, Color fr, Color to, float d, CurtainChangeCallback callback) {
		float duration = d, elapsed = 0.0f;
		
		if (!open) {
			_sprite.collider.enabled = true;	
		}
		
		while (elapsed < duration) {
			_sprite.color = Color.Lerp(fr, to, elapsed/duration);
			elapsed += TimeKeeper.Instance().AnimationTime();
			yield return null;
		}
		
		_sprite.color = to;
		
		if (open) {
			_sprite.collider.enabled = false;	
		}
		
		if (callback != null) {
			callback();
		}
	}
}

