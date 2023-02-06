#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// CameraFade
struct CameraFade_t4275883873;
// UnityEngine.GUIStyle
struct GUIStyle_t1006925219;
// UnityEngine.Texture2D
struct Texture2D_t2509538522;
// System.Action
struct Action_t437523947;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Color1588175760.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CameraFade
struct  CameraFade_t4275883873  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.GUIStyle CameraFade::m_BackgroundStyle
	GUIStyle_t1006925219 * ___m_BackgroundStyle_3;
	// UnityEngine.Texture2D CameraFade::m_FadeTexture
	Texture2D_t2509538522 * ___m_FadeTexture_4;
	// UnityEngine.Color CameraFade::m_CurrentScreenOverlayColor
	Color_t1588175760  ___m_CurrentScreenOverlayColor_5;
	// UnityEngine.Color CameraFade::m_TargetScreenOverlayColor
	Color_t1588175760  ___m_TargetScreenOverlayColor_6;
	// UnityEngine.Color CameraFade::m_DeltaColor
	Color_t1588175760  ___m_DeltaColor_7;
	// System.Int32 CameraFade::m_FadeGUIDepth
	int32_t ___m_FadeGUIDepth_8;
	// System.Single CameraFade::m_FadeDelay
	float ___m_FadeDelay_9;
	// System.Action CameraFade::m_OnFadeFinish
	Action_t437523947 * ___m_OnFadeFinish_10;

public:
	inline static int32_t get_offset_of_m_BackgroundStyle_3() { return static_cast<int32_t>(offsetof(CameraFade_t4275883873, ___m_BackgroundStyle_3)); }
	inline GUIStyle_t1006925219 * get_m_BackgroundStyle_3() const { return ___m_BackgroundStyle_3; }
	inline GUIStyle_t1006925219 ** get_address_of_m_BackgroundStyle_3() { return &___m_BackgroundStyle_3; }
	inline void set_m_BackgroundStyle_3(GUIStyle_t1006925219 * value)
	{
		___m_BackgroundStyle_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_BackgroundStyle_3, value);
	}

	inline static int32_t get_offset_of_m_FadeTexture_4() { return static_cast<int32_t>(offsetof(CameraFade_t4275883873, ___m_FadeTexture_4)); }
	inline Texture2D_t2509538522 * get_m_FadeTexture_4() const { return ___m_FadeTexture_4; }
	inline Texture2D_t2509538522 ** get_address_of_m_FadeTexture_4() { return &___m_FadeTexture_4; }
	inline void set_m_FadeTexture_4(Texture2D_t2509538522 * value)
	{
		___m_FadeTexture_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_FadeTexture_4, value);
	}

	inline static int32_t get_offset_of_m_CurrentScreenOverlayColor_5() { return static_cast<int32_t>(offsetof(CameraFade_t4275883873, ___m_CurrentScreenOverlayColor_5)); }
	inline Color_t1588175760  get_m_CurrentScreenOverlayColor_5() const { return ___m_CurrentScreenOverlayColor_5; }
	inline Color_t1588175760 * get_address_of_m_CurrentScreenOverlayColor_5() { return &___m_CurrentScreenOverlayColor_5; }
	inline void set_m_CurrentScreenOverlayColor_5(Color_t1588175760  value)
	{
		___m_CurrentScreenOverlayColor_5 = value;
	}

	inline static int32_t get_offset_of_m_TargetScreenOverlayColor_6() { return static_cast<int32_t>(offsetof(CameraFade_t4275883873, ___m_TargetScreenOverlayColor_6)); }
	inline Color_t1588175760  get_m_TargetScreenOverlayColor_6() const { return ___m_TargetScreenOverlayColor_6; }
	inline Color_t1588175760 * get_address_of_m_TargetScreenOverlayColor_6() { return &___m_TargetScreenOverlayColor_6; }
	inline void set_m_TargetScreenOverlayColor_6(Color_t1588175760  value)
	{
		___m_TargetScreenOverlayColor_6 = value;
	}

	inline static int32_t get_offset_of_m_DeltaColor_7() { return static_cast<int32_t>(offsetof(CameraFade_t4275883873, ___m_DeltaColor_7)); }
	inline Color_t1588175760  get_m_DeltaColor_7() const { return ___m_DeltaColor_7; }
	inline Color_t1588175760 * get_address_of_m_DeltaColor_7() { return &___m_DeltaColor_7; }
	inline void set_m_DeltaColor_7(Color_t1588175760  value)
	{
		___m_DeltaColor_7 = value;
	}

	inline static int32_t get_offset_of_m_FadeGUIDepth_8() { return static_cast<int32_t>(offsetof(CameraFade_t4275883873, ___m_FadeGUIDepth_8)); }
	inline int32_t get_m_FadeGUIDepth_8() const { return ___m_FadeGUIDepth_8; }
	inline int32_t* get_address_of_m_FadeGUIDepth_8() { return &___m_FadeGUIDepth_8; }
	inline void set_m_FadeGUIDepth_8(int32_t value)
	{
		___m_FadeGUIDepth_8 = value;
	}

	inline static int32_t get_offset_of_m_FadeDelay_9() { return static_cast<int32_t>(offsetof(CameraFade_t4275883873, ___m_FadeDelay_9)); }
	inline float get_m_FadeDelay_9() const { return ___m_FadeDelay_9; }
	inline float* get_address_of_m_FadeDelay_9() { return &___m_FadeDelay_9; }
	inline void set_m_FadeDelay_9(float value)
	{
		___m_FadeDelay_9 = value;
	}

	inline static int32_t get_offset_of_m_OnFadeFinish_10() { return static_cast<int32_t>(offsetof(CameraFade_t4275883873, ___m_OnFadeFinish_10)); }
	inline Action_t437523947 * get_m_OnFadeFinish_10() const { return ___m_OnFadeFinish_10; }
	inline Action_t437523947 ** get_address_of_m_OnFadeFinish_10() { return &___m_OnFadeFinish_10; }
	inline void set_m_OnFadeFinish_10(Action_t437523947 * value)
	{
		___m_OnFadeFinish_10 = value;
		Il2CppCodeGenWriteBarrier(&___m_OnFadeFinish_10, value);
	}
};

struct CameraFade_t4275883873_StaticFields
{
public:
	// CameraFade CameraFade::mInstance
	CameraFade_t4275883873 * ___mInstance_2;

public:
	inline static int32_t get_offset_of_mInstance_2() { return static_cast<int32_t>(offsetof(CameraFade_t4275883873_StaticFields, ___mInstance_2)); }
	inline CameraFade_t4275883873 * get_mInstance_2() const { return ___mInstance_2; }
	inline CameraFade_t4275883873 ** get_address_of_mInstance_2() { return &___mInstance_2; }
	inline void set_mInstance_2(CameraFade_t4275883873 * value)
	{
		___mInstance_2 = value;
		Il2CppCodeGenWriteBarrier(&___mInstance_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
