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

#include "AssemblyU2DCSharp_Synthesizer3031702888.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MsSynthesizer
struct  MsSynthesizer_t3874118626  : public Synthesizer_t3031702888
{
public:
	// UnityEngine.AudioSource MsSynthesizer::audioSource
	AudioSource_t3628549054 * ___audioSource_11;

public:
	inline static int32_t get_offset_of_audioSource_11() { return static_cast<int32_t>(offsetof(MsSynthesizer_t3874118626, ___audioSource_11)); }
	inline AudioSource_t3628549054 * get_audioSource_11() const { return ___audioSource_11; }
	inline AudioSource_t3628549054 ** get_address_of_audioSource_11() { return &___audioSource_11; }
	inline void set_audioSource_11(AudioSource_t3628549054 * value)
	{
		___audioSource_11 = value;
		Il2CppCodeGenWriteBarrier(&___audioSource_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
