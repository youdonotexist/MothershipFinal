using UnityEngine;
using System.Collections;

public class FinalBossDirectives : DirectivePack
{
	BasicHeroDirectives _basicAI;
	JuggernautHeroDirectives _juggernautAI;
	ScienceHeroDirectives _scientistAI;

	void Start() {
		_basicAI = gameObject.GetComponent<BasicHeroDirectives>();
		_juggernautAI = gameObject.GetComponent<JuggernautHeroDirectives>();
		_scientistAI = gameObject.GetComponent<ScienceHeroDirectives>();

		//AIDirective[] dirs = _aiManager.AIDirectiveList();
		//for (int i = 0; i < dirs.Length; i++) {

		//}
	}

	void DisableDirective (int type) {
		if (type == 0) {
			_basicAI.enabled = false;
		}
		else if (type == 1) {
			_juggernautAI.enabled = false;
		}
		else if (type == 2) {
			_scientistAI.enabled = false;
		}
	}
}

