using UnityEngine;

[RequireComponent(typeof (MeshRenderer))]
public class AutoTransparency : MonoBehaviour
{
    private float _mTargetTransparancy = 1.0f;
    public float BlendSpeed = 1.0f;

    public void BeTransparent()
    {
        _mTargetTransparancy = 0.6f;
    }

    void Update()
    {
        if (Mathf.Abs(_mTargetTransparancy - renderer.material.color.a) > 0.01f)
        {
            Color c = renderer.material.color;
            c.a = Mathf.Lerp(c.a, _mTargetTransparancy, Time.deltaTime*BlendSpeed);
            renderer.material.color = c;
        }
        _mTargetTransparancy = 1.0f;
    }
}