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
// UnityEngine.AudioSource
struct AudioSource_t3628549054;
// DarkTonic.MasterAudio.SoundGroupVariation/PlaySoundParams
struct PlaySoundParams_t818148225;
// UnityEngine.AudioDistortionFilter
struct AudioDistortionFilter_t311469720;
// UnityEngine.AudioEchoFilter
struct AudioEchoFilter_t386626208;
// UnityEngine.AudioHighPassFilter
struct AudioHighPassFilter_t3328821198;
// UnityEngine.AudioLowPassFilter
struct AudioLowPassFilter_t3551826324;
// UnityEngine.AudioReverbFilter
struct AudioReverbFilter_t1675624205;
// UnityEngine.AudioChorusFilter
struct AudioChorusFilter_t1133144033;
// DarkTonic.MasterAudio.SoundGroupVariationUpdater
struct SoundGroupVariationUpdater_t767605717;
// UnityEngine.Transform
struct Transform_t284553113;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// DarkTonic.MasterAudio.MasterAudioGroup
struct MasterAudioGroup_t1025661466;
// DarkTonic.MasterAudio.SoundGroupVariation/SoundFinishedEventHandler
struct SoundFinishedEventHandler_t2252829809;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "AssemblyU2DCSharp_DarkTonic_MasterAudio_SoundGroupVa89157472.h"
#include "AssemblyU2DCSharp_DarkTonic_MasterAudio_SoundGroup1526900000.h"
#include "AssemblyU2DCSharp_DarkTonic_MasterAudio_MasterAudio767596939.h"
#include "AssemblyU2DCSharp_DarkTonic_MasterAudio_MasterAudi3302153429.h"
#include "AssemblyU2DCSharp_DarkTonic_MasterAudio_SoundGroupV589777503.h"
#include "AssemblyU2DCSharp_DarkTonic_MasterAudio_SoundGroup2825307355.h"
#include "mscorlib_System_Nullable_1_gen3097043249.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DarkTonic.MasterAudio.SoundGroupVariation
struct  SoundGroupVariation_t49693394  : public MonoBehaviour_t3012272455
{
public:
	// System.Int32 DarkTonic.MasterAudio.SoundGroupVariation::weight
	int32_t ___weight_2;
	// System.Boolean DarkTonic.MasterAudio.SoundGroupVariation::useLocalization
	bool ___useLocalization_3;
	// System.Boolean DarkTonic.MasterAudio.SoundGroupVariation::useRandomPitch
	bool ___useRandomPitch_4;
	// DarkTonic.MasterAudio.SoundGroupVariation/RandomPitchMode DarkTonic.MasterAudio.SoundGroupVariation::randomPitchMode
	int32_t ___randomPitchMode_5;
	// System.Single DarkTonic.MasterAudio.SoundGroupVariation::randomPitchMin
	float ___randomPitchMin_6;
	// System.Single DarkTonic.MasterAudio.SoundGroupVariation::randomPitchMax
	float ___randomPitchMax_7;
	// System.Boolean DarkTonic.MasterAudio.SoundGroupVariation::useRandomVolume
	bool ___useRandomVolume_8;
	// DarkTonic.MasterAudio.SoundGroupVariation/RandomVolumeMode DarkTonic.MasterAudio.SoundGroupVariation::randomVolumeMode
	int32_t ___randomVolumeMode_9;
	// System.Single DarkTonic.MasterAudio.SoundGroupVariation::randomVolumeMin
	float ___randomVolumeMin_10;
	// System.Single DarkTonic.MasterAudio.SoundGroupVariation::randomVolumeMax
	float ___randomVolumeMax_11;
	// DarkTonic.MasterAudio.MasterAudio/AudioLocation DarkTonic.MasterAudio.SoundGroupVariation::audLocation
	int32_t ___audLocation_12;
	// System.String DarkTonic.MasterAudio.SoundGroupVariation::resourceFileName
	String_t* ___resourceFileName_13;
	// System.String DarkTonic.MasterAudio.SoundGroupVariation::internetFileUrl
	String_t* ___internetFileUrl_14;
	// DarkTonic.MasterAudio.MasterAudio/InternetFileLoadStatus DarkTonic.MasterAudio.SoundGroupVariation::internetFileLoadStatus
	int32_t ___internetFileLoadStatus_15;
	// System.Single DarkTonic.MasterAudio.SoundGroupVariation::fxTailTime
	float ___fxTailTime_16;
	// System.Single DarkTonic.MasterAudio.SoundGroupVariation::original_pitch
	float ___original_pitch_17;
	// System.Boolean DarkTonic.MasterAudio.SoundGroupVariation::isExpanded
	bool ___isExpanded_18;
	// System.Boolean DarkTonic.MasterAudio.SoundGroupVariation::isChecked
	bool ___isChecked_19;
	// System.Boolean DarkTonic.MasterAudio.SoundGroupVariation::useFades
	bool ___useFades_20;
	// System.Single DarkTonic.MasterAudio.SoundGroupVariation::fadeInTime
	float ___fadeInTime_21;
	// System.Single DarkTonic.MasterAudio.SoundGroupVariation::fadeOutTime
	float ___fadeOutTime_22;
	// System.Boolean DarkTonic.MasterAudio.SoundGroupVariation::useRandomStartTime
	bool ___useRandomStartTime_23;
	// System.Single DarkTonic.MasterAudio.SoundGroupVariation::randomStartMinPercent
	float ___randomStartMinPercent_24;
	// System.Single DarkTonic.MasterAudio.SoundGroupVariation::randomStartMaxPercent
	float ___randomStartMaxPercent_25;
	// System.Boolean DarkTonic.MasterAudio.SoundGroupVariation::useIntroSilence
	bool ___useIntroSilence_26;
	// System.Single DarkTonic.MasterAudio.SoundGroupVariation::introSilenceMin
	float ___introSilenceMin_27;
	// System.Single DarkTonic.MasterAudio.SoundGroupVariation::introSilenceMax
	float ___introSilenceMax_28;
	// System.Single DarkTonic.MasterAudio.SoundGroupVariation::fadeMaxVolume
	float ___fadeMaxVolume_29;
	// DarkTonic.MasterAudio.SoundGroupVariation/FadeMode DarkTonic.MasterAudio.SoundGroupVariation::curFadeMode
	int32_t ___curFadeMode_30;
	// DarkTonic.MasterAudio.SoundGroupVariation/DetectEndMode DarkTonic.MasterAudio.SoundGroupVariation::curDetectEndMode
	int32_t ___curDetectEndMode_31;
	// UnityEngine.AudioSource DarkTonic.MasterAudio.SoundGroupVariation::_audioSource
	AudioSource_t3628549054 * ____audioSource_32;
	// DarkTonic.MasterAudio.SoundGroupVariation/PlaySoundParams DarkTonic.MasterAudio.SoundGroupVariation::_playSndParam
	PlaySoundParams_t818148225 * ____playSndParam_33;
	// UnityEngine.AudioDistortionFilter DarkTonic.MasterAudio.SoundGroupVariation::_distFilter
	AudioDistortionFilter_t311469720 * ____distFilter_34;
	// UnityEngine.AudioEchoFilter DarkTonic.MasterAudio.SoundGroupVariation::_echoFilter
	AudioEchoFilter_t386626208 * ____echoFilter_35;
	// UnityEngine.AudioHighPassFilter DarkTonic.MasterAudio.SoundGroupVariation::_hpFilter
	AudioHighPassFilter_t3328821198 * ____hpFilter_36;
	// UnityEngine.AudioLowPassFilter DarkTonic.MasterAudio.SoundGroupVariation::_lpFilter
	AudioLowPassFilter_t3551826324 * ____lpFilter_37;
	// UnityEngine.AudioReverbFilter DarkTonic.MasterAudio.SoundGroupVariation::_reverbFilter
	AudioReverbFilter_t1675624205 * ____reverbFilter_38;
	// UnityEngine.AudioChorusFilter DarkTonic.MasterAudio.SoundGroupVariation::_chorusFilter
	AudioChorusFilter_t1133144033 * ____chorusFilter_39;
	// System.Boolean DarkTonic.MasterAudio.SoundGroupVariation::_isWaitingForDelay
	bool ____isWaitingForDelay_40;
	// System.Single DarkTonic.MasterAudio.SoundGroupVariation::_maxVol
	float ____maxVol_41;
	// System.Int32 DarkTonic.MasterAudio.SoundGroupVariation::_instanceId
	int32_t ____instanceId_42;
	// System.Nullable`1<System.Boolean> DarkTonic.MasterAudio.SoundGroupVariation::_audioLoops
	Nullable_1_t3097043249  ____audioLoops_43;
	// DarkTonic.MasterAudio.SoundGroupVariationUpdater DarkTonic.MasterAudio.SoundGroupVariation::_varUpdater
	SoundGroupVariationUpdater_t767605717 * ____varUpdater_44;
	// System.Int32 DarkTonic.MasterAudio.SoundGroupVariation::_previousSoundFinishedFrame
	int32_t ____previousSoundFinishedFrame_45;
	// UnityEngine.Transform DarkTonic.MasterAudio.SoundGroupVariation::_trans
	Transform_t284553113 * ____trans_46;
	// UnityEngine.GameObject DarkTonic.MasterAudio.SoundGroupVariation::_go
	GameObject_t4012695102 * ____go_47;
	// UnityEngine.AudioSource DarkTonic.MasterAudio.SoundGroupVariation::_aud
	AudioSource_t3628549054 * ____aud_48;
	// UnityEngine.Transform DarkTonic.MasterAudio.SoundGroupVariation::_objectToFollow
	Transform_t284553113 * ____objectToFollow_49;
	// UnityEngine.Transform DarkTonic.MasterAudio.SoundGroupVariation::_objectToTriggerFrom
	Transform_t284553113 * ____objectToTriggerFrom_50;
	// DarkTonic.MasterAudio.MasterAudioGroup DarkTonic.MasterAudio.SoundGroupVariation::_parentGroupScript
	MasterAudioGroup_t1025661466 * ____parentGroupScript_51;
	// System.Boolean DarkTonic.MasterAudio.SoundGroupVariation::_attachToSource
	bool ____attachToSource_52;
	// System.String DarkTonic.MasterAudio.SoundGroupVariation::_resFileName
	String_t* ____resFileName_53;
	// DarkTonic.MasterAudio.SoundGroupVariation/SoundFinishedEventHandler DarkTonic.MasterAudio.SoundGroupVariation::SoundFinished
	SoundFinishedEventHandler_t2252829809 * ___SoundFinished_54;
	// System.Single DarkTonic.MasterAudio.SoundGroupVariation::<LastTimePlayed>k__BackingField
	float ___U3CLastTimePlayedU3Ek__BackingField_55;

public:
	inline static int32_t get_offset_of_weight_2() { return static_cast<int32_t>(offsetof(SoundGroupVariation_t49693394, ___weight_2)); }
	inline int32_t get_weight_2() const { return ___weight_2; }
	inline int32_t* get_address_of_weight_2() { return &___weight_2; }
	inline void set_weight_2(int32_t value)
	{
		___weight_2 = value;
	}

	inline static int32_t get_offset_of_useLocalization_3() { return static_cast<int32_t>(offsetof(SoundGroupVariation_t49693394, ___useLocalization_3)); }
	inline bool get_useLocalization_3() const { return ___useLocalization_3; }
	inline bool* get_address_of_useLocalization_3() { return &___useLocalization_3; }
	inline void set_useLocalization_3(bool value)
	{
		___useLocalization_3 = value;
	}

	inline static int32_t get_offset_of_useRandomPitch_4() { return static_cast<int32_t>(offsetof(SoundGroupVariation_t49693394, ___useRandomPitch_4)); }
	inline bool get_useRandomPitch_4() const { return ___useRandomPitch_4; }
	inline bool* get_address_of_useRandomPitch_4() { return &___useRandomPitch_4; }
	inline void set_useRandomPitch_4(bool value)
	{
		___useRandomPitch_4 = value;
	}

	inline static int32_t get_offset_of_randomPitchMode_5() { return static_cast<int32_t>(offsetof(SoundGroupVariation_t49693394, ___randomPitchMode_5)); }
	inline int32_t get_randomPitchMode_5() const { return ___randomPitchMode_5; }
	inline int32_t* get_address_of_randomPitchMode_5() { return &___randomPitchMode_5; }
	inline void set_randomPitchMode_5(int32_t value)
	{
		___randomPitchMode_5 = value;
	}

	inline static int32_t get_offset_of_randomPitchMin_6() { return static_cast<int32_t>(offsetof(SoundGroupVariation_t49693394, ___randomPitchMin_6)); }
	inline float get_randomPitchMin_6() const { return ___randomPitchMin_6; }
	inline float* get_address_of_randomPitchMin_6() { return &___randomPitchMin_6; }
	inline void set_randomPitchMin_6(float value)
	{
		___randomPitchMin_6 = value;
	}

	inline static int32_t get_offset_of_randomPitchMax_7() { return static_cast<int32_t>(offsetof(SoundGroupVariation_t49693394, ___randomPitchMax_7)); }
	inline float get_randomPitchMax_7() const { return ___randomPitchMax_7; }
	inline float* get_address_of_randomPitchMax_7() { return &___randomPitchMax_7; }
	inline void set_randomPitchMax_7(float value)
	{
		___randomPitchMax_7 = value;
	}

	inline static int32_t get_offset_of_useRandomVolume_8() { return static_cast<int32_t>(offsetof(SoundGroupVariation_t49693394, ___useRandomVolume_8)); }
	inline bool get_useRandomVolume_8() const { return ___useRandomVolume_8; }
	inline bool* get_address_of_useRandomVolume_8() { return &___useRandomVolume_8; }
	inline void set_useRandomVolume_8(bool value)
	{
		___useRandomVolume_8 = value;
	}

	inline static int32_t get_offset_of_randomVolumeMode_9() { return static_cast<int32_t>(offsetof(SoundGroupVariation_t49693394, ___randomVolumeMode_9)); }
	inline int32_t get_randomVolumeMode_9() const { return ___randomVolumeMode_9; }
	inline int32_t* get_address_of_randomVolumeMode_9() { return &___randomVolumeMode_9; }
	inline void set_randomVolumeMode_9(int32_t value)
	{
		___randomVolumeMode_9 = value;
	}

	inline static int32_t get_offset_of_randomVolumeMin_10() { return static_cast<int32_t>(offsetof(SoundGroupVariation_t49693394, ___randomVolumeMin_10)); }
	inline float get_randomVolumeMin_10() const { return ___randomVolumeMin_10; }
	inline float* get_address_of_randomVolumeMin_10() { return &___randomVolumeMin_10; }
	inline void set_randomVolumeMin_10(float value)
	{
		___randomVolumeMin_10 = value;
	}

	inline static int32_t get_offset_of_randomVolumeMax_11() { return static_cast<int32_t>(offsetof(SoundGroupVariation_t49693394, ___randomVolumeMax_11)); }
	inline float get_randomVolumeMax_11() const { return ___randomVolumeMax_11; }
	inline float* get_address_of_randomVolumeMax_11() { return &___randomVolumeMax_11; }
	inline void set_randomVolumeMax_11(float value)
	{
		___randomVolumeMax_11 = value;
	}

	inline static int32_t get_offset_of_audLocation_12() { return static_cast<int32_t>(offsetof(SoundGroupVariation_t49693394, ___audLocation_12)); }
	inline int32_t get_audLocation_12() const { return ___audLocation_12; }
	inline int32_t* get_address_of_audLocation_12() { return &___audLocation_12; }
	inline void set_audLocation_12(int32_t value)
	{
		___audLocation_12 = value;
	}

	inline static int32_t get_offset_of_resourceFileName_13() { return static_cast<int32_t>(offsetof(SoundGroupVariation_t49693394, ___resourceFileName_13)); }
	inline String_t* get_resourceFileName_13() const { return ___resourceFileName_13; }
	inline String_t** get_address_of_resourceFileName_13() { return &___resourceFileName_13; }
	inline void set_resourceFileName_13(String_t* value)
	{
		___resourceFileName_13 = value;
		Il2CppCodeGenWriteBarrier(&___resourceFileName_13, value);
	}

	inline static int32_t get_offset_of_internetFileUrl_14() { return static_cast<int32_t>(offsetof(SoundGroupVariation_t49693394, ___internetFileUrl_14)); }
	inline String_t* get_internetFileUrl_14() const { return ___internetFileUrl_14; }
	inline String_t** get_address_of_internetFileUrl_14() { return &___internetFileUrl_14; }
	inline void set_internetFileUrl_14(String_t* value)
	{
		___internetFileUrl_14 = value;
		Il2CppCodeGenWriteBarrier(&___internetFileUrl_14, value);
	}

	inline static int32_t get_offset_of_internetFileLoadStatus_15() { return static_cast<int32_t>(offsetof(SoundGroupVariation_t49693394, ___internetFileLoadStatus_15)); }
	inline int32_t get_internetFileLoadStatus_15() const { return ___internetFileLoadStatus_15; }
	inline int32_t* get_address_of_internetFileLoadStatus_15() { return &___internetFileLoadStatus_15; }
	inline void set_internetFileLoadStatus_15(int32_t value)
	{
		___internetFileLoadStatus_15 = value;
	}

	inline static int32_t get_offset_of_fxTailTime_16() { return static_cast<int32_t>(offsetof(SoundGroupVariation_t49693394, ___fxTailTime_16)); }
	inline float get_fxTailTime_16() const { return ___fxTailTime_16; }
	inline float* get_address_of_fxTailTime_16() { return &___fxTailTime_16; }
	inline void set_fxTailTime_16(float value)
	{
		___fxTailTime_16 = value;
	}

	inline static int32_t get_offset_of_original_pitch_17() { return static_cast<int32_t>(offsetof(SoundGroupVariation_t49693394, ___original_pitch_17)); }
	inline float get_original_pitch_17() const { return ___original_pitch_17; }
	inline float* get_address_of_original_pitch_17() { return &___original_pitch_17; }
	inline void set_original_pitch_17(float value)
	{
		___original_pitch_17 = value;
	}

	inline static int32_t get_offset_of_isExpanded_18() { return static_cast<int32_t>(offsetof(SoundGroupVariation_t49693394, ___isExpanded_18)); }
	inline bool get_isExpanded_18() const { return ___isExpanded_18; }
	inline bool* get_address_of_isExpanded_18() { return &___isExpanded_18; }
	inline void set_isExpanded_18(bool value)
	{
		___isExpanded_18 = value;
	}

	inline static int32_t get_offset_of_isChecked_19() { return static_cast<int32_t>(offsetof(SoundGroupVariation_t49693394, ___isChecked_19)); }
	inline bool get_isChecked_19() const { return ___isChecked_19; }
	inline bool* get_address_of_isChecked_19() { return &___isChecked_19; }
	inline void set_isChecked_19(bool value)
	{
		___isChecked_19 = value;
	}

	inline static int32_t get_offset_of_useFades_20() { return static_cast<int32_t>(offsetof(SoundGroupVariation_t49693394, ___useFades_20)); }
	inline bool get_useFades_20() const { return ___useFades_20; }
	inline bool* get_address_of_useFades_20() { return &___useFades_20; }
	inline void set_useFades_20(bool value)
	{
		___useFades_20 = value;
	}

	inline static int32_t get_offset_of_fadeInTime_21() { return static_cast<int32_t>(offsetof(SoundGroupVariation_t49693394, ___fadeInTime_21)); }
	inline float get_fadeInTime_21() const { return ___fadeInTime_21; }
	inline float* get_address_of_fadeInTime_21() { return &___fadeInTime_21; }
	inline void set_fadeInTime_21(float value)
	{
		___fadeInTime_21 = value;
	}

	inline static int32_t get_offset_of_fadeOutTime_22() { return static_cast<int32_t>(offsetof(SoundGroupVariation_t49693394, ___fadeOutTime_22)); }
	inline float get_fadeOutTime_22() const { return ___fadeOutTime_22; }
	inline float* get_address_of_fadeOutTime_22() { return &___fadeOutTime_22; }
	inline void set_fadeOutTime_22(float value)
	{
		___fadeOutTime_22 = value;
	}

	inline static int32_t get_offset_of_useRandomStartTime_23() { return static_cast<int32_t>(offsetof(SoundGroupVariation_t49693394, ___useRandomStartTime_23)); }
	inline bool get_useRandomStartTime_23() const { return ___useRandomStartTime_23; }
	inline bool* get_address_of_useRandomStartTime_23() { return &___useRandomStartTime_23; }
	inline void set_useRandomStartTime_23(bool value)
	{
		___useRandomStartTime_23 = value;
	}

	inline static int32_t get_offset_of_randomStartMinPercent_24() { return static_cast<int32_t>(offsetof(SoundGroupVariation_t49693394, ___randomStartMinPercent_24)); }
	inline float get_randomStartMinPercent_24() const { return ___randomStartMinPercent_24; }
	inline float* get_address_of_randomStartMinPercent_24() { return &___randomStartMinPercent_24; }
	inline void set_randomStartMinPercent_24(float value)
	{
		___randomStartMinPercent_24 = value;
	}

	inline static int32_t get_offset_of_randomStartMaxPercent_25() { return static_cast<int32_t>(offsetof(SoundGroupVariation_t49693394, ___randomStartMaxPercent_25)); }
	inline float get_randomStartMaxPercent_25() const { return ___randomStartMaxPercent_25; }
	inline float* get_address_of_randomStartMaxPercent_25() { return &___randomStartMaxPercent_25; }
	inline void set_randomStartMaxPercent_25(float value)
	{
		___randomStartMaxPercent_25 = value;
	}

	inline static int32_t get_offset_of_useIntroSilence_26() { return static_cast<int32_t>(offsetof(SoundGroupVariation_t49693394, ___useIntroSilence_26)); }
	inline bool get_useIntroSilence_26() const { return ___useIntroSilence_26; }
	inline bool* get_address_of_useIntroSilence_26() { return &___useIntroSilence_26; }
	inline void set_useIntroSilence_26(bool value)
	{
		___useIntroSilence_26 = value;
	}

	inline static int32_t get_offset_of_introSilenceMin_27() { return static_cast<int32_t>(offsetof(SoundGroupVariation_t49693394, ___introSilenceMin_27)); }
	inline float get_introSilenceMin_27() const { return ___introSilenceMin_27; }
	inline float* get_address_of_introSilenceMin_27() { return &___introSilenceMin_27; }
	inline void set_introSilenceMin_27(float value)
	{
		___introSilenceMin_27 = value;
	}

	inline static int32_t get_offset_of_introSilenceMax_28() { return static_cast<int32_t>(offsetof(SoundGroupVariation_t49693394, ___introSilenceMax_28)); }
	inline float get_introSilenceMax_28() const { return ___introSilenceMax_28; }
	inline float* get_address_of_introSilenceMax_28() { return &___introSilenceMax_28; }
	inline void set_introSilenceMax_28(float value)
	{
		___introSilenceMax_28 = value;
	}

	inline static int32_t get_offset_of_fadeMaxVolume_29() { return static_cast<int32_t>(offsetof(SoundGroupVariation_t49693394, ___fadeMaxVolume_29)); }
	inline float get_fadeMaxVolume_29() const { return ___fadeMaxVolume_29; }
	inline float* get_address_of_fadeMaxVolume_29() { return &___fadeMaxVolume_29; }
	inline void set_fadeMaxVolume_29(float value)
	{
		___fadeMaxVolume_29 = value;
	}

	inline static int32_t get_offset_of_curFadeMode_30() { return static_cast<int32_t>(offsetof(SoundGroupVariation_t49693394, ___curFadeMode_30)); }
	inline int32_t get_curFadeMode_30() const { return ___curFadeMode_30; }
	inline int32_t* get_address_of_curFadeMode_30() { return &___curFadeMode_30; }
	inline void set_curFadeMode_30(int32_t value)
	{
		___curFadeMode_30 = value;
	}

	inline static int32_t get_offset_of_curDetectEndMode_31() { return static_cast<int32_t>(offsetof(SoundGroupVariation_t49693394, ___curDetectEndMode_31)); }
	inline int32_t get_curDetectEndMode_31() const { return ___curDetectEndMode_31; }
	inline int32_t* get_address_of_curDetectEndMode_31() { return &___curDetectEndMode_31; }
	inline void set_curDetectEndMode_31(int32_t value)
	{
		___curDetectEndMode_31 = value;
	}

	inline static int32_t get_offset_of__audioSource_32() { return static_cast<int32_t>(offsetof(SoundGroupVariation_t49693394, ____audioSource_32)); }
	inline AudioSource_t3628549054 * get__audioSource_32() const { return ____audioSource_32; }
	inline AudioSource_t3628549054 ** get_address_of__audioSource_32() { return &____audioSource_32; }
	inline void set__audioSource_32(AudioSource_t3628549054 * value)
	{
		____audioSource_32 = value;
		Il2CppCodeGenWriteBarrier(&____audioSource_32, value);
	}

	inline static int32_t get_offset_of__playSndParam_33() { return static_cast<int32_t>(offsetof(SoundGroupVariation_t49693394, ____playSndParam_33)); }
	inline PlaySoundParams_t818148225 * get__playSndParam_33() const { return ____playSndParam_33; }
	inline PlaySoundParams_t818148225 ** get_address_of__playSndParam_33() { return &____playSndParam_33; }
	inline void set__playSndParam_33(PlaySoundParams_t818148225 * value)
	{
		____playSndParam_33 = value;
		Il2CppCodeGenWriteBarrier(&____playSndParam_33, value);
	}

	inline static int32_t get_offset_of__distFilter_34() { return static_cast<int32_t>(offsetof(SoundGroupVariation_t49693394, ____distFilter_34)); }
	inline AudioDistortionFilter_t311469720 * get__distFilter_34() const { return ____distFilter_34; }
	inline AudioDistortionFilter_t311469720 ** get_address_of__distFilter_34() { return &____distFilter_34; }
	inline void set__distFilter_34(AudioDistortionFilter_t311469720 * value)
	{
		____distFilter_34 = value;
		Il2CppCodeGenWriteBarrier(&____distFilter_34, value);
	}

	inline static int32_t get_offset_of__echoFilter_35() { return static_cast<int32_t>(offsetof(SoundGroupVariation_t49693394, ____echoFilter_35)); }
	inline AudioEchoFilter_t386626208 * get__echoFilter_35() const { return ____echoFilter_35; }
	inline AudioEchoFilter_t386626208 ** get_address_of__echoFilter_35() { return &____echoFilter_35; }
	inline void set__echoFilter_35(AudioEchoFilter_t386626208 * value)
	{
		____echoFilter_35 = value;
		Il2CppCodeGenWriteBarrier(&____echoFilter_35, value);
	}

	inline static int32_t get_offset_of__hpFilter_36() { return static_cast<int32_t>(offsetof(SoundGroupVariation_t49693394, ____hpFilter_36)); }
	inline AudioHighPassFilter_t3328821198 * get__hpFilter_36() const { return ____hpFilter_36; }
	inline AudioHighPassFilter_t3328821198 ** get_address_of__hpFilter_36() { return &____hpFilter_36; }
	inline void set__hpFilter_36(AudioHighPassFilter_t3328821198 * value)
	{
		____hpFilter_36 = value;
		Il2CppCodeGenWriteBarrier(&____hpFilter_36, value);
	}

	inline static int32_t get_offset_of__lpFilter_37() { return static_cast<int32_t>(offsetof(SoundGroupVariation_t49693394, ____lpFilter_37)); }
	inline AudioLowPassFilter_t3551826324 * get__lpFilter_37() const { return ____lpFilter_37; }
	inline AudioLowPassFilter_t3551826324 ** get_address_of__lpFilter_37() { return &____lpFilter_37; }
	inline void set__lpFilter_37(AudioLowPassFilter_t3551826324 * value)
	{
		____lpFilter_37 = value;
		Il2CppCodeGenWriteBarrier(&____lpFilter_37, value);
	}

	inline static int32_t get_offset_of__reverbFilter_38() { return static_cast<int32_t>(offsetof(SoundGroupVariation_t49693394, ____reverbFilter_38)); }
	inline AudioReverbFilter_t1675624205 * get__reverbFilter_38() const { return ____reverbFilter_38; }
	inline AudioReverbFilter_t1675624205 ** get_address_of__reverbFilter_38() { return &____reverbFilter_38; }
	inline void set__reverbFilter_38(AudioReverbFilter_t1675624205 * value)
	{
		____reverbFilter_38 = value;
		Il2CppCodeGenWriteBarrier(&____reverbFilter_38, value);
	}

	inline static int32_t get_offset_of__chorusFilter_39() { return static_cast<int32_t>(offsetof(SoundGroupVariation_t49693394, ____chorusFilter_39)); }
	inline AudioChorusFilter_t1133144033 * get__chorusFilter_39() const { return ____chorusFilter_39; }
	inline AudioChorusFilter_t1133144033 ** get_address_of__chorusFilter_39() { return &____chorusFilter_39; }
	inline void set__chorusFilter_39(AudioChorusFilter_t1133144033 * value)
	{
		____chorusFilter_39 = value;
		Il2CppCodeGenWriteBarrier(&____chorusFilter_39, value);
	}

	inline static int32_t get_offset_of__isWaitingForDelay_40() { return static_cast<int32_t>(offsetof(SoundGroupVariation_t49693394, ____isWaitingForDelay_40)); }
	inline bool get__isWaitingForDelay_40() const { return ____isWaitingForDelay_40; }
	inline bool* get_address_of__isWaitingForDelay_40() { return &____isWaitingForDelay_40; }
	inline void set__isWaitingForDelay_40(bool value)
	{
		____isWaitingForDelay_40 = value;
	}

	inline static int32_t get_offset_of__maxVol_41() { return static_cast<int32_t>(offsetof(SoundGroupVariation_t49693394, ____maxVol_41)); }
	inline float get__maxVol_41() const { return ____maxVol_41; }
	inline float* get_address_of__maxVol_41() { return &____maxVol_41; }
	inline void set__maxVol_41(float value)
	{
		____maxVol_41 = value;
	}

	inline static int32_t get_offset_of__instanceId_42() { return static_cast<int32_t>(offsetof(SoundGroupVariation_t49693394, ____instanceId_42)); }
	inline int32_t get__instanceId_42() const { return ____instanceId_42; }
	inline int32_t* get_address_of__instanceId_42() { return &____instanceId_42; }
	inline void set__instanceId_42(int32_t value)
	{
		____instanceId_42 = value;
	}

	inline static int32_t get_offset_of__audioLoops_43() { return static_cast<int32_t>(offsetof(SoundGroupVariation_t49693394, ____audioLoops_43)); }
	inline Nullable_1_t3097043249  get__audioLoops_43() const { return ____audioLoops_43; }
	inline Nullable_1_t3097043249 * get_address_of__audioLoops_43() { return &____audioLoops_43; }
	inline void set__audioLoops_43(Nullable_1_t3097043249  value)
	{
		____audioLoops_43 = value;
	}

	inline static int32_t get_offset_of__varUpdater_44() { return static_cast<int32_t>(offsetof(SoundGroupVariation_t49693394, ____varUpdater_44)); }
	inline SoundGroupVariationUpdater_t767605717 * get__varUpdater_44() const { return ____varUpdater_44; }
	inline SoundGroupVariationUpdater_t767605717 ** get_address_of__varUpdater_44() { return &____varUpdater_44; }
	inline void set__varUpdater_44(SoundGroupVariationUpdater_t767605717 * value)
	{
		____varUpdater_44 = value;
		Il2CppCodeGenWriteBarrier(&____varUpdater_44, value);
	}

	inline static int32_t get_offset_of__previousSoundFinishedFrame_45() { return static_cast<int32_t>(offsetof(SoundGroupVariation_t49693394, ____previousSoundFinishedFrame_45)); }
	inline int32_t get__previousSoundFinishedFrame_45() const { return ____previousSoundFinishedFrame_45; }
	inline int32_t* get_address_of__previousSoundFinishedFrame_45() { return &____previousSoundFinishedFrame_45; }
	inline void set__previousSoundFinishedFrame_45(int32_t value)
	{
		____previousSoundFinishedFrame_45 = value;
	}

	inline static int32_t get_offset_of__trans_46() { return static_cast<int32_t>(offsetof(SoundGroupVariation_t49693394, ____trans_46)); }
	inline Transform_t284553113 * get__trans_46() const { return ____trans_46; }
	inline Transform_t284553113 ** get_address_of__trans_46() { return &____trans_46; }
	inline void set__trans_46(Transform_t284553113 * value)
	{
		____trans_46 = value;
		Il2CppCodeGenWriteBarrier(&____trans_46, value);
	}

	inline static int32_t get_offset_of__go_47() { return static_cast<int32_t>(offsetof(SoundGroupVariation_t49693394, ____go_47)); }
	inline GameObject_t4012695102 * get__go_47() const { return ____go_47; }
	inline GameObject_t4012695102 ** get_address_of__go_47() { return &____go_47; }
	inline void set__go_47(GameObject_t4012695102 * value)
	{
		____go_47 = value;
		Il2CppCodeGenWriteBarrier(&____go_47, value);
	}

	inline static int32_t get_offset_of__aud_48() { return static_cast<int32_t>(offsetof(SoundGroupVariation_t49693394, ____aud_48)); }
	inline AudioSource_t3628549054 * get__aud_48() const { return ____aud_48; }
	inline AudioSource_t3628549054 ** get_address_of__aud_48() { return &____aud_48; }
	inline void set__aud_48(AudioSource_t3628549054 * value)
	{
		____aud_48 = value;
		Il2CppCodeGenWriteBarrier(&____aud_48, value);
	}

	inline static int32_t get_offset_of__objectToFollow_49() { return static_cast<int32_t>(offsetof(SoundGroupVariation_t49693394, ____objectToFollow_49)); }
	inline Transform_t284553113 * get__objectToFollow_49() const { return ____objectToFollow_49; }
	inline Transform_t284553113 ** get_address_of__objectToFollow_49() { return &____objectToFollow_49; }
	inline void set__objectToFollow_49(Transform_t284553113 * value)
	{
		____objectToFollow_49 = value;
		Il2CppCodeGenWriteBarrier(&____objectToFollow_49, value);
	}

	inline static int32_t get_offset_of__objectToTriggerFrom_50() { return static_cast<int32_t>(offsetof(SoundGroupVariation_t49693394, ____objectToTriggerFrom_50)); }
	inline Transform_t284553113 * get__objectToTriggerFrom_50() const { return ____objectToTriggerFrom_50; }
	inline Transform_t284553113 ** get_address_of__objectToTriggerFrom_50() { return &____objectToTriggerFrom_50; }
	inline void set__objectToTriggerFrom_50(Transform_t284553113 * value)
	{
		____objectToTriggerFrom_50 = value;
		Il2CppCodeGenWriteBarrier(&____objectToTriggerFrom_50, value);
	}

	inline static int32_t get_offset_of__parentGroupScript_51() { return static_cast<int32_t>(offsetof(SoundGroupVariation_t49693394, ____parentGroupScript_51)); }
	inline MasterAudioGroup_t1025661466 * get__parentGroupScript_51() const { return ____parentGroupScript_51; }
	inline MasterAudioGroup_t1025661466 ** get_address_of__parentGroupScript_51() { return &____parentGroupScript_51; }
	inline void set__parentGroupScript_51(MasterAudioGroup_t1025661466 * value)
	{
		____parentGroupScript_51 = value;
		Il2CppCodeGenWriteBarrier(&____parentGroupScript_51, value);
	}

	inline static int32_t get_offset_of__attachToSource_52() { return static_cast<int32_t>(offsetof(SoundGroupVariation_t49693394, ____attachToSource_52)); }
	inline bool get__attachToSource_52() const { return ____attachToSource_52; }
	inline bool* get_address_of__attachToSource_52() { return &____attachToSource_52; }
	inline void set__attachToSource_52(bool value)
	{
		____attachToSource_52 = value;
	}

	inline static int32_t get_offset_of__resFileName_53() { return static_cast<int32_t>(offsetof(SoundGroupVariation_t49693394, ____resFileName_53)); }
	inline String_t* get__resFileName_53() const { return ____resFileName_53; }
	inline String_t** get_address_of__resFileName_53() { return &____resFileName_53; }
	inline void set__resFileName_53(String_t* value)
	{
		____resFileName_53 = value;
		Il2CppCodeGenWriteBarrier(&____resFileName_53, value);
	}

	inline static int32_t get_offset_of_SoundFinished_54() { return static_cast<int32_t>(offsetof(SoundGroupVariation_t49693394, ___SoundFinished_54)); }
	inline SoundFinishedEventHandler_t2252829809 * get_SoundFinished_54() const { return ___SoundFinished_54; }
	inline SoundFinishedEventHandler_t2252829809 ** get_address_of_SoundFinished_54() { return &___SoundFinished_54; }
	inline void set_SoundFinished_54(SoundFinishedEventHandler_t2252829809 * value)
	{
		___SoundFinished_54 = value;
		Il2CppCodeGenWriteBarrier(&___SoundFinished_54, value);
	}

	inline static int32_t get_offset_of_U3CLastTimePlayedU3Ek__BackingField_55() { return static_cast<int32_t>(offsetof(SoundGroupVariation_t49693394, ___U3CLastTimePlayedU3Ek__BackingField_55)); }
	inline float get_U3CLastTimePlayedU3Ek__BackingField_55() const { return ___U3CLastTimePlayedU3Ek__BackingField_55; }
	inline float* get_address_of_U3CLastTimePlayedU3Ek__BackingField_55() { return &___U3CLastTimePlayedU3Ek__BackingField_55; }
	inline void set_U3CLastTimePlayedU3Ek__BackingField_55(float value)
	{
		___U3CLastTimePlayedU3Ek__BackingField_55 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
