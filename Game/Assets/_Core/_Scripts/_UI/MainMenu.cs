using UnityEngine;
using System.Collections;

public class MainMenu : MonoBehaviour
{
	//Menu
	public GameObject port;
	public GameObject menu;

	//TODO: Add the loading spinner back
	//UIImageButton loadingIcon = null;
	//UISprite loadingSprite = null;

	CurtainHelper _curtainHelper;
	
	//Encounter Select
	GameObject encounterSelect = null;
	MainMenuEncounterSelect mmes = null;

	//TODO: Remove Debug
	UILabel bundleDebug;

	public GameObject[] frames;
	float verticalHeight = 0.0f;
	bool animating = false;
	int debugTap = 0;
	
	void OnCurtainFinish() {
				
	}

	void Update() {
		bundleDebug.text = PlayerPrefs.GetInt("latestBundle").ToString();
	}
	
	void Awake() {
		Application.targetFrameRate = 60;

		Cache.Init();
		MissionDetails.Instance.Init ();
		BundleManager.Instance.DoBundleStuffs();

		bundleDebug = GameObject.Find("BundleNumber").GetComponent<UILabel>();

		_curtainHelper = GameObject.Find("Camera").GetComponent<CurtainHelper>();
		encounterSelect = GameObject.Find("EncounterSelect");
		mmes = encounterSelect.GetComponent<MainMenuEncounterSelect>();
		
		/*GameObject loadingIconGO = GameObject.Find("LoadingIcon");
		if (loadingIconGO != null) {
			loadingIcon = loadingIconGO.GetComponent<UIImageButton>();
			loadingSprite = loadingIconGO.GetComponentInChildren<UISprite>();
		}*/
		
		//Screen size calculations
		UICamera camera = GameObject.Find("Camera").GetComponent<UICamera>();
		Rect rect = camera.camera.pixelRect;
		Vector3 min = camera.camera.ScreenToWorldPoint(new Vector3(0.0f, rect.yMin, 0.0f));
		Vector3 max = camera.camera.ScreenToWorldPoint(new Vector3(0.0f, rect.yMax, 0.0f));
		verticalHeight = Vector3.Distance(min, max);
	}
	
	void Start() {
		if (_curtainHelper != null) {
			_curtainHelper.AnimateCurtain(true, Color.black, Color.clear, 0.5f, OnCurtainFinish);	
		}

		float startY = 0.0f;

		for (int i = 0; i < frames.Length; i++) {
			GameObject frame = frames[i];
			UIAnchor[] anchors = frame.GetComponentsInChildren<UIAnchor>();
			foreach(UIAnchor anchor in anchors) {
				anchor.enabled = false;	
			}

			Vector3 position = frame.transform.position;
			
			if (i == 0) {
				startY = position.y;
			}
			else {
				position.y = startY - (i * verticalHeight);
				frame.transform.position = position;	
			}
		}

		if (PlayerPrefs.GetInt("DidSwipeToUnlock") == 1) {
			port.SetActive(false);
			menu.SetActive(true);
			StartCoroutine(FadeInMenu(0.5f));
			if (MissionDetails.Instance.encounterId != null) {
				ShowStoryMode(false);
			}
		}
		else {
			menu.SetActive(false);
		}


	}
	
	public void OnMenuButtonTap() {
		GameObject current = UICamera.currentTouch.current;
		string buttonName = "";
		if (current != null) {
		 	buttonName = current.name;
		}
		
		if (buttonName == "Play") {
			UILabel button = current.GetComponentInChildren<UILabel>();
			if (button.text == "Play") {
				mmes.Play();			
			}
		}
		else if (buttonName == "StoryMode") {
			ShowStoryMode(true);
		}
		else if (buttonName == "ArcadeMode") {
			if (animating == false) {
				animating = true;
				
				GameObject mainMenu = GameObject.Find("MainMenu");
				UIAnchor[] anchors = mainMenu.GetComponentsInChildren<UIAnchor>();
				foreach(UIAnchor anchor in anchors) {
					anchor.enabled = false;	
				}
				
				mmes.DownloadEncounters(false);
				StartCoroutine(AnimateTimelineIn(true));
			}
		}
		else if (buttonName == "Title") {
			if (debugTap++ >= 4) {
				Debug.Log ("Unlocked!");

				GameSaver.SetSaveState(0, true);
				GameSaver.SetSaveState(1, true);
				GameSaver.SetSaveState(2, true);
				GameSaver.SetSaveState(3, true);

				UILabel label = current.GetComponentInChildren<UILabel>();
				label.color = Color.blue;

				debugTap = 0;
			}


		}
		else if (buttonName == "Back") {
			if (animating == false) {
				animating = true;
				StartCoroutine(AnimateTimelineBack());
			}
		}
	}
	
	IEnumerator AnimateTimelineBack() {
		Vector3[] starts = new Vector3[frames.Length];
		Vector3[] ends = new Vector3[frames.Length];
		
		for (int i = 0; i < frames.Length; i++) {
			GameObject frame = frames[i];
			Vector3 start = starts[i] = frame.transform.position;
			ends[i] = new Vector3(start.x, start.y - verticalHeight, start.z);
		}
		
		float duration = 1.0f;
		float t = 0.0f;
		
		while (t < 1.0f) {
			t += Time.deltaTime/duration;
			for (int i = 0; i < frames.Length; i++) {
				GameObject frame = frames[i];
				Vector3 start = starts[i];
				Vector3 end = ends[i];
				frame.transform.position = Vector3.Lerp(start, end, Mathf.SmoothStep(0.0f, 1.0f, t));
			}

			yield return null;
		}
		animating = false;
		for (int i = 0; i < frames.Length; i++) {
			GameObject frame = frames[i];
			Vector3 end = ends[i];
			frame.transform.position = end;
		}
		
		mmes.OnBackButtonTapped();
	}
	
	IEnumerator AnimateTimelineIn(bool animate) {
		Vector3[] starts = new Vector3[frames.Length];
		Vector3[] ends = new Vector3[frames.Length];
		
		for (int i = 0; i < frames.Length; i++) {
			GameObject frame = frames[i];
			Vector3 start = starts[i] = frame.transform.position;
			ends[i] = new Vector3(start.x, start.y + verticalHeight, start.z);
		}
		
		float duration = animate ? 1.0f : 0.0f;
		float t = 0.0f;
		
		while (t < 1.0f) {
			t += Time.deltaTime/duration;
			for (int i = 0; i < frames.Length; i++) {
				GameObject frame = frames[i];
				Vector3 start = starts[i];
				Vector3 end = ends[i];
				frame.transform.position = Vector3.Lerp(start, end, Mathf.SmoothStep(0.0f, 1.0f, t));
			}

			yield return null;
		}
		
		animating = false;
		for (int i = 0; i < frames.Length; i++) {
			GameObject frame = frames[i];
			Vector3 end = ends[i];
			frame.transform.position = end;
		}
	}

	IEnumerator FadeInMenu(float time) {
		float elapsed = 0.0f;

		UIWidget[] widgets = menu.GetComponentsInChildren<UIWidget>();
		for (int i = 0; i < widgets.Length; i++){
			widgets[i].alpha = 0.0f;
		}
		while (elapsed < time) {
			float amt = elapsed/time;
			for (int i = 0; i < widgets.Length; i++){
				widgets[i].alpha = amt;
			}

			elapsed += Time.deltaTime;
			yield return null;
		}

		for (int i = 0; i < widgets.Length; i++){
			widgets[i].alpha = 1.0f;
		}
	}

	void ShowStoryMode(bool animate) {
		if (animating == false) {
			animating = true;
			
			GameObject mainMenu = GameObject.Find("MainMenu");
			UIAnchor[] anchors = mainMenu.GetComponentsInChildren<UIAnchor>();
			foreach(UIAnchor anchor in anchors) {
				anchor.enabled = false;
			}
			
			mmes.DownloadEncounters(true);
			StartCoroutine(AnimateTimelineIn(animate));
		}
	}

	void OnHeroDie(Vector3 pos, HeroVehicle vehicle) {
		port.SetActive(false);
		menu.SetActive(true);
		PlayerPrefs.SetInt("DidSwipeToUnlock", 1);
		StartCoroutine(FadeInMenu(0.5f));
	}

	void OnEnable() {
		Messenger.AddListener("OnHeroDie", new Callback<Vector3, HeroVehicle>(OnHeroDie));
	}

	void OnDisable() {
		Messenger.RemoveListener("OnHeroDie", new Callback<Vector3, HeroVehicle>(OnHeroDie));
	}
}

