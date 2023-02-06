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
// System.Collections.Generic.List`1<DarkTonic.MasterAudio.SoundGroupVariation>
struct List_1_t846652363;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1765447871;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t3644373756;
// UnityEngine.Transform
struct Transform_t284553113;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "AssemblyU2DCSharp_DarkTonic_MasterAudio_MasterAudi2370136026.h"
#include "AssemblyU2DCSharp_DarkTonic_MasterAudio_MasterAudi1078738486.h"
#include "AssemblyU2DCSharp_DarkTonic_MasterAudio_MasterAudi3558370379.h"
#include "AssemblyU2DCSharp_DarkTonic_MasterAudio_MasterAudio478083796.h"
#include "AssemblyU2DCSharp_DarkTonic_MasterAudio_MasterAudio767596939.h"
#include "AssemblyU2DCSharp_DarkTonic_MasterAudio_MasterAudi2253996838.h"
#include "AssemblyU2DCSharp_DarkTonic_MasterAudio_MasterAudi3748119518.h"
#include "AssemblyU2DCSharp_DarkTonic_MasterAudio_MasterAudi2262844794.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DarkTonic.MasterAudio.MasterAudioGroup
struct  MasterAudioGroup_t1025661466  : public MonoBehaviour_t3012272455
{
public:
	// System.Int32 DarkTonic.MasterAudio.MasterAudioGroup::busIndex
	int32_t ___busIndex_4;
	// DarkTonic.MasterAudio.MasterAudio/ItemSpatialBlendType DarkTonic.MasterAudio.MasterAudioGroup::spatialBlendType
	int32_t ___spatialBlendType_5;
	// System.Single DarkTonic.MasterAudio.MasterAudioGroup::spatialBlend
	float ___spatialBlend_6;
	// System.Boolean DarkTonic.MasterAudio.MasterAudioGroup::isSelected
	bool ___isSelected_7;
	// System.Boolean DarkTonic.MasterAudio.MasterAudioGroup::isExpanded
	bool ___isExpanded_8;
	// System.Single DarkTonic.MasterAudio.MasterAudioGroup::groupMasterVolume
	float ___groupMasterVolume_9;
	// System.Int32 DarkTonic.MasterAudio.MasterAudioGroup::retriggerPercentage
	int32_t ___retriggerPercentage_10;
	// DarkTonic.MasterAudio.MasterAudioGroup/VariationMode DarkTonic.MasterAudio.MasterAudioGroup::curVariationMode
	int32_t ___curVariationMode_11;
	// System.Boolean DarkTonic.MasterAudio.MasterAudioGroup::alwaysHighestPriority
	bool ___alwaysHighestPriority_12;
	// System.Single DarkTonic.MasterAudio.MasterAudioGroup::chainLoopDelayMin
	float ___chainLoopDelayMin_13;
	// System.Single DarkTonic.MasterAudio.MasterAudioGroup::chainLoopDelayMax
	float ___chainLoopDelayMax_14;
	// DarkTonic.MasterAudio.MasterAudioGroup/ChainedLoopLoopMode DarkTonic.MasterAudio.MasterAudioGroup::chainLoopMode
	int32_t ___chainLoopMode_15;
	// System.Int32 DarkTonic.MasterAudio.MasterAudioGroup::chainLoopNumLoops
	int32_t ___chainLoopNumLoops_16;
	// System.Boolean DarkTonic.MasterAudio.MasterAudioGroup::useDialogFadeOut
	bool ___useDialogFadeOut_17;
	// System.Single DarkTonic.MasterAudio.MasterAudioGroup::dialogFadeOutTime
	float ___dialogFadeOutTime_18;
	// DarkTonic.MasterAudio.MasterAudioGroup/VariationSequence DarkTonic.MasterAudio.MasterAudioGroup::curVariationSequence
	int32_t ___curVariationSequence_19;
	// System.Boolean DarkTonic.MasterAudio.MasterAudioGroup::useInactivePeriodPoolRefill
	bool ___useInactivePeriodPoolRefill_20;
	// System.Single DarkTonic.MasterAudio.MasterAudioGroup::inactivePeriodSeconds
	float ___inactivePeriodSeconds_21;
	// System.Collections.Generic.List`1<DarkTonic.MasterAudio.SoundGroupVariation> DarkTonic.MasterAudio.MasterAudioGroup::groupVariations
	List_1_t846652363 * ___groupVariations_22;
	// DarkTonic.MasterAudio.MasterAudio/AudioLocation DarkTonic.MasterAudio.MasterAudioGroup::bulkVariationMode
	int32_t ___bulkVariationMode_23;
	// System.Boolean DarkTonic.MasterAudio.MasterAudioGroup::resourceClipsAllLoadAsync
	bool ___resourceClipsAllLoadAsync_24;
	// System.Boolean DarkTonic.MasterAudio.MasterAudioGroup::logSound
	bool ___logSound_25;
	// System.Boolean DarkTonic.MasterAudio.MasterAudioGroup::copySettingsExpanded
	bool ___copySettingsExpanded_26;
	// System.Int32 DarkTonic.MasterAudio.MasterAudioGroup::selectedVariationIndex
	int32_t ___selectedVariationIndex_27;
	// DarkTonic.MasterAudio.MasterAudioGroup/ChildGroupMode DarkTonic.MasterAudio.MasterAudioGroup::childGroupMode
	int32_t ___childGroupMode_28;
	// System.Collections.Generic.List`1<System.String> DarkTonic.MasterAudio.MasterAudioGroup::childSoundGroups
	List_1_t1765447871 * ___childSoundGroups_29;
	// DarkTonic.MasterAudio.MasterAudioGroup/LimitMode DarkTonic.MasterAudio.MasterAudioGroup::limitMode
	int32_t ___limitMode_30;
	// System.Int32 DarkTonic.MasterAudio.MasterAudioGroup::limitPerXFrames
	int32_t ___limitPerXFrames_31;
	// System.Single DarkTonic.MasterAudio.MasterAudioGroup::minimumTimeBetween
	float ___minimumTimeBetween_32;
	// System.Boolean DarkTonic.MasterAudio.MasterAudioGroup::useClipAgePriority
	bool ___useClipAgePriority_33;
	// System.Boolean DarkTonic.MasterAudio.MasterAudioGroup::limitPolyphony
	bool ___limitPolyphony_34;
	// System.Int32 DarkTonic.MasterAudio.MasterAudioGroup::voiceLimitCount
	int32_t ___voiceLimitCount_35;
	// DarkTonic.MasterAudio.MasterAudioGroup/TargetDespawnedBehavior DarkTonic.MasterAudio.MasterAudioGroup::targetDespawnedBehavior
	int32_t ___targetDespawnedBehavior_36;
	// System.Single DarkTonic.MasterAudio.MasterAudioGroup::despawnFadeTime
	float ___despawnFadeTime_37;
	// System.Boolean DarkTonic.MasterAudio.MasterAudioGroup::isSoloed
	bool ___isSoloed_38;
	// System.Boolean DarkTonic.MasterAudio.MasterAudioGroup::isMuted
	bool ___isMuted_39;
	// System.Boolean DarkTonic.MasterAudio.MasterAudioGroup::soundPlayedEventActive
	bool ___soundPlayedEventActive_40;
	// System.String DarkTonic.MasterAudio.MasterAudioGroup::soundPlayedCustomEvent
	String_t* ___soundPlayedCustomEvent_41;
	// System.Collections.Generic.List`1<System.Int32> DarkTonic.MasterAudio.MasterAudioGroup::_activeAudioSourcesIds
	List_1_t3644373756 * ____activeAudioSourcesIds_42;
	// System.String DarkTonic.MasterAudio.MasterAudioGroup::_objectName
	String_t* ____objectName_43;
	// UnityEngine.Transform DarkTonic.MasterAudio.MasterAudioGroup::_trans
	Transform_t284553113 * ____trans_44;
	// System.Int32 DarkTonic.MasterAudio.MasterAudioGroup::_childCount
	int32_t ____childCount_45;
	// System.Int32 DarkTonic.MasterAudio.MasterAudioGroup::<ChainLoopCount>k__BackingField
	int32_t ___U3CChainLoopCountU3Ek__BackingField_46;

public:
	inline static int32_t get_offset_of_busIndex_4() { return static_cast<int32_t>(offsetof(MasterAudioGroup_t1025661466, ___busIndex_4)); }
	inline int32_t get_busIndex_4() const { return ___busIndex_4; }
	inline int32_t* get_address_of_busIndex_4() { return &___busIndex_4; }
	inline void set_busIndex_4(int32_t value)
	{
		___busIndex_4 = value;
	}

	inline static int32_t get_offset_of_spatialBlendType_5() { return static_cast<int32_t>(offsetof(MasterAudioGroup_t1025661466, ___spatialBlendType_5)); }
	inline int32_t get_spatialBlendType_5() const { return ___spatialBlendType_5; }
	inline int32_t* get_address_of_spatialBlendType_5() { return &___spatialBlendType_5; }
	inline void set_spatialBlendType_5(int32_t value)
	{
		___spatialBlendType_5 = value;
	}

	inline static int32_t get_offset_of_spatialBlend_6() { return static_cast<int32_t>(offsetof(MasterAudioGroup_t1025661466, ___spatialBlend_6)); }
	inline float get_spatialBlend_6() const { return ___spatialBlend_6; }
	inline float* get_address_of_spatialBlend_6() { return &___spatialBlend_6; }
	inline void set_spatialBlend_6(float value)
	{
		___spatialBlend_6 = value;
	}

	inline static int32_t get_offset_of_isSelected_7() { return static_cast<int32_t>(offsetof(MasterAudioGroup_t1025661466, ___isSelected_7)); }
	inline bool get_isSelected_7() const { return ___isSelected_7; }
	inline bool* get_address_of_isSelected_7() { return &___isSelected_7; }
	inline void set_isSelected_7(bool value)
	{
		___isSelected_7 = value;
	}

	inline static int32_t get_offset_of_isExpanded_8() { return static_cast<int32_t>(offsetof(MasterAudioGroup_t1025661466, ___isExpanded_8)); }
	inline bool get_isExpanded_8() const { return ___isExpanded_8; }
	inline bool* get_address_of_isExpanded_8() { return &___isExpanded_8; }
	inline void set_isExpanded_8(bool value)
	{
		___isExpanded_8 = value;
	}

	inline static int32_t get_offset_of_groupMasterVolume_9() { return static_cast<int32_t>(offsetof(MasterAudioGroup_t1025661466, ___groupMasterVolume_9)); }
	inline float get_groupMasterVolume_9() const { return ___groupMasterVolume_9; }
	inline float* get_address_of_groupMasterVolume_9() { return &___groupMasterVolume_9; }
	inline void set_groupMasterVolume_9(float value)
	{
		___groupMasterVolume_9 = value;
	}

	inline static int32_t get_offset_of_retriggerPercentage_10() { return static_cast<int32_t>(offsetof(MasterAudioGroup_t1025661466, ___retriggerPercentage_10)); }
	inline int32_t get_retriggerPercentage_10() const { return ___retriggerPercentage_10; }
	inline int32_t* get_address_of_retriggerPercentage_10() { return &___retriggerPercentage_10; }
	inline void set_retriggerPercentage_10(int32_t value)
	{
		___retriggerPercentage_10 = value;
	}

	inline static int32_t get_offset_of_curVariationMode_11() { return static_cast<int32_t>(offsetof(MasterAudioGroup_t1025661466, ___curVariationMode_11)); }
	inline int32_t get_curVariationMode_11() const { return ___curVariationMode_11; }
	inline int32_t* get_address_of_curVariationMode_11() { return &___curVariationMode_11; }
	inline void set_curVariationMode_11(int32_t value)
	{
		___curVariationMode_11 = value;
	}

	inline static int32_t get_offset_of_alwaysHighestPriority_12() { return static_cast<int32_t>(offsetof(MasterAudioGroup_t1025661466, ___alwaysHighestPriority_12)); }
	inline bool get_alwaysHighestPriority_12() const { return ___alwaysHighestPriority_12; }
	inline bool* get_address_of_alwaysHighestPriority_12() { return &___alwaysHighestPriority_12; }
	inline void set_alwaysHighestPriority_12(bool value)
	{
		___alwaysHighestPriority_12 = value;
	}

	inline static int32_t get_offset_of_chainLoopDelayMin_13() { return static_cast<int32_t>(offsetof(MasterAudioGroup_t1025661466, ___chainLoopDelayMin_13)); }
	inline float get_chainLoopDelayMin_13() const { return ___chainLoopDelayMin_13; }
	inline float* get_address_of_chainLoopDelayMin_13() { return &___chainLoopDelayMin_13; }
	inline void set_chainLoopDelayMin_13(float value)
	{
		___chainLoopDelayMin_13 = value;
	}

	inline static int32_t get_offset_of_chainLoopDelayMax_14() { return static_cast<int32_t>(offsetof(MasterAudioGroup_t1025661466, ___chainLoopDelayMax_14)); }
	inline float get_chainLoopDelayMax_14() const { return ___chainLoopDelayMax_14; }
	inline float* get_address_of_chainLoopDelayMax_14() { return &___chainLoopDelayMax_14; }
	inline void set_chainLoopDelayMax_14(float value)
	{
		___chainLoopDelayMax_14 = value;
	}

	inline static int32_t get_offset_of_chainLoopMode_15() { return static_cast<int32_t>(offsetof(MasterAudioGroup_t1025661466, ___chainLoopMode_15)); }
	inline int32_t get_chainLoopMode_15() const { return ___chainLoopMode_15; }
	inline int32_t* get_address_of_chainLoopMode_15() { return &___chainLoopMode_15; }
	inline void set_chainLoopMode_15(int32_t value)
	{
		___chainLoopMode_15 = value;
	}

	inline static int32_t get_offset_of_chainLoopNumLoops_16() { return static_cast<int32_t>(offsetof(MasterAudioGroup_t1025661466, ___chainLoopNumLoops_16)); }
	inline int32_t get_chainLoopNumLoops_16() const { return ___chainLoopNumLoops_16; }
	inline int32_t* get_address_of_chainLoopNumLoops_16() { return &___chainLoopNumLoops_16; }
	inline void set_chainLoopNumLoops_16(int32_t value)
	{
		___chainLoopNumLoops_16 = value;
	}

	inline static int32_t get_offset_of_useDialogFadeOut_17() { return static_cast<int32_t>(offsetof(MasterAudioGroup_t1025661466, ___useDialogFadeOut_17)); }
	inline bool get_useDialogFadeOut_17() const { return ___useDialogFadeOut_17; }
	inline bool* get_address_of_useDialogFadeOut_17() { return &___useDialogFadeOut_17; }
	inline void set_useDialogFadeOut_17(bool value)
	{
		___useDialogFadeOut_17 = value;
	}

	inline static int32_t get_offset_of_dialogFadeOutTime_18() { return static_cast<int32_t>(offsetof(MasterAudioGroup_t1025661466, ___dialogFadeOutTime_18)); }
	inline float get_dialogFadeOutTime_18() const { return ___dialogFadeOutTime_18; }
	inline float* get_address_of_dialogFadeOutTime_18() { return &___dialogFadeOutTime_18; }
	inline void set_dialogFadeOutTime_18(float value)
	{
		___dialogFadeOutTime_18 = value;
	}

	inline static int32_t get_offset_of_curVariationSequence_19() { return static_cast<int32_t>(offsetof(MasterAudioGroup_t1025661466, ___curVariationSequence_19)); }
	inline int32_t get_curVariationSequence_19() const { return ___curVariationSequence_19; }
	inline int32_t* get_address_of_curVariationSequence_19() { return &___curVariationSequence_19; }
	inline void set_curVariationSequence_19(int32_t value)
	{
		___curVariationSequence_19 = value;
	}

	inline static int32_t get_offset_of_useInactivePeriodPoolRefill_20() { return static_cast<int32_t>(offsetof(MasterAudioGroup_t1025661466, ___useInactivePeriodPoolRefill_20)); }
	inline bool get_useInactivePeriodPoolRefill_20() const { return ___useInactivePeriodPoolRefill_20; }
	inline bool* get_address_of_useInactivePeriodPoolRefill_20() { return &___useInactivePeriodPoolRefill_20; }
	inline void set_useInactivePeriodPoolRefill_20(bool value)
	{
		___useInactivePeriodPoolRefill_20 = value;
	}

	inline static int32_t get_offset_of_inactivePeriodSeconds_21() { return static_cast<int32_t>(offsetof(MasterAudioGroup_t1025661466, ___inactivePeriodSeconds_21)); }
	inline float get_inactivePeriodSeconds_21() const { return ___inactivePeriodSeconds_21; }
	inline float* get_address_of_inactivePeriodSeconds_21() { return &___inactivePeriodSeconds_21; }
	inline void set_inactivePeriodSeconds_21(float value)
	{
		___inactivePeriodSeconds_21 = value;
	}

	inline static int32_t get_offset_of_groupVariations_22() { return static_cast<int32_t>(offsetof(MasterAudioGroup_t1025661466, ___groupVariations_22)); }
	inline List_1_t846652363 * get_groupVariations_22() const { return ___groupVariations_22; }
	inline List_1_t846652363 ** get_address_of_groupVariations_22() { return &___groupVariations_22; }
	inline void set_groupVariations_22(List_1_t846652363 * value)
	{
		___groupVariations_22 = value;
		Il2CppCodeGenWriteBarrier(&___groupVariations_22, value);
	}

	inline static int32_t get_offset_of_bulkVariationMode_23() { return static_cast<int32_t>(offsetof(MasterAudioGroup_t1025661466, ___bulkVariationMode_23)); }
	inline int32_t get_bulkVariationMode_23() const { return ___bulkVariationMode_23; }
	inline int32_t* get_address_of_bulkVariationMode_23() { return &___bulkVariationMode_23; }
	inline void set_bulkVariationMode_23(int32_t value)
	{
		___bulkVariationMode_23 = value;
	}

	inline static int32_t get_offset_of_resourceClipsAllLoadAsync_24() { return static_cast<int32_t>(offsetof(MasterAudioGroup_t1025661466, ___resourceClipsAllLoadAsync_24)); }
	inline bool get_resourceClipsAllLoadAsync_24() const { return ___resourceClipsAllLoadAsync_24; }
	inline bool* get_address_of_resourceClipsAllLoadAsync_24() { return &___resourceClipsAllLoadAsync_24; }
	inline void set_resourceClipsAllLoadAsync_24(bool value)
	{
		___resourceClipsAllLoadAsync_24 = value;
	}

	inline static int32_t get_offset_of_logSound_25() { return static_cast<int32_t>(offsetof(MasterAudioGroup_t1025661466, ___logSound_25)); }
	inline bool get_logSound_25() const { return ___logSound_25; }
	inline bool* get_address_of_logSound_25() { return &___logSound_25; }
	inline void set_logSound_25(bool value)
	{
		___logSound_25 = value;
	}

	inline static int32_t get_offset_of_copySettingsExpanded_26() { return static_cast<int32_t>(offsetof(MasterAudioGroup_t1025661466, ___copySettingsExpanded_26)); }
	inline bool get_copySettingsExpanded_26() const { return ___copySettingsExpanded_26; }
	inline bool* get_address_of_copySettingsExpanded_26() { return &___copySettingsExpanded_26; }
	inline void set_copySettingsExpanded_26(bool value)
	{
		___copySettingsExpanded_26 = value;
	}

	inline static int32_t get_offset_of_selectedVariationIndex_27() { return static_cast<int32_t>(offsetof(MasterAudioGroup_t1025661466, ___selectedVariationIndex_27)); }
	inline int32_t get_selectedVariationIndex_27() const { return ___selectedVariationIndex_27; }
	inline int32_t* get_address_of_selectedVariationIndex_27() { return &___selectedVariationIndex_27; }
	inline void set_selectedVariationIndex_27(int32_t value)
	{
		___selectedVariationIndex_27 = value;
	}

	inline static int32_t get_offset_of_childGroupMode_28() { return static_cast<int32_t>(offsetof(MasterAudioGroup_t1025661466, ___childGroupMode_28)); }
	inline int32_t get_childGroupMode_28() const { return ___childGroupMode_28; }
	inline int32_t* get_address_of_childGroupMode_28() { return &___childGroupMode_28; }
	inline void set_childGroupMode_28(int32_t value)
	{
		___childGroupMode_28 = value;
	}

	inline static int32_t get_offset_of_childSoundGroups_29() { return static_cast<int32_t>(offsetof(MasterAudioGroup_t1025661466, ___childSoundGroups_29)); }
	inline List_1_t1765447871 * get_childSoundGroups_29() const { return ___childSoundGroups_29; }
	inline List_1_t1765447871 ** get_address_of_childSoundGroups_29() { return &___childSoundGroups_29; }
	inline void set_childSoundGroups_29(List_1_t1765447871 * value)
	{
		___childSoundGroups_29 = value;
		Il2CppCodeGenWriteBarrier(&___childSoundGroups_29, value);
	}

	inline static int32_t get_offset_of_limitMode_30() { return static_cast<int32_t>(offsetof(MasterAudioGroup_t1025661466, ___limitMode_30)); }
	inline int32_t get_limitMode_30() const { return ___limitMode_30; }
	inline int32_t* get_address_of_limitMode_30() { return &___limitMode_30; }
	inline void set_limitMode_30(int32_t value)
	{
		___limitMode_30 = value;
	}

	inline static int32_t get_offset_of_limitPerXFrames_31() { return static_cast<int32_t>(offsetof(MasterAudioGroup_t1025661466, ___limitPerXFrames_31)); }
	inline int32_t get_limitPerXFrames_31() const { return ___limitPerXFrames_31; }
	inline int32_t* get_address_of_limitPerXFrames_31() { return &___limitPerXFrames_31; }
	inline void set_limitPerXFrames_31(int32_t value)
	{
		___limitPerXFrames_31 = value;
	}

	inline static int32_t get_offset_of_minimumTimeBetween_32() { return static_cast<int32_t>(offsetof(MasterAudioGroup_t1025661466, ___minimumTimeBetween_32)); }
	inline float get_minimumTimeBetween_32() const { return ___minimumTimeBetween_32; }
	inline float* get_address_of_minimumTimeBetween_32() { return &___minimumTimeBetween_32; }
	inline void set_minimumTimeBetween_32(float value)
	{
		___minimumTimeBetween_32 = value;
	}

	inline static int32_t get_offset_of_useClipAgePriority_33() { return static_cast<int32_t>(offsetof(MasterAudioGroup_t1025661466, ___useClipAgePriority_33)); }
	inline bool get_useClipAgePriority_33() const { return ___useClipAgePriority_33; }
	inline bool* get_address_of_useClipAgePriority_33() { return &___useClipAgePriority_33; }
	inline void set_useClipAgePriority_33(bool value)
	{
		___useClipAgePriority_33 = value;
	}

	inline static int32_t get_offset_of_limitPolyphony_34() { return static_cast<int32_t>(offsetof(MasterAudioGroup_t1025661466, ___limitPolyphony_34)); }
	inline bool get_limitPolyphony_34() const { return ___limitPolyphony_34; }
	inline bool* get_address_of_limitPolyphony_34() { return &___limitPolyphony_34; }
	inline void set_limitPolyphony_34(bool value)
	{
		___limitPolyphony_34 = value;
	}

	inline static int32_t get_offset_of_voiceLimitCount_35() { return static_cast<int32_t>(offsetof(MasterAudioGroup_t1025661466, ___voiceLimitCount_35)); }
	inline int32_t get_voiceLimitCount_35() const { return ___voiceLimitCount_35; }
	inline int32_t* get_address_of_voiceLimitCount_35() { return &___voiceLimitCount_35; }
	inline void set_voiceLimitCount_35(int32_t value)
	{
		___voiceLimitCount_35 = value;
	}

	inline static int32_t get_offset_of_targetDespawnedBehavior_36() { return static_cast<int32_t>(offsetof(MasterAudioGroup_t1025661466, ___targetDespawnedBehavior_36)); }
	inline int32_t get_targetDespawnedBehavior_36() const { return ___targetDespawnedBehavior_36; }
	inline int32_t* get_address_of_targetDespawnedBehavior_36() { return &___targetDespawnedBehavior_36; }
	inline void set_targetDespawnedBehavior_36(int32_t value)
	{
		___targetDespawnedBehavior_36 = value;
	}

	inline static int32_t get_offset_of_despawnFadeTime_37() { return static_cast<int32_t>(offsetof(MasterAudioGroup_t1025661466, ___despawnFadeTime_37)); }
	inline float get_despawnFadeTime_37() const { return ___despawnFadeTime_37; }
	inline float* get_address_of_despawnFadeTime_37() { return &___despawnFadeTime_37; }
	inline void set_despawnFadeTime_37(float value)
	{
		___despawnFadeTime_37 = value;
	}

	inline static int32_t get_offset_of_isSoloed_38() { return static_cast<int32_t>(offsetof(MasterAudioGroup_t1025661466, ___isSoloed_38)); }
	inline bool get_isSoloed_38() const { return ___isSoloed_38; }
	inline bool* get_address_of_isSoloed_38() { return &___isSoloed_38; }
	inline void set_isSoloed_38(bool value)
	{
		___isSoloed_38 = value;
	}

	inline static int32_t get_offset_of_isMuted_39() { return static_cast<int32_t>(offsetof(MasterAudioGroup_t1025661466, ___isMuted_39)); }
	inline bool get_isMuted_39() const { return ___isMuted_39; }
	inline bool* get_address_of_isMuted_39() { return &___isMuted_39; }
	inline void set_isMuted_39(bool value)
	{
		___isMuted_39 = value;
	}

	inline static int32_t get_offset_of_soundPlayedEventActive_40() { return static_cast<int32_t>(offsetof(MasterAudioGroup_t1025661466, ___soundPlayedEventActive_40)); }
	inline bool get_soundPlayedEventActive_40() const { return ___soundPlayedEventActive_40; }
	inline bool* get_address_of_soundPlayedEventActive_40() { return &___soundPlayedEventActive_40; }
	inline void set_soundPlayedEventActive_40(bool value)
	{
		___soundPlayedEventActive_40 = value;
	}

	inline static int32_t get_offset_of_soundPlayedCustomEvent_41() { return static_cast<int32_t>(offsetof(MasterAudioGroup_t1025661466, ___soundPlayedCustomEvent_41)); }
	inline String_t* get_soundPlayedCustomEvent_41() const { return ___soundPlayedCustomEvent_41; }
	inline String_t** get_address_of_soundPlayedCustomEvent_41() { return &___soundPlayedCustomEvent_41; }
	inline void set_soundPlayedCustomEvent_41(String_t* value)
	{
		___soundPlayedCustomEvent_41 = value;
		Il2CppCodeGenWriteBarrier(&___soundPlayedCustomEvent_41, value);
	}

	inline static int32_t get_offset_of__activeAudioSourcesIds_42() { return static_cast<int32_t>(offsetof(MasterAudioGroup_t1025661466, ____activeAudioSourcesIds_42)); }
	inline List_1_t3644373756 * get__activeAudioSourcesIds_42() const { return ____activeAudioSourcesIds_42; }
	inline List_1_t3644373756 ** get_address_of__activeAudioSourcesIds_42() { return &____activeAudioSourcesIds_42; }
	inline void set__activeAudioSourcesIds_42(List_1_t3644373756 * value)
	{
		____activeAudioSourcesIds_42 = value;
		Il2CppCodeGenWriteBarrier(&____activeAudioSourcesIds_42, value);
	}

	inline static int32_t get_offset_of__objectName_43() { return static_cast<int32_t>(offsetof(MasterAudioGroup_t1025661466, ____objectName_43)); }
	inline String_t* get__objectName_43() const { return ____objectName_43; }
	inline String_t** get_address_of__objectName_43() { return &____objectName_43; }
	inline void set__objectName_43(String_t* value)
	{
		____objectName_43 = value;
		Il2CppCodeGenWriteBarrier(&____objectName_43, value);
	}

	inline static int32_t get_offset_of__trans_44() { return static_cast<int32_t>(offsetof(MasterAudioGroup_t1025661466, ____trans_44)); }
	inline Transform_t284553113 * get__trans_44() const { return ____trans_44; }
	inline Transform_t284553113 ** get_address_of__trans_44() { return &____trans_44; }
	inline void set__trans_44(Transform_t284553113 * value)
	{
		____trans_44 = value;
		Il2CppCodeGenWriteBarrier(&____trans_44, value);
	}

	inline static int32_t get_offset_of__childCount_45() { return static_cast<int32_t>(offsetof(MasterAudioGroup_t1025661466, ____childCount_45)); }
	inline int32_t get__childCount_45() const { return ____childCount_45; }
	inline int32_t* get_address_of__childCount_45() { return &____childCount_45; }
	inline void set__childCount_45(int32_t value)
	{
		____childCount_45 = value;
	}

	inline static int32_t get_offset_of_U3CChainLoopCountU3Ek__BackingField_46() { return static_cast<int32_t>(offsetof(MasterAudioGroup_t1025661466, ___U3CChainLoopCountU3Ek__BackingField_46)); }
	inline int32_t get_U3CChainLoopCountU3Ek__BackingField_46() const { return ___U3CChainLoopCountU3Ek__BackingField_46; }
	inline int32_t* get_address_of_U3CChainLoopCountU3Ek__BackingField_46() { return &___U3CChainLoopCountU3Ek__BackingField_46; }
	inline void set_U3CChainLoopCountU3Ek__BackingField_46(int32_t value)
	{
		___U3CChainLoopCountU3Ek__BackingField_46 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
