#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t284553113;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// DarkTonic.MasterAudio.SoundGroupVariation
struct SoundGroupVariation_t49693394;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "AssemblyU2DCSharp_DarkTonic_MasterAudio_SoundGroupV583589297.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DarkTonic.MasterAudio.SoundGroupVariationUpdater
struct  SoundGroupVariationUpdater_t767605717  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Transform DarkTonic.MasterAudio.SoundGroupVariationUpdater::_objectToFollow
	Transform_t284553113 * ____objectToFollow_2;
	// UnityEngine.GameObject DarkTonic.MasterAudio.SoundGroupVariationUpdater::_objectToFollowGo
	GameObject_t4012695102 * ____objectToFollowGo_3;
	// System.Boolean DarkTonic.MasterAudio.SoundGroupVariationUpdater::_isFollowing
	bool ____isFollowing_4;
	// DarkTonic.MasterAudio.SoundGroupVariation DarkTonic.MasterAudio.SoundGroupVariationUpdater::_variation
	SoundGroupVariation_t49693394 * ____variation_5;
	// System.Single DarkTonic.MasterAudio.SoundGroupVariationUpdater::_priorityLastUpdated
	float ____priorityLastUpdated_6;
	// System.Boolean DarkTonic.MasterAudio.SoundGroupVariationUpdater::_useClipAgePriority
	bool ____useClipAgePriority_7;
	// DarkTonic.MasterAudio.SoundGroupVariationUpdater/WaitForSoundFinishMode DarkTonic.MasterAudio.SoundGroupVariationUpdater::_waitMode
	int32_t ____waitMode_8;
	// System.Single DarkTonic.MasterAudio.SoundGroupVariationUpdater::_soundPlayTime
	float ____soundPlayTime_9;
	// System.Single DarkTonic.MasterAudio.SoundGroupVariationUpdater::_fadeOutStartTime
	float ____fadeOutStartTime_10;
	// System.Boolean DarkTonic.MasterAudio.SoundGroupVariationUpdater::_fadeInOutWillFadeOut
	bool ____fadeInOutWillFadeOut_11;
	// System.Boolean DarkTonic.MasterAudio.SoundGroupVariationUpdater::_hasFadeInOutSetMaxVolume
	bool ____hasFadeInOutSetMaxVolume_12;
	// System.Single DarkTonic.MasterAudio.SoundGroupVariationUpdater::_fadeInOutInFactor
	float ____fadeInOutInFactor_13;
	// System.Single DarkTonic.MasterAudio.SoundGroupVariationUpdater::_fadeInOutOutFactor
	float ____fadeInOutOutFactor_14;
	// System.Int32 DarkTonic.MasterAudio.SoundGroupVariationUpdater::_fadeOutEarlyTotalFrames
	int32_t ____fadeOutEarlyTotalFrames_15;
	// System.Single DarkTonic.MasterAudio.SoundGroupVariationUpdater::_fadeOutEarlyFrameVolChange
	float ____fadeOutEarlyFrameVolChange_16;
	// System.Int32 DarkTonic.MasterAudio.SoundGroupVariationUpdater::_fadeOutEarlyFrameNumber
	int32_t ____fadeOutEarlyFrameNumber_17;
	// System.Single DarkTonic.MasterAudio.SoundGroupVariationUpdater::_fadeOutEarlyOrigVol
	float ____fadeOutEarlyOrigVol_18;
	// System.Single DarkTonic.MasterAudio.SoundGroupVariationUpdater::_fadeToTargetFrameVolChange
	float ____fadeToTargetFrameVolChange_19;
	// System.Int32 DarkTonic.MasterAudio.SoundGroupVariationUpdater::_fadeToTargetFrameNumber
	int32_t ____fadeToTargetFrameNumber_20;
	// System.Single DarkTonic.MasterAudio.SoundGroupVariationUpdater::_fadeToTargetOrigVol
	float ____fadeToTargetOrigVol_21;
	// System.Int32 DarkTonic.MasterAudio.SoundGroupVariationUpdater::_fadeToTargetTotalFrames
	int32_t ____fadeToTargetTotalFrames_22;
	// System.Single DarkTonic.MasterAudio.SoundGroupVariationUpdater::_fadeToTargetVolume
	float ____fadeToTargetVolume_23;
	// System.Boolean DarkTonic.MasterAudio.SoundGroupVariationUpdater::_fadeOutStarted
	bool ____fadeOutStarted_24;
	// System.Single DarkTonic.MasterAudio.SoundGroupVariationUpdater::_lastFrameClipTime
	float ____lastFrameClipTime_25;
	// System.Single DarkTonic.MasterAudio.SoundGroupVariationUpdater::_fxTailEndTime
	float ____fxTailEndTime_26;
	// System.Boolean DarkTonic.MasterAudio.SoundGroupVariationUpdater::_isPlayingBackward
	bool ____isPlayingBackward_27;
	// System.Boolean DarkTonic.MasterAudio.SoundGroupVariationUpdater::_hasStartedNextInChain
	bool ____hasStartedNextInChain_28;

public:
	inline static int32_t get_offset_of__objectToFollow_2() { return static_cast<int32_t>(offsetof(SoundGroupVariationUpdater_t767605717, ____objectToFollow_2)); }
	inline Transform_t284553113 * get__objectToFollow_2() const { return ____objectToFollow_2; }
	inline Transform_t284553113 ** get_address_of__objectToFollow_2() { return &____objectToFollow_2; }
	inline void set__objectToFollow_2(Transform_t284553113 * value)
	{
		____objectToFollow_2 = value;
		Il2CppCodeGenWriteBarrier(&____objectToFollow_2, value);
	}

	inline static int32_t get_offset_of__objectToFollowGo_3() { return static_cast<int32_t>(offsetof(SoundGroupVariationUpdater_t767605717, ____objectToFollowGo_3)); }
	inline GameObject_t4012695102 * get__objectToFollowGo_3() const { return ____objectToFollowGo_3; }
	inline GameObject_t4012695102 ** get_address_of__objectToFollowGo_3() { return &____objectToFollowGo_3; }
	inline void set__objectToFollowGo_3(GameObject_t4012695102 * value)
	{
		____objectToFollowGo_3 = value;
		Il2CppCodeGenWriteBarrier(&____objectToFollowGo_3, value);
	}

	inline static int32_t get_offset_of__isFollowing_4() { return static_cast<int32_t>(offsetof(SoundGroupVariationUpdater_t767605717, ____isFollowing_4)); }
	inline bool get__isFollowing_4() const { return ____isFollowing_4; }
	inline bool* get_address_of__isFollowing_4() { return &____isFollowing_4; }
	inline void set__isFollowing_4(bool value)
	{
		____isFollowing_4 = value;
	}

	inline static int32_t get_offset_of__variation_5() { return static_cast<int32_t>(offsetof(SoundGroupVariationUpdater_t767605717, ____variation_5)); }
	inline SoundGroupVariation_t49693394 * get__variation_5() const { return ____variation_5; }
	inline SoundGroupVariation_t49693394 ** get_address_of__variation_5() { return &____variation_5; }
	inline void set__variation_5(SoundGroupVariation_t49693394 * value)
	{
		____variation_5 = value;
		Il2CppCodeGenWriteBarrier(&____variation_5, value);
	}

	inline static int32_t get_offset_of__priorityLastUpdated_6() { return static_cast<int32_t>(offsetof(SoundGroupVariationUpdater_t767605717, ____priorityLastUpdated_6)); }
	inline float get__priorityLastUpdated_6() const { return ____priorityLastUpdated_6; }
	inline float* get_address_of__priorityLastUpdated_6() { return &____priorityLastUpdated_6; }
	inline void set__priorityLastUpdated_6(float value)
	{
		____priorityLastUpdated_6 = value;
	}

	inline static int32_t get_offset_of__useClipAgePriority_7() { return static_cast<int32_t>(offsetof(SoundGroupVariationUpdater_t767605717, ____useClipAgePriority_7)); }
	inline bool get__useClipAgePriority_7() const { return ____useClipAgePriority_7; }
	inline bool* get_address_of__useClipAgePriority_7() { return &____useClipAgePriority_7; }
	inline void set__useClipAgePriority_7(bool value)
	{
		____useClipAgePriority_7 = value;
	}

	inline static int32_t get_offset_of__waitMode_8() { return static_cast<int32_t>(offsetof(SoundGroupVariationUpdater_t767605717, ____waitMode_8)); }
	inline int32_t get__waitMode_8() const { return ____waitMode_8; }
	inline int32_t* get_address_of__waitMode_8() { return &____waitMode_8; }
	inline void set__waitMode_8(int32_t value)
	{
		____waitMode_8 = value;
	}

	inline static int32_t get_offset_of__soundPlayTime_9() { return static_cast<int32_t>(offsetof(SoundGroupVariationUpdater_t767605717, ____soundPlayTime_9)); }
	inline float get__soundPlayTime_9() const { return ____soundPlayTime_9; }
	inline float* get_address_of__soundPlayTime_9() { return &____soundPlayTime_9; }
	inline void set__soundPlayTime_9(float value)
	{
		____soundPlayTime_9 = value;
	}

	inline static int32_t get_offset_of__fadeOutStartTime_10() { return static_cast<int32_t>(offsetof(SoundGroupVariationUpdater_t767605717, ____fadeOutStartTime_10)); }
	inline float get__fadeOutStartTime_10() const { return ____fadeOutStartTime_10; }
	inline float* get_address_of__fadeOutStartTime_10() { return &____fadeOutStartTime_10; }
	inline void set__fadeOutStartTime_10(float value)
	{
		____fadeOutStartTime_10 = value;
	}

	inline static int32_t get_offset_of__fadeInOutWillFadeOut_11() { return static_cast<int32_t>(offsetof(SoundGroupVariationUpdater_t767605717, ____fadeInOutWillFadeOut_11)); }
	inline bool get__fadeInOutWillFadeOut_11() const { return ____fadeInOutWillFadeOut_11; }
	inline bool* get_address_of__fadeInOutWillFadeOut_11() { return &____fadeInOutWillFadeOut_11; }
	inline void set__fadeInOutWillFadeOut_11(bool value)
	{
		____fadeInOutWillFadeOut_11 = value;
	}

	inline static int32_t get_offset_of__hasFadeInOutSetMaxVolume_12() { return static_cast<int32_t>(offsetof(SoundGroupVariationUpdater_t767605717, ____hasFadeInOutSetMaxVolume_12)); }
	inline bool get__hasFadeInOutSetMaxVolume_12() const { return ____hasFadeInOutSetMaxVolume_12; }
	inline bool* get_address_of__hasFadeInOutSetMaxVolume_12() { return &____hasFadeInOutSetMaxVolume_12; }
	inline void set__hasFadeInOutSetMaxVolume_12(bool value)
	{
		____hasFadeInOutSetMaxVolume_12 = value;
	}

	inline static int32_t get_offset_of__fadeInOutInFactor_13() { return static_cast<int32_t>(offsetof(SoundGroupVariationUpdater_t767605717, ____fadeInOutInFactor_13)); }
	inline float get__fadeInOutInFactor_13() const { return ____fadeInOutInFactor_13; }
	inline float* get_address_of__fadeInOutInFactor_13() { return &____fadeInOutInFactor_13; }
	inline void set__fadeInOutInFactor_13(float value)
	{
		____fadeInOutInFactor_13 = value;
	}

	inline static int32_t get_offset_of__fadeInOutOutFactor_14() { return static_cast<int32_t>(offsetof(SoundGroupVariationUpdater_t767605717, ____fadeInOutOutFactor_14)); }
	inline float get__fadeInOutOutFactor_14() const { return ____fadeInOutOutFactor_14; }
	inline float* get_address_of__fadeInOutOutFactor_14() { return &____fadeInOutOutFactor_14; }
	inline void set__fadeInOutOutFactor_14(float value)
	{
		____fadeInOutOutFactor_14 = value;
	}

	inline static int32_t get_offset_of__fadeOutEarlyTotalFrames_15() { return static_cast<int32_t>(offsetof(SoundGroupVariationUpdater_t767605717, ____fadeOutEarlyTotalFrames_15)); }
	inline int32_t get__fadeOutEarlyTotalFrames_15() const { return ____fadeOutEarlyTotalFrames_15; }
	inline int32_t* get_address_of__fadeOutEarlyTotalFrames_15() { return &____fadeOutEarlyTotalFrames_15; }
	inline void set__fadeOutEarlyTotalFrames_15(int32_t value)
	{
		____fadeOutEarlyTotalFrames_15 = value;
	}

	inline static int32_t get_offset_of__fadeOutEarlyFrameVolChange_16() { return static_cast<int32_t>(offsetof(SoundGroupVariationUpdater_t767605717, ____fadeOutEarlyFrameVolChange_16)); }
	inline float get__fadeOutEarlyFrameVolChange_16() const { return ____fadeOutEarlyFrameVolChange_16; }
	inline float* get_address_of__fadeOutEarlyFrameVolChange_16() { return &____fadeOutEarlyFrameVolChange_16; }
	inline void set__fadeOutEarlyFrameVolChange_16(float value)
	{
		____fadeOutEarlyFrameVolChange_16 = value;
	}

	inline static int32_t get_offset_of__fadeOutEarlyFrameNumber_17() { return static_cast<int32_t>(offsetof(SoundGroupVariationUpdater_t767605717, ____fadeOutEarlyFrameNumber_17)); }
	inline int32_t get__fadeOutEarlyFrameNumber_17() const { return ____fadeOutEarlyFrameNumber_17; }
	inline int32_t* get_address_of__fadeOutEarlyFrameNumber_17() { return &____fadeOutEarlyFrameNumber_17; }
	inline void set__fadeOutEarlyFrameNumber_17(int32_t value)
	{
		____fadeOutEarlyFrameNumber_17 = value;
	}

	inline static int32_t get_offset_of__fadeOutEarlyOrigVol_18() { return static_cast<int32_t>(offsetof(SoundGroupVariationUpdater_t767605717, ____fadeOutEarlyOrigVol_18)); }
	inline float get__fadeOutEarlyOrigVol_18() const { return ____fadeOutEarlyOrigVol_18; }
	inline float* get_address_of__fadeOutEarlyOrigVol_18() { return &____fadeOutEarlyOrigVol_18; }
	inline void set__fadeOutEarlyOrigVol_18(float value)
	{
		____fadeOutEarlyOrigVol_18 = value;
	}

	inline static int32_t get_offset_of__fadeToTargetFrameVolChange_19() { return static_cast<int32_t>(offsetof(SoundGroupVariationUpdater_t767605717, ____fadeToTargetFrameVolChange_19)); }
	inline float get__fadeToTargetFrameVolChange_19() const { return ____fadeToTargetFrameVolChange_19; }
	inline float* get_address_of__fadeToTargetFrameVolChange_19() { return &____fadeToTargetFrameVolChange_19; }
	inline void set__fadeToTargetFrameVolChange_19(float value)
	{
		____fadeToTargetFrameVolChange_19 = value;
	}

	inline static int32_t get_offset_of__fadeToTargetFrameNumber_20() { return static_cast<int32_t>(offsetof(SoundGroupVariationUpdater_t767605717, ____fadeToTargetFrameNumber_20)); }
	inline int32_t get__fadeToTargetFrameNumber_20() const { return ____fadeToTargetFrameNumber_20; }
	inline int32_t* get_address_of__fadeToTargetFrameNumber_20() { return &____fadeToTargetFrameNumber_20; }
	inline void set__fadeToTargetFrameNumber_20(int32_t value)
	{
		____fadeToTargetFrameNumber_20 = value;
	}

	inline static int32_t get_offset_of__fadeToTargetOrigVol_21() { return static_cast<int32_t>(offsetof(SoundGroupVariationUpdater_t767605717, ____fadeToTargetOrigVol_21)); }
	inline float get__fadeToTargetOrigVol_21() const { return ____fadeToTargetOrigVol_21; }
	inline float* get_address_of__fadeToTargetOrigVol_21() { return &____fadeToTargetOrigVol_21; }
	inline void set__fadeToTargetOrigVol_21(float value)
	{
		____fadeToTargetOrigVol_21 = value;
	}

	inline static int32_t get_offset_of__fadeToTargetTotalFrames_22() { return static_cast<int32_t>(offsetof(SoundGroupVariationUpdater_t767605717, ____fadeToTargetTotalFrames_22)); }
	inline int32_t get__fadeToTargetTotalFrames_22() const { return ____fadeToTargetTotalFrames_22; }
	inline int32_t* get_address_of__fadeToTargetTotalFrames_22() { return &____fadeToTargetTotalFrames_22; }
	inline void set__fadeToTargetTotalFrames_22(int32_t value)
	{
		____fadeToTargetTotalFrames_22 = value;
	}

	inline static int32_t get_offset_of__fadeToTargetVolume_23() { return static_cast<int32_t>(offsetof(SoundGroupVariationUpdater_t767605717, ____fadeToTargetVolume_23)); }
	inline float get__fadeToTargetVolume_23() const { return ____fadeToTargetVolume_23; }
	inline float* get_address_of__fadeToTargetVolume_23() { return &____fadeToTargetVolume_23; }
	inline void set__fadeToTargetVolume_23(float value)
	{
		____fadeToTargetVolume_23 = value;
	}

	inline static int32_t get_offset_of__fadeOutStarted_24() { return static_cast<int32_t>(offsetof(SoundGroupVariationUpdater_t767605717, ____fadeOutStarted_24)); }
	inline bool get__fadeOutStarted_24() const { return ____fadeOutStarted_24; }
	inline bool* get_address_of__fadeOutStarted_24() { return &____fadeOutStarted_24; }
	inline void set__fadeOutStarted_24(bool value)
	{
		____fadeOutStarted_24 = value;
	}

	inline static int32_t get_offset_of__lastFrameClipTime_25() { return static_cast<int32_t>(offsetof(SoundGroupVariationUpdater_t767605717, ____lastFrameClipTime_25)); }
	inline float get__lastFrameClipTime_25() const { return ____lastFrameClipTime_25; }
	inline float* get_address_of__lastFrameClipTime_25() { return &____lastFrameClipTime_25; }
	inline void set__lastFrameClipTime_25(float value)
	{
		____lastFrameClipTime_25 = value;
	}

	inline static int32_t get_offset_of__fxTailEndTime_26() { return static_cast<int32_t>(offsetof(SoundGroupVariationUpdater_t767605717, ____fxTailEndTime_26)); }
	inline float get__fxTailEndTime_26() const { return ____fxTailEndTime_26; }
	inline float* get_address_of__fxTailEndTime_26() { return &____fxTailEndTime_26; }
	inline void set__fxTailEndTime_26(float value)
	{
		____fxTailEndTime_26 = value;
	}

	inline static int32_t get_offset_of__isPlayingBackward_27() { return static_cast<int32_t>(offsetof(SoundGroupVariationUpdater_t767605717, ____isPlayingBackward_27)); }
	inline bool get__isPlayingBackward_27() const { return ____isPlayingBackward_27; }
	inline bool* get_address_of__isPlayingBackward_27() { return &____isPlayingBackward_27; }
	inline void set__isPlayingBackward_27(bool value)
	{
		____isPlayingBackward_27 = value;
	}

	inline static int32_t get_offset_of__hasStartedNextInChain_28() { return static_cast<int32_t>(offsetof(SoundGroupVariationUpdater_t767605717, ____hasStartedNextInChain_28)); }
	inline bool get__hasStartedNextInChain_28() const { return ____hasStartedNextInChain_28; }
	inline bool* get_address_of__hasStartedNextInChain_28() { return &____hasStartedNextInChain_28; }
	inline void set__hasStartedNextInChain_28(bool value)
	{
		____hasStartedNextInChain_28 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
