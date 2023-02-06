#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Object837106420.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TimestampPoint
struct  TimestampPoint_t2272609850  : public Il2CppObject
{
public:
	// UnityEngine.Vector3 TimestampPoint::point
	Vector3_t3525329789  ___point_0;
	// System.Single TimestampPoint::timestamp
	float ___timestamp_1;

public:
	inline static int32_t get_offset_of_point_0() { return static_cast<int32_t>(offsetof(TimestampPoint_t2272609850, ___point_0)); }
	inline Vector3_t3525329789  get_point_0() const { return ___point_0; }
	inline Vector3_t3525329789 * get_address_of_point_0() { return &___point_0; }
	inline void set_point_0(Vector3_t3525329789  value)
	{
		___point_0 = value;
	}

	inline static int32_t get_offset_of_timestamp_1() { return static_cast<int32_t>(offsetof(TimestampPoint_t2272609850, ___timestamp_1)); }
	inline float get_timestamp_1() const { return ___timestamp_1; }
	inline float* get_address_of_timestamp_1() { return &___timestamp_1; }
	inline void set_timestamp_1(float value)
	{
		___timestamp_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
