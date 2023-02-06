using UnityEngine;
using System.Collections;

public class MinionTypeBase : MonoBehaviour
{
	public PortState.MinionTypeLevelDetail levelDetails;
	protected MinionPhysicsVehicle _vehicle;
	protected exSprite _sprite;

	public Callback<PortState.MinionTypeLevelDetail> onDetailsChange = null;

	protected virtual void Awake() {
		_vehicle = GetComponent<MinionPhysicsVehicle>();
		_sprite = GetComponentInChildren<exSprite>();
	}

	public virtual void SetLevelDetails(PortState.MinionTypeLevelDetail levelDets) {
		levelDetails = levelDets;
		_vehicle.damageMultiplier = levelDetails.damage;
		if (onDetailsChange != null) {
			onDetailsChange(levelDets);
		}
	}

	public virtual void OnDeployPortTap() {}
	public virtual void OnPathEnd() {}
	public virtual float GetReloadSpeed() {return 3.0f;}
}

