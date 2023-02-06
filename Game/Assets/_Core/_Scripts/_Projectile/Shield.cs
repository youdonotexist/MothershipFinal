using UnityEngine;
using System.Collections;

public class Shield : Deployable
{
	AudioSource _audioSource;
	
	public AudioClip _deployClip;
	public DebrisParticleEffect _debrisPrefab;
	
	Damagable _damagable;
	exSpriteAnimation _animation; 
	exSprite _sprite;
	
	void Awake() {
		_animation = GetComponentInChildren<exSpriteAnimation>();	
		_sprite = GetComponentInChildren<exSprite>();	
	}
	
	void Start() {
		if (_audioSource == null) {
			_audioSource = gameObject.AddComponent<AudioSource>();	
		}

		MasterAudio.PlaySound(_deployClip.name);
		_damagable = GetComponent<Damagable>();
	}
	
	void Update() {
		float damagePercentage = _damagable.HealthPercentage;
		
		if (damagePercentage < 1.0f) {
			if (damagePercentage < 0.70f) {
				_sprite.color = Color.red;
			}
		}
		
		if (_damagable.Health <= 0.0f) {
			MasterAudio.PlaySound(_damagable._destroySound.name);
			Destroy(gameObject);
		}
	}
	
	public void AnimateShield(Vector3 start, Vector3 end) {
		rigidbody.MovePosition(start);
		
		if (_animation != null)
			_animation.Play(_animation.animations[0].name);
		StartCoroutine(MoveShield(start, end));
	}
	
	IEnumerator MoveShield(Vector3 start, Vector3 end) {
		float duration = 2.0f;
		float elapsed = 0.0f;
		
		while (elapsed < duration) {
			rigidbody.MovePosition(Vector3.Slerp(start, end, elapsed/duration));
			
			elapsed += Time.deltaTime;
			yield return null;
		}
	}
	
}

