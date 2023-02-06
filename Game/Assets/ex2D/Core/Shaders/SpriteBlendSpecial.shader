// ======================================================================================
// File         : SpriteBlend.shader
// Author       : Wu Jie 
// Last Change  : 07/22/2011 | 18:09:25 PM | Friday,July
// Description  : 
// ======================================================================================

///////////////////////////////////////////////////////////////////////////////
//
///////////////////////////////////////////////////////////////////////////////

Shader "ex2D/Alpha Blended Special" {
    Properties {
        _MainTex ("Atlas Texture", 2D) = "white" {}
    }

    SubShader {
        Tags { 
            "Queue"="Transparent" 
            "IgnoreProjector"="True" 
            "RenderType"="Transparent" 
        }
        Cull Off 
        Lighting Off 
        ZWrite Off 
        Fog { Mode Off }
        Blend SrcAlpha OneMinusSrcAlpha

        BindChannels {
            Bind "Color", color
            Bind "Vertex", vertex
            Bind "TexCoord", texcoord
        }

        //Pass {
        //    SetTexture [_MainTex] {
        //        combine texture * primary
        //    }
        //}
        
        Pass
		{
			CGPROGRAM
				#pragma vertex vert
				#pragma fragment frag
				
				#include "UnityCG.cginc"
	
				struct appdata_t
				{
					float4 vertex : POSITION;
					float2 texcoord : TEXCOORD0;
					fixed4 color : COLOR;
				};
	
				struct v2f
				{
					float4 vertex : SV_POSITION;
					half2 texcoord : TEXCOORD0;
					fixed4 color : COLOR;
				};
	
				sampler2D _MainTex;
				float4 _MainTex_ST;
				
				v2f vert (appdata_t v)
				{
					v2f o;
					o.vertex = mul(UNITY_MATRIX_MVP, v.vertex);
					o.texcoord = TRANSFORM_TEX(v.texcoord, _MainTex);
					o.color = v.color;
					return o;
				}
				
				fixed4 frag (v2f i) : COLOR
				{
					fixed4 col = tex2D(_MainTex, i.texcoord);
					
					if (i.color.r == 1f && i.color.g == 0f && i.color.b == 0f) { //Disabled
						fixed4 newcol = dot(col.rgb, float3(0.3, 0.59, 0.11));
						newcol.a = col.a;
							
						col = newcol;
					}
					else if (i.color.r == 1f && i.color.g == 1f && i.color.b == 0f) { // Jugg Laser'd
						float luma = saturate(dot(col.rgb, float3(0.299, 0.587, 0.114)));
						float3 colorized = lerp(fixed3(1.0, 0.5, 0.0), luma, abs(luma - 0.5) * 2.0);
						col = fixed4(colorized.r, colorized.g, colorized.b, col.a);
					}
					else if (i.color.r == 0f && i.color.g == 1f && i.color.b == 0f) { //White Flash
						col = fixed4(1f, 1f, 1f, col.a);
					}
					else {
						col *= i.color;
					}
					return col;
				}

			ENDCG
		}
    }
}
