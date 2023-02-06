using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class Path2
{	
	public List<TimestampPoint> points;
	public float distance = 0.0f;
	
	//Start Path
	int currentIndex = 0;
	
	public Path2() {
		points = new List<TimestampPoint>();	
	}
	
	public int PointCount() {
		return points.Count;
	}
	
	public void AddPoint(TimestampPoint pt) {
		points.Add(pt);
		//if (points.Count > 1) {
			//int count = points.Count;
			//distance += Vector3.SqrMagnitude((points[count-1] - points[count - 2]));
		//}
	}
	
	public bool isOverMax(float maxLength) {
		return distance > maxLength;	
	}
	
	public TimestampPoint[] GetTimestampPoints() {
		TimestampPoint[] pts = points.ToArray();
		foreach (TimestampPoint pt in pts) {
			Debug.Log (pt);	
		}
		return points.ToArray();	
	}
	
	public Vector3[] GetPoints() {
		List<Vector3> v3Points = new List<Vector3>();
		foreach (TimestampPoint pt in points) {
			v3Points.Add(pt.point);
		}
		
		return v3Points.ToArray();
	}
	
	public Vector3[] GetPointsReversed(Vector3 start) {
		List<Vector3> v3Points = new List<Vector3>();
		v3Points.Add(start);
		
		points.Reverse();
		
		foreach (TimestampPoint pt in points) {
			v3Points.Add(pt.point);
		}
		
		return v3Points.ToArray();
	}
	
	public TimestampPoint Begin() {
		if (points.Count > 0) {
			return points[currentIndex];	
		}
		
		return null;
	}
	
	public TimestampPoint Next() {
		if (points.Count > 0 && currentIndex + 1 < points.Count) {
			return points[++currentIndex];
		}
		
		return null;
	}
	
	public bool AtEnd() {
		return currentIndex >= points.Count - 1;	
	}
}

