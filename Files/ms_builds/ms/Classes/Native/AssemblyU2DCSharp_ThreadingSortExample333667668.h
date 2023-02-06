#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Random
struct Random_t922188920;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ThreadingSortExample
struct  ThreadingSortExample_t333667668  : public MonoBehaviour_t3012272455
{
public:
	// System.Boolean ThreadingSortExample::isCalculating
	bool ___isCalculating_2;
	// System.Random ThreadingSortExample::random
	Random_t922188920 * ___random_3;
	// System.Int32 ThreadingSortExample::sortedArrays
	int32_t ___sortedArrays_4;
	// System.Single ThreadingSortExample::startTime
	float ___startTime_5;

public:
	inline static int32_t get_offset_of_isCalculating_2() { return static_cast<int32_t>(offsetof(ThreadingSortExample_t333667668, ___isCalculating_2)); }
	inline bool get_isCalculating_2() const { return ___isCalculating_2; }
	inline bool* get_address_of_isCalculating_2() { return &___isCalculating_2; }
	inline void set_isCalculating_2(bool value)
	{
		___isCalculating_2 = value;
	}

	inline static int32_t get_offset_of_random_3() { return static_cast<int32_t>(offsetof(ThreadingSortExample_t333667668, ___random_3)); }
	inline Random_t922188920 * get_random_3() const { return ___random_3; }
	inline Random_t922188920 ** get_address_of_random_3() { return &___random_3; }
	inline void set_random_3(Random_t922188920 * value)
	{
		___random_3 = value;
		Il2CppCodeGenWriteBarrier(&___random_3, value);
	}

	inline static int32_t get_offset_of_sortedArrays_4() { return static_cast<int32_t>(offsetof(ThreadingSortExample_t333667668, ___sortedArrays_4)); }
	inline int32_t get_sortedArrays_4() const { return ___sortedArrays_4; }
	inline int32_t* get_address_of_sortedArrays_4() { return &___sortedArrays_4; }
	inline void set_sortedArrays_4(int32_t value)
	{
		___sortedArrays_4 = value;
	}

	inline static int32_t get_offset_of_startTime_5() { return static_cast<int32_t>(offsetof(ThreadingSortExample_t333667668, ___startTime_5)); }
	inline float get_startTime_5() const { return ___startTime_5; }
	inline float* get_address_of_startTime_5() { return &___startTime_5; }
	inline void set_startTime_5(float value)
	{
		___startTime_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
