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
// System.String
struct String_t;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1765447871;
// System.Collections.Generic.List`1<DarkTonic.MasterAudio.DynamicGroupVariation>
struct List_1_t2962271995;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "AssemblyU2DCSharp_DarkTonic_MasterAudio_MasterAudio478083796.h"
#include "AssemblyU2DCSharp_DarkTonic_MasterAudio_MasterAudi1078738486.h"
#include "AssemblyU2DCSharp_DarkTonic_MasterAudio_MasterAudio767596939.h"
#include "AssemblyU2DCSharp_DarkTonic_MasterAudio_MasterAudi3558370379.h"
#include "AssemblyU2DCSharp_DarkTonic_MasterAudio_MasterAudi2370136026.h"
#include "AssemblyU2DCSharp_DarkTonic_MasterAudio_MasterAudi3748119518.h"
#include "AssemblyU2DCSharp_DarkTonic_MasterAudio_MasterAudi2262844794.h"
#include "AssemblyU2DCSharp_DarkTonic_MasterAudio_MasterAudi2253996838.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DarkTonic.MasterAudio.DynamicSoundGroup
struct  DynamicSoundGroup_t2364000734  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.GameObject DarkTonic.MasterAudio.DynamicSoundGroup::variationTemplate
	GameObject_t4012695102 * ___variationTemplate_2;
	// System.Boolean DarkTonic.MasterAudio.DynamicSoundGroup::alwaysHighestPriority
	bool ___alwaysHighestPriority_3;
	// System.Single DarkTonic.MasterAudio.DynamicSoundGroup::groupMasterVolume
	float ___groupMasterVolume_4;
	// System.Int32 DarkTonic.MasterAudio.DynamicSoundGroup::retriggerPercentage
	int32_t ___retriggerPercentage_5;
	// DarkTonic.MasterAudio.MasterAudioGroup/VariationSequence DarkTonic.MasterAudio.DynamicSoundGroup::curVariationSequence
	int32_t ___curVariationSequence_6;
	// System.Boolean DarkTonic.MasterAudio.DynamicSoundGroup::useInactivePeriodPoolRefill
	bool ___useInactivePeriodPoolRefill_7;
	// System.Single DarkTonic.MasterAudio.DynamicSoundGroup::inactivePeriodSeconds
	float ___inactivePeriodSeconds_8;
	// DarkTonic.MasterAudio.MasterAudioGroup/VariationMode DarkTonic.MasterAudio.DynamicSoundGroup::curVariationMode
	int32_t ___curVariationMode_9;
	// DarkTonic.MasterAudio.MasterAudio/AudioLocation DarkTonic.MasterAudio.DynamicSoundGroup::bulkVariationMode
	int32_t ___bulkVariationMode_10;
	// System.Single DarkTonic.MasterAudio.DynamicSoundGroup::chainLoopDelayMin
	float ___chainLoopDelayMin_11;
	// System.Single DarkTonic.MasterAudio.DynamicSoundGroup::chainLoopDelayMax
	float ___chainLoopDelayMax_12;
	// DarkTonic.MasterAudio.MasterAudioGroup/ChainedLoopLoopMode DarkTonic.MasterAudio.DynamicSoundGroup::chainLoopMode
	int32_t ___chainLoopMode_13;
	// System.Int32 DarkTonic.MasterAudio.DynamicSoundGroup::chainLoopNumLoops
	int32_t ___chainLoopNumLoops_14;
	// System.Boolean DarkTonic.MasterAudio.DynamicSoundGroup::useDialogFadeOut
	bool ___useDialogFadeOut_15;
	// System.Single DarkTonic.MasterAudio.DynamicSoundGroup::dialogFadeOutTime
	float ___dialogFadeOutTime_16;
	// System.Boolean DarkTonic.MasterAudio.DynamicSoundGroup::resourceClipsAllLoadAsync
	bool ___resourceClipsAllLoadAsync_17;
	// System.Boolean DarkTonic.MasterAudio.DynamicSoundGroup::logSound
	bool ___logSound_18;
	// System.Boolean DarkTonic.MasterAudio.DynamicSoundGroup::soundPlayedEventActive
	bool ___soundPlayedEventActive_19;
	// System.String DarkTonic.MasterAudio.DynamicSoundGroup::soundPlayedCustomEvent
	String_t* ___soundPlayedCustomEvent_20;
	// System.Int32 DarkTonic.MasterAudio.DynamicSoundGroup::busIndex
	int32_t ___busIndex_21;
	// DarkTonic.MasterAudio.MasterAudio/ItemSpatialBlendType DarkTonic.MasterAudio.DynamicSoundGroup::spatialBlendType
	int32_t ___spatialBlendType_22;
	// System.Single DarkTonic.MasterAudio.DynamicSoundGroup::spatialBlend
	float ___spatialBlend_23;
	// System.String DarkTonic.MasterAudio.DynamicSoundGroup::busName
	String_t* ___busName_24;
	// DarkTonic.MasterAudio.MasterAudioGroup/LimitMode DarkTonic.MasterAudio.DynamicSoundGroup::limitMode
	int32_t ___limitMode_25;
	// System.Int32 DarkTonic.MasterAudio.DynamicSoundGroup::limitPerXFrames
	int32_t ___limitPerXFrames_26;
	// System.Single DarkTonic.MasterAudio.DynamicSoundGroup::minimumTimeBetween
	float ___minimumTimeBetween_27;
	// System.Boolean DarkTonic.MasterAudio.DynamicSoundGroup::limitPolyphony
	bool ___limitPolyphony_28;
	// System.Int32 DarkTonic.MasterAudio.DynamicSoundGroup::voiceLimitCount
	int32_t ___voiceLimitCount_29;
	// DarkTonic.MasterAudio.MasterAudioGroup/TargetDespawnedBehavior DarkTonic.MasterAudio.DynamicSoundGroup::targetDespawnedBehavior
	int32_t ___targetDespawnedBehavior_30;
	// System.Single DarkTonic.MasterAudio.DynamicSoundGroup::despawnFadeTime
	float ___despawnFadeTime_31;
	// System.Boolean DarkTonic.MasterAudio.DynamicSoundGroup::copySettingsExpanded
	bool ___copySettingsExpanded_32;
	// System.Int32 DarkTonic.MasterAudio.DynamicSoundGroup::selectedVariationIndex
	int32_t ___selectedVariationIndex_33;
	// DarkTonic.MasterAudio.MasterAudioGroup/ChildGroupMode DarkTonic.MasterAudio.DynamicSoundGroup::childGroupMode
	int32_t ___childGroupMode_34;
	// System.Collections.Generic.List`1<System.String> DarkTonic.MasterAudio.DynamicSoundGroup::childSoundGroups
	List_1_t1765447871 * ___childSoundGroups_35;
	// System.Collections.Generic.List`1<DarkTonic.MasterAudio.DynamicGroupVariation> DarkTonic.MasterAudio.DynamicSoundGroup::groupVariations
	List_1_t2962271995 * ___groupVariations_36;

public:
	inline static int32_t get_offset_of_variationTemplate_2() { return static_cast<int32_t>(offsetof(DynamicSoundGroup_t2364000734, ___variationTemplate_2)); }
	inline GameObject_t4012695102 * get_variationTemplate_2() const { return ___variationTemplate_2; }
	inline GameObject_t4012695102 ** get_address_of_variationTemplate_2() { return &___variationTemplate_2; }
	inline void set_variationTemplate_2(GameObject_t4012695102 * value)
	{
		___variationTemplate_2 = value;
		Il2CppCodeGenWriteBarrier(&___variationTemplate_2, value);
	}

	inline static int32_t get_offset_of_alwaysHighestPriority_3() { return static_cast<int32_t>(offsetof(DynamicSoundGroup_t2364000734, ___alwaysHighestPriority_3)); }
	inline bool get_alwaysHighestPriority_3() const { return ___alwaysHighestPriority_3; }
	inline bool* get_address_of_alwaysHighestPriority_3() { return &___alwaysHighestPriority_3; }
	inline void set_alwaysHighestPriority_3(bool value)
	{
		___alwaysHighestPriority_3 = value;
	}

	inline static int32_t get_offset_of_groupMasterVolume_4() { return static_cast<int32_t>(offsetof(DynamicSoundGroup_t2364000734, ___groupMasterVolume_4)); }
	inline float get_groupMasterVolume_4() const { return ___groupMasterVolume_4; }
	inline float* get_address_of_groupMasterVolume_4() { return &___groupMasterVolume_4; }
	inline void set_groupMasterVolume_4(float value)
	{
		___groupMasterVolume_4 = value;
	}

	inline static int32_t get_offset_of_retriggerPercentage_5() { return static_cast<int32_t>(offsetof(DynamicSoundGroup_t2364000734, ___retriggerPercentage_5)); }
	inline int32_t get_retriggerPercentage_5() const { return ___retriggerPercentage_5; }
	inline int32_t* get_address_of_retriggerPercentage_5() { return &___retriggerPercentage_5; }
	inline void set_retriggerPercentage_5(int32_t value)
	{
		___retriggerPercentage_5 = value;
	}

	inline static int32_t get_offset_of_curVariationSequence_6() { return static_cast<int32_t>(offsetof(DynamicSoundGroup_t2364000734, ___curVariationSequence_6)); }
	inline int32_t get_curVariationSequence_6() const { return ___curVariationSequence_6; }
	inline int32_t* get_address_of_curVariationSequence_6() { return &___curVariationSequence_6; }
	inline void set_curVariationSequence_6(int32_t value)
	{
		___curVariationSequence_6 = value;
	}

	inline static int32_t get_offset_of_useInactivePeriodPoolRefill_7() { return static_cast<int32_t>(offsetof(DynamicSoundGroup_t2364000734, ___useInactivePeriodPoolRefill_7)); }
	inline bool get_useInactivePeriodPoolRefill_7() const { return ___useInactivePeriodPoolRefill_7; }
	inline bool* get_address_of_useInactivePeriodPoolRefill_7() { return &___useInactivePeriodPoolRefill_7; }
	inline void set_useInactivePeriodPoolRefill_7(bool value)
	{
		___useInactivePeriodPoolRefill_7 = value;
	}

	inline static int32_t get_offset_of_inactivePeriodSeconds_8() { return static_cast<int32_t>(offsetof(DynamicSoundGroup_t2364000734, ___inactivePeriodSeconds_8)); }
	inline float get_inactivePeriodSeconds_8() const { return ___inactivePeriodSeconds_8; }
	inline float* get_address_of_inactivePeriodSeconds_8() { return &___inactivePeriodSeconds_8; }
	inline void set_inactivePeriodSeconds_8(float value)
	{
		___inactivePeriodSeconds_8 = value;
	}

	inline static int32_t get_offset_of_curVariationMode_9() { return static_cast<int32_t>(offsetof(DynamicSoundGroup_t2364000734, ___curVariationMode_9)); }
	inline int32_t get_curVariationMode_9() const { return ___curVariationMode_9; }
	inline int32_t* get_address_of_curVariationMode_9() { return &___curVariationMode_9; }
	inline void set_curVariationMode_9(int32_t value)
	{
		___curVariationMode_9 = value;
	}

	inline static int32_t get_offset_of_bulkVariationMode_10() { return static_cast<int32_t>(offsetof(DynamicSoundGroup_t2364000734, ___bulkVariationMode_10)); }
	inline int32_t get_bulkVariationMode_10() const { return ___bulkVariationMode_10; }
	inline int32_t* get_address_of_bulkVariationMode_10() { return &___bulkVariationMode_10; }
	inline void set_bulkVariationMode_10(int32_t value)
	{
		___bulkVariationMode_10 = value;
	}

	inline static int32_t get_offset_of_chainLoopDelayMin_11() { return static_cast<int32_t>(offsetof(DynamicSoundGroup_t2364000734, ___chainLoopDelayMin_11)); }
	inline float get_chainLoopDelayMin_11() const { return ___chainLoopDelayMin_11; }
	inline float* get_address_of_chainLoopDelayMin_11() { return &___chainLoopDelayMin_11; }
	inline void set_chainLoopDelayMin_11(float value)
	{
		___chainLoopDelayMin_11 = value;
	}

	inline static int32_t get_offset_of_chainLoopDelayMax_12() { return static_cast<int32_t>(offsetof(DynamicSoundGroup_t2364000734, ___chainLoopDelayMax_12)); }
	inline float get_chainLoopDelayMax_12() const { return ___chainLoopDelayMax_12; }
	inline float* get_address_of_chainLoopDelayMax_12() { return &___chainLoopDelayMax_12; }
	inline void set_chainLoopDelayMax_12(float value)
	{
		___chainLoopDelayMax_12 = value;
	}

	inline static int32_t get_offset_of_chainLoopMode_13() { return static_cast<int32_t>(offsetof(DynamicSoundGroup_t2364000734, ___chainLoopMode_13)); }
	inline int32_t get_chainLoopMode_13() const { return ___chainLoopMode_13; }
	inline int32_t* get_address_of_chainLoopMode_13() { return &___chainLoopMode_13; }
	inline void set_chainLoopMode_13(int32_t value)
	{
		___chainLoopMode_13 = value;
	}

	inline static int32_t get_offset_of_chainLoopNumLoops_14() { return static_cast<int32_t>(offsetof(DynamicSoundGroup_t2364000734, ___chainLoopNumLoops_14)); }
	inline int32_t get_chainLoopNumLoops_14() const { return ___chainLoopNumLoops_14; }
	inline int32_t* get_address_of_chainLoopNumLoops_14() { return &___chainLoopNumLoops_14; }
	inline void set_chainLoopNumLoops_14(int32_t value)
	{
		___chainLoopNumLoops_14 = value;
	}

	inline static int32_t get_offset_of_useDialogFadeOut_15() { return static_cast<int32_t>(offsetof(DynamicSoundGroup_t2364000734, ___useDialogFadeOut_15)); }
	inline bool get_useDialogFadeOut_15() const { return ___useDialogFadeOut_15; }
	inline bool* get_address_of_useDialogFadeOut_15() { return &___useDialogFadeOut_15; }
	inline void set_useDialogFadeOut_15(bool value)
	{
		___useDialogFadeOut_15 = value;
	}

	inline static int32_t get_offset_of_dialogFadeOutTime_16() { return static_cast<int32_t>(offsetof(DynamicSoundGroup_t2364000734, ___dialogFadeOutTime_16)); }
	inline float get_dialogFadeOutTime_16() const { return ___dialogFadeOutTime_16; }
	inline float* get_address_of_dialogFadeOutTime_16() { return &___dialogFadeOutTime_16; }
	inline void set_dialogFadeOutTime_16(float value)
	{
		___dialogFadeOutTime_16 = value;
	}

	inline static int32_t get_offset_of_resourceClipsAllLoadAsync_17() { return static_cast<int32_t>(offsetof(DynamicSoundGroup_t2364000734, ___resourceClipsAllLoadAsync_17)); }
	inline bool get_resourceClipsAllLoadAsync_17() const { return ___resourceClipsAllLoadAsync_17; }
	inline bool* get_address_of_resourceClipsAllLoadAsync_17() { return &___resourceClipsAllLoadAsync_17; }
	inline void set_resourceClipsAllLoadAsync_17(bool value)
	{
		___resourceClipsAllLoadAsync_17 = value;
	}

	inline static int32_t get_offset_of_logSound_18() { return static_cast<int32_t>(offsetof(DynamicSoundGroup_t2364000734, ___logSound_18)); }
	inline bool get_logSound_18() const { return ___logSound_18; }
	inline bool* get_address_of_logSound_18() { return &___logSound_18; }
	inline void set_logSound_18(bool value)
	{
		___logSound_18 = value;
	}

	inline static int32_t get_offset_of_soundPlayedEventActive_19() { return static_cast<int32_t>(offsetof(DynamicSoundGroup_t2364000734, ___soundPlayedEventActive_19)); }
	inline bool get_soundPlayedEventActive_19() const { return ___soundPlayedEventActive_19; }
	inline bool* get_address_of_soundPlayedEventActive_19() { return &___soundPlayedEventActive_19; }
	inline void set_soundPlayedEventActive_19(bool value)
	{
		___soundPlayedEventActive_19 = value;
	}

	inline static int32_t get_offset_of_soundPlayedCustomEvent_20() { return static_cast<int32_t>(offsetof(DynamicSoundGroup_t2364000734, ___soundPlayedCustomEvent_20)); }
	inline String_t* get_soundPlayedCustomEvent_20() const { return ___soundPlayedCustomEvent_20; }
	inline String_t** get_address_of_soundPlayedCustomEvent_20() { return &___soundPlayedCustomEvent_20; }
	inline void set_soundPlayedCustomEvent_20(String_t* value)
	{
		___soundPlayedCustomEvent_20 = value;
		Il2CppCodeGenWriteBarrier(&___soundPlayedCustomEvent_20, value);
	}

	inline static int32_t get_offset_of_busIndex_21() { return static_cast<int32_t>(offsetof(DynamicSoundGroup_t2364000734, ___busIndex_21)); }
	inline int32_t get_busIndex_21() const { return ___busIndex_21; }
	inline int32_t* get_address_of_busIndex_21() { return &___busIndex_21; }
	inline void set_busIndex_21(int32_t value)
	{
		___busIndex_21 = value;
	}

	inline static int32_t get_offset_of_spatialBlendType_22() { return static_cast<int32_t>(offsetof(DynamicSoundGroup_t2364000734, ___spatialBlendType_22)); }
	inline int32_t get_spatialBlendType_22() const { return ___spatialBlendType_22; }
	inline int32_t* get_address_of_spatialBlendType_22() { return &___spatialBlendType_22; }
	inline void set_spatialBlendType_22(int32_t value)
	{
		___spatialBlendType_22 = value;
	}

	inline static int32_t get_offset_of_spatialBlend_23() { return static_cast<int32_t>(offsetof(DynamicSoundGroup_t2364000734, ___spatialBlend_23)); }
	inline float get_spatialBlend_23() const { return ___spatialBlend_23; }
	inline float* get_address_of_spatialBlend_23() { return &___spatialBlend_23; }
	inline void set_spatialBlend_23(float value)
	{
		___spatialBlend_23 = value;
	}

	inline static int32_t get_offset_of_busName_24() { return static_cast<int32_t>(offsetof(DynamicSoundGroup_t2364000734, ___busName_24)); }
	inline String_t* get_busName_24() const { return ___busName_24; }
	inline String_t** get_address_of_busName_24() { return &___busName_24; }
	inline void set_busName_24(String_t* value)
	{
		___busName_24 = value;
		Il2CppCodeGenWriteBarrier(&___busName_24, value);
	}

	inline static int32_t get_offset_of_limitMode_25() { return static_cast<int32_t>(offsetof(DynamicSoundGroup_t2364000734, ___limitMode_25)); }
	inline int32_t get_limitMode_25() const { return ___limitMode_25; }
	inline int32_t* get_address_of_limitMode_25() { return &___limitMode_25; }
	inline void set_limitMode_25(int32_t value)
	{
		___limitMode_25 = value;
	}

	inline static int32_t get_offset_of_limitPerXFrames_26() { return static_cast<int32_t>(offsetof(DynamicSoundGroup_t2364000734, ___limitPerXFrames_26)); }
	inline int32_t get_limitPerXFrames_26() const { return ___limitPerXFrames_26; }
	inline int32_t* get_address_of_limitPerXFrames_26() { return &___limitPerXFrames_26; }
	inline void set_limitPerXFrames_26(int32_t value)
	{
		___limitPerXFrames_26 = value;
	}

	inline static int32_t get_offset_of_minimumTimeBetween_27() { return static_cast<int32_t>(offsetof(DynamicSoundGroup_t2364000734, ___minimumTimeBetween_27)); }
	inline float get_minimumTimeBetween_27() const { return ___minimumTimeBetween_27; }
	inline float* get_address_of_minimumTimeBetween_27() { return &___minimumTimeBetween_27; }
	inline void set_minimumTimeBetween_27(float value)
	{
		___minimumTimeBetween_27 = value;
	}

	inline static int32_t get_offset_of_limitPolyphony_28() { return static_cast<int32_t>(offsetof(DynamicSoundGroup_t2364000734, ___limitPolyphony_28)); }
	inline bool get_limitPolyphony_28() const { return ___limitPolyphony_28; }
	inline bool* get_address_of_limitPolyphony_28() { return &___limitPolyphony_28; }
	inline void set_limitPolyphony_28(bool value)
	{
		___limitPolyphony_28 = value;
	}

	inline static int32_t get_offset_of_voiceLimitCount_29() { return static_cast<int32_t>(offsetof(DynamicSoundGroup_t2364000734, ___voiceLimitCount_29)); }
	inline int32_t get_voiceLimitCount_29() const { return ___voiceLimitCount_29; }
	inline int32_t* get_address_of_voiceLimitCount_29() { return &___voiceLimitCount_29; }
	inline void set_voiceLimitCount_29(int32_t value)
	{
		___voiceLimitCount_29 = value;
	}

	inline static int32_t get_offset_of_targetDespawnedBehavior_30() { return static_cast<int32_t>(offsetof(DynamicSoundGroup_t2364000734, ___targetDespawnedBehavior_30)); }
	inline int32_t get_targetDespawnedBehavior_30() const { return ___targetDespawnedBehavior_30; }
	inline int32_t* get_address_of_targetDespawnedBehavior_30() { return &___targetDespawnedBehavior_30; }
	inline void set_targetDespawnedBehavior_30(int32_t value)
	{
		___targetDespawnedBehavior_30 = value;
	}

	inline static int32_t get_offset_of_despawnFadeTime_31() { return static_cast<int32_t>(offsetof(DynamicSoundGroup_t2364000734, ___despawnFadeTime_31)); }
	inline float get_despawnFadeTime_31() const { return ___despawnFadeTime_31; }
	inline float* get_address_of_despawnFadeTime_31() { return &___despawnFadeTime_31; }
	inline void set_despawnFadeTime_31(float value)
	{
		___despawnFadeTime_31 = value;
	}

	inline static int32_t get_offset_of_copySettingsExpanded_32() { return static_cast<int32_t>(offsetof(DynamicSoundGroup_t2364000734, ___copySettingsExpanded_32)); }
	inline bool get_copySettingsExpanded_32() const { return ___copySettingsExpanded_32; }
	inline bool* get_address_of_copySettingsExpanded_32() { return &___copySettingsExpanded_32; }
	inline void set_copySettingsExpanded_32(bool value)
	{
		___copySettingsExpanded_32 = value;
	}

	inline static int32_t get_offset_of_selectedVariationIndex_33() { return static_cast<int32_t>(offsetof(DynamicSoundGroup_t2364000734, ___selectedVariationIndex_33)); }
	inline int32_t get_selectedVariationIndex_33() const { return ___selectedVariationIndex_33; }
	inline int32_t* get_address_of_selectedVariationIndex_33() { return &___selectedVariationIndex_33; }
	inline void set_selectedVariationIndex_33(int32_t value)
	{
		___selectedVariationIndex_33 = value;
	}

	inline static int32_t get_offset_of_childGroupMode_34() { return static_cast<int32_t>(offsetof(DynamicSoundGroup_t2364000734, ___childGroupMode_34)); }
	inline int32_t get_childGroupMode_34() const { return ___childGroupMode_34; }
	inline int32_t* get_address_of_childGroupMode_34() { return &___childGroupMode_34; }
	inline void set_childGroupMode_34(int32_t value)
	{
		___childGroupMode_34 = value;
	}

	inline static int32_t get_offset_of_childSoundGroups_35() { return static_cast<int32_t>(offsetof(DynamicSoundGroup_t2364000734, ___childSoundGroups_35)); }
	inline List_1_t1765447871 * get_childSoundGroups_35() const { return ___childSoundGroups_35; }
	inline List_1_t1765447871 ** get_address_of_childSoundGroups_35() { return &___childSoundGroups_35; }
	inline void set_childSoundGroups_35(List_1_t1765447871 * value)
	{
		___childSoundGroups_35 = value;
		Il2CppCodeGenWriteBarrier(&___childSoundGroups_35, value);
	}

	inline static int32_t get_offset_of_groupVariations_36() { return static_cast<int32_t>(offsetof(DynamicSoundGroup_t2364000734, ___groupVariations_36)); }
	inline List_1_t2962271995 * get_groupVariations_36() const { return ___groupVariations_36; }
	inline List_1_t2962271995 ** get_address_of_groupVariations_36() { return &___groupVariations_36; }
	inline void set_groupVariations_36(List_1_t2962271995 * value)
	{
		___groupVariations_36 = value;
		Il2CppCodeGenWriteBarrier(&___groupVariations_36, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
