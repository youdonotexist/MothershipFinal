using UnityEngine;
using System.Collections;

public class Deployable : MonoBehaviour
{
	public SpatialNode _node = null;
	
	public virtual void OnCreate(Vector3 startPos, Vector3 endPos) {}
	public virtual void OnFullyDeployed() {}
}

