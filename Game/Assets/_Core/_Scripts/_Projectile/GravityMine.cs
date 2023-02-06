using UnityEngine;
using System.Collections;

public class GravityMine : Mine
{
	exSpriteAnimation _animation;
	
	public override void OnFullyDeployed ()
	{
		base.OnFullyDeployed();
		if (_animation == null) {
			_animation = GetComponentInChildren<exSpriteAnimation>();
		}
		
		_animation.Play("GravityFieldAnimation");
		
	}
}

