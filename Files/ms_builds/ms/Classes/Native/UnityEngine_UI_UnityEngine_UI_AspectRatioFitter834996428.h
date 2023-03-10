#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.RectTransform
struct RectTransform_t3317474837;

#include "UnityEngine_UI_UnityEngine_EventSystems_UIBehaviour644839684.h"
#include "UnityEngine_UI_UnityEngine_UI_AspectRatioFitter_As2721296955.h"
#include "UnityEngine_UnityEngine_DrivenRectTransformTracker3675273953.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.AspectRatioFitter
struct  AspectRatioFitter_t834996428  : public UIBehaviour_t644839684
{
public:
	// UnityEngine.UI.AspectRatioFitter/AspectMode UnityEngine.UI.AspectRatioFitter::m_AspectMode
	int32_t ___m_AspectMode_2;
	// System.Single UnityEngine.UI.AspectRatioFitter::m_AspectRatio
	float ___m_AspectRatio_3;
	// UnityEngine.RectTransform UnityEngine.UI.AspectRatioFitter::m_Rect
	RectTransform_t3317474837 * ___m_Rect_4;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.AspectRatioFitter::m_Tracker
	DrivenRectTransformTracker_t3675273953  ___m_Tracker_5;

public:
	inline static int32_t get_offset_of_m_AspectMode_2() { return static_cast<int32_t>(offsetof(AspectRatioFitter_t834996428, ___m_AspectMode_2)); }
	inline int32_t get_m_AspectMode_2() const { return ___m_AspectMode_2; }
	inline int32_t* get_address_of_m_AspectMode_2() { return &___m_AspectMode_2; }
	inline void set_m_AspectMode_2(int32_t value)
	{
		___m_AspectMode_2 = value;
	}

	inline static int32_t get_offset_of_m_AspectRatio_3() { return static_cast<int32_t>(offsetof(AspectRatioFitter_t834996428, ___m_AspectRatio_3)); }
	inline float get_m_AspectRatio_3() const { return ___m_AspectRatio_3; }
	inline float* get_address_of_m_AspectRatio_3() { return &___m_AspectRatio_3; }
	inline void set_m_AspectRatio_3(float value)
	{
		___m_AspectRatio_3 = value;
	}

	inline static int32_t get_offset_of_m_Rect_4() { return static_cast<int32_t>(offsetof(AspectRatioFitter_t834996428, ___m_Rect_4)); }
	inline RectTransform_t3317474837 * get_m_Rect_4() const { return ___m_Rect_4; }
	inline RectTransform_t3317474837 ** get_address_of_m_Rect_4() { return &___m_Rect_4; }
	inline void set_m_Rect_4(RectTransform_t3317474837 * value)
	{
		___m_Rect_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_Rect_4, value);
	}

	inline static int32_t get_offset_of_m_Tracker_5() { return static_cast<int32_t>(offsetof(AspectRatioFitter_t834996428, ___m_Tracker_5)); }
	inline DrivenRectTransformTracker_t3675273953  get_m_Tracker_5() const { return ___m_Tracker_5; }
	inline DrivenRectTransformTracker_t3675273953 * get_address_of_m_Tracker_5() { return &___m_Tracker_5; }
	inline void set_m_Tracker_5(DrivenRectTransformTracker_t3675273953  value)
	{
		___m_Tracker_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
