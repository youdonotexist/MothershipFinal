﻿using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class Upgrader : PostEncounterView {
	public UIButton[] componentButtons; 
	public UILabel scrapCount;
	public UISprite _nextPortraitSprite;

	UpgradeTree _currentTree;
	public UpgraderTreeBase baseTree;
	public UpgraderTreeLevel levelTree;
	public UpgraderTreeRepair repairTree;
	public UpgraderDetails _details;
	
	int scrapMetal;

	private int scrapTap = 0;

	List<UpgradeMenuItem> _cachedMenuItems = new List<UpgradeMenuItem>();

	int currentPortIndex = -1;
	PortState.MinionTypeDetails currentDetails;
	PortState.MinionTypeLevelDetail currentLevel;

	PortState[] portStates = new PortState[4];
	ColliderOutline2D[] portOutlines = new ColliderOutline2D[4];

	public void HandleChangePort() {
		string name = UIButton.current.name;
		char num 	= name.ToCharArray()[name.Length - 1];
		int index 	= 0;
		bool wasInt = int.TryParse(num.ToString(), out index);
		if (wasInt) {
			index = index-1;
		}
		else {
			index = 3;
		}
		ChangePort(index, UIButton.current.transform.position);
	}

	void ChangePort(int index, Vector3 position) {
		if (!isShowing()) return;

		currentPortIndex = index;
		OnPortLoadoutUpdate(portStates[index], true);
		UpdatePortHighlight();

		for (int i = 0; i < componentButtons.Length; i++)
		{
			UIButton button = componentButtons[i];
			button.tweenTarget = null;

			if (button.enabled) {
				UISprite sprite = button.GetComponent<UISprite>();
				UILabel label = button.GetComponentInChildren<UILabel>();
				UIColorSwitcher swither = button.GetComponent<UIColorSwitcher>();
				if (sprite != null) {
					sprite.spriteName = i == index ? "whitepixel" : "border_rounded_filled";
				}
				if (label != null) {
					label.color = i == index ? Color.white : swither.ColorForBattleType(MissionDetails.Instance.encounterType);
				}
			}
		}
	}

	void SelectPowerup(UpgradeMenuItem item) {
		/*Port.PortState state = portStates[currentPortIndex];
		_details.SetDetails(state, state.selectedType, );
		currentDetails = item.GetDetails();
		
		UpgradeMenuItem[] rows = _scrollView.GetComponentsInChildren<UpgradeMenuItem>();
		for (int i = 0; i < rows.Length; i++) {
			UpgradeMenuItem it = rows[i];
			if (it == item) {
				it.SetHighlight(Color.blue);
			}
			else {
				it.SetHighlight(Color.white);
			}
		}
		//}*/
	}

	/**
	 * Updates the detail display
	 * and the tree display
	 */
	void SelectPowerup2(int selectedTypeIndex, int selectedLevelIndex, PortState state) {
		PortState port = state;
		if (state == null) {
			port = portStates[currentPortIndex];
		}

		currentDetails = state.GetTypeDetailsByIndex(selectedTypeIndex);
		currentLevel = currentDetails.levels[selectedLevelIndex];

		_details.SetDetails(port, selectedTypeIndex, selectedLevelIndex);
		_currentTree.SetSelected(selectedTypeIndex, selectedLevelIndex);
	}

	public void SelectedPowerup() {
		UIButton b = UIButton.current;
		SelectPowerup(b.GetComponent<UpgradeMenuItem>());
	}

	public void SelectedPowerup2() {
		UIButton b = UIButton.current;
		UpgraderCircle circle = b.GetComponent<UpgraderCircle>();
		SelectPowerup2(circle.typeContext, circle.levelContext, portStates[currentPortIndex]);
	}

	PortState.MinionTypeDetails GetCurrentDetails(int portIndex) {
		PortState state = portStates[portIndex];

		return state.details[state.selectedType];
	}

	public void UpgradePort() {
		Messenger.Broadcast("UpdateShipComponent", currentPortIndex, currentDetails.index, currentLevel.index);
	}

	void UpdateScrapMetal(float metal) {
		scrapCount.text = metal.ToString();
		for (int i = 0; i < portStates.Length; i++) {
			if (portStates[i] != null) {
				portStates[i].scrapCount = metal;
			}
		}
	}

	void OnPortInit(PortState port, ColliderOutline2D outline) {
		portStates[port.portIndex] = port;
		portOutlines[port.portIndex] = outline;
	}

	void OnPortLoadoutUpdate(PortState portState, bool updateUI) {
		portStates[portState.portIndex] = portState;

		if (updateUI && portState.details != null && portState.details.Length >= 1) {

			if (portState.portType == PortState.PortType.MOTHERSHIP) { //We're a single-ite
				baseTree.gameObject.SetActive(false);
				levelTree.gameObject.SetActive(false);
				repairTree.gameObject.SetActive(true);

				_currentTree = baseTree;
				_currentTree.SetOnClick(new EventDelegate(this, "SelectedPowerup2"));
				
				PortState.MinionTypeDetails details = portState.GetCurrentTypeDetails();
				
				currentDetails = details;
				repairTree.SetState(portState);
				SelectPowerup2(portState.selectedType, 0, portState);
			}
			else if (portState.selectedType == 0) { //Show the base
				baseTree.gameObject.SetActive(true);
				levelTree.gameObject.SetActive(false);
				repairTree.gameObject.SetActive(false);

				_currentTree = baseTree;
				_currentTree.SetOnClick(new EventDelegate(this, "SelectedPowerup2"));

				PortState.MinionTypeDetails details = portState.GetCurrentTypeDetails();

				currentDetails = details;
				baseTree.SetState(portState);
				SelectPowerup2(portState.selectedType, details.state, portState);

			}
			else { //Show the level
				baseTree.gameObject.SetActive(false);
				levelTree.gameObject.SetActive(true);
				repairTree.gameObject.SetActive(false);

				_currentTree = levelTree;
				_currentTree.SetOnClick(new EventDelegate(this, "SelectedPowerup2"));

				PortState.MinionTypeDetails details = portState.GetCurrentTypeDetails();

				currentDetails = details;
				levelTree.SetState(portState);
				SelectPowerup2(portState.selectedType, details.state, portState);
			}

			return;
		}
	}

	public void SetNextSprite(string spriteName)
	{
		_nextPortraitSprite.spriteName = spriteName;
	}

	void OnUpgraderMessage(string message) {

	}

	void UpdatePortHighlight() {
		for (int i = 0; i < portOutlines.Length; i++) {
			//Bounds b = componentButtons[i].collider.bounds;
			//Vector3 pos = new Vector3(b.center.x + b.extents.x, b.center.y, b.center.z);

			//Port port = portOutlines[i].GetComponent<Port>();
			//port.GetComponent<UISprite>().color = i == currentPortIndex ? Color.green : Color.white;

			//portOutlines[i].SetColor(i == currentPortIndex ? Color.green : Color.clear);
			//portOutlines[i].Show(i == currentPortIndex, pos);
		}
	}

	UpgradeMenuItem GetCachedItem() {
		if (_cachedMenuItems.Count == 0)
			return null;

		UpgradeMenuItem item = _cachedMenuItems[0];
		_cachedMenuItems.RemoveAt(0);
		return item;
	}

	public void Show() {
		//hidden = false;
		StartCoroutine(DoShow (1.0f));
	}

	public void Hide() {
		//hidden = true;
		StartCoroutine(DoHide (1.0f));
	}

	IEnumerator DoShow(float d) {
		/*float duration = d, elapsed = 0.0f;

		for (int i = 0; i < portOutlines.Length; i++) {
			if (portOutlines[i] != null) {
				portOutlines[i].Show(i == currentPortIndex, componentButtons[i].transform.position);
			}
		}

		while (elapsed < duration) {
			for (int i = 0; i < portOutlines.Length; i++) {
				if (portOutlines[i] != null) {
					Color c = portOutlines[i].GetColor();
					if (c != Color.clear) {
						c.a = elapsed / duration;
						portOutlines[i].SetColor(c);
					}
				}
			}

			elapsed += Time.deltaTime;
			yield return null;
		}*/

		yield return null;
	}

	IEnumerator DoHide(float d) {
		/*float duration = d, elapsed = 0.0f;
		while (elapsed < duration) {
			for (int i = 0; i < portOutlines.Length; i++) {
				if (portOutlines[i] != null) {
					Color c = portOutlines[i].GetColor();
					c.a = 1.0f - (elapsed/duration);
					portOutlines[i].SetColor(c);
				}
			}

			elapsed += Time.deltaTime;
			yield return null;
		}

		for (int i = 0; i < portOutlines.Length; i++) {
			if (portOutlines[i] != null) {
				if (i == currentPortIndex) {
					portOutlines[i].Show(false, componentButtons[i].transform.position);
				}
			}
		}*/

		OnDidAppear();
		yield return null;
	}

	public override void OnWillAppear() {
		StartCoroutine(DoShow (0.4f));
		base.OnWillAppear();
	}

	public override void OnWillDisappear() {
		StartCoroutine(DoHide (0.4f));
		base.OnWillDisappear();
	}

	public override void OnDidAppear() {
		base.OnDidAppear();
		if (currentPortIndex == -1) {
			currentPortIndex = 0;
			ChangePort(currentPortIndex, Vector3.zero);
		}
	}

	public void __DEBUG_SCRAP_GIVAR() {
		if (scrapTap == 3) {
			GameObject.Find("Mothership").GetComponent<MothershipVehicle>().AddScrap(20);
			scrapTap = 0;
		}
		scrapTap++;
	}

	void OnEnable() {
		Messenger.AddListener("onScrapMetalUpdate", new Callback<float>(UpdateScrapMetal));
		Messenger.AddListener("onPortLoadoutUpdate", new Callback<PortState, bool>(OnPortLoadoutUpdate));
		Messenger.AddListener("OnPortSelected", new Callback<int, Vector3>(ChangePort));
		Messenger.AddListener("OnPortInit", new Callback<PortState, ColliderOutline2D>(OnPortInit));
		Messenger.AddListener("UpgraderMessage", new Callback<string>(OnUpgraderMessage));
	}

	void OnDisable() {
		Messenger.RemoveListener("onScrapMetalUpdate", new Callback<float>(UpdateScrapMetal));
		Messenger.RemoveListener("onPortLoadoutUpdate", new Callback<PortState, bool>(OnPortLoadoutUpdate));
		Messenger.RemoveListener("OnPortSelected", new Callback<int, Vector3>(ChangePort));
		Messenger.RemoveListener("UpgraderMessage", new Callback<string>(OnUpgraderMessage));
		//Messenger.RemoveListener("OnPortInit", new Callback<PortState, ColliderOutline2D>(OnPortInit));
	}
}
