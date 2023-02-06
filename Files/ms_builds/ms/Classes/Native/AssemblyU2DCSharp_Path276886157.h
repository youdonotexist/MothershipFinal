#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<TimestampPoint>
struct List_1_t3069568819;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Path2
struct  Path2_t76886157  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<TimestampPoint> Path2::points
	List_1_t3069568819 * ___points_0;
	// System.Single Path2::distance
	float ___distance_1;
	// System.Int32 Path2::currentIndex
	int32_t ___currentIndex_2;

public:
	inline static int32_t get_offset_of_points_0() { return static_cast<int32_t>(offsetof(Path2_t76886157, ___points_0)); }
	inline List_1_t3069568819 * get_points_0() const { return ___points_0; }
	inline List_1_t3069568819 ** get_address_of_points_0() { return &___points_0; }
	inline void set_points_0(List_1_t3069568819 * value)
	{
		___points_0 = value;
		Il2CppCodeGenWriteBarrier(&___points_0, value);
	}

	inline static int32_t get_offset_of_distance_1() { return static_cast<int32_t>(offsetof(Path2_t76886157, ___distance_1)); }
	inline float get_distance_1() const { return ___distance_1; }
	inline float* get_address_of_distance_1() { return &___distance_1; }
	inline void set_distance_1(float value)
	{
		___distance_1 = value;
	}

	inline static int32_t get_offset_of_currentIndex_2() { return static_cast<int32_t>(offsetof(Path2_t76886157, ___currentIndex_2)); }
	inline int32_t get_currentIndex_2() const { return ___currentIndex_2; }
	inline int32_t* get_address_of_currentIndex_2() { return &___currentIndex_2; }
	inline void set_currentIndex_2(int32_t value)
	{
		___currentIndex_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
