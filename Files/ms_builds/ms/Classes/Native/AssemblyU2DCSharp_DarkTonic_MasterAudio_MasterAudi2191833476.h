#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioSource
struct AudioSource_t3628549054;
// DarkTonic.MasterAudio.SoundGroupVariation
struct SoundGroupVariation_t49693394;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DarkTonic.MasterAudio.MasterAudio/AudioInfo
struct  AudioInfo_t2191833476  : public Il2CppObject
{
public:
	// UnityEngine.AudioSource DarkTonic.MasterAudio.MasterAudio/AudioInfo::Source
	AudioSource_t3628549054 * ___Source_0;
	// System.Single DarkTonic.MasterAudio.MasterAudio/AudioInfo::OriginalVolume
	float ___OriginalVolume_1;
	// System.Single DarkTonic.MasterAudio.MasterAudio/AudioInfo::LastPercentageVolume
	float ___LastPercentageVolume_2;
	// System.Single DarkTonic.MasterAudio.MasterAudio/AudioInfo::LastRandomVolume
	float ___LastRandomVolume_3;
	// DarkTonic.MasterAudio.SoundGroupVariation DarkTonic.MasterAudio.MasterAudio/AudioInfo::Variation
	SoundGroupVariation_t49693394 * ___Variation_4;

public:
	inline static int32_t get_offset_of_Source_0() { return static_cast<int32_t>(offsetof(AudioInfo_t2191833476, ___Source_0)); }
	inline AudioSource_t3628549054 * get_Source_0() const { return ___Source_0; }
	inline AudioSource_t3628549054 ** get_address_of_Source_0() { return &___Source_0; }
	inline void set_Source_0(AudioSource_t3628549054 * value)
	{
		___Source_0 = value;
		Il2CppCodeGenWriteBarrier(&___Source_0, value);
	}

	inline static int32_t get_offset_of_OriginalVolume_1() { return static_cast<int32_t>(offsetof(AudioInfo_t2191833476, ___OriginalVolume_1)); }
	inline float get_OriginalVolume_1() const { return ___OriginalVolume_1; }
	inline float* get_address_of_OriginalVolume_1() { return &___OriginalVolume_1; }
	inline void set_OriginalVolume_1(float value)
	{
		___OriginalVolume_1 = value;
	}

	inline static int32_t get_offset_of_LastPercentageVolume_2() { return static_cast<int32_t>(offsetof(AudioInfo_t2191833476, ___LastPercentageVolume_2)); }
	inline float get_LastPercentageVolume_2() const { return ___LastPercentageVolume_2; }
	inline float* get_address_of_LastPercentageVolume_2() { return &___LastPercentageVolume_2; }
	inline void set_LastPercentageVolume_2(float value)
	{
		___LastPercentageVolume_2 = value;
	}

	inline static int32_t get_offset_of_LastRandomVolume_3() { return static_cast<int32_t>(offsetof(AudioInfo_t2191833476, ___LastRandomVolume_3)); }
	inline float get_LastRandomVolume_3() const { return ___LastRandomVolume_3; }
	inline float* get_address_of_LastRandomVolume_3() { return &___LastRandomVolume_3; }
	inline void set_LastRandomVolume_3(float value)
	{
		___LastRandomVolume_3 = value;
	}

	inline static int32_t get_offset_of_Variation_4() { return static_cast<int32_t>(offsetof(AudioInfo_t2191833476, ___Variation_4)); }
	inline SoundGroupVariation_t49693394 * get_Variation_4() const { return ___Variation_4; }
	inline SoundGroupVariation_t49693394 ** get_address_of_Variation_4() { return &___Variation_4; }
	inline void set_Variation_4(SoundGroupVariation_t49693394 * value)
	{
		___Variation_4 = value;
		Il2CppCodeGenWriteBarrier(&___Variation_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
