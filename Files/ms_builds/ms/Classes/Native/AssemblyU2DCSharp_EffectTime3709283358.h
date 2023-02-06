#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t4012695102;
// exSprite
struct exSprite_t1539598680;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EffectTime
struct  EffectTime_t3709283358  : public MonoBehaviour_t3012272455
{
public:
	// System.Boolean EffectTime::showForever
	bool ___showForever_2;
	// System.Single EffectTime::playDuration
	float ___playDuration_3;
	// System.Boolean EffectTime::fadeOut
	bool ___fadeOut_4;
	// System.Single EffectTime::fadeOutTime
	float ___fadeOutTime_5;
	// UnityEngine.GameObject EffectTime::destroyTarget
	GameObject_t4012695102 * ___destroyTarget_6;
	// System.Boolean EffectTime::destroyParentOnDestroy
	bool ___destroyParentOnDestroy_7;
	// System.Single EffectTime::elapsed
	float ___elapsed_8;
	// System.Single EffectTime::fadeElapsed
	float ___fadeElapsed_9;
	// exSprite EffectTime::_sprite
	exSprite_t1539598680 * ____sprite_10;

public:
	inline static int32_t get_offset_of_showForever_2() { return static_cast<int32_t>(offsetof(EffectTime_t3709283358, ___showForever_2)); }
	inline bool get_showForever_2() const { return ___showForever_2; }
	inline bool* get_address_of_showForever_2() { return &___showForever_2; }
	inline void set_showForever_2(bool value)
	{
		___showForever_2 = value;
	}

	inline static int32_t get_offset_of_playDuration_3() { return static_cast<int32_t>(offsetof(EffectTime_t3709283358, ___playDuration_3)); }
	inline float get_playDuration_3() const { return ___playDuration_3; }
	inline float* get_address_of_playDuration_3() { return &___playDuration_3; }
	inline void set_playDuration_3(float value)
	{
		___playDuration_3 = value;
	}

	inline static int32_t get_offset_of_fadeOut_4() { return static_cast<int32_t>(offsetof(EffectTime_t3709283358, ___fadeOut_4)); }
	inline bool get_fadeOut_4() const { return ___fadeOut_4; }
	inline bool* get_address_of_fadeOut_4() { return &___fadeOut_4; }
	inline void set_fadeOut_4(bool value)
	{
		___fadeOut_4 = value;
	}

	inline static int32_t get_offset_of_fadeOutTime_5() { return static_cast<int32_t>(offsetof(EffectTime_t3709283358, ___fadeOutTime_5)); }
	inline float get_fadeOutTime_5() const { return ___fadeOutTime_5; }
	inline float* get_address_of_fadeOutTime_5() { return &___fadeOutTime_5; }
	inline void set_fadeOutTime_5(float value)
	{
		___fadeOutTime_5 = value;
	}

	inline static int32_t get_offset_of_destroyTarget_6() { return static_cast<int32_t>(offsetof(EffectTime_t3709283358, ___destroyTarget_6)); }
	inline GameObject_t4012695102 * get_destroyTarget_6() const { return ___destroyTarget_6; }
	inline GameObject_t4012695102 ** get_address_of_destroyTarget_6() { return &___destroyTarget_6; }
	inline void set_destroyTarget_6(GameObject_t4012695102 * value)
	{
		___destroyTarget_6 = value;
		Il2CppCodeGenWriteBarrier(&___destroyTarget_6, value);
	}

	inline static int32_t get_offset_of_destroyParentOnDestroy_7() { return static_cast<int32_t>(offsetof(EffectTime_t3709283358, ___destroyParentOnDestroy_7)); }
	inline bool get_destroyParentOnDestroy_7() const { return ___destroyParentOnDestroy_7; }
	inline bool* get_address_of_destroyParentOnDestroy_7() { return &___destroyParentOnDestroy_7; }
	inline void set_destroyParentOnDestroy_7(bool value)
	{
		___destroyParentOnDestroy_7 = value;
	}

	inline static int32_t get_offset_of_elapsed_8() { return static_cast<int32_t>(offsetof(EffectTime_t3709283358, ___elapsed_8)); }
	inline float get_elapsed_8() const { return ___elapsed_8; }
	inline float* get_address_of_elapsed_8() { return &___elapsed_8; }
	inline void set_elapsed_8(float value)
	{
		___elapsed_8 = value;
	}

	inline static int32_t get_offset_of_fadeElapsed_9() { return static_cast<int32_t>(offsetof(EffectTime_t3709283358, ___fadeElapsed_9)); }
	inline float get_fadeElapsed_9() const { return ___fadeElapsed_9; }
	inline float* get_address_of_fadeElapsed_9() { return &___fadeElapsed_9; }
	inline void set_fadeElapsed_9(float value)
	{
		___fadeElapsed_9 = value;
	}

	inline static int32_t get_offset_of__sprite_10() { return static_cast<int32_t>(offsetof(EffectTime_t3709283358, ____sprite_10)); }
	inline exSprite_t1539598680 * get__sprite_10() const { return ____sprite_10; }
	inline exSprite_t1539598680 ** get_address_of__sprite_10() { return &____sprite_10; }
	inline void set__sprite_10(exSprite_t1539598680 * value)
	{
		____sprite_10 = value;
		Il2CppCodeGenWriteBarrier(&____sprite_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
