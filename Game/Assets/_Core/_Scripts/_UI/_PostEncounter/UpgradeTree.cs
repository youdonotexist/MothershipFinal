using UnityEngine;
using System.Collections;

/**
 * An upgrade tree contains a list of UpgraderCircles.
 * Handles highlighting of selected objects and, where applicable,
 * showing current purchased state.
 */
public class UpgradeTree : MonoBehaviour
{
	protected UpgraderCircle[] upgradeCircles;

	public virtual void SetHighlight(int index, Color highlight) {
		for (int i = 0; i < upgradeCircles.Length; i++) {
			upgradeCircles[i].SetSelected(i==index);
		}
	}
	public virtual void SetSelected(int selectedTypeIndex, int selectedLevelContext) {}
	public virtual void SetState(PortState state) {}
	public virtual void SetOnClick(EventDelegate e) {
		//for (int i = 0; i < upgradeCircles.Length; i++) {
			//upgradeCircles[i]._button.onClick.Add(e);
		//}
	}
}

