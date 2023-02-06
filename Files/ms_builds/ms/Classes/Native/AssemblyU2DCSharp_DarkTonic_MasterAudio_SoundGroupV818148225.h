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
// UnityEngine.Transform
struct Transform_t284553113;

#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Nullable_1_gen3844246929.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DarkTonic.MasterAudio.SoundGroupVariation/PlaySoundParams
struct  PlaySoundParams_t818148225  : public Il2CppObject
{
public:
	// System.String DarkTonic.MasterAudio.SoundGroupVariation/PlaySoundParams::SoundType
	String_t* ___SoundType_0;
	// System.Single DarkTonic.MasterAudio.SoundGroupVariation/PlaySoundParams::VolumePercentage
	float ___VolumePercentage_1;
	// System.Nullable`1<System.Single> DarkTonic.MasterAudio.SoundGroupVariation/PlaySoundParams::Pitch
	Nullable_1_t3844246929  ___Pitch_2;
	// UnityEngine.Transform DarkTonic.MasterAudio.SoundGroupVariation/PlaySoundParams::SourceTrans
	Transform_t284553113 * ___SourceTrans_3;
	// System.Boolean DarkTonic.MasterAudio.SoundGroupVariation/PlaySoundParams::AttachToSource
	bool ___AttachToSource_4;
	// System.Single DarkTonic.MasterAudio.SoundGroupVariation/PlaySoundParams::DelaySoundTime
	float ___DelaySoundTime_5;
	// System.Boolean DarkTonic.MasterAudio.SoundGroupVariation/PlaySoundParams::IsChainLoop
	bool ___IsChainLoop_6;
	// System.Boolean DarkTonic.MasterAudio.SoundGroupVariation/PlaySoundParams::IsSingleSubscribedPlay
	bool ___IsSingleSubscribedPlay_7;
	// System.Single DarkTonic.MasterAudio.SoundGroupVariation/PlaySoundParams::GroupCalcVolume
	float ___GroupCalcVolume_8;
	// System.Boolean DarkTonic.MasterAudio.SoundGroupVariation/PlaySoundParams::IsPlaying
	bool ___IsPlaying_9;

public:
	inline static int32_t get_offset_of_SoundType_0() { return static_cast<int32_t>(offsetof(PlaySoundParams_t818148225, ___SoundType_0)); }
	inline String_t* get_SoundType_0() const { return ___SoundType_0; }
	inline String_t** get_address_of_SoundType_0() { return &___SoundType_0; }
	inline void set_SoundType_0(String_t* value)
	{
		___SoundType_0 = value;
		Il2CppCodeGenWriteBarrier(&___SoundType_0, value);
	}

	inline static int32_t get_offset_of_VolumePercentage_1() { return static_cast<int32_t>(offsetof(PlaySoundParams_t818148225, ___VolumePercentage_1)); }
	inline float get_VolumePercentage_1() const { return ___VolumePercentage_1; }
	inline float* get_address_of_VolumePercentage_1() { return &___VolumePercentage_1; }
	inline void set_VolumePercentage_1(float value)
	{
		___VolumePercentage_1 = value;
	}

	inline static int32_t get_offset_of_Pitch_2() { return static_cast<int32_t>(offsetof(PlaySoundParams_t818148225, ___Pitch_2)); }
	inline Nullable_1_t3844246929  get_Pitch_2() const { return ___Pitch_2; }
	inline Nullable_1_t3844246929 * get_address_of_Pitch_2() { return &___Pitch_2; }
	inline void set_Pitch_2(Nullable_1_t3844246929  value)
	{
		___Pitch_2 = value;
	}

	inline static int32_t get_offset_of_SourceTrans_3() { return static_cast<int32_t>(offsetof(PlaySoundParams_t818148225, ___SourceTrans_3)); }
	inline Transform_t284553113 * get_SourceTrans_3() const { return ___SourceTrans_3; }
	inline Transform_t284553113 ** get_address_of_SourceTrans_3() { return &___SourceTrans_3; }
	inline void set_SourceTrans_3(Transform_t284553113 * value)
	{
		___SourceTrans_3 = value;
		Il2CppCodeGenWriteBarrier(&___SourceTrans_3, value);
	}

	inline static int32_t get_offset_of_AttachToSource_4() { return static_cast<int32_t>(offsetof(PlaySoundParams_t818148225, ___AttachToSource_4)); }
	inline bool get_AttachToSource_4() const { return ___AttachToSource_4; }
	inline bool* get_address_of_AttachToSource_4() { return &___AttachToSource_4; }
	inline void set_AttachToSource_4(bool value)
	{
		___AttachToSource_4 = value;
	}

	inline static int32_t get_offset_of_DelaySoundTime_5() { return static_cast<int32_t>(offsetof(PlaySoundParams_t818148225, ___DelaySoundTime_5)); }
	inline float get_DelaySoundTime_5() const { return ___DelaySoundTime_5; }
	inline float* get_address_of_DelaySoundTime_5() { return &___DelaySoundTime_5; }
	inline void set_DelaySoundTime_5(float value)
	{
		___DelaySoundTime_5 = value;
	}

	inline static int32_t get_offset_of_IsChainLoop_6() { return static_cast<int32_t>(offsetof(PlaySoundParams_t818148225, ___IsChainLoop_6)); }
	inline bool get_IsChainLoop_6() const { return ___IsChainLoop_6; }
	inline bool* get_address_of_IsChainLoop_6() { return &___IsChainLoop_6; }
	inline void set_IsChainLoop_6(bool value)
	{
		___IsChainLoop_6 = value;
	}

	inline static int32_t get_offset_of_IsSingleSubscribedPlay_7() { return static_cast<int32_t>(offsetof(PlaySoundParams_t818148225, ___IsSingleSubscribedPlay_7)); }
	inline bool get_IsSingleSubscribedPlay_7() const { return ___IsSingleSubscribedPlay_7; }
	inline bool* get_address_of_IsSingleSubscribedPlay_7() { return &___IsSingleSubscribedPlay_7; }
	inline void set_IsSingleSubscribedPlay_7(bool value)
	{
		___IsSingleSubscribedPlay_7 = value;
	}

	inline static int32_t get_offset_of_GroupCalcVolume_8() { return static_cast<int32_t>(offsetof(PlaySoundParams_t818148225, ___GroupCalcVolume_8)); }
	inline float get_GroupCalcVolume_8() const { return ___GroupCalcVolume_8; }
	inline float* get_address_of_GroupCalcVolume_8() { return &___GroupCalcVolume_8; }
	inline void set_GroupCalcVolume_8(float value)
	{
		___GroupCalcVolume_8 = value;
	}

	inline static int32_t get_offset_of_IsPlaying_9() { return static_cast<int32_t>(offsetof(PlaySoundParams_t818148225, ___IsPlaying_9)); }
	inline bool get_IsPlaying_9() const { return ___IsPlaying_9; }
	inline bool* get_address_of_IsPlaying_9() { return &___IsPlaying_9; }
	inline void set_IsPlaying_9(bool value)
	{
		___IsPlaying_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
