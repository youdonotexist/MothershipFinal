using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public static class Extensions
{
	public static void SetPositionX(this Transform t, float newX)
	{
		t.position = new Vector3(newX, t.position.y, t.position.z);
	}
	
	public static void SetPositionY(this Transform t, float newY)
	{
		t.position = new Vector3(t.position.x, newY, t.position.z);
	}
	
	public static void SetPositionZ(this Transform t, float newZ)
	{
		t.position = new Vector3(t.position.x, t.position.y, newZ);
	}
	
	public static float GetPositionX(this Transform t)
	{
		return t.position.x;
	}
	
	public static float GetPositionY(this Transform t)
	{
		return t.position.y;
	}
	
	public static float GetPositionZ(this Transform t)
	{
		return t.position.z;
	}

	public static Vector3 SetPositionX(this Vector3 t, float newX)
	{
		return new Vector3(newX, t.y, t.z);
	}
	
	public static Vector3 SetPositionY(this Vector3 t, float newY)
	{
		return new Vector3(t.x, newY, t.z);
	}
	
	public static Vector3 SetPositionZ(this Vector3 t, float newZ)
	{
		return new Vector3(t.x, t.y, newZ);
	}
	
	public static float GetPositionX(this Vector3 t)
	{
		return t.x;
	}
	
	public static float GetPositionY(this Vector3 t)
	{
		return t.y;
	}
	
	public static float GetPositionZ(this Vector3 t)
	{
		return t.z;
	}
	
	public static bool HasRigidbody(this GameObject gobj)
	{
		return (gobj.rigidbody != null);
	}
	
	public static bool HasAnimation(this GameObject gobj)
	{
		return (gobj.animation != null);
	}
	
	public static void SetSpeed(this Animation anim, float newSpeed)
	{
		anim[anim.clip.name].speed = newSpeed; 
	}

	public static float Diff(this Color c, Color otherColor) {
		float delta = Mathf.Pow(c.r - otherColor.r, 2);
		delta += Mathf.Pow(c.g - otherColor.g, 2);
		delta += Mathf.Pow(c.b - otherColor.b, 2);
		return Mathf.Sqrt(delta);
	}

	public static float SqrDiff(this Color c, Color otherColor) {
		float delta = Mathf.Pow(c.r - otherColor.r, 2);
		delta += Mathf.Pow(c.g - otherColor.g, 2);
		delta += Mathf.Pow(c.b - otherColor.b, 2);
		return (delta);
	}

	public static Color[] ExtractColors(this Texture2D tex) {
		Dictionary<string, Color> colors = new Dictionary<string, Color>();
		Color[] cs = tex.GetPixels();
		foreach (Color c in cs) {
			if (c.a < 1.0f) continue;
			string key = c.r.ToString() + "_" + c.g.ToString() + "_" + c.b.ToString();
			if (!colors.ContainsKey(key)) {
				colors[key] = (Color) c;
			}
		}
		
		return new List<Color>(colors.Values).ToArray();
	}

	public static void CreateWithPool(this MonoBehaviour behavior) {

	}

	public static void Kill(this GameObject gameObj) {
		PoolManager poolMan = PoolManager.Instance();

		if (poolMan.IsPoolable(gameObj)) {
			poolMan.Release(gameObj, gameObj);
		}
		else {
			Object.Destroy(gameObj);
		}
	}

	public static int[] AllIndexesOf(this string str, string searchstring)
	{
		List<int> vals = new List<int>();
		int minIndex = str.IndexOf(searchstring);
		while (minIndex != -1)
		{
			vals.Add(minIndex);
			minIndex = str.IndexOf(searchstring, minIndex + searchstring.Length);
		}
		return vals.ToArray();
	}
}

