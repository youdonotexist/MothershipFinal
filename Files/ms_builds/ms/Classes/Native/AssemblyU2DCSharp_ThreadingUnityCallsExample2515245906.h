#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ThreadingUnityCallsExample
struct  ThreadingUnityCallsExample_t2515245906  : public MonoBehaviour_t3012272455
{
public:
	// System.Boolean ThreadingUnityCallsExample::isCalculating
	bool ___isCalculating_2;
	// System.Single ThreadingUnityCallsExample::startTime
	float ___startTime_3;
	// System.Int32 ThreadingUnityCallsExample::createdElements
	int32_t ___createdElements_4;

public:
	inline static int32_t get_offset_of_isCalculating_2() { return static_cast<int32_t>(offsetof(ThreadingUnityCallsExample_t2515245906, ___isCalculating_2)); }
	inline bool get_isCalculating_2() const { return ___isCalculating_2; }
	inline bool* get_address_of_isCalculating_2() { return &___isCalculating_2; }
	inline void set_isCalculating_2(bool value)
	{
		___isCalculating_2 = value;
	}

	inline static int32_t get_offset_of_startTime_3() { return static_cast<int32_t>(offsetof(ThreadingUnityCallsExample_t2515245906, ___startTime_3)); }
	inline float get_startTime_3() const { return ___startTime_3; }
	inline float* get_address_of_startTime_3() { return &___startTime_3; }
	inline void set_startTime_3(float value)
	{
		___startTime_3 = value;
	}

	inline static int32_t get_offset_of_createdElements_4() { return static_cast<int32_t>(offsetof(ThreadingUnityCallsExample_t2515245906, ___createdElements_4)); }
	inline int32_t get_createdElements_4() const { return ___createdElements_4; }
	inline int32_t* get_address_of_createdElements_4() { return &___createdElements_4; }
	inline void set_createdElements_4(int32_t value)
	{
		___createdElements_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
