using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class PoolManager : MonoBehaviour
{
	static PoolManager _Instance;
	public static PoolManager Instance() {
		if (_Instance == null) {
			GameObject go = GameObject.Find("_PoolManager");
			if (go == null) {
				go = new GameObject("_PoolManager");
				_Instance = go.AddComponent<PoolManager>();
			}
			else {
				_Instance = go.GetComponent<PoolManager>();	
			}
		}
		
		return _Instance;
	}
	
	public GameObject[] basicPrefabs;
	public GameObject[] juggernautPrefabs;
	public GameObject[] scientistPrefabs;
	public GameObject[] generalPrefabs;

	void Awake() {
		_pools = new Dictionary<string, PoolingSystem<GameObject>>();

		GameObject[] currentPrefabArray = null;
		if (MissionDetails.Instance.encounterType == "BASIC") {
			currentPrefabArray = basicPrefabs;
		}
		else if (MissionDetails.Instance.encounterType == "JUGGERNAUT") {
			currentPrefabArray = juggernautPrefabs;
		}
		else {
			currentPrefabArray = scientistPrefabs;
		}

		if (currentPrefabArray != null) {
			for (int i = 0; i < currentPrefabArray.Length; i++) {
				GameObject prefab = currentPrefabArray[i];
				AddPool(new PoolingSystem<GameObject>(prefab, 4), prefab.name);
			}
		}

		if (generalPrefabs != null) {
			for (int i = 0; i < generalPrefabs.Length; i++) {
				GameObject prefab = generalPrefabs[i];
				AddPool(new PoolingSystem<GameObject>(prefab, 4), prefab.name);
			}
		}
	}
	
	Dictionary<string, PoolingSystem<GameObject>> _pools;
	
	public void AddPool(PoolingSystem<GameObject> pool, string type) {
		_pools.Add(type, pool);
	}

	public GameObject Create(GameObject prefab, Vector3 pos, Quaternion rot) {
		PoolingSystem<GameObject> pool;
		_pools.TryGetValue(prefab.name, out pool);
		if (pool == null) {
			Debug.Log ("Pool doesn't exist. Creating a new object: " + prefab.name);
			return (GameObject) Instantiate(prefab, pos, rot);

		}
		return pool.GetElement();
	}

	public GameObject Create(GameObject prefab) {
		return Create (prefab, Vector3.zero, Quaternion.identity);
	}

	public void Release(GameObject obj, GameObject type) {
		PoolingSystem<GameObject> pool;
		_pools.TryGetValue(type.name, out pool);
		if (pool != null) {
			pool.ReleaseElement(obj, true);
		}
		else {
			Destroy (obj);
		}
	}

	public bool IsPoolable(GameObject gameObj) {
		return _pools.ContainsKey(gameObj.name);
	}
}

