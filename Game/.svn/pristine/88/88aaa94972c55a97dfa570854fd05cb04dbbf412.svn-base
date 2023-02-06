/**
 * HueShiftVariation.cs
 * Author: Thomas Hummes
 * **/
using UnityEngine;

public class HueShaderVaration : MonoBehaviour 
{
    public float HueShift = 0f;

    public float LowerLimit = 0f;

    public float UpperLimit = 0f;

    public bool Inverted = false;

	public bool Desaturate = false;

    public Color Color = Color.white;

    [Range(0f, 1f)]
    public float Alpha = 1f;

	void Start () 
    {
        MaterialPropertyBlock block = new MaterialPropertyBlock();
        block.AddFloat("_Alpha", Alpha);
        block.AddFloat("_Shift", HueShift / 180);
        block.AddFloat("_LimitL", LowerLimit / 360f);
        block.AddFloat("_LimitU", UpperLimit / 360f);
        block.AddFloat("_Inverted", (Inverted) ? 1f : -1f);
		block.AddFloat("_Desaturate", (Desaturate) ? 1f : 0f);
        block.AddColor("_Color", Color);
        renderer.SetPropertyBlock(block);
    }
}
