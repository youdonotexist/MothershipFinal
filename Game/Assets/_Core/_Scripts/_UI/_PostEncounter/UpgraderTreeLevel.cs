using UnityEngine;
using System.Collections;

public class UpgraderTreeLevel : UpgradeTree
{
	public UpgraderCircle _level1;
	public UpgraderCircle _level2;
	public UpgraderCircle _level3;
	public UpgraderCircle _downgrade;

	void Awake() {
		upgradeCircles = new UpgraderCircle[]{_level1, _level2, _level3, _downgrade};
	}

	public override void SetSelected (int selectedTypeIndex, int selectedLevelIndex)
	{
		for (int i = 0; i < upgradeCircles.Length; i++) {
			UpgraderCircle it = upgradeCircles[i];
			it.SetSelected(it.typeContext == selectedTypeIndex && it.levelContext == selectedLevelIndex);
		}
	}


	public override void SetState(PortState state) {
		PortState.MinionTypeDetails details = state.GetCurrentTypeDetails();

		for (int i = 0; i < details.levels.Length +1; i++) {
			if (i <= 2) {
				string spritename = "minion-" + details.title.ToLower() + "-lvl" + (i+1).ToString();
				if (details.index == (int) PortState.MinionTypes.TWOHIT_MINION) spritename+= "-2";
				upgradeCircles[i].SetDetails(i == details.state, i > details.state + 1, spritename);
				upgradeCircles[i].typeContext = state.selectedType;
				upgradeCircles[i].levelContext = i;
			}
			else {
				string spritename = "minion-normal-lvl1";
				upgradeCircles[i].SetDetails(i == details.state, i > details.state + 1, spritename);
				upgradeCircles[i].typeContext = 0;
				upgradeCircles[i].levelContext = 0;
			}
		}
	}
}

