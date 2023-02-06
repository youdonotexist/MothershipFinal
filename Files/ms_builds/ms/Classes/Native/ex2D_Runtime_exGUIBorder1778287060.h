#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// UnityEngine.RectOffset
struct RectOffset_t3394170884;

#include "UnityEngine_UnityEngine_ScriptableObject184905905.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// exGUIBorder
struct  exGUIBorder_t1778287060  : public ScriptableObject_t184905905
{
public:
	// System.String exGUIBorder::textureGUID
	String_t* ___textureGUID_2;
	// UnityEngine.RectOffset exGUIBorder::border
	RectOffset_t3394170884 * ___border_3;
	// System.Boolean exGUIBorder::editorNeedRebuild
	bool ___editorNeedRebuild_4;

public:
	inline static int32_t get_offset_of_textureGUID_2() { return static_cast<int32_t>(offsetof(exGUIBorder_t1778287060, ___textureGUID_2)); }
	inline String_t* get_textureGUID_2() const { return ___textureGUID_2; }
	inline String_t** get_address_of_textureGUID_2() { return &___textureGUID_2; }
	inline void set_textureGUID_2(String_t* value)
	{
		___textureGUID_2 = value;
		Il2CppCodeGenWriteBarrier(&___textureGUID_2, value);
	}

	inline static int32_t get_offset_of_border_3() { return static_cast<int32_t>(offsetof(exGUIBorder_t1778287060, ___border_3)); }
	inline RectOffset_t3394170884 * get_border_3() const { return ___border_3; }
	inline RectOffset_t3394170884 ** get_address_of_border_3() { return &___border_3; }
	inline void set_border_3(RectOffset_t3394170884 * value)
	{
		___border_3 = value;
		Il2CppCodeGenWriteBarrier(&___border_3, value);
	}

	inline static int32_t get_offset_of_editorNeedRebuild_4() { return static_cast<int32_t>(offsetof(exGUIBorder_t1778287060, ___editorNeedRebuild_4)); }
	inline bool get_editorNeedRebuild_4() const { return ___editorNeedRebuild_4; }
	inline bool* get_address_of_editorNeedRebuild_4() { return &___editorNeedRebuild_4; }
	inline void set_editorNeedRebuild_4(bool value)
	{
		___editorNeedRebuild_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
