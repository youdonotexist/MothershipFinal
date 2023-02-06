using UnityEngine;
using System.Collections;

public class LevelManager : Singleton<LevelManager>
{

	public string MainMenuLevelName() {
		return "MainMenu";
	}

	public string EncounterLevelName() {

		//16:9, 16:10
		float rat = ratio (Screen.width, Screen.height);
		if (rat < 1.5f) {
			return "Encounter.4_3";
		}
		else {
			return "Encounter.16_9";
		}
	}

	float ratio(int xi,int yi) {
		float x = xi, y = yi;
		return x/y;
	}
}

