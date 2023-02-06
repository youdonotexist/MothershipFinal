using UnityEngine;
using System.Collections;

public class Splash : MonoBehaviour {

	MinionBaseVehicle _minion1;
	MinionBaseVehicle _minion2;
	MinionBaseVehicle _minion3;

	GameObject logo;

	UIPanel cwText;
	bool fadeStarted = false;
	bool goingToMenu = false;

	CurtainHelper _curtainHelper;

	// Use this for initialization
	void Start () {
		logo = GameObject.Find("logo");
		cwText = GameObject.Find("LabelPanel").GetComponent<UIPanel>();

		_minion1 = GameObject.Find("minion1").GetComponent<MinionBaseVehicle>();
		_minion2 = GameObject.Find("minion2").GetComponent<MinionBaseVehicle>();
		_minion3 = GameObject.Find("minion3").GetComponent<MinionBaseVehicle>();

		_curtainHelper = GetComponentInChildren<CurtainHelper>();

		_curtainHelper.AnimateCurtain(true, Color.black, Color.clear, 1.0f, kickoffAnimation);
	}

	void kickoffAnimation() {
		MinionBaseVehicle[] ms = new MinionBaseVehicle[] {_minion1, _minion2, _minion3};
		
		for (int i = 0; i < ms.Length; i++) {
			MinionBaseVehicle m = ms[i];
			
			Path2 p = new Path2();
			
			Vector3 p1 = m.transform.position;
			Vector3 p2 = logo.transform.position; p2.z = p1.z;
			
			p.AddPoint(new TimestampPoint(p1, Time.time));
			p.AddPoint(new TimestampPoint(p2, Time.time + 10000));
			
			m.SetPath(p);
		}
	}

	void Update() {
		if (_minion1 == null && 
		    _minion2 == null && 
		    _minion3 == null && !fadeStarted) {

			StartCoroutine(fade ());
			fadeStarted = true;
		}
	}
	
	IEnumerator fade() {
		float duration = 1.0f, elapsed = 0.0f;

		yield return new WaitForSeconds(1.0f);

		while (elapsed < duration) {
			cwText.alpha = Mathf.Lerp(0.0f, 1.0f, elapsed/duration);
			elapsed += Time.deltaTime;
			yield return null;
		}

		yield return new WaitForSeconds(1.0f);

		if (!goingToMenu) {
			onTap ();
		}
	}

	public void onTap() {
		if (!goingToMenu) {
			_curtainHelper.AnimateCurtain(false, Color.clear, Color.black, 1.0f, Menu);
			goingToMenu = true;
		}
	}

	void Menu() {
		Application.LoadLevel("MainMenu");
	}
}