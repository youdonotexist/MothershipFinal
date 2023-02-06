#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// FractalNoise
struct FractalNoise_t683998921;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SmoothRandom
struct  SmoothRandom_t981803057  : public Il2CppObject
{
public:

public:
};

struct SmoothRandom_t981803057_StaticFields
{
public:
	// FractalNoise SmoothRandom::s_Noise
	FractalNoise_t683998921 * ___s_Noise_0;

public:
	inline static int32_t get_offset_of_s_Noise_0() { return static_cast<int32_t>(offsetof(SmoothRandom_t981803057_StaticFields, ___s_Noise_0)); }
	inline FractalNoise_t683998921 * get_s_Noise_0() const { return ___s_Noise_0; }
	inline FractalNoise_t683998921 ** get_address_of_s_Noise_0() { return &___s_Noise_0; }
	inline void set_s_Noise_0(FractalNoise_t683998921 * value)
	{
		___s_Noise_0 = value;
		Il2CppCodeGenWriteBarrier(&___s_Noise_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
