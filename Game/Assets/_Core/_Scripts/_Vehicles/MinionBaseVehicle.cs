using UnityEngine;
using System.Collections;

public class MinionBaseVehicle : Vehicle
{
	public GameObject explosionPrefab;
	public AudioClip _launchEffect;
	public AudioClip _flyEffect;
	
	public Path2 path;
	public Port parentPort;
	public float maxSpeed = 2000.0f;
	
	public bool FollowPath = false;
	public bool useSmoothPath = false;
	public int portIndex = -1;

	protected MinionTypeBase _baseType;
	
	public virtual void SetPath(Path2 p) {}
	public virtual void StopFollowPath(bool keepMoving) {}
	public virtual void OnBecameInvisible() {}
	public virtual void OnPortChange(bool enabled) {}
	public virtual void SetLaseredState() {}
	public virtual void OnPostDeployTap() {
		if (_baseType != null) {
			_baseType.OnDeployPortTap();
		}
	}

	public virtual float GetReloadSpeed() {
		return _baseType.GetReloadSpeed();
	}
}

