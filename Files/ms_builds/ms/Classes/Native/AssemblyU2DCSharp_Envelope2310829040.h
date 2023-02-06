#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Action
struct Action_t437523947;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Envelope
struct  Envelope_t2310829040  : public Il2CppObject
{
public:
	// System.Single Envelope::attackTime
	float ___attackTime_0;
	// System.Single Envelope::sustainTime
	float ___sustainTime_1;
	// System.Single Envelope::decayTime
	float ___decayTime_2;
	// System.Single Envelope::punch
	float ___punch_3;
	// System.Action Envelope::<TimeChangeEvent>k__BackingField
	Action_t437523947 * ___U3CTimeChangeEventU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_attackTime_0() { return static_cast<int32_t>(offsetof(Envelope_t2310829040, ___attackTime_0)); }
	inline float get_attackTime_0() const { return ___attackTime_0; }
	inline float* get_address_of_attackTime_0() { return &___attackTime_0; }
	inline void set_attackTime_0(float value)
	{
		___attackTime_0 = value;
	}

	inline static int32_t get_offset_of_sustainTime_1() { return static_cast<int32_t>(offsetof(Envelope_t2310829040, ___sustainTime_1)); }
	inline float get_sustainTime_1() const { return ___sustainTime_1; }
	inline float* get_address_of_sustainTime_1() { return &___sustainTime_1; }
	inline void set_sustainTime_1(float value)
	{
		___sustainTime_1 = value;
	}

	inline static int32_t get_offset_of_decayTime_2() { return static_cast<int32_t>(offsetof(Envelope_t2310829040, ___decayTime_2)); }
	inline float get_decayTime_2() const { return ___decayTime_2; }
	inline float* get_address_of_decayTime_2() { return &___decayTime_2; }
	inline void set_decayTime_2(float value)
	{
		___decayTime_2 = value;
	}

	inline static int32_t get_offset_of_punch_3() { return static_cast<int32_t>(offsetof(Envelope_t2310829040, ___punch_3)); }
	inline float get_punch_3() const { return ___punch_3; }
	inline float* get_address_of_punch_3() { return &___punch_3; }
	inline void set_punch_3(float value)
	{
		___punch_3 = value;
	}

	inline static int32_t get_offset_of_U3CTimeChangeEventU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Envelope_t2310829040, ___U3CTimeChangeEventU3Ek__BackingField_4)); }
	inline Action_t437523947 * get_U3CTimeChangeEventU3Ek__BackingField_4() const { return ___U3CTimeChangeEventU3Ek__BackingField_4; }
	inline Action_t437523947 ** get_address_of_U3CTimeChangeEventU3Ek__BackingField_4() { return &___U3CTimeChangeEventU3Ek__BackingField_4; }
	inline void set_U3CTimeChangeEventU3Ek__BackingField_4(Action_t437523947 * value)
	{
		___U3CTimeChangeEventU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier(&___U3CTimeChangeEventU3Ek__BackingField_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
