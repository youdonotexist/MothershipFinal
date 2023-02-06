using UnityEngine;
using System.Collections;

public class ArmManager : MonoBehaviour
{
	IKTest[] arms;

	void Awake() {
		arms = GetComponentsInChildren<IKTest>();

		for (int i = 0; i < arms.Length; i++) {
			IKTest arm = arms[i];
			arm.SetManager(this);
		}
	}

	public bool IsInteracted(IKTest a, GameObject checkObject) {
		for (int i = 0; i < arms.Length; i++) {
			IKTest arm = arms[i];
			if (arm != a) {
				if (arm._armGrabber.GetCurrentTarget() == checkObject.transform) {
					return true;
				}
			}
		}

		return false;
	}
}

