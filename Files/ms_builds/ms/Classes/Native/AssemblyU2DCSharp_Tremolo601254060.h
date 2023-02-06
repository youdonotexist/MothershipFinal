#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// WaveForm
struct WaveForm_t667898749;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Tremolo
struct  Tremolo_t601254060  : public Il2CppObject
{
public:
	// System.Single Tremolo::hertz
	float ___hertz_2;
	// System.Single Tremolo::depth
	float ___depth_3;
	// WaveForm Tremolo::waveForm
	WaveForm_t667898749 * ___waveForm_4;
	// System.Single Tremolo::phase
	float ___phase_5;

public:
	inline static int32_t get_offset_of_hertz_2() { return static_cast<int32_t>(offsetof(Tremolo_t601254060, ___hertz_2)); }
	inline float get_hertz_2() const { return ___hertz_2; }
	inline float* get_address_of_hertz_2() { return &___hertz_2; }
	inline void set_hertz_2(float value)
	{
		___hertz_2 = value;
	}

	inline static int32_t get_offset_of_depth_3() { return static_cast<int32_t>(offsetof(Tremolo_t601254060, ___depth_3)); }
	inline float get_depth_3() const { return ___depth_3; }
	inline float* get_address_of_depth_3() { return &___depth_3; }
	inline void set_depth_3(float value)
	{
		___depth_3 = value;
	}

	inline static int32_t get_offset_of_waveForm_4() { return static_cast<int32_t>(offsetof(Tremolo_t601254060, ___waveForm_4)); }
	inline WaveForm_t667898749 * get_waveForm_4() const { return ___waveForm_4; }
	inline WaveForm_t667898749 ** get_address_of_waveForm_4() { return &___waveForm_4; }
	inline void set_waveForm_4(WaveForm_t667898749 * value)
	{
		___waveForm_4 = value;
		Il2CppCodeGenWriteBarrier(&___waveForm_4, value);
	}

	inline static int32_t get_offset_of_phase_5() { return static_cast<int32_t>(offsetof(Tremolo_t601254060, ___phase_5)); }
	inline float get_phase_5() const { return ___phase_5; }
	inline float* get_address_of_phase_5() { return &___phase_5; }
	inline void set_phase_5(float value)
	{
		___phase_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
