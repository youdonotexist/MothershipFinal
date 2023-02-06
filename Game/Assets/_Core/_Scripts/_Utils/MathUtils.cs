using UnityEngine;
using System.Collections;

public class MathUtils
{
	public static float SimplifyAngle(float angle)
	{
		float ang = angle % (2.0f * Mathf.PI);
		if( ang < -Mathf.PI )
			ang += (2.0f * Mathf.PI);
		else if( ang > Mathf.PI )
			ang -= (2.0f * Mathf.PI);
		return ang;
	} 

	public static float SimplifyAngleDeg(float angle)
	{
		float ang = angle % (360.0f);
		if( ang < -180.0f )
			ang += (360.0f);
		else if( ang > 180.0f)
			ang -= (360.0f);
		return ang;
	} 

	public static float ClosestAngle(float target, float current) {
		if (Mathf.Abs(target - current) > 180.0f) {
			return target < 0 ? target + 360.0f : target - 360.0f;
		}

		return target;
	}

	//returns -1 when to the left, 1 to the right, and 0 for forward/backward
	public static float AngleDir(Vector3 fwd, Vector3 targetDir, Vector3 up) {
		Vector3 perp = Vector3.Cross(fwd, targetDir);
		float dir = Vector3.Dot(perp, up);
		
		if (dir > 0.0f) {
			return 1.0f;
		} else if (dir < 0.0f) {
			return -1.0f;
		} else {
			return 0.0f;
		}
	}
}

