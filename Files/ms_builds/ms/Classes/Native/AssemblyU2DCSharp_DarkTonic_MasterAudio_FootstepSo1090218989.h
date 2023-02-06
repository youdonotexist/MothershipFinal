#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<DarkTonic.MasterAudio.FootstepGroup>
struct List_1_t4059889901;
// UnityEngine.Transform
struct Transform_t284553113;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "AssemblyU2DCSharp_DarkTonic_MasterAudio_MasterAudi2089997540.h"
#include "AssemblyU2DCSharp_DarkTonic_MasterAudio_FootstepSou266445505.h"
#include "AssemblyU2DCSharp_DarkTonic_MasterAudio_EventSound3414190222.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DarkTonic.MasterAudio.FootstepSounds
struct  FootstepSounds_t1090218989  : public MonoBehaviour_t3012272455
{
public:
	// DarkTonic.MasterAudio.MasterAudio/SoundSpawnLocationMode DarkTonic.MasterAudio.FootstepSounds::soundSpawnMode
	int32_t ___soundSpawnMode_2;
	// DarkTonic.MasterAudio.FootstepSounds/FootstepTriggerMode DarkTonic.MasterAudio.FootstepSounds::footstepEvent
	int32_t ___footstepEvent_3;
	// System.Collections.Generic.List`1<DarkTonic.MasterAudio.FootstepGroup> DarkTonic.MasterAudio.FootstepSounds::footstepGroups
	List_1_t4059889901 * ___footstepGroups_4;
	// DarkTonic.MasterAudio.EventSounds/RetriggerLimMode DarkTonic.MasterAudio.FootstepSounds::retriggerLimitMode
	int32_t ___retriggerLimitMode_5;
	// System.Int32 DarkTonic.MasterAudio.FootstepSounds::limitPerXFrm
	int32_t ___limitPerXFrm_6;
	// System.Single DarkTonic.MasterAudio.FootstepSounds::limitPerXSec
	float ___limitPerXSec_7;
	// System.Int32 DarkTonic.MasterAudio.FootstepSounds::triggeredLastFrame
	int32_t ___triggeredLastFrame_8;
	// System.Single DarkTonic.MasterAudio.FootstepSounds::triggeredLastTime
	float ___triggeredLastTime_9;
	// UnityEngine.Transform DarkTonic.MasterAudio.FootstepSounds::_trans
	Transform_t284553113 * ____trans_10;

public:
	inline static int32_t get_offset_of_soundSpawnMode_2() { return static_cast<int32_t>(offsetof(FootstepSounds_t1090218989, ___soundSpawnMode_2)); }
	inline int32_t get_soundSpawnMode_2() const { return ___soundSpawnMode_2; }
	inline int32_t* get_address_of_soundSpawnMode_2() { return &___soundSpawnMode_2; }
	inline void set_soundSpawnMode_2(int32_t value)
	{
		___soundSpawnMode_2 = value;
	}

	inline static int32_t get_offset_of_footstepEvent_3() { return static_cast<int32_t>(offsetof(FootstepSounds_t1090218989, ___footstepEvent_3)); }
	inline int32_t get_footstepEvent_3() const { return ___footstepEvent_3; }
	inline int32_t* get_address_of_footstepEvent_3() { return &___footstepEvent_3; }
	inline void set_footstepEvent_3(int32_t value)
	{
		___footstepEvent_3 = value;
	}

	inline static int32_t get_offset_of_footstepGroups_4() { return static_cast<int32_t>(offsetof(FootstepSounds_t1090218989, ___footstepGroups_4)); }
	inline List_1_t4059889901 * get_footstepGroups_4() const { return ___footstepGroups_4; }
	inline List_1_t4059889901 ** get_address_of_footstepGroups_4() { return &___footstepGroups_4; }
	inline void set_footstepGroups_4(List_1_t4059889901 * value)
	{
		___footstepGroups_4 = value;
		Il2CppCodeGenWriteBarrier(&___footstepGroups_4, value);
	}

	inline static int32_t get_offset_of_retriggerLimitMode_5() { return static_cast<int32_t>(offsetof(FootstepSounds_t1090218989, ___retriggerLimitMode_5)); }
	inline int32_t get_retriggerLimitMode_5() const { return ___retriggerLimitMode_5; }
	inline int32_t* get_address_of_retriggerLimitMode_5() { return &___retriggerLimitMode_5; }
	inline void set_retriggerLimitMode_5(int32_t value)
	{
		___retriggerLimitMode_5 = value;
	}

	inline static int32_t get_offset_of_limitPerXFrm_6() { return static_cast<int32_t>(offsetof(FootstepSounds_t1090218989, ___limitPerXFrm_6)); }
	inline int32_t get_limitPerXFrm_6() const { return ___limitPerXFrm_6; }
	inline int32_t* get_address_of_limitPerXFrm_6() { return &___limitPerXFrm_6; }
	inline void set_limitPerXFrm_6(int32_t value)
	{
		___limitPerXFrm_6 = value;
	}

	inline static int32_t get_offset_of_limitPerXSec_7() { return static_cast<int32_t>(offsetof(FootstepSounds_t1090218989, ___limitPerXSec_7)); }
	inline float get_limitPerXSec_7() const { return ___limitPerXSec_7; }
	inline float* get_address_of_limitPerXSec_7() { return &___limitPerXSec_7; }
	inline void set_limitPerXSec_7(float value)
	{
		___limitPerXSec_7 = value;
	}

	inline static int32_t get_offset_of_triggeredLastFrame_8() { return static_cast<int32_t>(offsetof(FootstepSounds_t1090218989, ___triggeredLastFrame_8)); }
	inline int32_t get_triggeredLastFrame_8() const { return ___triggeredLastFrame_8; }
	inline int32_t* get_address_of_triggeredLastFrame_8() { return &___triggeredLastFrame_8; }
	inline void set_triggeredLastFrame_8(int32_t value)
	{
		___triggeredLastFrame_8 = value;
	}

	inline static int32_t get_offset_of_triggeredLastTime_9() { return static_cast<int32_t>(offsetof(FootstepSounds_t1090218989, ___triggeredLastTime_9)); }
	inline float get_triggeredLastTime_9() const { return ___triggeredLastTime_9; }
	inline float* get_address_of_triggeredLastTime_9() { return &___triggeredLastTime_9; }
	inline void set_triggeredLastTime_9(float value)
	{
		___triggeredLastTime_9 = value;
	}

	inline static int32_t get_offset_of__trans_10() { return static_cast<int32_t>(offsetof(FootstepSounds_t1090218989, ____trans_10)); }
	inline Transform_t284553113 * get__trans_10() const { return ____trans_10; }
	inline Transform_t284553113 ** get_address_of__trans_10() { return &____trans_10; }
	inline void set__trans_10(Transform_t284553113 * value)
	{
		____trans_10 = value;
		Il2CppCodeGenWriteBarrier(&____trans_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
