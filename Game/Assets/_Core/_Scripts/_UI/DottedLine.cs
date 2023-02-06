using UnityEngine;
using System.Collections;
using System.Collections.Generic;

[System.Serializable]
public class DottedLine : MonoBehaviour
{
	public Vector3[] path1;
	public Vector3[] path2;
	public Vector3[] path3;
	public Vector3[] path4;
	public Vector3[] path5;

	private List<Vector3[]> paths = new List<Vector3[]>();
	int currentPath;

	Vectrosity.VectorLine spline;
	Vectrosity.VectorLine drawnLine;

	public Transform end;
	public Material mat;
	public Material capMat;
	public Texture2D cap;
	void Awake() {
		Vector3 start = transform.position;

		spline = new Vectrosity.VectorLine("spline", new Vector3[] {start, start}, null, 0.0f, Vectrosity.LineType.Continuous);
		drawnLine = new Vectrosity.VectorLine("dotted", new Vector3[] {start, start}, mat, 5.0f, Vectrosity.LineType.Continuous);

		paths.Add (path1);
		paths.Add (path2);
		paths.Add (path3);
		paths.Add (path4);
		paths.Add (path5);

		drawnLine.vectorObject.layer = gameObject.layer;
		drawnLine.textureScale = 3.0f;
		drawnLine.SetColor(Color.gray);

		drawnLine.vectorObject.transform.parent = transform;

		StartCoroutine(AnimatePath());
	}

	IEnumerator AnimatePath() {
		Vector3[] points = paths[currentPath];
		spline.Resize(points);
		spline.MakeSpline(points, points.Length - 1);
		drawnLine.SetColor(Color.cyan);

		List<Vector3> active = new List<Vector3>();
		Vector3 p = spline.GetPoint3D01(0.0f); p.z += 100.0f;
		active.Add(p);

		float segmentLength = 60.0f, segmentPos = 0.0f;
		while (segmentPos <= spline.GetLength()) {
			segmentPos += segmentLength;
			Vector3 pos = spline.GetPoint3D01((segmentPos/spline.GetLength())); pos.z += 100.0f;
			active.Add (pos);
			drawnLine.Resize(active.ToArray());
			drawnLine.Draw3D();
			yield return new WaitForSeconds(0.05f);
		}

		currentPath = currentPath + 1 >= paths.Count ? 0 : currentPath + 1;
		float t = 0.0f, duration = 1.0f;
		Color c = drawnLine.GetColor(0);
		float initAlpha = c.a;
		while (t <= 1.0f) {
			t += Time.deltaTime/duration;
			c.a = Mathf.SmoothStep(initAlpha, 0.0f, t);
			drawnLine.SetColor(c);
			drawnLine.Draw3D();
			yield return null;
		}

		StartCoroutine(AnimatePath());
	}

	void OnDrawGizmos() {
		Gizmos.DrawSphere(transform.position, 40.0f);
		Gizmos.DrawSphere(end.position, 40.0f);
	}

}

