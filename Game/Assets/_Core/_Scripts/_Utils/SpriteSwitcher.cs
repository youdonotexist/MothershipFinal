﻿using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System;

public class SpriteSwitcher : MonoBehaviour {
	
	public exSpriteAnimClip[] nesAnimations;
	public string nesSpriteName;
	public Vector2 nesSpriteOffset;

	public exSpriteAnimClip[] msAnimations;
	public string msSpriteName;
	public Vector2 msSpriteOffset;
	
	public exSpriteAnimClip[] snesAnimations;
	public string snesSpriteName;
	public Vector2 snesSpriteOffset;
	
	public exSpriteAnimClip[] psAnimations;
	public string psSpriteName;
	public Vector2 psSpriteOffset;

	public Color32[] nesColors;
	public Color32[] msColors;
	public Color32[] snesColors;
	public Color32[] psColors;
	
	public int defaultAnimationIndex = -1;

	public bool useDamagableColors = true;

	protected string qualityLevel;

	protected exSpriteAnimation _animation;
	protected exSprite _sprite;
	protected Damagable _damagable;

	protected virtual void Awake() {
		SetUp();
	}

	public void SetUp() {
		_sprite = GetComponent<exSprite>();
		_animation = GetComponent<exSpriteAnimation>();
		if (useDamagableColors) {
			_damagable = GetComponentInParent<Damagable>();
			if (_damagable == null) {
				_damagable = GetComponent<Damagable>();
			}
		}
	}
	
	void OnEnable() {
		if (MissionDetails.Instance.encounterType == "BASIC") {
			OnSpriteQualityChange("nes");
		}
		else if (MissionDetails.Instance.encounterType == "JUGGERNAUT") {
			OnSpriteQualityChange("ms");
		}
		else if (MissionDetails.Instance.encounterType == "SCIENTIST") {
			OnSpriteQualityChange("snes");
		}
		else if (MissionDetails.Instance.encounterType == "MIXED") {
			OnSpriteQualityChange("snes");
		}
		else {
			OnSpriteQualityChange("snes");
		}

		Messenger.AddListener("on_sprite_quality_change", new Callback<string>(OnSpriteQualityChange));
	}

	[ExecuteInEditMode]
	public void OnSpriteQualityChange(string qualityType) {
		OnSpriteQualityChange(qualityType, "");
	}

	public virtual void OnSpriteQualityChange(string qualityType, string appender) {
		if (ResourceManager.Instance == null) return; //Fuck this shit

		qualityLevel = qualityType;

		exAtlas atlas = null;
		string spriteName = "";
		Vector2 spriteOffset = Vector2.zero;
		exSpriteAnimClip[] spriteAnimations = null;

		if ("nes".Equals(qualityType)) {
			atlas = ResourceManager.Instance.loadNesAtlas();
			spriteName = nesSpriteName + appender;
			spriteOffset = nesSpriteOffset;
			spriteAnimations = nesAnimations;
			if (_damagable != null)
				_damagable.colors = nesColors;
		}
		else if ("ms".Equals(qualityType)) {
			atlas = ResourceManager.Instance.loadMsAtlas();
			spriteName = msSpriteName + appender;
			spriteOffset = msSpriteOffset;
			spriteAnimations = msAnimations;
			if (_damagable != null)
				_damagable.colors = msColors;
		}
		else  if ("snes".Equals(qualityType)) { 
			atlas = ResourceManager.Instance.loadSnesAtlas();
			spriteName = snesSpriteName + appender;
			spriteOffset = snesSpriteOffset;
			spriteAnimations = snesAnimations;
			if (_damagable != null)
				_damagable.colors = snesColors;
		}
		else if ("ps".Equals(qualityType)) {
			atlas = ResourceManager.Instance.loadNesAtlas();
			spriteName = nesSpriteName + appender;
			spriteOffset = nesSpriteOffset;
			spriteAnimations = nesAnimations;
			if (_damagable != null)
				_damagable.colors = nesColors;
		}
		int spriteIndex = atlas.GetIndexByName(spriteName);
		
		if (spriteIndex >= 0) {
			_sprite.enabled = true;
			_sprite.SetSprite(atlas, spriteIndex, true);
		}
		else if (!(spriteName == null || spriteName.Length == 0)) {
			Debug.Log("Bad sprite name: " + spriteName + " for game object " + gameObject.name + " in atlas " + atlas.name);
		}
		else {
			_sprite.enabled = false;
		}
		_sprite.offset = spriteOffset;
		if (_animation != null) {
			AddAnimations(spriteAnimations);

			_animation.enabled = true;
			if (defaultAnimationIndex >= 0 && spriteAnimations.Length > 0) {
				_animation.defaultAnimation = spriteAnimations[defaultAnimationIndex];
				_animation.PlayDefault();
			}
		}
	}

	void OnDisable() {
		Messenger.RemoveListener("on_sprite_quality_change", new Callback<string>(OnSpriteQualityChange));
	}
	
	void AddAnimations(exSpriteAnimClip[] anims) {
		_animation.animations.Clear();
		if (anims == null || _animation == null) return;
		for (int i = 0; i < anims.Length; i++) {
			_animation.AddAnimation(anims[i]);	
		}
	}

	public string SpriteNameForQuality(string quality) {
		switch (quality) 
		{
		case "nes":
			return nesSpriteName;
		case "ms":
			return msSpriteName;
		case "snes":
			return snesSpriteName;
		case "ps":
			return psSpriteName;
		default:
			return nesSpriteName;
		}
	}

	public virtual int GetSpriteIndexForQuality(string quality) {
		//exSprite sprite = GetComponent<exSprite>();
		if ("nes".Equals(quality)) {
			return ResourceManager.Instance.nesAtlas.GetIndexByName(nesSpriteName);
		}
		else if ("ms".Equals(quality)) {
			return ResourceManager.Instance.msAtlas.GetIndexByName(msSpriteName);
		}
		else if ("snes".Equals(quality)) {
			return ResourceManager.Instance.snesAtlas.GetIndexByName(snesSpriteName);
		}

		return 0;
	}

	public void SetColorsForType(string type, Color32[] colors) {
		if ("nes".Equals(type)) {
			nesColors = colors;
		}
		else if ("ms".Equals(type)) {
			msColors = colors;
		}
		else if ("snes".Equals(type)) {
			snesColors = colors;
		}
	}
}
