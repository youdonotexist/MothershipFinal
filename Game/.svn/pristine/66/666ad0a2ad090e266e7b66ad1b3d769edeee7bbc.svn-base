using UnityEngine;
using System.Collections;
using GameObjectList = System.Collections.Generic.List<Asteroid>;

public class AsteroidField : MonoBehaviour {
	
	public GameObject asteroidPrefab;
	
	public GameObjectList asteroidList;
	public int maxAsteroids;
	public float releaseWait = 0.5f;
	public bool deployDebris = false;
	
	int createdCount = 0;
	float releaseElapsed = 0.0f;
	
	// Use this for initialization
	void Awake () {
		asteroidList = new GameObjectList();
	}
	
	// Update is called once per frame
	void Update () {
		if (deployDebris) { 
			Bounds b = collider.bounds;
			
			if (createdCount < maxAsteroids && releaseElapsed > releaseWait ) {
				asteroidList.Add(SpawnAsteroid());
				releaseElapsed = 0.0f;
			}
			else {
				releaseElapsed += Time.deltaTime;	
			}
			
			for (int i = 0; i < createdCount; i++) {
				Asteroid go = asteroidList[i];
				if (!b.Contains(go.transform.position)) {
					go.transform.position = randomStart();
				}
			}
		}
	}
	
	Vector3 randomStart() {
		float dist = collider.bounds.max.y - collider.bounds.min.y;
		float random = Random.Range (0.0f, dist);
		return new Vector3(collider.bounds.min.x + 30.0f, collider.bounds.max.y - random, 0.0f);
	}
	
	Asteroid SpawnAsteroid() {
		GameObject go = (GameObject)Instantiate (asteroidPrefab);
		go.transform.position = randomStart();
		go.transform.rotation = asteroidPrefab.transform.rotation;
		go.transform.parent = transform;
		createdCount++;
		return go.GetComponent<Asteroid>();
	}
}
