#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// DarkTonic.MasterAudio.MasterAudioGroup
struct MasterAudioGroup_t1025661466;
// System.String
struct String_t;
// System.Action
struct Action_t437523947;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DarkTonic.MasterAudio.GroupFadeInfo
struct  GroupFadeInfo_t1855680120  : public Il2CppObject
{
public:
	// DarkTonic.MasterAudio.MasterAudioGroup DarkTonic.MasterAudio.GroupFadeInfo::ActingGroup
	MasterAudioGroup_t1025661466 * ___ActingGroup_0;
	// System.String DarkTonic.MasterAudio.GroupFadeInfo::NameOfGroup
	String_t* ___NameOfGroup_1;
	// System.Single DarkTonic.MasterAudio.GroupFadeInfo::TargetVolume
	float ___TargetVolume_2;
	// System.Single DarkTonic.MasterAudio.GroupFadeInfo::VolumeStep
	float ___VolumeStep_3;
	// System.Boolean DarkTonic.MasterAudio.GroupFadeInfo::IsActive
	bool ___IsActive_4;
	// System.Action DarkTonic.MasterAudio.GroupFadeInfo::completionAction
	Action_t437523947 * ___completionAction_5;

public:
	inline static int32_t get_offset_of_ActingGroup_0() { return static_cast<int32_t>(offsetof(GroupFadeInfo_t1855680120, ___ActingGroup_0)); }
	inline MasterAudioGroup_t1025661466 * get_ActingGroup_0() const { return ___ActingGroup_0; }
	inline MasterAudioGroup_t1025661466 ** get_address_of_ActingGroup_0() { return &___ActingGroup_0; }
	inline void set_ActingGroup_0(MasterAudioGroup_t1025661466 * value)
	{
		___ActingGroup_0 = value;
		Il2CppCodeGenWriteBarrier(&___ActingGroup_0, value);
	}

	inline static int32_t get_offset_of_NameOfGroup_1() { return static_cast<int32_t>(offsetof(GroupFadeInfo_t1855680120, ___NameOfGroup_1)); }
	inline String_t* get_NameOfGroup_1() const { return ___NameOfGroup_1; }
	inline String_t** get_address_of_NameOfGroup_1() { return &___NameOfGroup_1; }
	inline void set_NameOfGroup_1(String_t* value)
	{
		___NameOfGroup_1 = value;
		Il2CppCodeGenWriteBarrier(&___NameOfGroup_1, value);
	}

	inline static int32_t get_offset_of_TargetVolume_2() { return static_cast<int32_t>(offsetof(GroupFadeInfo_t1855680120, ___TargetVolume_2)); }
	inline float get_TargetVolume_2() const { return ___TargetVolume_2; }
	inline float* get_address_of_TargetVolume_2() { return &___TargetVolume_2; }
	inline void set_TargetVolume_2(float value)
	{
		___TargetVolume_2 = value;
	}

	inline static int32_t get_offset_of_VolumeStep_3() { return static_cast<int32_t>(offsetof(GroupFadeInfo_t1855680120, ___VolumeStep_3)); }
	inline float get_VolumeStep_3() const { return ___VolumeStep_3; }
	inline float* get_address_of_VolumeStep_3() { return &___VolumeStep_3; }
	inline void set_VolumeStep_3(float value)
	{
		___VolumeStep_3 = value;
	}

	inline static int32_t get_offset_of_IsActive_4() { return static_cast<int32_t>(offsetof(GroupFadeInfo_t1855680120, ___IsActive_4)); }
	inline bool get_IsActive_4() const { return ___IsActive_4; }
	inline bool* get_address_of_IsActive_4() { return &___IsActive_4; }
	inline void set_IsActive_4(bool value)
	{
		___IsActive_4 = value;
	}

	inline static int32_t get_offset_of_completionAction_5() { return static_cast<int32_t>(offsetof(GroupFadeInfo_t1855680120, ___completionAction_5)); }
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
