using UnityEngine;
using System.Collections;

public class MissionDetails : Singleton<MissionDetails>
{
	
	public string encounterId;
	public string encounterType;
	public int encounterIndex;

	public string encounterStoryTeller;
	public string encounterOneLiner;
	
	// Use this for initialization
	void Start ()
	{	
		GameObject.DontDestroyOnLoad(gameObject);
		ResourceManager.Instance.Init();
		GameSaver.InitSaveState();
		//BundleManager.Instance.Init();
	}
	
	public void SetEncounterId(string id) {
		encounterId = id;
	}
	
	public string GetEncounterId() {
		return encounterId;
	}

	void Update() { //TODO: Centralize this
		if (Input.GetKeyDown(KeyCode.Escape)) { 
			Application.CancelQuit(); 
		}

		if (Input.GetKey(KeyCode.D)) {
			PlayerPrefs.SetInt("latestBundle", 0);
		}
	}
}

