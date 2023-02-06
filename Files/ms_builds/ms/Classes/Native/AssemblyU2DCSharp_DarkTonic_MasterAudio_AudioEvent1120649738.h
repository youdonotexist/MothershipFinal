#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t3644373756;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1765447871;
// System.String
struct String_t;
// System.Collections.Generic.List`1<DarkTonic.MasterAudio.AudioEvent>
struct List_1_t2794920748;

#include "mscorlib_System_Object837106420.h"
#include "AssemblyU2DCSharp_DarkTonic_MasterAudio_EventSound1149772061.h"
#include "AssemblyU2DCSharp_DarkTonic_MasterAudio_EventSound3414190222.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DarkTonic.MasterAudio.AudioEventGroup
struct  AudioEventGroup_t1120649738  : public Il2CppObject
{
public:
	// System.Boolean DarkTonic.MasterAudio.AudioEventGroup::isExpanded
	bool ___isExpanded_0;
	// System.Boolean DarkTonic.MasterAudio.AudioEventGroup::useLayerFilter
	bool ___useLayerFilter_1;
	// System.Boolean DarkTonic.MasterAudio.AudioEventGroup::useTagFilter
	bool ___useTagFilter_2;
	// System.Collections.Generic.List`1<System.Int32> DarkTonic.MasterAudio.AudioEventGroup::matchingLayers
	List_1_t3644373756 * ___matchingLayers_3;
	// System.Collections.Generic.List`1<System.String> DarkTonic.MasterAudio.AudioEventGroup::matchingTags
	List_1_t1765447871 * ___matchingTags_4;
	// System.Boolean DarkTonic.MasterAudio.AudioEventGroup::customSoundActive
	bool ___customSoundActive_5;
	// System.Boolean DarkTonic.MasterAudio.AudioEventGroup::isCustomEvent
	bool ___isCustomEvent_6;
	// System.String DarkTonic.MasterAudio.AudioEventGroup::customEventName
	String_t* ___customEventName_7;
	// System.Boolean DarkTonic.MasterAudio.AudioEventGroup::mechanimEventActive
	bool ___mechanimEventActive_8;
	// System.Boolean DarkTonic.MasterAudio.AudioEventGroup::isMechanimStateCheckEvent
	bool ___isMechanimStateCheckEvent_9;
	// System.String DarkTonic.MasterAudio.AudioEventGroup::mechanimStateName
	String_t* ___mechanimStateName_10;
	// System.Boolean DarkTonic.MasterAudio.AudioEventGroup::mechEventPlayedForState
	bool ___mechEventPlayedForState_11;
	// System.Collections.Generic.List`1<DarkTonic.MasterAudio.AudioEvent> DarkTonic.MasterAudio.AudioEventGroup::SoundEvents
	List_1_t2794920748 * ___SoundEvents_12;
	// DarkTonic.MasterAudio.EventSounds/PreviousSoundStopMode DarkTonic.MasterAudio.AudioEventGroup::mouseDragStopMode
	int32_t ___mouseDragStopMode_13;
	// System.Single DarkTonic.MasterAudio.AudioEventGroup::mouseDragFadeOutTime
	float ___mouseDragFadeOutTime_14;
	// DarkTonic.MasterAudio.EventSounds/RetriggerLimMode DarkTonic.MasterAudio.AudioEventGroup::retriggerLimitMode
	int32_t ___retriggerLimitMode_15;
	// System.Int32 DarkTonic.MasterAudio.AudioEventGroup::limitPerXFrm
	int32_t ___limitPerXFrm_16;
	// System.Single DarkTonic.MasterAudio.AudioEventGroup::limitPerXSec
	float ___limitPerXSec_17;
	// System.Int32 DarkTonic.MasterAudio.AudioEventGroup::triggeredLastFrame
	int32_t ___triggeredLastFrame_18;
	// System.Single DarkTonic.MasterAudio.AudioEventGroup::triggeredLastTime
	float ___triggeredLastTime_19;
	// System.Single DarkTonic.MasterAudio.AudioEventGroup::sliderValue
	float ___sliderValue_20;

public:
	inline static int32_t get_offset_of_isExpanded_0() { return static_cast<int32_t>(offsetof(AudioEventGroup_t1120649738, ___isExpanded_0)); }
	inline bool get_isExpanded_0() const { return ___isExpanded_0; }
	inline bool* get_address_of_isExpanded_0() { return &___isExpanded_0; }
	inline void set_isExpanded_0(bool value)
	{
		___isExpanded_0 = value;
	}

	inline static int32_t get_offset_of_useLayerFilter_1() { return static_cast<int32_t>(offsetof(AudioEventGroup_t1120649738, ___useLayerFilter_1)); }
	inline bool get_useLayerFilter_1() const { return ___useLayerFilter_1; }
	inline bool* get_address_of_useLayerFilter_1() { return &___useLayerFilter_1; }
	inline void set_useLayerFilter_1(bool value)
	{
		___useLayerFilter_1 = value;
	}

	inline static int32_t get_offset_of_useTagFilter_2() { return static_cast<int32_t>(offsetof(AudioEventGroup_t1120649738, ___useTagFilter_2)); }
	inline bool get_useTagFilter_2() const { return ___useTagFilter_2; }
	inline bool* get_address_of_useTagFilter_2() { return &___useTagFilter_2; }
	inline void set_useTagFilter_2(bool value)
	{
		___useTagFilter_2 = value;
	}

	inline static int32_t get_offset_of_matchingLayers_3() { return static_cast<int32_t>(offsetof(AudioEventGroup_t1120649738, ___matchingLayers_3)); }
	inline List_1_t3644373756 * get_matchingLayers_3() const { return ___matchingLayers_3; }
	inline List_1_t3644373756 ** get_address_of_matchingLayers_3() { return &___matchingLayers_3; }
	inline void set_matchingLayers_3(List_1_t3644373756 * value)
	{
		___matchingLayers_3 = value;
		Il2CppCodeGenWriteBarrier(&___matchingLayers_3, value);
	}

	inline static int32_t get_offset_of_matchingTags_4() { return static_cast<int32_t>(offsetof(AudioEventGroup_t1120649738, ___matchingTags_4)); }
	inline List_1_t1765447871 * get_matchingTags_4() const { return ___matchingTags_4; }
	inline List_1_t1765447871 ** get_address_of_matchingTags_4() { return &___matchingTags_4; }
	inline void set_matchingTags_4(List_1_t1765447871 * value)
	{
		___matchingTags_4 = value;
		Il2CppCodeGenWriteBarrier(&___matchingTags_4, value);
	}

	inline static int32_t get_offset_of_customSoundActive_5() { return static_cast<int32_t>(offsetof(AudioEventGroup_t1120649738, ___customSoundActive_5)); }
	inline bool get_customSoundActive_5() const { return ___customSoundActive_5; }
	inline bool* get_address_of_customSoundActive_5() { return &___customSoundActive_5; }
	inline void set_customSoundActive_5(bool value)
	{
		___customSoundActive_5 = value;
	}

	inline static int32_t get_offset_of_isCustomEvent_6() { return static_cast<int32_t>(offsetof(AudioEventGroup_t1120649738, ___isCustomEvent_6)); }
	inline bool get_isCustomEvent_6() const { return ___isCustomEvent_6; }
	inline bool* get_address_of_isCustomEvent_6() { return &___isCustomEvent_6; }
	inline void set_isCustomEvent_6(bool value)
	{
		___isCustomEvent_6 = value;
	}

	inline static int32_t get_offset_of_customEventName_7() { return static_cast<int32_t>(offsetof(AudioEventGroup_t1120649738, ___customEventName_7)); }
	inline String_t* get_customEventName_7() const { return ___customEventName_7; }
	inline String_t** get_address_of_customEventName_7() { return &___customEventName_7; }
	inline void set_customEventName_7(String_t* value)
	{
		___customEventName_7 = value;
		Il2CppCodeGenWriteBarrier(&___customEventName_7, value);
	}

	inline static int32_t get_offset_of_mechanimEventActive_8() { return static_cast<int32_t>(offsetof(AudioEventGroup_t1120649738, ___mechanimEventActive_8)); }
	inline bool get_mechanimEventActive_8() const { return ___mechanimEventActive_8; }
	inline bool* get_address_of_mechanimEventActive_8() { return &___mechanimEventActive_8; }
	inline void set_mechanimEventActive_8(bool value)
	{
		___mechanimEventActive_8 = value;
	}

	inline static int32_t get_offset_of_isMechanimStateCheckEvent_9() { return static_cast<int32_t>(offsetof(AudioEventGroup_t1120649738, ___isMechanimStateCheckEvent_9)); }
	inline bool get_isMechanimStateCheckEvent_9() const { return ___isMechanimStateCheckEvent_9; }
	inline bool* get_address_of_isMechanimStateCheckEvent_9() { return &___isMechanimStateCheckEvent_9; }
	inline void set_isMechanimStateCheckEvent_9(bool value)
	{
		___isMechanimStateCheckEvent_9 = value;
	}

	inline static int32_t get_offset_of_mechanimStateName_10() { return static_cast<int32_t>(offsetof(AudioEventGroup_t1120649738, ___mechanimStateName_10)); }
	inline String_t* get_mechanimStateName_10() const { return ___mechanimStateName_10; }
	inline String_t** get_address_of_mechanimStateName_10() { return &___mechanimStateName_10; }
	inline void set_mechanimStateName_10(String_t* value)
	{
		___mechanimStateName_10 = value;
		Il2CppCodeGenWriteBarrier(&___mechanimStateName_10, value);
	}

	inline static int32_t get_offset_of_mechEventPlayedForState_11() { return static_cast<int32_t>(offsetof(AudioEventGroup_t1120649738, ___mechEventPlayedForState_11)); }
	inline bool get_mechEventPlayedForState_11() const { return ___mechEventPlayedForState_11; }
	inline bool* get_address_of_mechEventPlayedForState_11() { return &___mechEventPlayedForState_11; }
	inline void set_mechEventPlayedForState_11(bool value)
	{
		___mechEventPlayedForState_11 = value;
	}

	inline static int32_t get_offset_of_SoundEvents_12() { return static_cast<int32_t>(offsetof(AudioEventGroup_t1120649738, ___SoundEvents_12)); }
	inline List_1_t2794920748 * get_SoundEvents_12() const { return ___SoundEvents_12; }
	inline List_1_t2794920748 ** get_address_of_SoundEvents_12() { return &___SoundEvents_12; }
	inline void set_SoundEvents_12(List_1_t2794920748 * value)
	{
		___SoundEvents_12 = value;
		Il2CppCodeGenWriteBarrier(&___SoundEvents_12, value);
	}

	inline static int32_t get_offset_of_mouseDragStopMode_13() { return static_cast<int32_t>(offsetof(AudioEventGroup_t1120649738, ___mouseDragStopMode_13)); }
	inline int32_t get_mouseDragStopMode_13() const { return ___mouseDragStopMode_13; }
	inline int32_t* get_address_of_mouseDragStopMode_13() { return &___mouseDragStopMode_13; }
	inline void set_mouseDragStopMode_13(int32_t value)
	{
		___mouseDragStopMode_13 = value;
	}

	inline static int32_t get_offset_of_mouseDragFadeOutTime_14() { return static_cast<int32_t>(offsetof(AudioEventGroup_t1120649738, ___mouseDragFadeOutTime_14)); }
	inline float get_mouseDragFadeOutTime_14() const { return ___mouseDragFadeOutTime_14; }
	inline float* get_address_of_mouseDragFadeOutTime_14() { return &___mouseDragFadeOutTime_14; }
	inline void set_mouseDragFadeOutTime_14(float value)
	{
		___mouseDragFadeOutTime_14 = value;
	}

	inline static int32_t get_offset_of_retriggerLimitMode_15() { return static_cast<int32_t>(offsetof(AudioEventGroup_t1120649738, ___retriggerLimitMode_15)); }
	inline int32_t get_retriggerLimitMode_15() const { return ___retriggerLimitMode_15; }
	inline int32_t* get_address_of_retriggerLimitMode_15() { return &___retriggerLimitMode_15; }
	inline void set_retriggerLimitMode_15(int32_t value)
	{
		___retriggerLimitMode_15 = value;
	}

	inline static int32_t get_offset_of_limitPerXFrm_16() { return static_cast<int32_t>(offsetof(AudioEventGroup_t1120649738, ___limitPerXFrm_16)); }
	inline int32_t get_limitPerXFrm_16() const { return ___limitPerXFrm_16; }
	inline int32_t* get_address_of_limitPerXFrm_16() { return &___limitPerXFrm_16; }
	inline void set_limitPerXFrm_16(int32_t value)
	{
		___limitPerXFrm_16 = value;
	}

	inline static int32_t get_offset_of_limitPerXSec_17() { return static_cast<int32_t>(offsetof(AudioEventGroup_t1120649738, ___limitPerXSec_17)); }
	inline float get_limitPerXSec_17() const { return ___limitPerXSec_17; }
	inline float* get_address_of_limitPerXSec_17() { return &___limitPerXSec_17; }
	inline void set_limitPerXSec_17(float value)
	{
		___limitPerXSec_17 = value;
	}

	inline static int32_t get_offset_of_triggeredLastFrame_18() { return static_cast<int32_t>(offsetof(AudioEventGroup_t1120649738, ___triggeredLastFrame_18)); }
	inline int32_t get_triggeredLastFrame_18() const { return ___triggeredLastFrame_18; }
	inline int32_t* get_address_of_triggeredLastFrame_18() { return &___triggeredLastFrame_18; }
	inline void set_triggeredLastFrame_18(int32_t value)
	{
		___triggeredLastFrame_18 = value;
	}

	inline static int32_t get_offset_of_triggeredLastTime_19() { return static_cast<int32_t>(offsetof(AudioEventGroup_t1120649738, ___triggeredLastTime_19)); }
	inline float get_triggeredLastTime_19() const { return ___triggeredLastTime_19; }
	inline float* get_address_of_triggeredLastTime_19() { return &___triggeredLastTime_19; }
	inline void set_triggeredLastTime_19(float value)
	{
		___triggeredLastTime_19 = value;
	}

	inline static int32_t get_offset_of_sliderValue_20() { return static_cast<int32_t>(offsetof(AudioEventGroup_t1120649738, ___sliderValue_20)); }
	inline float get_sliderValue_20() const { return ___sliderValue_20; }
	inline float* get_address_of_sliderValue_20() { return &___sliderValue_20; }
	inline void set_sliderValue_20(float value)
	{
		___sliderValue_20 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
