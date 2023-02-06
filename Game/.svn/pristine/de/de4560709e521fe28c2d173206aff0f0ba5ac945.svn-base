using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class UpgraderDetails : MonoBehaviour
{
	UILabel _description;
	UILabel _cost;
	UILabel _title;
	UILabel _upgradeAction;
	UILabel _upgraderMessage;

	UIButton _upgraderButton;

	public UITable _statsTable;
	public UpgraderDetailStat statPrefab;
	List<UpgraderDetailStat> _cachedStatItems = new List<UpgraderDetailStat>();

	// Use this for initialization
	void Awake ()
	{
		UILabel[] labels = GetComponentsInChildren<UILabel>();
		for (int i = 0 ; i < labels.Length; i++) {
			UILabel label = labels[i];
			if (label.name == "Title") {
				_title = label;
			}
			else if (label.name == "Description") {
				_description = label;
			}
			else if (label.name == "Cost") {
				_cost = label;
			}
			else if (label.name == "UpgradeAction") {
				_upgradeAction = label;
			}
			else if (label.name == "UpgraderMessage") {
				_upgraderMessage = label;
				_upgraderMessage.text = "";
			}
		}

		UIButton[] buttons = GetComponentsInChildren<UIButton>();
		for (int i = 0; i < buttons.Length; i++) {
			UIButton button = buttons[i];
			if (button.name == "UpgradeButton") {
				_upgraderButton = button;
			}
		}
	}

	public void SetDetails(PortState portState, int selectedTypeIndex, int selectedLevelIndex) {
		PortState.MinionTypeDetails details = portState.details[selectedTypeIndex];

		//_description.text = details.description;
		//_title.text = details.title;
		//_selectedComponent.text = portState.portIndex <= 2 ? "Port " + (portState.portIndex + 1).ToString() : "Mothership";

		if (details.upgradeType == PortState.MinionUpgradeType.LEVEL_MINION) {
			DetailsForLevel(portState, selectedTypeIndex, selectedLevelIndex);
		}
		else if (details.upgradeType == PortState.MinionUpgradeType.SINGLE_LEVEL) {
			DetailsForLevel(portState, selectedTypeIndex, selectedLevelIndex);
		}
		else {
			DetailsForSingleUse(portState, selectedTypeIndex, selectedLevelIndex);
		}

		_statsTable.Reposition();
	}

	UpgraderDetailStat GetCachedItem() {
		if (_cachedStatItems.Count == 0)
			return null;
		
		UpgraderDetailStat item = _cachedStatItems[0];
		_cachedStatItems.RemoveAt(0);
		return item;
	}

	void DetailsForSingleUse(PortState port, int selectedTypeIndex, int selectedLevelIndex) {
		PortState.MinionTypeLevelDetail currentLevel = port.details[selectedTypeIndex].levels[0];

		ShowUpgraderButton(true);
		_upgradeAction.text = "Repair";
		_title.text = currentLevel.title;
		_description.text = currentLevel.description;

		_cost.text = "-" + currentLevel.cost.ToString();
		_cost.color = Color.white;

		CleanupStatItems();
	}

	void DetailsForSingleLevel(PortState port, int selectedTypeIndex, int selectedLevelIndex) {
		if (port.details[port.selectedType].state == 0) {
			ShowUpgraderButton(false);
			_title.text = port.details[selectedTypeIndex].levels[selectedLevelIndex].title;
			_description.text = port.details[selectedTypeIndex].levels[selectedLevelIndex].description;
		}
	}

	void DetailsForLevel(PortState port, int selectedTypeIndex, int selectedLevelIndex) {
		ShowUpgraderButton(true);

		PortState.MinionTypeDetails currentType = port.details[port.selectedType];
		PortState.MinionTypeDetails selectedType = port.details[selectedTypeIndex];

		PortState.MinionTypeLevelDetail currentLevel = currentType.levels[currentType.state];
		PortState.MinionTypeLevelDetail selectedLevel = selectedType.levels[selectedLevelIndex];

		//If they're the same type, show the upgrade path unless it's max
		//If they're different types, show the difference between the two

		bool sameThing = (port.selectedType == selectedTypeIndex && currentType.state == selectedLevelIndex);
		bool levelTooHigh = (port.selectedType == selectedTypeIndex && selectedLevelIndex > currentLevel.index + 1);
		bool downgrade = (currentType.index != 0 && selectedType.index == 0);
		bool lessThan = (currentType.index == selectedTypeIndex) && (selectedLevelIndex < currentLevel.index);
		bool maxLevel = (port.selectedType == selectedTypeIndex) && 
			(currentType.state >= currentType.levels.Length - 1 || currentType.state == selectedLevelIndex);

		ShowUpgraderButton( !sameThing && !maxLevel && !lessThan );

		if (downgrade) {
			_cost.text = "+" + Mathf.FloorToInt(currentLevel.cost * 0.5f).ToString();
			_cost.color = Color.green;
		}
		else if (sameThing || maxLevel) {
			_cost.text = "-";
			_cost.color = Color.grey;
		}
		else {
			if (levelTooHigh) {
				_cost.text = (selectedType.levels[selectedLevelIndex - 1].cost + selectedLevel.cost).ToString();
				_cost.color = Color.white;
			}
			else {
				_cost.text = selectedLevel.cost.ToString();
				_cost.color = Color.white;
			}
		}
		 
		_upgradeAction.text = selectedType.index == 0 ? "Downgrade" : "Upgrade";
		_title.text = selectedLevel.title;
		_description.text = selectedLevel.description;
		
		CleanupStatItems();

		for (int i = 0; i < 3; i++) {
			UpgraderDetailStat cached = GetCachedItem();
			if (cached == null) {
				cached = GameObject.Instantiate(statPrefab) as UpgraderDetailStat;
				cached.transform.parent = _statsTable.transform;
				cached.transform.localScale = new Vector3(1.0f, 1.0f, 1.0f);

			}
			else {
				cached.gameObject.SetActive(true);
			}

			cached.name = i.ToString();
			if (i == 0) {
				if (maxLevel && !lessThan) {
					cached.SetDetailsMax("LIFE", currentLevel.life);
				}
				else {
					cached.SetDetails("LIFE", currentLevel.life, selectedLevel.life);
				}
			}
			else if (i == 1) {
				if (maxLevel && !lessThan) {
					cached.SetDetailsMax("DAM", currentLevel.damage);
				}
				else {
					cached.SetDetails("DAM", currentLevel.damage, selectedLevel.damage);
				}
			}
			else if (i == 2) {
				if (maxLevel && !lessThan) {
					cached.SetDetailsMax("SPEED", currentLevel.speed);
				}
				else {
					cached.SetDetails("SPEED", currentLevel.speed, selectedLevel.speed);
				}
			}
			/*else if (i == 3) {
				if (!maxLevel) {
					bool isFree = selectedLevel.cost == 0;
					cached.SetDetails("SCRAP", port.scrapCount, 
					                  isFree ? port.scrapCount + Mathf.FloorToInt(currentLevel.cost * 0.5f) : port.scrapCount - selectedLevel.cost);
				}
			}*/
		}
	}

	void ShowUpgraderButton(bool show) {
		UIWidget[] widgets = _upgraderButton.GetComponentsInChildren<UIWidget>();
		for (int i = 0; i < widgets.Length; i++) {
			widgets[i].enabled = show;
		}
	}


	void CleanupStatItems() {
		UpgraderDetailStat[] oldItems = _statsTable.GetComponentsInChildren<UpgraderDetailStat>();
		for (int i = 0; i < oldItems.Length; i++) {
			oldItems[i].gameObject.SetActive(false);
			_cachedStatItems.Add(oldItems[i]);
		}
	}

	void OnUpgraderMessage(string message) {
		StopCoroutine("UpgraderMessage");
		StartCoroutine("UpgraderMessage", message);
	}

	IEnumerator UpgraderMessage(string message) {
		Color c = _upgraderMessage.color; c.a = 1.0f;
		_upgraderMessage.text = message;
		_upgraderMessage.color = c;

		yield return new WaitForSeconds(3.0f);

		float t = 0.0f, duration = 3.0f;
		while (t <= 1.0f) {
			t+= Time.deltaTime/duration;
			c.a = Mathf.SmoothStep(1.0f, 0.0f, t);
			_upgraderMessage.color = c;
			yield return null;
		}

	}

	void OnEnable() {
		Messenger.AddListener("UpgraderMessage", new Callback<string>(OnUpgraderMessage));
	}

	void OnDisable() {
		Messenger.RemoveListener("UpgraderMessage", new Callback<string>(OnUpgraderMessage));
	}
}

