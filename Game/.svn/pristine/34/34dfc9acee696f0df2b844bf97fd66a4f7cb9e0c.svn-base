using UnityEngine;
using System.Collections;

public class PostEncounterManager : MonoBehaviour {
	public GameObject rootContainer;
	public UISprite mainPanel;
	public UISprite secondaryPanel;
	Vector3 startPos;
	Vector3 hiddenPos;
	
	UIPanel _panel;

	public Upgrader _upgrader;
	public EncounterSummary _summary;
	public UISprite _background;

	public  UpgraderDetailStat statPrefab;

	PostEncounterView[] screens;
	int screenIndex = -1;

	Vector3 initPos;
	float verticalHeight;

	void Awake() {
		//Get the root panel and disable it so it doesn't count against draw calls
		_panel = GetComponent<UIPanel>();

		//Capture start/end positions for root container
		Bounds bounds = NGUIMath.CalculateAbsoluteWidgetBounds(_panel.transform);
		Vector3 sPos = _panel.transform.position;
		startPos = sPos;
		hiddenPos = new Vector3(bounds.center.x - bounds.extents.x, sPos.y, sPos.z); //TODO - Screen.width is overkill, but can't calc actual width
		
		//Screen size calculations
		UICamera camera = GameObject.Find("Camera").GetComponent<UICamera>();
		Rect rect = camera.camera.pixelRect;
		Vector3 min = camera.camera.ScreenToWorldPoint(new Vector3(0.0f, rect.yMin, 0.0f));
		Vector3 max = camera.camera.ScreenToWorldPoint(new Vector3(0.0f, rect.yMax, 0.0f));
		verticalHeight = Vector3.Distance(min, max);

		//UIWidget widget = _upgrader.GetComponent<UIWidget>();
		//widget.topAnchor.absolute = (int) (widget.topAnchor.absolute - verticalHeight);
		//initPos = _summary.transform.localPosition;

	}

	// Use this for initialization
	void Start () {
		mainPanel.SetAnchor((Transform)null);
		secondaryPanel.SetAnchor((Transform)null);

		screens = new PostEncounterView[]{_summary, _upgrader};
		StartCoroutine(DoHide(0.0f));
	}

	void OnEncounterEnd() {
		screenIndex = 0;
		ActivateCurrentScreen();
	}

	public void NextScreen() {
		screenIndex++;
		ActivateCurrentScreen();
	}

	/**
	 * Order of SetActive is important here so the screen has time to call its appropriate coroutines
	 * being deactivated
	 */
	void ActivateCurrentScreen() {
		for (int i = 0; i < screens.Length; i++) {
			bool current = i == screenIndex;
			if (current) {
				screens[i].OnWillAppear();
			}
			else {
				screens[i].OnWillDisappear();
			}
		}
	}

	IEnumerator AnimateToCurrent() {
		Vector3 start = initPos;
		Vector3 end = new Vector3(initPos.x, initPos.y + (verticalHeight * screenIndex * 0.5f), initPos.z);

		float duration = 0.5f;
		float t = 0.0f;
		while (t <= 1.0f) {
			t += Time.deltaTime/duration;
			_summary.transform.localPosition = Vector3.Lerp(start, end, Mathf.SmoothStep(0.0f, 1.0f, t));

			yield return null;
		}

		_summary.transform.localPosition = end;
	}

	public void ContinueToBattle() {
		Hide ();

		Messenger.Broadcast("OnUpgradeFinish");
	}

	void OnUpgradeDialog(MissionManager.PostBattleMessage message) {
		_summary.SetSummary(message);
		_upgrader.SetNextSprite(message.nextHeroSpriteName);
		OnEncounterEnd();
		Show ();
	}

	void Show() {
		ActivateCurrentScreen();
		StartCoroutine(DoShow(0.4f));
	}

	void Hide() {
		StartCoroutine(DoHide(0.4f));

		for (int i = 0; i < screens.Length; i++) {
			bool current = i == screenIndex;
			if (current) {
				screens[i].OnWillDisappear();
				break;
			}
		}
	}

	IEnumerator DoShow(float d) {
		float duration = d, t = 0.0f;
		_panel.enabled = true;
		
		while (t <= 1.0f) {
			t += Time.deltaTime/duration;
			_panel.transform.position = Vector3.Lerp(hiddenPos, startPos, Mathf.SmoothStep(0.0f, 1.0f, t));
			yield return null;
		}


		screens[screenIndex].OnDidAppear();
		_panel.transform.position = startPos;
	}
	
	IEnumerator DoHide(float d) {

		//screens[screenIndex].OnWillDisappear();
		float duration = d, t = 0.0f;
		while (t <= 1.0f) {
			t += Time.deltaTime/duration;
			_panel.transform.position = Vector3.Lerp(startPos, hiddenPos, Mathf.SmoothStep(0.0f, 1.0f, t));
			yield return null;
		}
		
		_panel.enabled = false;

		if (screenIndex >= 0) {
			screens[screenIndex].OnDidDisappear();
		}

		_panel.transform.position = hiddenPos;
	}

	void OnEnable() {
		Messenger.AddListener("OnUpgradeDialog", new Callback<MissionManager.PostBattleMessage>(OnUpgradeDialog));
	}

	void OnDestroy() {
		Messenger.RemoveListener("OnUpgradeDialog", new Callback<MissionManager.PostBattleMessage>(OnUpgradeDialog));
	}
}
