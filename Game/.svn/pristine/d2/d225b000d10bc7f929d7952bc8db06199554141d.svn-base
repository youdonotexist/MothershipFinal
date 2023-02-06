/**
 * HueShiftInspector.cs
 * Author: Thomas Hummes
 * **/

using UnityEngine;
using UnityEditor;

/// <summary>
/// Custom inspector for HueShift shader
/// </summary>
/// <remarks>Requires Unity 4.1</remarks>
public class HueShiftInspector : MaterialEditor
{
    private float _limitL;
    private float _limitU;
    private float _shift;
    private bool _inverted;
    private float _alpha;
    private Color _color;

	private bool _desaturate;


    public override void OnInspectorGUI ()
	{
        Material targetMat = target as Material;
        if (targetMat == null)
        {
            Debug.Log("Error creating HueShift Inspector");
            return;
        }
        Color defaultBackgroundColor = GUI.backgroundColor;

        // due to instruction limit, the shader values are clamped between 0..1
        // for easier use, they are enlarged to editing
        _limitL = targetMat.GetFloat("_LimitL") * 360f;
        _limitU = targetMat.GetFloat("_LimitU") * 360f;
        _shift = targetMat.GetFloat("_Shift") * 180f;
        _inverted = Mathf.FloorToInt(targetMat.GetFloat("_Inverted")) == 1;
        _alpha = targetMat.GetFloat("_Alpha");
        _color = targetMat.GetColor("_Color");
		_desaturate = Mathf.FloorToInt(targetMat.GetFloat("_Desaturate")) == 1;

        if (NGUIEditorTools.DrawHeader("Basic Settings"))
        {
            NGUIEditorTools.BeginContents();
            // shader value fields
#if UNITY_4_3 || UNITY_4_3_3
            targetMat.mainTexture = (Texture)EditorGUILayout.ObjectField("Texture", targetMat.mainTexture, typeof(Texture), false);
            //targetMat.mainTexture = TextureProperty(GetMaterialProperty(new Object[] {targetMat}, "mainTexture"), "Texture", true);
            //EditorGUILayout.LabelField("", GUILayout.Height(75));
#else
            targetMat.mainTexture = (Texture)EditorGUILayout.ObjectField("Texture", targetMat.mainTexture, typeof(Texture), false, GUILayout.Width(64), GUILayout.Height(64));
        #endif
            _alpha = EditorGUILayout.Slider("Alpha factor", _alpha, 0f, 1f);
            _color = EditorGUILayout.ColorField("Color", _color);
            NGUIEditorTools.EndContents();
        }

        if (NGUIEditorTools.DrawHeader("Color Shift"))
        {
            NGUIEditorTools.BeginContents();
            EditorGUILayout.BeginHorizontal();
            EditorGUILayout.PrefixLabel("Color range");
            EditorGUILayout.BeginVertical();
            EditorGUILayout.MinMaxSlider(ref _limitL, ref _limitU, 0f, 360f);
            _limitL = Mathf.Clamp(EditorGUILayout.FloatField("Lower: ", _limitL), 0f, _limitU);
            _limitU = Mathf.Clamp(EditorGUILayout.FloatField("Upper: ", _limitU), _limitL, 360f);
            _inverted = EditorGUILayout.Toggle("Inverted", _inverted);
			_desaturate = EditorGUILayout.Toggle("Desaturate", _desaturate);
            EditorGUILayout.EndVertical();
            EditorGUILayout.EndHorizontal();

            _shift = EditorGUILayout.Slider("Shift", _shift, -180f, 180f);

            if (NGUIEditorTools.DrawHeader("Predefined ranges"))
            {
                NGUIEditorTools.BeginContents();
                EditorGUILayout.BeginVertical();
                EditorGUILayout.BeginHorizontal();
                DrawKnownColor("Red", Color.red, 15, 315, true, ref _limitL, ref _limitU, ref _inverted);
                DrawKnownColor("Magenta", Color.magenta, 255, 315, false, ref _limitL, ref _limitU, ref _inverted);
                DrawKnownColor("Blue", Color.blue, 195, 255, false, ref _limitL, ref _limitU, ref _inverted);
                EditorGUILayout.EndHorizontal();
                EditorGUILayout.BeginHorizontal();
                DrawKnownColor("Cyan", Color.cyan, 135, 195, false, ref _limitL, ref _limitU, ref _inverted);
                DrawKnownColor("Green", Color.green, 75, 135, false, ref _limitL, ref _limitU, ref _inverted);
                DrawKnownColor("Yellow", Color.yellow, 15, 75, false, ref _limitL, ref _limitU, ref _inverted);
                EditorGUILayout.EndHorizontal();
                EditorGUILayout.EndVertical();
                NGUIEditorTools.EndContents();
            }
            NGUIEditorTools.EndContents();
        }

        GUI.backgroundColor = defaultBackgroundColor;
        if (NGUIEditorTools.DrawHeader("HueShiftVariation"))
        {
            NGUIEditorTools.BeginContents();
            EditorStyles.textField.wordWrap = true;
            EditorGUILayout.TextArea("Working with HueShiftVariation requires a selected object within the editor" +
                                     " that has a HueShaderVariation component!");
            EditorGUILayout.BeginHorizontal();
            GUI.backgroundColor = Color.green;
            if (GUILayout.Button("Apply to script"))
            {
                HueShaderVaration obj = Selection.activeGameObject.GetComponent<HueShaderVaration>();
                if (obj == null)
                {
                    Debug.LogWarning("Cannot apply values, no HueShaderVariation script attached");
                }
                else
                {
                    obj.HueShift = _shift;
                    obj.LowerLimit = _limitL;
                    obj.UpperLimit = _limitU;
                    obj.Inverted = _inverted;
                    obj.Color = _color;
                    obj.Alpha = _alpha;
					obj.Desaturate = _desaturate;
                    EditorUtility.SetDirty(obj);
                }
            }
            GUI.backgroundColor = Color.red;
            if (GUILayout.Button("Reload"))
            {
                HueShaderVaration obj = Selection.activeGameObject.GetComponent<HueShaderVaration>();
                if (obj == null)
                {
                    Debug.LogWarning("Cannot reload values, no HueShaderVariation script attached");
                }
                else
                {
                    targetMat.SetFloat("_LimitL", obj.LowerLimit/360f);
                    targetMat.SetFloat("_LimitU", obj.UpperLimit/360f);
                    targetMat.SetFloat("_Shift", obj.HueShift/180f);
                    targetMat.SetFloat("_Inverted", (obj.Inverted) ? 1f : -1f);
					targetMat.SetFloat("_Desaturate", (obj.Desaturate) ? 1f : 0f);
                    targetMat.SetColor("_Color", obj.Color);
                    targetMat.SetFloat("_Alpha", obj.Alpha);
                    EditorUtility.SetDirty(targetMat);
                    Repaint();
                    return;
                }
            }
            GUI.backgroundColor = defaultBackgroundColor;
            EditorGUILayout.EndHorizontal();
            NGUIEditorTools.EndContents();
        }

        // always mark as edited. Could be improved by detecting, which values changed
        //EditorUtility.SetDirty(targetMat);

        // rewrite values back to shader with automatic reduction
        targetMat.SetFloat("_LimitL", _limitL / 360f);
        targetMat.SetFloat("_LimitU", _limitU / 360f);
        targetMat.SetFloat("_Shift", _shift / 180f);
        targetMat.SetFloat("_Inverted", (_inverted) ? 1f : -1f);
		targetMat.SetFloat("_Desaturate", (_desaturate) ? 1f : 0f);
        targetMat.SetFloat("_Alpha", _alpha);
        targetMat.SetColor("_Color", _color);

        SceneView.RepaintAll(); // not automatic, changes would be invisible

    }


    private void DrawKnownColor(string caption, Color color, float limitL, float limitU, bool invert, ref float newLimitL, ref float newLimitU, ref bool newInverted)
    {
        Material targetMat = target as Material;
        GUI.backgroundColor = color;
        if (GUILayout.Button(caption))
        {
            newLimitL = limitL;
            newLimitU = limitU;
            newInverted = invert;
            EditorUtility.SetDirty(targetMat);
        }
    }
}
