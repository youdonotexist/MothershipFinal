using UnityEngine;
using System.Collections;

public class HeroMovementNode : SpatialNode
{
	void Start ()
	{	
		//mineslots = new SpatialNode[3];
		//mineslots[0] = _aiManager.GetFarNode(slot * 2);
		//mineslots[1] = _aiManager.GetFarNode((slot * 2) + 1);
		//mineslots[2] = _aiManager.GetFarNode((slot * 2) + 2);
		
		_forward = new SpatialNode[3];
		_forward[0] = _aiManager.GetMidNode(slot - 1);
		_forward[1] = _aiManager.GetMidNode(slot);
		_forward[2] = _aiManager.GetMidNode(slot + 1);
	}
}

