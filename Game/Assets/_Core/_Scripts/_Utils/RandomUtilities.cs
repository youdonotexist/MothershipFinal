using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class RandomUtilities
{

	public static Vector3[] GetColliderVertexPositions (GameObject go, Camera gameCamera, Camera uiCamera, Vector3 closest) 
	{
		List<Vector3> vertices = new List<Vector3>(4);
		//List<Vector3> sorted = new List<Vector3>(4);
		Matrix4x4 thisMatrix = go.transform.localToWorldMatrix;
		Quaternion storedRotation = go.transform.rotation;
		
		go.transform.rotation = Quaternion.identity;
		
		Vector3 extents = go.collider.bounds.extents;
		vertices.Insert(0, thisMatrix.MultiplyPoint3x4(extents));
		vertices.Insert(1, thisMatrix.MultiplyPoint3x4(new Vector3(-extents.x, extents.y, extents.z)));
		vertices.Insert(2, thisMatrix.MultiplyPoint3x4(new Vector3(extents.x, -extents.y, extents.z)));
		vertices.Insert(3, thisMatrix.MultiplyPoint3x4(new Vector3(-extents.x, -extents.y, extents.z)));
		
		go.transform.rotation = storedRotation;

		for (int i = 0; i < 4; i++)
		{
			Vector3 pos = uiCamera.ScreenToWorldPoint(gameCamera.WorldToScreenPoint(vertices[i]));
			pos.z = closest.z - 20.5f;
			vertices[i] = pos;
		}

		vertices.Sort(delegate(Vector3 v1, Vector3 v2) { 
			return Vector3.Distance(v1, closest)
				.CompareTo(Vector3.Distance(v2, closest));
			}
		); 

		return vertices.ToArray();
	}
}

