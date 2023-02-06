using UnityEngine;
using System.Collections;

public class PostEncounterView : MonoBehaviour
{
	public GameObject[] miniPanels;// = new GameObject[0]();

	bool showing = false;

	public virtual void OnWillAppear() {
		StartCoroutine(show (true));

	}
	public virtual void OnWillDisappear() {
		StartCoroutine(show(false));
	}

	IEnumerator show(bool show)
	{
		float elapsed = 0.0f, duration = 0.5f, step = 0.1f, accumulator = 0.0f,
			start = show ? 0.0f : 1.0f, end = show ? 1.0f : 0.0f;

		if (show)
		{
			foreach (GameObject panel in miniPanels) {
				NGUITools.SetActive(panel, true);
				panel.SetActive(true);
			}
		}

		UIWidget[] widgets = GetComponentsInChildren<UIWidget>();
		
		foreach (UIWidget widget in widgets) {
			widget.alpha = start;
		}

		while (elapsed < duration) {
			if (accumulator >= step)
			{
				foreach (UIWidget widget in widgets) {
					widget.alpha = Mathf.Lerp(start, end, elapsed/duration); 
				}

				elapsed += accumulator;
				accumulator = 0.0f;
			}

			accumulator += Time.deltaTime;
			yield return null;
		}

		foreach (UIWidget widget in widgets) {
			widget.alpha = end;
		}

		if (!show) {
			foreach (GameObject panel in miniPanels) {
				panel.SetActive(false);
				NGUITools.SetActive(panel, false);
			}
		}

		showing = show;
	}

	public virtual void OnDidAppear() { showing = true;}
	public virtual void OnDidDisappear() { showing = false;}

	public bool isShowing() { return showing; }

}

