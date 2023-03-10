#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// DarkTonic.MasterAudio.SoundGroupVariation
struct SoundGroupVariation_t49693394;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DarkTonic.MasterAudio.PlaySoundResult
struct  PlaySoundResult_t3653206983  : public Il2CppObject
{
public:
	// System.Boolean DarkTonic.MasterAudio.PlaySoundResult::<SoundPlayed>k__BackingField
	bool ___U3CSoundPlayedU3Ek__BackingField_0;
	// System.Boolean DarkTonic.MasterAudio.PlaySoundResult::<SoundScheduled>k__BackingField
	bool ___U3CSoundScheduledU3Ek__BackingField_1;
	// DarkTonic.MasterAudio.SoundGroupVariation DarkTonic.MasterAudio.PlaySoundResult::<ActingVariation>k__BackingField
	SoundGroupVariation_t49693394 * ___U3CActingVariationU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CSoundPlayedU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(PlaySoundResult_t3653206983, ___U3CSoundPlayedU3Ek__BackingField_0)); }
	inline bool get_U3CSoundPlayedU3Ek__BackingField_0() const { return ___U3CSoundPlayedU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CSoundPlayedU3Ek__BackingField_0() { return &___U3CSoundPlayedU3Ek__BackingField_0; }
	inline void set_U3CSoundPlayedU3Ek__BackingField_0(bool value)
	{
		___U3CSoundPlayedU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CSoundScheduledU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PlaySoundResult_t3653206983, ___U3CSoundScheduledU3Ek__BackingField_1)); }
	inline bool get_U3CSoundScheduledU3Ek__BackingField_1() const { return ___U3CSoundScheduledU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CSoundScheduledU3Ek__BackingField_1() { return &___U3CSoundScheduledU3Ek__BackingField_1; }
	inline void set_U3CSoundScheduledU3Ek__BackingField_1(bool value)
	{
		___U3CSoundScheduledU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CActingVariationU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PlaySoundResult_t3653206983, ___U3CActingVariationU3Ek__BackingField_2)); }
	inline SoundGroupVariation_t49693394 * get_U3CActingVariationU3Ek__BackingField_2() const { return ___U3CActingVariationU3Ek__BackingField_2; }
	inline SoundGroupVariation_t49693394 ** get_address_of_U3CActingVariationU3Ek__BackingField_2() { return &___U3CActingVariationU3Ek__BackingField_2; }
	inline void set_U3CActingVariationU3Ek__BackingField_2(SoundGroupVariation_t49693394 * value)
	{
		___U3CActingVariationU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CActingVariationU3Ek__BackingField_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
