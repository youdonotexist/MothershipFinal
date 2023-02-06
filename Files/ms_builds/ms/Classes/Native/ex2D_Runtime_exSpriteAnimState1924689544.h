#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// exSpriteAnimClip
struct exSpriteAnimClip_t892886649;
// System.String
struct String_t;
// System.Collections.Generic.List`1<System.Single>
struct List_1_t1755167990;

#include "mscorlib_System_Object837106420.h"
#include "UnityEngine_UnityEngine_WrapMode3802599802.h"
#include "ex2D_Runtime_exSpriteAnimClip_StopAction113427704.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// exSpriteAnimState
struct  exSpriteAnimState_t1924689544  : public Il2CppObject
{
public:
	// exSpriteAnimClip exSpriteAnimState::clip
	exSpriteAnimClip_t892886649 * ___clip_0;
	// System.String exSpriteAnimState::name
	String_t* ___name_1;
	// UnityEngine.WrapMode exSpriteAnimState::wrapMode
	int32_t ___wrapMode_2;
	// exSpriteAnimClip/StopAction exSpriteAnimState::stopAction
	int32_t ___stopAction_3;
	// System.Single exSpriteAnimState::length
	float ___length_4;
	// System.Single exSpriteAnimState::speed
	float ___speed_5;
	// System.Single exSpriteAnimState::time
	float ___time_6;
	// System.Collections.Generic.List`1<System.Single> exSpriteAnimState::frameTimes
	List_1_t1755167990 * ___frameTimes_7;

public:
	inline static int32_t get_offset_of_clip_0() { return static_cast<int32_t>(offsetof(exSpriteAnimState_t1924689544, ___clip_0)); }
	inline exSpriteAnimClip_t892886649 * get_clip_0() const { return ___clip_0; }
	inline exSpriteAnimClip_t892886649 ** get_address_of_clip_0() { return &___clip_0; }
	inline void set_clip_0(exSpriteAnimClip_t892886649 * value)
	{
		___clip_0 = value;
		Il2CppCodeGenWriteBarrier(&___clip_0, value);
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(exSpriteAnimState_t1924689544, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier(&___name_1, value);
	}

	inline static int32_t get_offset_of_wrapMode_2() { return static_cast<int32_t>(offsetof(exSpriteAnimState_t1924689544, ___wrapMode_2)); }
	inline int32_t get_wrapMode_2() const { return ___wrapMode_2; }
	inline int32_t* get_address_of_wrapMode_2() { return &___wrapMode_2; }
	inline void set_wrapMode_2(int32_t value)
	{
		___wrapMode_2 = value;
	}

	inline static int32_t get_offset_of_stopAction_3() { return static_cast<int32_t>(offsetof(exSpriteAnimState_t1924689544, ___stopAction_3)); }
	inline int32_t get_stopAction_3() const { return ___stopAction_3; }
	inline int32_t* get_address_of_stopAction_3() { return &___stopAction_3; }
	inline void set_stopAction_3(int32_t value)
	{
		___stopAction_3 = value;
	}

	inline static int32_t get_offset_of_length_4() { return static_cast<int32_t>(offsetof(exSpriteAnimState_t1924689544, ___length_4)); }
	inline float get_length_4() const { return ___length_4; }
	inline float* get_address_of_length_4() { return &___length_4; }
	inline void set_length_4(float value)
	{
		___length_4 = value;
	}

	inline static int32_t get_offset_of_speed_5() { return static_cast<int32_t>(offsetof(exSpriteAnimState_t1924689544, ___speed_5)); }
	inline float get_speed_5() const { return ___speed_5; }
	inline float* get_address_of_speed_5() { return &___speed_5; }
	inline void set_speed_5(float value)
	{
		___speed_5 = value;
	}

	inline static int32_t get_offset_of_time_6() { return static_cast<int32_t>(offsetof(exSpriteAnimState_t1924689544, ___time_6)); }
	inline float get_time_6() const { return ___time_6; }
	inline float* get_address_of_time_6() { return &___time_6; }
	inline void set_time_6(float value)
	{
		___time_6 = value;
	}

	inline static int32_t get_offset_of_frameTimes_7() { return static_cast<int32_t>(offsetof(exSpriteAnimState_t1924689544, ___frameTimes_7)); }
	inline List_1_t1755167990 * get_frameTimes_7() const { return ___frameTimes_7; }
	inline List_1_t1755167990 ** get_address_of_frameTimes_7() { return &___frameTimes_7; }
	inline void set_frameTimes_7(List_1_t1755167990 * value)
	{
		___frameTimes_7 = value;
		Il2CppCodeGenWriteBarrier(&___frameTimes_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
