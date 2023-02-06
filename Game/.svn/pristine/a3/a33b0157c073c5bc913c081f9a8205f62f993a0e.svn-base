using UnityEngine;
using System.Collections;

public class DamagableBubbler : Damagable
{
	private Damagable _bubblerTarget;

	public override void OnDamage(float amount, int layer) {
		if (_bubblerTarget != null) {
			_bubblerTarget.OnDamage(amount, layer);
		}
	}

	public void setTarget(Damagable dam) {
		_bubblerTarget = dam;
		collisionType = dam.collisionType;
	}
}

