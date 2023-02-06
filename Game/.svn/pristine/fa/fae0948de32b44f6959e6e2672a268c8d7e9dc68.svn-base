using UnityEngine;
using System.Collections;

public class Background : MonoBehaviour {

	public float layer0moveSpeed = 10.0f;

	private Renderer layer0Renderer;


	private int state;

	void OnEnable() {
		string type = MissionDetails.Instance.encounterType;
		if (type == "BASIC") {
			state = 0;
		}
		else if (type == "JUGGERNAUT") {
			state = 1;
		}
		else if (type == "SCIENTIST") {
			state = 2;
		}
		else {
			state = 0;
		}
	}

	// Use this for initialization
	void Start () {
		layer0Renderer = this.renderer;
	}
	
	// Update is called once per frame
	void Update () {
		if (state == 0) {
			UpdateNES();
		}
		else if (state == 1) {
			UpdateNES();
		}
		else if (state == 2) {
			UpdateNES();
		}
	}

	void OnPreRender() {
		GL.Clear (true, true, Camera.main.backgroundColor);
	}

	void UpdateNES() {
		Vector2 offset = layer0Renderer.material.mainTextureOffset;
		float xOffset = offset.x + (layer0moveSpeed * Time.deltaTime);

		if (xOffset >= 1.0f) {
			xOffset = 0.0f;
		}
		offset.x = xOffset;
		layer0Renderer.material.mainTextureOffset = offset;
	}
}
