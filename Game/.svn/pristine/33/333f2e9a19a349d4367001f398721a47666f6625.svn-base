using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class EncounterSummary : PostEncounterView {

	public UISprite _portrait;
	public UISprite _nextPortrait;
	public UISprite _status;
	public UILabel _name;
	public UILabel _message;
	public UITable _statTable;

	public AudioClip typeWriter;
	public AudioClip deadHit;
	public UILabel _labelPrefab;

	GameObject skipButton;
	GameObject upgradeButton;

	Color32[] palette;

	string heroName = "";
	string message = "";
	Hashtable data = null;


	public void SetSummary(MissionManager.PostBattleMessage battleMessage) {
		_portrait.spriteName = battleMessage.heroSpriteName;
		_nextPortrait.spriteName = battleMessage.nextHeroSpriteName;

		heroName = battleMessage.heroName;
		message = battleMessage.heroObit;

		_name.text = "";
		_message.text = "";
		data = battleMessage.battleData;
	}

	public override void OnWillAppear() {
		_portrait.enabled = false;
		_message.enabled = false;
		_name.enabled = false;
		_status.enabled = false;
		_statTable.enabled = false;

		base.OnWillAppear();
	}

	public override void OnDidAppear() {
		_name.enabled = true;
		_message.enabled = true;
		_statTable.enabled = true;

		buildStats();

		StartCoroutine(DoSummaryBang());
		base.OnDidAppear();
	}

	private void buildStats() {
		Hashtable table = data;
		UILabel[] labels = _statTable.GetComponentsInChildren<UILabel>();
		int i = 0;
		List<string> summaryContents = summaryStats(table);
		foreach (string key in summaryContents) {
			UILabel label = null;
			if (i >= labels.Length)
			{
				label = Instantiate(_labelPrefab) as UILabel;
				label.transform.parent = _statTable.transform;
				label.transform.localScale = new Vector3(1.0f, 1.0f, 1.0f);
				label.transform.localPosition = Vector3.zero;
				label.depth = 3;
			}
			else {
				label = labels[i];
			}
			label.name = i.ToString();
			label.text = key.Replace("\\n", "\n");
			i++;
		}
		
		_statTable.Reposition();
	}

	private List<string> summaryStats(Hashtable metricsHash) {
		List<string> stats = new List<string>();

		float bestTime = (float) metricsHash["best_time"];
		float currentTime = (float) metricsHash["battle_length"];
		string spacing = "      ";

		stats.Add ("Time: \\n" + spacing + currentTime);
		stats.Add ("Best Time: \\n" + spacing + bestTime + (bestTime == currentTime ? "  [ff0000][New Best Time!]" : ""));

		foreach (string key in metricsHash.Keys) {
			if (key == "damage_taken") {
				stats.Add ("Damage Taken: \\n" + spacing + metricsHash[key]);
			}
			else if (key == "minion_count") {
				stats.Add ("Minions Used: \\n" + spacing + metricsHash[key]);
			}
		}

		int random = Random.Range(0, 3);

		if (random == 0) {
			stats.Add ("Total Starfleet budget wasted: \\n" + spacing + "$" + Random.Range(1000, 100000000));
		}
		else if (random == 1) {
			stats.Add ("Number of future heroic exploits thwarted: \\n" + spacing + Random.Range(0, 100));
		}
		else if (random == 2) {
			stats.Add("Number of children orphaned: \\n" + spacing + Random.Range(6, 9999));
		}
		else if (random == 3) {
			stats.Add ("Chances they'll learn to send more than one ship at once: 0%");
		}

		return stats;
	}

	IEnumerator DoSummaryBang() {
		yield return StartCoroutine(NGUIEffects.TypewriterSingle(_name, heroName, 0.05f, typeWriter));
		yield return StartCoroutine(PortraitFlip());
		yield return StartCoroutine(DeadStamp());
		yield return StartCoroutine(NGUIEffects.TypewriterSingle(_message, message, 0.01f, typeWriter));
	}

	IEnumerator DeadStamp() {
		Vector3 endScale = _status.transform.localScale;
		Vector3 endRotation = _status.transform.localRotation.eulerAngles;endRotation.z -= 15.0f;
		float duration = 0.3f, elapsed = 0.0f;

		Vector3 startScale = new Vector3(endScale.x + 2.0f, endScale.y + 2.0f, endScale.z + 2.0f);
		Vector3 startRotation = new Vector3(endRotation.x, endRotation.y, endRotation.z += 15.0f);

		_status.enabled = true;
		yield return null;

		while (elapsed < duration) {
			Quaternion q = _status.transform.localRotation;
			q.eulerAngles = Vector3.Lerp(startRotation, endRotation, elapsed/duration);
			_status.transform.localRotation = q;

			_status.transform.localScale = Vector3.Lerp(startScale, endScale, elapsed/duration);
			
			elapsed += Time.deltaTime;
			yield return null;
		}

		GUIShake.Instance.DoShake(9000.0f);

		//_status.transform.localScale = endScale;
		//Quaternion eq = _status.transform.localRotation;
		//eq.eulerAngles = endRotation;
		//_status.transform.localRotation = eq;
		MasterAudio.PlaySound(deadHit.name);
	}

	IEnumerator PortraitFlip() {
		Vector3 endPos = _portrait.transform.localPosition; //TODO: Use local
		Vector3 endRotation = _portrait.transform.rotation.eulerAngles;
		float duration = 0.7f, elapsed = 0.0f;

		Vector3 startPos = new Vector3(endPos.x - 300.0f, endPos.y, endPos.z);
		Vector3 startRotation = new Vector3(endRotation.x, endRotation.y, endRotation.z - 720.0f);

		_portrait.transform.localPosition = startPos;
		_portrait.transform.localRotation = Quaternion.Euler(startRotation);
		_portrait.enabled = true;

		while (elapsed < duration) {
			_portrait.transform.localPosition = Vector3.Lerp(startPos, endPos, elapsed/duration);
			Quaternion q = _portrait.transform.rotation;
			q.eulerAngles = Vector3.Lerp(startRotation, endRotation, elapsed/duration);
			_portrait.transform.rotation = q;

			elapsed += Time.deltaTime;
			yield return null;
		}

		_portrait.transform.localPosition = endPos;
	}

	IEnumerator FadeInButtons() {
		yield return false;
	}

	void OnMothershipInit(MothershipVehicle vehicle) {

	}

	void OnEnable() {
		Messenger.AddListener("OnMothershipInit", new Callback<MothershipVehicle>(OnMothershipInit));
	}

	void OnDisable() {
		Messenger.RemoveListener("OnMothershipInit", new Callback<MothershipVehicle>(OnMothershipInit));
	}
}
