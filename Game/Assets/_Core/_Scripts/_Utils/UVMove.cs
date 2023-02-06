using UnityEngine;
using System.Collections;

public class UVMove : MonoBehaviour {

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
		Vector2 offset = renderer.material.GetTextureOffset("_MainTex");
		renderer.material.SetTextureOffset("_MainTex", new Vector2(offset.x - (1.0f * Time.deltaTime), offset.y));
	}
}
