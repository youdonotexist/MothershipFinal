using UnityEngine;
using System.Collections;

public class ColliderOutline2D : MonoBehaviour
{
	Vectrosity.VectorLine outline = null;
	exSprite sprite;
	Vector3[] continuous;

	void Awake() {
		sprite = GetComponent<exSprite>();
		if (sprite == null) {
			sprite = GetComponentInParent<exSprite>();
		}

		continuous = new Vector3[] {Vector3.zero, Vector3.zero, Vector3.zero, Vector3.zero, Vector3.zero, Vector3.zero};

		outline = new Vectrosity.VectorLine("outline", continuous, null, 7.0f, Vectrosity.LineType.Continuous, Vectrosity.Joins.Weld);
		outline.Draw3D();

		outline.vectorObject.layer = UICamera.mainCamera.gameObject.layer;
		outline.vectorObject.transform.parent = GameObject.Find("PostEncounterPanel").transform;
	}

	public void Show(bool enabled, Vector3 start) {
		BoxCollider bc = GetComponent<BoxCollider>();
		bc.center = new Vector3(bc.center.x + sprite.offset.x, bc.center.y + sprite.offset.y, bc.center.z);
		
		Vector3[] pts = RandomUtilities.GetColliderVertexPositions(gameObject, 
		                                                           Camera.main, 
		                                                           UICamera.mainCamera, 
		                                                           start);
		continuous = new Vector3[] {pts[0], pts[2], pts[3], pts[1], pts[0], start};

		//outline.SetColor(Color.clear);
		outline.SetColors(new Color[] {Color.red, Color.blue, Color.green, Color.cyan, Color.magenta});

		outline.points3 = continuous;
		outline.vectorObject.SetActive(enabled);
	}

	public void SetColor(Color c) {
		if (outline != null)
		{
			outline.SetColors(new Color[] {Color.red, Color.blue, Color.green, Color.cyan, Color.magenta});
			//outline.SetColor(c);
			outline.Draw3D();
		}
	}

	public Color GetColor() {
		return outline != null ? outline.color : Color.clear;
	}

}

