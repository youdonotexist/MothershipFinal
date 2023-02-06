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
// DarkTonic.MasterAudio.GroupBus
struct GroupBus_t3345035600;
// System.Action
struct Action_t437523947;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DarkTonic.MasterAudio.BusFadeInfo
struct  BusFadeInfo_t1807932793  : public Il2CppObject
{
public:
	// System.String DarkTonic.MasterAudio.BusFadeInfo::NameOfBus
	String_t* ___NameOfBus_0;
	// DarkTonic.MasterAudio.GroupBus DarkTonic.MasterAudio.BusFadeInfo::ActingBus
	GroupBus_t3345035600 * ___ActingBus_1;
	// System.Single DarkTonic.MasterAudio.BusFadeInfo::TargetVolume
	float ___TargetVolume_2;
	// System.Single DarkTonic.MasterAudio.BusFadeInfo::VolumeStep
	float ___VolumeStep_3;
	// System.Boolean DarkTonic.MasterAudio.BusFadeInfo::IsActive
	bool ___IsActive_4;
	// System.Action DarkTonic.MasterAudio.BusFadeInfo::completionAction
	Action_t437523947 * ___completionAction_5;

public:
	inline static int32_t get_offset_of_NameOfBus_0() { return static_cast<int32_t>(offsetof(BusFadeInfo_t1807932793, ___NameOfBus_0)); }
	inline String_t* get_NameOfBus_0() const { return ___NameOfBus_0; }
	inline String_t** get_address_of_NameOfBus_0() { return &___NameOfBus_0; }
	inline void set_NameOfBus_0(String_t* value)
	{
		___NameOfBus_0 = value;
		Il2CppCodeGenWriteBarrier(&___NameOfBus_0, value);
	}

	inline static int32_t get_offset_of_ActingBus_1() { return static_cast<int32_t>(offsetof(BusFadeInfo_t1807932793, ___ActingBus_1)); }
	inline GroupBus_t3345035600 * get_ActingBus_1() const { return ___ActingBus_1; }
	inline GroupBus_t3345035600 ** get_address_of_ActingBus_1() { return &___ActingBus_1; }
	inline void set_ActingBus_1(GroupBus_t3345035600 * value)
	{
		___ActingBus_1 = value;
		Il2CppCodeGenWriteBarrier(&___ActingBus_1, value);
	}

	inline static int32_t get_offset_of_TargetVolume_2() { return static_cast<int32_t>(offsetof(BusFadeInfo_t1807932793, ___TargetVolume_2)); }
	inline float get_TargetVolume_2() const { return ___TargetVolume_2; }
	inline float* get_address_of_TargetVolume_2() { return &___TargetVolume_2; }
	inline void set_TargetVolume_2(float value)
	{
		___TargetVolume_2 = value;
	}

	inline static int32_t get_offset_of_VolumeStep_3() { return static_cast<int32_t>(offsetof(BusFadeInfo_t1807932793, ___VolumeStep_3)); }
	inline float get_VolumeStep_3() const { return ___VolumeStep_3; }
	inline float* get_address_of_VolumeStep_3() { return &___VolumeStep_3; }
	inline void set_VolumeStep_3(float value)
	{
		___VolumeStep_3 = value;
	}

	inline static int32_t get_offset_of_IsActive_4() { return static_cast<int32_t>(offsetof(BusFadeInfo_t1807932793, ___IsActive_4)); }
	inline bool get_IsActive_4() const { return ___IsActive_4; }
	inline bool* get_address_of_IsActive_4() { return &___IsActive_4; }
	inline void set_IsActive_4(bool value)
	{
		___IsActive_4 = value;
	}

	inline static int32_t get_offset_of_completionAction_5() { return static_cast<int32_t>(offsetof(BusFadeInfo_t1807932793, ___completionAction_5)); }
	inline Action_t437523947 * get_completionAction_5() const { return ___completionAction_5; }
	inline Action_t437523947 ** get_address_of_completionAction_5() { return &___completionAction_5; }
	inline void set_completionAction_5(Action_t437523947 * value)
	{
		___completionAction_5 = value;
		Il2CppCodeGenWriteBarrier(&___completionAction_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
