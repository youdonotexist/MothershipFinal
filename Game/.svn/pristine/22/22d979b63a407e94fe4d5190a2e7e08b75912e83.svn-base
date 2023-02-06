using UnityEngine;

public class MouseTransparency : MonoBehaviour 
{
	void Update ()
	{
	    Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
	    RaycastHit hit;
	    if (Physics.Raycast(ray, out hit, Mathf.Infinity, 1 << 8))
	    {
	        AutoTransparency transparency = hit.collider.gameObject.GetComponent<AutoTransparency>();
            if(transparency != null)
                transparency.BeTransparent();
	    }
	}
}
