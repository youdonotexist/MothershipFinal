using UnityEngine;
using System.Collections;

public class UpgraderTreeBase : UpgradeTree
{
	public UpgraderCircle _center;
	public UpgraderCircle _topRight;
	public UpgraderCircle _bottomRight;
	public UpgraderCircle _topLeft;
	public UpgraderCircle _bottomLeft;

	// Use this for initialization
	void Awake ()
	{
		upgradeCircles = new UpgraderCircle[]{_center, _topRight, _bottomRight, _topLeft, _bottomLeft};
	}

	public override void SetSelected (int selectedTypeIndex, int selectedLevelContext)
	{
		for (int i = 0; i < upgradeCircles.Length; i++) {
			UpgraderCircle it = upgradeCircles[i];
			it.SetSelected(it.typeContext == selectedTypeIndex && it.levelContext == selectedLevelContext);
		}
	}

	public override void SetState(PortState state) {
		for (int i = 0; i < upgradeCircles.Length; i++) {
			if (i < state.details.Length) {
				PortState.MinionTypeDetails dets = state.details[i];
				string spritename = "minion-" + dets.title.ToLower() + "-lvl1";
				if (i == (int) PortState.MinionTypes.TWOHIT_MINION) spritename += "-2";
				upgradeCircles[i].SetDetails(dets.state == i, false, spritename);
				upgradeCircles[i].typeContext = i;
				upgradeCircles[i].levelContext = dets.state < 0 ? 0 : dets.state;
			}

		}
	}
}

