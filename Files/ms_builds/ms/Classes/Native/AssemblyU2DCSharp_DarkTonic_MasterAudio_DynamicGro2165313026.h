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
// DarkTonic.MasterAudio.DynamicSoundGroup
struct DynamicSoundGroup_t2364000734;
// UnityEngine.Transform
struct Transform_t284553113;
// UnityEngine.AudioSource
struct AudioSource_t3628549054;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "AssemblyU2DCSharp_DarkTonic_MasterAudio_SoundGroupVa89157472.h"
#include "AssemblyU2DCSharp_DarkTonic_MasterAudio_SoundGroup1526900000.h"
#include "AssemblyU2DCSharp_DarkTonic_MasterAudio_MasterAudio767596939.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DarkTonic.MasterAudio.DynamicGroupVariation
struct  DynamicGroupVariation_t2165313026  : public MonoBehaviour_t3012272455
{
public:
	// System.Boolean DarkTonic.MasterAudio.DynamicGroupVariation::useLocalization
	bool ___useLocalization_2;
	// System.Boolean DarkTonic.MasterAudio.DynamicGroupVariation::useRandomPitch
	bool ___useRandomPitch_3;
	// DarkTonic.MasterAudio.SoundGroupVariation/RandomPitchMode DarkTonic.MasterAudio.DynamicGroupVariation::randomPitchMode
	int32_t ___randomPitchMode_4;
	// System.Single DarkTonic.MasterAudio.DynamicGroupVariation::randomPitchMin
	float ___randomPitchMin_5;
	// System.Single DarkTonic.MasterAudio.DynamicGroupVariation::randomPitchMax
	float ___randomPitchMax_6;
	// System.Boolean DarkTonic.MasterAudio.DynamicGroupVariation::useRandomVolume
	bool ___useRandomVolume_7;
	// DarkTonic.MasterAudio.SoundGroupVariation/RandomVolumeMode DarkTonic.MasterAudio.DynamicGroupVariation::randomVolumeMode
	int32_t ___randomVolumeMode_8;
	// System.Single DarkTonic.MasterAudio.DynamicGroupVariation::randomVolumeMin
	float ___randomVolumeMin_9;
	// System.Single DarkTonic.MasterAudio.DynamicGroupVariation::randomVolumeMax
	float ___randomVolumeMax_10;
	// System.Int32 DarkTonic.MasterAudio.DynamicGroupVariation::weight
	int32_t ___weight_11;
	// DarkTonic.MasterAudio.MasterAudio/AudioLocation DarkTonic.MasterAudio.DynamicGroupVariation::audLocation
	int32_t ___audLocation_12;
	// System.String DarkTonic.MasterAudio.DynamicGroupVariation::resourceFileName
	String_t* ___resourceFileName_13;
	// System.String DarkTonic.MasterAudio.DynamicGroupVariation::internetFileUrl
	String_t* ___internetFileUrl_14;
	// System.Boolean DarkTonic.MasterAudio.DynamicGroupVariation::isExpanded
	bool ___isExpanded_15;
	// System.Boolean DarkTonic.MasterAudio.DynamicGroupVariation::isChecked
	bool ___isChecked_16;
	// System.Single DarkTonic.MasterAudio.DynamicGroupVariation::fxTailTime
	float ___fxTailTime_17;
	// System.Boolean DarkTonic.MasterAudio.DynamicGroupVariation::useFades
	bool ___useFades_18;
	// System.Single DarkTonic.MasterAudio.DynamicGroupVariation::fadeInTime
	float ___fadeInTime_19;
	// System.Single DarkTonic.MasterAudio.DynamicGroupVariation::fadeOutTime
	float ___fadeOutTime_20;
	// System.Boolean DarkTonic.MasterAudio.DynamicGroupVariation::useIntroSilence
	bool ___useIntroSilence_21;
	// System.Single DarkTonic.MasterAudio.DynamicGroupVariation::introSilenceMin
	float ___introSilenceMin_22;
	// System.Single DarkTonic.MasterAudio.DynamicGroupVariation::introSilenceMax
	float ___introSilenceMax_23;
	// System.Boolean DarkTonic.MasterAudio.DynamicGroupVariation::useRandomStartTime
	bool ___useRandomStartTime_24;
	// System.Single DarkTonic.MasterAudio.DynamicGroupVariation::randomStartMinPercent
	float ___randomStartMinPercent_25;
	// System.Single DarkTonic.MasterAudio.DynamicGroupVariation::randomStartMaxPercent
	float ___randomStartMaxPercent_26;
	// UnityEngine.AudioDistortionFilter DarkTonic.MasterAudio.DynamicGroupVariation::_distFilter
	AudioDistortionFilter_t311469720 * ____distFilter_27;
	// UnityEngine.AudioEchoFilter DarkTonic.MasterAudio.DynamicGroupVariation::_echoFilter
	AudioEchoFilter_t386626208 * ____echoFilter_28;
	// UnityEngine.AudioHighPassFilter DarkTonic.MasterAudio.DynamicGroupVariation::_hpFilter
	AudioHighPassFilter_t3328821198 * ____hpFilter_29;
	// UnityEngine.AudioLowPassFilter DarkTonic.MasterAudio.DynamicGroupVariation::_lpFilter
	AudioLowPassFilter_t3551826324 * ____lpFilter_30;
	// UnityEngine.AudioReverbFilter DarkTonic.MasterAudio.DynamicGroupVariation::_reverbFilter
	AudioReverbFilter_t1675624205 * ____reverbFilter_31;
	// UnityEngine.AudioChorusFilter DarkTonic.MasterAudio.DynamicGroupVariation::_chorusFilter
	AudioChorusFilter_t1133144033 * ____chorusFilter_32;
	// DarkTonic.MasterAudio.DynamicSoundGroup DarkTonic.MasterAudio.DynamicGroupVariation::_parentGroupScript
	DynamicSoundGroup_t2364000734 * ____parentGroupScript_33;
	// UnityEngine.Transform DarkTonic.MasterAudio.DynamicGroupVariation::_trans
	Transform_t284553113 * ____trans_34;
	// UnityEngine.AudioSource DarkTonic.MasterAudio.DynamicGroupVariation::_aud
	AudioSource_t3628549054 * ____aud_35;

public:
	inline static int32_t get_offset_of_useLocalization_2() { return static_cast<int32_t>(offsetof(DynamicGroupVariation_t2165313026, ___useLocalization_2)); }
	inline bool get_useLocalization_2() const { return ___useLocalization_2; }
	inline bool* get_address_of_useLocalization_2() { return &___useLocalization_2; }
	inline void set_useLocalization_2(bool value)
	{
		___useLocalization_2 = value;
	}

	inline static int32_t get_offset_of_useRandomPitch_3() { return static_cast<int32_t>(offsetof(DynamicGroupVariation_t2165313026, ___useRandomPitch_3)); }
	inline bool get_useRandomPitch_3() const { return ___useRandomPitch_3; }
	inline bool* get_address_of_useRandomPitch_3() { return &___useRandomPitch_3; }
	inline void set_useRandomPitch_3(bool value)
	{
		___useRandomPitch_3 = value;
	}

	inline static int32_t get_offset_of_randomPitchMode_4() { return static_cast<int32_t>(offsetof(DynamicGroupVariation_t2165313026, ___randomPitchMode_4)); }
	inline int32_t get_randomPitchMode_4() const { return ___randomPitchMode_4; }
	inline int32_t* get_address_of_randomPitchMode_4() { return &___randomPitchMode_4; }
	inline void set_randomPitchMode_4(int32_t value)
	{
		___randomPitchMode_4 = value;
	}

	inline static int32_t get_offset_of_randomPitchMin_5() { return static_cast<int32_t>(offsetof(DynamicGroupVariation_t2165313026, ___randomPitchMin_5)); }
	inline float get_randomPitchMin_5() const { return ___randomPitchMin_5; }
	inline float* get_address_of_randomPitchMin_5() { return &___randomPitchMin_5; }
	inline void set_randomPitchMin_5(float value)
	{
		___randomPitchMin_5 = value;
	}

	inline static int32_t get_offset_of_randomPitchMax_6() { return static_cast<int32_t>(offsetof(DynamicGroupVariation_t2165313026, ___randomPitchMax_6)); }
	inline float get_randomPitchMax_6() const { return ___randomPitchMax_6; }
	inline float* get_address_of_randomPitchMax_6() { return &___randomPitchMax_6; }
	inline void set_randomPitchMax_6(float value)
	{
		___randomPitchMax_6 = value;
	}

	inline static int32_t get_offset_of_useRandomVolume_7() { return static_cast<int32_t>(offsetof(DynamicGroupVariation_t2165313026, ___useRandomVolume_7)); }
	inline bool get_useRandomVolume_7() const { return ___useRandomVolume_7; }
	inline bool* get_address_of_useRandomVolume_7() { return &___useRandomVolume_7; }
	inline void set_useRandomVolume_7(bool value)
	{
		___useRandomVolume_7 = value;
	}

	inline static int32_t get_offset_of_randomVolumeMode_8() { return static_cast<int32_t>(offsetof(DynamicGroupVariation_t2165313026, ___randomVolumeMode_8)); }
	inline int32_t get_randomVolumeMode_8() const { return ___randomVolumeMode_8; }
	inline int32_t* get_address_of_randomVolumeMode_8() { return &___randomVolumeMode_8; }
	inline void set_randomVolumeMode_8(int32_t value)
	{
		___randomVolumeMode_8 = value;
	}

	inline static int32_t get_offset_of_randomVolumeMin_9() { return static_cast<int32_t>(offsetof(DynamicGroupVariation_t2165313026, ___randomVolumeMin_9)); }
	inline float get_randomVolumeMin_9() const { return ___randomVolumeMin_9; }
	inline float* get_address_of_randomVolumeMin_9() { return &___randomVolumeMin_9; }
	inline void set_randomVolumeMin_9(float value)
	{
		___randomVolumeMin_9 = value;
	}

	inline static int32_t get_offset_of_randomVolumeMax_10() { return static_cast<int32_t>(offsetof(DynamicGroupVariation_t2165313026, ___randomVolumeMax_10)); }
	inline float get_randomVolumeMax_10() const { return ___randomVolumeMax_10; }
	inline float* get_address_of_randomVolumeMax_10() { return &___randomVolumeMax_10; }
	inline void set_randomVolumeMax_10(float value)
	{
		___randomVolumeMax_10 = value;
	}

	inline static int32_t get_offset_of_weight_11() { return static_cast<int32_t>(offsetof(DynamicGroupVariation_t2165313026, ___weight_11)); }
	inline int32_t get_weight_11() const { return ___weight_11; }
	inline int32_t* get_address_of_weight_11() { return &___weight_11; }
	inline void set_weight_11(int32_t value)
	{
		___weight_11 = value;
	}

	inline static int32_t get_offset_of_audLocation_12() { return static_cast<int32_t>(offsetof(DynamicGroupVariation_t2165313026, ___audLocation_12)); }
	inline int32_t get_audLocation_12() const { return ___audLocation_12; }
	inline int32_t* get_address_of_audLocation_12() { return &___audLocation_12; }
	inline void set_audLocation_12(int32_t value)
	{
		___audLocation_12 = value;
	}

	inline static int32_t get_offset_of_resourceFileName_13() { return static_cast<int32_t>(offsetof(DynamicGroupVariation_t2165313026, ___resourceFileName_13)); }
	inline String_t* get_resourceFileName_13() const { return ___resourceFileName_13; }
	inline String_t** get_address_of_resourceFileName_13() { return &___resourceFileName_13; }
	inline void set_resourceFileName_13(String_t* value)
	{
		___resourceFileName_13 = value;
		Il2CppCodeGenWriteBarrier(&___resourceFileName_13, value);
	}

	inline static int32_t get_offset_of_internetFileUrl_14() { return static_cast<int32_t>(offsetof(DynamicGroupVariation_t2165313026, ___internetFileUrl_14)); }
	inline String_t* get_internetFileUrl_14() const { return ___internetFileUrl_14; }
	inline String_t** get_address_of_internetFileUrl_14() { return &___internetFileUrl_14; }
	inline void set_internetFileUrl_14(String_t* value)
	{
		___internetFileUrl_14 = value;
		Il2CppCodeGenWriteBarrier(&___internetFileUrl_14, value);
	}

	inline static int32_t get_offset_of_isExpanded_15() { return static_cast<int32_t>(offsetof(DynamicGroupVariation_t2165313026, ___isExpanded_15)); }
	inline bool get_isExpanded_15() const { return ___isExpanded_15; }
	inline bool* get_address_of_isExpanded_15() { return &___isExpanded_15; }
	inline void set_isExpanded_15(bool value)
	{
		___isExpanded_15 = value;
	}

	inline static int32_t get_offset_of_isChecked_16() { return static_cast<int32_t>(offsetof(DynamicGroupVariation_t2165313026, ___isChecked_16)); }
	inline bool get_isChecked_16() const { return ___isChecked_16; }
	inline bool* get_address_of_isChecked_16() { return &___isChecked_16; }
	inline void set_isChecked_16(bool value)
	{
		___isChecked_16 = value;
	}

	inline static int32_t get_offset_of_fxTailTime_17() { return static_cast<int32_t>(offsetof(DynamicGroupVariation_t2165313026, ___fxTailTime_17)); }
	inline float get_fxTailTime_17() const { return ___fxTailTime_17; }
	inline float* get_address_of_fxTailTime_17() { return &___fxTailTime_17; }
	inline void set_fxTailTime_17(float value)
	{
		___fxTailTime_17 = value;
	}

	inline static int32_t get_offset_of_useFades_18() { return static_cast<int32_t>(offsetof(DynamicGroupVariation_t2165313026, ___useFades_18)); }
	inline bool get_useFades_18() const { return ___useFades_18; }
	inline bool* get_address_of_useFades_18() { return &___useFades_18; }
	inline void set_useFades_18(bool value)
	{
		___useFades_18 = value;
	}

	inline static int32_t get_offset_of_fadeInTime_19() { return static_cast<int32_t>(offsetof(DynamicGroupVariation_t2165313026, ___fadeInTime_19)); }
	inline float get_fadeInTime_19() const { return ___fadeInTime_19; }
	inline float* get_address_of_fadeInTime_19() { return &___fadeInTime_19; }
	inline void set_fadeInTime_19(float value)
	{
		___fadeInTime_19 = value;
	}

	inline static int32_t get_offset_of_fadeOutTime_20() { return static_cast<int32_t>(offsetof(DynamicGroupVariation_t2165313026, ___fadeOutTime_20)); }
	inline float get_fadeOutTime_20() const { return ___fadeOutTime_20; }
	inline float* get_address_of_fadeOutTime_20() { return &___fadeOutTime_20; }
	inline void set_fadeOutTime_20(float value)
	{
		___fadeOutTime_20 = value;
	}

	inline static int32_t get_offset_of_useIntroSilence_21() { return static_cast<int32_t>(offsetof(DynamicGroupVariation_t2165313026, ___useIntroSilence_21)); }
	inline bool get_useIntroSilence_21() const { return ___useIntroSilence_21; }
	inline bool* get_address_of_useIntroSilence_21() { return &___useIntroSilence_21; }
	inline void set_useIntroSilence_21(bool value)
	{
		___useIntroSilence_21 = value;
	}

	inline static int32_t get_offset_of_introSilenceMin_22() { return static_cast<int32_t>(offsetof(DynamicGroupVariation_t2165313026, ___introSilenceMin_22)); }
	inline float get_introSilenceMin_22() const { return ___introSilenceMin_22; }
	inline float* get_address_of_introSilenceMin_22() { return &___introSilenceMin_22; }
	inline void set_introSilenceMin_22(float value)
	{
		___introSilenceMin_22 = value;
	}

	inline static int32_t get_offset_of_introSilenceMax_23() { return static_cast<int32_t>(offsetof(DynamicGroupVariation_t2165313026, ___introSilenceMax_23)); }
	inline float get_introSilenceMax_23() const { return ___introSilenceMax_23; }
	inline float* get_address_of_introSilenceMax_23() { return &___introSilenceMax_23; }
	inline void set_introSilenceMax_23(float value)
	{
		___introSilenceMax_23 = value;
	}

	inline static int32_t get_offset_of_useRandomStartTime_24() { return static_cast<int32_t>(offsetof(DynamicGroupVariation_t2165313026, ___useRandomStartTime_24)); }
	inline bool get_useRandomStartTime_24() const { return ___useRandomStartTime_24; }
	inline bool* get_address_of_useRandomStartTime_24() { return &___useRandomStartTime_24; }
	inline void set_useRandomStartTime_24(bool value)
	{
		___useRandomStartTime_24 = value;
	}

	inline static int32_t get_offset_of_randomStartMinPercent_25() { return static_cast<int32_t>(offsetof(DynamicGroupVariation_t2165313026, ___randomStartMinPercent_25)); }
	inline float get_randomStartMinPercent_25() const { return ___randomStartMinPercent_25; }
	inline float* get_address_of_randomStartMinPercent_25() { return &___randomStartMinPercent_25; }
	inline void set_randomStartMinPercent_25(float value)
	{
		___randomStartMinPercent_25 = value;
	}

	inline static int32_t get_offset_of_randomStartMaxPercent_26() { return static_cast<int32_t>(offsetof(DynamicGroupVariation_t2165313026, ___randomStartMaxPercent_26)); }
	inline float get_randomStartMaxPercent_26() const { return ___randomStartMaxPercent_26; }
	inline float* get_address_of_randomStartMaxPercent_26() { return &___randomStartMaxPercent_26; }
	inline void set_randomStartMaxPercent_26(float value)
	{
		___randomStartMaxPercent_26 = value;
	}

	inline static int32_t get_offset_of__distFilter_27() { return static_cast<int32_t>(offsetof(DynamicGroupVariation_t2165313026, ____distFilter_27)); }
	inline AudioDistortionFilter_t311469720 * get__distFilter_27() const { return ____distFilter_27; }
	inline AudioDistortionFilter_t311469720 ** get_address_of__distFilter_27() { return &____distFilter_27; }
	inline void set__distFilter_27(AudioDistortionFilter_t311469720 * value)
	{
		____distFilter_27 = value;
		Il2CppCodeGenWriteBarrier(&____distFilter_27, value);
	}

	inline static int32_t get_offset_of__echoFilter_28() { return static_cast<int32_t>(offsetof(DynamicGroupVariation_t2165313026, ____echoFilter_28)); }
	inline AudioEchoFilter_t386626208 * get__echoFilter_28() const { return ____echoFilter_28; }
	inline AudioEchoFilter_t386626208 ** get_address_of__echoFilter_28() { return &____echoFilter_28; }
	inline void set__echoFilter_28(AudioEchoFilter_t386626208 * value)
	{
		____echoFilter_28 = value;
		Il2CppCodeGenWriteBarrier(&____echoFilter_28, value);
	}

	inline static int32_t get_offset_of__hpFilter_29() { return static_cast<int32_t>(offsetof(DynamicGroupVariation_t2165313026, ____hpFilter_29)); }
	inline AudioHighPassFilter_t3328821198 * get__hpFilter_29() const { return ____hpFilter_29; }
	inline AudioHighPassFilter_t3328821198 ** get_address_of__hpFilter_29() { return &____hpFilter_29; }
	inline void set__hpFilter_29(AudioHighPassFilter_t3328821198 * value)
	{
		____hpFilter_29 = value;
		Il2CppCodeGenWriteBarrier(&____hpFilter_29, value);
	}

	inline static int32_t get_offset_of__lpFilter_30() { return static_cast<int32_t>(offsetof(DynamicGroupVariation_t2165313026, ____lpFilter_30)); }
	inline AudioLowPassFilter_t3551826324 * get__lpFilter_30() const { return ____lpFilter_30; }
	inline AudioLowPassFilter_t3551826324 ** get_address_of__lpFilter_30() { return &____lpFilter_30; }
	inline void set__lpFilter_30(AudioLowPassFilter_t3551826324 * value)
	{
		____lpFilter_30 = value;
		Il2CppCodeGenWriteBarrier(&____lpFilter_30, value);
	}

	inline static int32_t get_offset_of__reverbFilter_31() { return static_cast<int32_t>(offsetof(DynamicGroupVariation_t2165313026, ____reverbFilter_31)); }
	inline AudioReverbFilter_t1675624205 * get__reverbFilter_31() const { return ____reverbFilter_31; }
	inline AudioReverbFilter_t1675624205 ** get_address_of__reverbFilter_31() { return &____reverbFilter_31; }
	inline void set__reverbFilter_31(AudioReverbFilter_t1675624205 * value)
	{
		____reverbFilter_31 = value;
		Il2CppCodeGenWriteBarrier(&____reverbFilter_31, value);
	}

	inline static int32_t get_offset_of__chorusFilter_32() { return static_cast<int32_t>(offsetof(DynamicGroupVariation_t2165313026, ____chorusFilter_32)); }
	inline AudioChorusFilter_t1133144033 * get__chorusFilter_32() const { return ____chorusFilter_32; }
	inline AudioChorusFilter_t1133144033 ** get_address_of__chorusFilter_32() { return &____chorusFilter_32; }
	inline void set__chorusFilter_32(AudioChorusFilter_t1133144033 * value)
	{
		____chorusFilter_32 = value;
		Il2CppCodeGenWriteBarrier(&____chorusFilter_32, value);
	}

	inline static int32_t get_offset_of__parentGroupScript_33() { return static_cast<int32_t>(offsetof(DynamicGroupVariation_t2165313026, ____parentGroupScript_33)); }
	inline DynamicSoundGroup_t2364000734 * get__parentGroupScript_33() const { return ____parentGroupScript_33; }
	inline DynamicSoundGroup_t2364000734 ** get_address_of__parentGroupScript_33() { return &____parentGroupScript_33; }
	inline void set__parentGroupScript_33(DynamicSoundGroup_t2364000734 * value)
	{
		____parentGroupScript_33 = value;
		Il2CppCodeGenWriteBarrier(&____parentGroupScript_33, value);
	}

	inline static int32_t get_offset_of__trans_34() { return static_cast<int32_t>(offsetof(DynamicGroupVariation_t2165313026, ____trans_34)); }
	inline Transform_t284553113 * get__trans_34() const { return ____trans_34; }
	inline Transform_t284553113 ** get_address_of__trans_34() { return &____trans_34; }
	inline void set__trans_34(Transform_t284553113 * value)
	{
		____trans_34 = value;
		Il2CppCodeGenWriteBarrier(&____trans_34, value);
	}

	inline static int32_t get_offset_of__aud_35() { return static_cast<int32_t>(offsetof(DynamicGroupVariation_t2165313026, ____aud_35)); }
	inline AudioSource_t3628549054 * get__aud_35() const { return ____aud_35; }
	inline AudioSource_t3628549054 ** get_address_of__aud_35() { return &____aud_35; }
	inline void set__aud_35(AudioSource_t3628549054 * value)
	{
		____aud_35 = value;
		Il2CppCodeGenWriteBarrier(&____aud_35, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
