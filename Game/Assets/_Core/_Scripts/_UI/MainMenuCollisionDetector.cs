using UnityEngine;
using System.Collections;

public class MainMenuCollisionDetector : MonoBehaviour
{
	public MainMenuEncounterSelect mmes;
	
	void OnCollisionEnter(Collision c) {
		mmes.DownloadEncounters(c.gameObject.name == "StoryMode");
	}

}

