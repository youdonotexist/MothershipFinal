using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using Vectrosity;

public class TimelineEvent : MonoBehaviour
{
	VectorLine branchLine;
	public int direction = 1;
	public Dictionary<string, string> timelineEvent;
	public GameObject displayPrefab;
	public GameObject displayPlaceholderPrefab;
	
	public Transform parentTimeline;
	public Transform gridTransform;
	
	
	// Use this for initialization
	void Start ()
	{
		StartCoroutine(AnimateBranch());
	}
	
	IEnumerator AnimateBranch() {
		Vector3[] points = new Vector3[] {transform.position, transform.position};
		if (branchLine == null) {
			branchLine = new VectorLine("branch", points, Color.blue, null, 10.0f, LineType.Continuous);
			branchLine.vectorObject.transform.parent = parentTimeline;
		}
		
		float duration = 1.0f;
		float elapsed = 0.0f;
		Vector3 newPos = Vector3.zero;
		
		while (elapsed < duration) {
			newPos = transform.position;
			newPos.x += (elapsed/duration) * 300.0f * direction;
			branchLine.points3 = new Vector3[] {transform.position, newPos};
			branchLine.Draw3D();
			
			elapsed += Time.deltaTime;
			yield return null;
		}
		
		GameObject go = (GameObject) Instantiate(displayPrefab);
		go.transform.parent = branchLine.vectorObject.transform;
		go.transform.localPosition = newPos;
		
		go = (GameObject) Instantiate(displayPlaceholderPrefab);
		go.transform.parent = gridTransform;
		go.transform.position = newPos;
		
		//UILabel label = go.GetComponent<UILabel>();
		//label.text = timelineEvent["date"];
	}
}

