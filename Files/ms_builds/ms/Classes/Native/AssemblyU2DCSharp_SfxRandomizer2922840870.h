#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Synthesizer
struct Synthesizer_t3031702888;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SfxRandomizer
struct  SfxRandomizer_t2922840870  : public MonoBehaviour_t3012272455
{
public:
	// Synthesizer SfxRandomizer::synth
	Synthesizer_t3031702888 * ___synth_2;

public:
	inline static int32_t get_offset_of_synth_2() { return static_cast<int32_t>(offsetof(SfxRandomizer_t2922840870, ___synth_2)); }
	inline Synthesizer_t3031702888 * get_synth_2() const { return ___synth_2; }
	inline Synthesizer_t3031702888 ** get_address_of_synth_2() { return &___synth_2; }
	inline void set_synth_2(Synthesizer_t3031702888 * value)
	{
		___synth_2 = value;
		Il2CppCodeGenWriteBarrier(&___synth_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
