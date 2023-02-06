using UnityEngine;
using System.Collections;

public class ShieldNode : SpatialNode {
	
	void Start() {
		_backward = new SpatialNode[3];
		_backward[0] = _aiManager.GetHeroNodeForIndex(slot - 1);
		_backward[1] = _aiManager.GetHeroNodeForIndex(slot);
		_backward[2] = _aiManager.GetHeroNodeForIndex(slot + 1);
		
		_forward = new SpatialNode[3];
		_forward[0] = _aiManager.GetFarNode(slot * 2);
		_forward[1] = _aiManager.GetFarNode((slot * 2) + 1);
		_forward[2] = _aiManager.GetFarNode((slot * 2) + 2);
		
		 
	}
}
