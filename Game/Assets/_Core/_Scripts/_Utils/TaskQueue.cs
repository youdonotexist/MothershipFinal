using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class TaskQueue : MonoBehaviour
{
	
	List<QueueTask> queue;
	List<QueueTask> delete;
	
	void Awake() {
		queue = new List<QueueTask>();	
		delete = new List<QueueTask>();
	}
	// Use this for initialization
	void Start ()
	{
		
	}
	
	// Update is called once per frame
	void Update ()
	{
		foreach(QueueTask t in delete) {
			queue.Remove(t);
		}
		
		delete.Clear();
		
		if (queue.Count > 0) {
			QueueTask t = queue[0];
			if (t.Running == false) {
				t.Start();
			}
			else if (t.Paused == true) {
				t.Unpause();	
			}
		}
	}
	
	private void TaskFinished(bool manual, QueueTask t) {
		delete.Add(t);
	}
	
	private void PushTaskFinished(bool manual, QueueTask t) {
		delete.Add (t);
	}
	
	public void AddTask(QueueTask t) {
		t.Finished += TaskFinished;
		queue.Add(t);
	}
	
	public void PushTask(QueueTask t) {
		if (queue.Count > 0) {
			QueueTask currentTask = queue[0];
			currentTask.Pause();
		}
		t.Finished += TaskFinished;
		queue.Insert(0, t);
	}
	
	public void RemoveTask(string name) {
		for (int i = 0; i < queue.Count; i++) {
			QueueTask t = queue[i];
			if (t.GetName().Equals(name)) {
				t.Stop();
				queue.Remove(t);
				break;
			}
		}
	}
}

