#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<exSpriteAnimClip/FrameInfo>
struct List_1_t3345728660;
// System.Collections.Generic.List`1<exSpriteAnimClip/EventInfo>
struct List_1_t2832019265;
// exSpriteAnimClip/EventInfoComparer
struct EventInfoComparer_t4130900629;

#include "UnityEngine_UnityEngine_ScriptableObject184905905.h"
#include "UnityEngine_UnityEngine_WrapMode3802599802.h"
#include "ex2D_Runtime_exSpriteAnimClip_StopAction113427704.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// exSpriteAnimClip
struct  exSpriteAnimClip_t892886649  : public ScriptableObject_t184905905
{
public:
	// UnityEngine.WrapMode exSpriteAnimClip::wrapMode
	int32_t ___wrapMode_2;
	// exSpriteAnimClip/StopAction exSpriteAnimClip::stopAction
	int32_t ___stopAction_3;
	// System.Single exSpriteAnimClip::length
	float ___length_4;
	// System.Single exSpriteAnimClip::sampleRate_
	float ___sampleRate__5;
	// System.Collections.Generic.List`1<exSpriteAnimClip/FrameInfo> exSpriteAnimClip::frameInfos
	List_1_t3345728660 * ___frameInfos_6;
	// System.Collections.Generic.List`1<exSpriteAnimClip/EventInfo> exSpriteAnimClip::eventInfos
	List_1_t2832019265 * ___eventInfos_7;
	// System.Single exSpriteAnimClip::speed
	float ___speed_8;
	// System.Single exSpriteAnimClip::editorPreviewSize
	float ___editorPreviewSize_9;
	// System.Single exSpriteAnimClip::editorScale
	float ___editorScale_10;
	// System.Single exSpriteAnimClip::editorOffset
	float ___editorOffset_11;
	// System.Single exSpriteAnimClip::editorSpeed
	float ___editorSpeed_12;
	// System.Boolean exSpriteAnimClip::editorNeedRebuild
	bool ___editorNeedRebuild_13;
	// exSpriteAnimClip/EventInfoComparer exSpriteAnimClip::eventInfoComparer
	EventInfoComparer_t4130900629 * ___eventInfoComparer_14;

public:
	inline static int32_t get_offset_of_wrapMode_2() { return static_cast<int32_t>(offsetof(exSpriteAnimClip_t892886649, ___wrapMode_2)); }
	inline int32_t get_wrapMode_2() const { return ___wrapMode_2; }
	inline int32_t* get_address_of_wrapMode_2() { return &___wrapMode_2; }
	inline void set_wrapMode_2(int32_t value)
	{
		___wrapMode_2 = value;
	}

	inline static int32_t get_offset_of_stopAction_3() { return static_cast<int32_t>(offsetof(exSpriteAnimClip_t892886649, ___stopAction_3)); }
	inline int32_t get_stopAction_3() const { return ___stopAction_3; }
	inline int32_t* get_address_of_stopAction_3() { return &___stopAction_3; }
	inline void set_stopAction_3(int32_t value)
	{
		___stopAction_3 = value;
	}

	inline static int32_t get_offset_of_length_4() { return static_cast<int32_t>(offsetof(exSpriteAnimClip_t892886649, ___length_4)); }
	inline float get_length_4() const { return ___length_4; }
	inline float* get_address_of_length_4() { return &___length_4; }
	inline void set_length_4(float value)
	{
		___length_4 = value;
	}

	inline static int32_t get_offset_of_sampleRate__5() { return static_cast<int32_t>(offsetof(exSpriteAnimClip_t892886649, ___sampleRate__5)); }
	inline float get_sampleRate__5() const { return ___sampleRate__5; }
	inline float* get_address_of_sampleRate__5() { return &___sampleRate__5; }
	inline void set_sampleRate__5(float value)
	{
		___sampleRate__5 = value;
	}

	inline static int32_t get_offset_of_frameInfos_6() { return static_cast<int32_t>(offsetof(exSpriteAnimClip_t892886649, ___frameInfos_6)); }
	inline List_1_t3345728660 * get_frameInfos_6() const { return ___frameInfos_6; }
	inline List_1_t3345728660 ** get_address_of_frameInfos_6() { return &___frameInfos_6; }
	inline void set_frameInfos_6(List_1_t3345728660 * value)
	{
		___frameInfos_6 = value;
		Il2CppCodeGenWriteBarrier(&___frameInfos_6, value);
	}

	inline static int32_t get_offset_of_eventInfos_7() { return static_cast<int32_t>(offsetof(exSpriteAnimClip_t892886649, ___eventInfos_7)); }
	inline List_1_t2832019265 * get_eventInfos_7() const { return ___eventInfos_7; }
	inline List_1_t2832019265 ** get_address_of_eventInfos_7() { return &___eventInfos_7; }
	inline void set_eventInfos_7(List_1_t2832019265 * value)
	{
		___eventInfos_7 = value;
		Il2CppCodeGenWriteBarrier(&___eventInfos_7, value);
	}

	inline static int32_t get_offset_of_speed_8() { return static_cast<int32_t>(offsetof(exSpriteAnimClip_t892886649, ___speed_8)); }
	inline float get_speed_8() const { return ___speed_8; }
	inline float* get_address_of_speed_8() { return &___speed_8; }
	inline void set_speed_8(float value)
	{
		___speed_8 = value;
	}

	inline static int32_t get_offset_of_editorPreviewSize_9() { return static_cast<int32_t>(offsetof(exSpriteAnimClip_t892886649, ___editorPreviewSize_9)); }
	inline float get_editorPreviewSize_9() const { return ___editorPreviewSize_9; }
	inline float* get_address_of_editorPreviewSize_9() { return &___editorPreviewSize_9; }
	inline void set_editorPreviewSize_9(float value)
	{
		___editorPreviewSize_9 = value;
	}

	inline static int32_t get_offset_of_editorScale_10() { return static_cast<int32_t>(offsetof(exSpriteAnimClip_t892886649, ___editorScale_10)); }
	inline float get_editorScale_10() const { return ___editorScale_10; }
	inline float* get_address_of_editorScale_10() { return &___editorScale_10; }
	inline void set_editorScale_10(float value)
	{
		___editorScale_10 = value;
	}

	inline static int32_t get_offset_of_editorOffset_11() { return static_cast<int32_t>(offsetof(exSpriteAnimClip_t892886649, ___editorOffset_11)); }
	inline float get_editorOffset_11() const { return ___editorOffset_11; }
	inline float* get_address_of_editorOffset_11() { return &___editorOffset_11; }
	inline void set_editorOffset_11(float value)
	{
		___editorOffset_11 = value;
	}

	inline static int32_t get_offset_of_editorSpeed_12() { return static_cast<int32_t>(offsetof(exSpriteAnimClip_t892886649, ___editorSpeed_12)); }
	inline float get_editorSpeed_12() const { return ___editorSpeed_12; }
	inline float* get_address_of_editorSpeed_12() { return &___editorSpeed_12; }
	inline void set_editorSpeed_12(float value)
	{
		___editorSpeed_12 = value;
	}

	inline static int32_t get_offset_of_editorNeedRebuild_13() { return static_cast<int32_t>(offsetof(exSpriteAnimClip_t892886649, ___editorNeedRebuild_13)); }
	inline bool get_editorNeedRebuild_13() const { return ___editorNeedRebuild_13; }
	inline bool* get_address_of_editorNeedRebuild_13() { return &___editorNeedRebuild_13; }
	inline void set_editorNeedRebuild_13(bool value)
	{
		___editorNeedRebuild_13 = value;
	}

	inline static int32_t get_offset_of_eventInfoComparer_14() { return static_cast<int32_t>(offsetof(exSpriteAnimClip_t892886649, ___eventInfoComparer_14)); }
	inline EventInfoComparer_t4130900629 * get_eventInfoComparer_14() const { return ___eventInfoComparer_14; }
	inline EventInfoComparer_t4130900629 ** get_address_of_eventInfoComparer_14() { return &___eventInfoComparer_14; }
	inline void set_eventInfoComparer_14(EventInfoComparer_t4130900629 * value)
	{
		___eventInfoComparer_14 = value;
		Il2CppCodeGenWriteBarrier(&___eventInfoComparer_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
