#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GUIContent
struct GUIContent_t2432841515;

#include "UnityEngine_UnityEngine_GUILayoutEntry1011928986.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUIWordWrapSizer
struct  GUIWordWrapSizer_t3155068271  : public GUILayoutEntry_t1011928986
{
public:
	// UnityEngine.GUIContent UnityEngine.GUIWordWrapSizer::m_Content
	GUIContent_t2432841515 * ___m_Content_10;
	// System.Single UnityEngine.GUIWordWrapSizer::m_ForcedMinHeight
	float ___m_ForcedMinHeight_11;
	// System.Single UnityEngine.GUIWordWrapSizer::m_ForcedMaxHeight
	float ___m_ForcedMaxHeight_12;

public:
	inline static int32_t get_offset_of_m_Content_10() { return static_cast<int32_t>(offsetof(GUIWordWrapSizer_t3155068271, ___m_Content_10)); }
	inline GUIContent_t2432841515 * get_m_Content_10() const { return ___m_Content_10; }
	inline GUIContent_t2432841515 ** get_address_of_m_Content_10() { return &___m_Content_10; }
	inline void set_m_Content_10(GUIContent_t2432841515 * value)
	{
		___m_Content_10 = value;
		Il2CppCodeGenWriteBarrier(&___m_Content_10, value);
	}

	inline static int32_t get_offset_of_m_ForcedMinHeight_11() { return static_cast<int32_t>(offsetof(GUIWordWrapSizer_t3155068271, ___m_ForcedMinHeight_11)); }
	inline float get_m_ForcedMinHeight_11() const { return ___m_ForcedMinHeight_11; }
	inline float* get_address_of_m_ForcedMinHeight_11() { return &___m_ForcedMinHeight_11; }
	inline void set_m_ForcedMinHeight_11(float value)
	{
		___m_ForcedMinHeight_11 = value;
	}

	inline static int32_t get_offset_of_m_ForcedMaxHeight_12() { return static_cast<int32_t>(offsetof(GUIWordWrapSizer_t3155068271, ___m_ForcedMaxHeight_12)); }
	inline float get_m_ForcedMaxHeight_12() const { return ___m_ForcedMaxHeight_12; }
	inline float* get_address_of_m_ForcedMaxHeight_12() { return &___m_ForcedMaxHeight_12; }
	inline void set_m_ForcedMaxHeight_12(float value)
	{
		___m_ForcedMaxHeight_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
