using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using Vectrosity;
using MiniJSON;

public class LoadingButton : MonoBehaviour
{
	MainMenuEncounterSelect mmes;
	MainMenu mm;
	VectorLine baseTimeLine;
	GameObject timeLine;
	
	public GameObject timelineEventPrefab;
	public GameObject loadingButtonPrefab;
	
	void Awake() {
		GameObject mainMenu = GameObject.Find("UI Root");
		mm = mainMenu.GetComponent<MainMenu>();
	}
	
	void Start() {
		GameObject go = GameObject.Find("EncounterSelect");
		timeLine = GameObject.Find("TimeLine");
		if (go != null)
			mmes = go.GetComponent<MainMenuEncounterSelect>();	
		
		if (timeLine != null) {
			timeLine.SetActive(false);
		}
	}

	public void OnPlayClicked() {
		mmes.Play();
	}
	
	void OnClick() {
		GameObject current = UICamera.currentTouch.current;
		string buttonName = "";
		if (current != null) {
		 	buttonName = current.name;
		}
		
		if (buttonName == "Editor") {
			//OpenBrowserPlugin.OpenBrowser("http://mothership.mike-daly.com");	
			Application.OpenURL("mothershipts://open_editor");
		}
		else {
			mm.OnMenuButtonTap();
		}
	}
	
	void Download() {
		CI.Request encounterReq = new CI.Request();
		encounterReq.Send(MissionManager.BaseUrl + "/encounter", "get", true,  (request) => {
			IList encounters = (IList) Json.Deserialize(encounterReq.requestState.responseData.ToString());  
		
			for (int i = 0; i < encounters.Count; i++) {
				//IDictionary dict = (IDictionary) encounters[i];
				//string name = (string) dict["name"];
				//string type = (string) dict["hero_type_id"];
				//string backstory = (string) dict["backstory"];
				//string encid = (string) dict["_id"];
				GameObject.Instantiate(timelineEventPrefab);
			}	
		});

	    //while( !encounterReq.requestState.isDone ) { yield return null; }
		
		//var thing = new WWW("http://mothership.mike-daly.com/encounter");
		//yield return thing;
		
	}
}


/*
 * Go Ahead and put a pin in this one
 * //Awesome Scrolling code
		while (hasEvents) {
			if (true) {
				Vector3[] points = new Vector3[] { new Vector3(0.0f, startSpot.y, 0.0f), currentTimelineSpot };
				if (baseTimeLine == null) {
					baseTimeLine = new Vectrosity.VectorLine("timeLine", points, Color.red, null, 5.0f, LineType.Continuous, Vectrosity.Joins.Fill);
					baseTimeLine.vectorObject.transform.parent = timeLine.transform.parent;
					timelineTransform = baseTimeLine.vectorObject.transform;
				}
				baseTimeLine.points3 = points;
				baseTimeLine.Draw3D();
				
				currentTimelineSpot.y = startSpot.y + draggable.panel.clipRange.y;//100.0f * Time.deltaTime;
				timelineTransform.position = new Vector3(timelineTransform.position.x, -currentTimelineSpot.y, timelineTransform.position.z);
				
				Debug.Log(currentTimelineSpot);
				
				if (currentTimelineSpot.y <= nextYear) {
					GameObject go = (GameObject) GameObject.Instantiate(timelineEventPrefab);
					go.transform.parent = timelineTransform;
					go.transform.localPosition = currentTimelineSpot;
					TimelineEvent e = go.GetComponent<TimelineEvent>();
					e.direction = (direction *= -1);
					e.timelineEvent = nextEvent;
					e.parentTimeline = timelineTransform;
					e.gridTransform = timeLine.GetComponentInChildren<UIGrid>().transform;
					
					events.Remove(nextEvent);
					if (events.Count > 0) {
						nextEvent = events[0];	
						nextYear = float.Parse(nextEvent["year"]);
					}
					else {
						//hasEvents = false;	
						nextYear = -1000000.0f;
					}
				}
			}
			yield return null;
		}
		*/
