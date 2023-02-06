#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AnimationCurve
struct AnimationCurve_t3342907448;
struct AnimationCurve_t3342907448_marshaled_pinvoke;

#include "mscorlib_System_Object837106420.h"
#include "AssemblyU2DCSharp_WaveForm_Type2622298.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WaveForm
struct  WaveForm_t667898749  : public Il2CppObject
{
public:
	// UnityEngine.AnimationCurve WaveForm::curve
	AnimationCurve_t3342907448 * ___curve_0;
	// WaveForm/Type WaveForm::type
	int32_t ___type_1;
	// System.Single WaveForm::lastNoiseSample
	float ___lastNoiseSample_2;
	// System.Single WaveForm::phaseControl
	float ___phaseControl_3;

public:
	inline static int32_t get_offset_of_curve_0() { return static_cast<int32_t>(offsetof(WaveForm_t667898749, ___curve_0)); }
	inline AnimationCurve_t3342907448 * get_curve_0() const { return ___curve_0; }
	inline AnimationCurve_t3342907448 ** get_address_of_curve_0() { return &___curve_0; }
	inline void set_curve_0(AnimationCurve_t3342907448 * value)
	{
		___curve_0 = value;
		Il2CppCodeGenWriteBarrier(&___curve_0, value);
	}

	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(WaveForm_t667898749, ___type_1)); }
	inline int32_t get_type_1() const { return ___type_1; }
	inline int32_t* get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(int32_t value)
	{
		___type_1 = value;
	}

	inline static int32_t get_offset_of_lastNoiseSample_2() { return static_cast<int32_t>(offsetof(WaveForm_t667898749, ___lastNoiseSample_2)); }
	inline float get_lastNoiseSample_2() const { return ___lastNoiseSample_2; }
	inline float* get_address_of_lastNoiseSample_2() { return &___lastNoiseSample_2; }
	inline void set_lastNoiseSample_2(float value)
	{
		___lastNoiseSample_2 = value;
	}

	inline static int32_t get_offset_of_phaseControl_3() { return static_cast<int32_t>(offsetof(WaveForm_t667898749, ___phaseControl_3)); }
	inline float get_phaseControl_3() const { return ___phaseControl_3; }
	inline float* get_address_of_phaseControl_3() { return &___phaseControl_3; }
	inline void set_phaseControl_3(float value)
	{
		___phaseControl_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
