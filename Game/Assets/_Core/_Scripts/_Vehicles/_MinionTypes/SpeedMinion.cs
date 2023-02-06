using UnityEngine;
using System.Collections;

public class SpeedMinion : MinionTypeBase {

	public override void SetLevelDetails(PortState.MinionTypeLevelDetail levelDets) {
		base.SetLevelDetails(levelDets);
		_vehicle.maxSpeed *= levelDetails.speed;
	}

	public override float GetReloadSpeed() {return 2.0f;}
}
