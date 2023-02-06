/**
 * HueShift.shader
 * Author: Thomas Hummes
 * compatible to Shader Model 2 (<= 64 instructions)
 * **/
Shader "HueShift" 
{
	Properties 
	{
		_MainTex ("Base (RGB) Trans (A)", 2D) = "white" {}
        [PerRendererData] _Alpha ("Alpha factor", float) = 1
		[PerRendererData] _Color ("Main Color", Color) = (1,1,1,1)
		[PerRendererData] _Shift ("Shift", float) = 0
        [PerRendererData] _LimitL ("Lower Limit", float) = 0
        [PerRendererData] _LimitU ("Upper Limit", float) = 0
		[PerRendererData] _Inverted ("Inverted", float) = 0  // ShaderLab has no bool or int properties -.-
		[PerRendererData] _Desaturate ("Desaturate", int) = 0
	} 
	
	SubShader 
	{
		Tags {"Queue"="Transparent" "IgnoreProjector"="True" "RenderType"="Transparent"}
		LOD 200
		Cull off
	
		CGPROGRAM
		#pragma surface surf Lambert alpha
		
		
		sampler2D _MainTex;
		half _Shift;
		half _LimitL;
		half _LimitU;
		int _Inverted;
		fixed4 _Color;
		half _Alpha;
		int _Desaturate;
		
		static float3 desat = float3(0.3, 0.59, 0.11);
		static half3 toHue = half3(2,4,6);
		
		struct Input 
		{
			half2 uv_MainTex;
		};
		
		half3 Hue(float H)
		{
			H *= 6;
		    half R = abs(H - 3) - 1;
		    half G = 2 - abs(H - 2);
		    half B = 2 - abs(H - 4);
			return clamp(half3(R,G,B), 0.0, 1.0);
		}
		
		half3 HSVtoRGB(in half3 HSV)
		{
		    return ((Hue(HSV.x) - 1) * HSV.y + 1) * HSV.z;
		}

		half RGBCVtoHUE(in half3 RGB, in half C, in half V)
		{
			half3 Delta = (V - RGB) / C;
			Delta.rgb = (Delta.rgb - Delta.brg) + toHue;
			Delta.brg = step(V, RGB) * Delta.brg;
			return frac(max(Delta.r, max(Delta.g, Delta.b)) / 6);
		}
		
		half3 RGBtoHSV(in half3 RGB)
		{
			half3 HSV = 0;
			HSV.z = max(RGB.r, max(RGB.g, RGB.b));
			half C = HSV.z - min(RGB.r, min(RGB.g, RGB.b));
			if (C != 0)
			{
				HSV.x = RGBCVtoHUE(RGB, C, HSV.z);
				HSV.y = C / HSV.z;
			}
			return HSV;
		}
		
		half3 hueShift(in half3 RGB) {
			half3 cl = RGBtoHSV(RGB);
			//float d = (_LimitU - cl.x) * (cl.x - _LimitL) * _Inverted;
			cl.x = clamp(cl.x + _Shift, 0.0, 1.0);		
			
			return HSVtoRGB(cl);
		}
		
		void surf (Input IN, inout SurfaceOutput o) 
		{
			fixed4 c = tex2D(_MainTex, IN.uv_MainTex) * _Color;
			half3 co = c;
			
			if (_Shift > 0.0) {
				co = hueShift(c);
			}
			
			if (_Desaturate) {
				co = dot(co, desat);
			}
			
			o.Albedo = co;
			o.Alpha = c.a * _Alpha;		
		}
		ENDCG
	}
	
	Fallback "Transparent/VertexLit"
	CustomEditor "HueShiftInspector" // requires Unity 4.1
}