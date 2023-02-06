using UnityEngine;

public class TouchState: MonoBehaviour
{
    bool dragging = false;
 
    void OnMouseEnter()
    {
        //If the left mouse button is down when we enter, we're dragging over.
        if(Input.GetMouseButton(0)) { dragging = true; }
    } //MouseEnter
 
    void OnMouseExit()
    {
        //If we're leaving, then we aren't dragging over this.
        dragging = false;
    } //MouseExit
	
	void OnMouseDown() {
		Debug.Log ("Down!");	
	}
 
    void OnMouseUp()
    {
        //If we were dragging, then we just released over this.
        if(dragging) { /*do something*/ }
 
        //We're not dragging anymore
        dragging = false;
    } //MouseUp
	
	void Update() {
		//Debug.Log("Dragging: " + dragging);
	}
 
} //DragRelease