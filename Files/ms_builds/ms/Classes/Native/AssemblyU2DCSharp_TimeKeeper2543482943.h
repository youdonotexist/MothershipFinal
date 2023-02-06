#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// TimeKeeper
struct TimeKeeper_t2543482943;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TimeKeeper
struct  TimeKeeper_t2543482943  : public MonoBehaviour_t3012272455
{
public:
	// System.Single TimeKeeper::deltaTime
	float ___deltaTime_2;
	// System.Single TimeKeeper::lastTime
	float ___lastTime_3;

public:
	inline static int32_t get_offset_of_deltaTime_2() { return static_cast<int32_t>(offsetof(TimeKeeper_t2543482943, ___deltaTime_2)); }
	inline float get_deltaTime_2() const { return ___deltaTime_2; }
	inline float* get_address_of_deltaTime_2() { return &___deltaTime_2; }
	inline void set_deltaTime_2(float value)
	{
		___deltaTime_2 = value;
	}

	inline static int32_t get_offset_of_lastTime_3() { return static_cast<int32_t>(offsetof(TimeKeeper_t2543482943, ___lastTime_3)); }
	inline float get_lastTime_3() const { return ___lastTime_3; }
	inline float* get_address_of_lastTime_3() { return &___lastTime_3; }
	inline void set_lastTime_3(float value)
	{
		___lastTime_3 = value;
	}
};

struct TimeKeeper_t2543482943_StaticFields
{
public:
	// TimeKeeper TimeKeeper::_instance
	TimeKeeper_t2543482943 * ____instance_4;

public:
	inline static int32_t get_offset_of__instance_4() { return static_cast<int32_t>(offsetof(TimeKeeper_t2543482943_StaticFields, ____instance_4)); }
	inline TimeKeeper_t2543482943 * get__instance_4() const { return ____instance_4; }
	inline TimeKeeper_t2543482943 ** get_address_of__instance_4() { return &____instance_4; }
	inline void set__instance_4(TimeKeeper_t2543482943 * value)
	{
		____instance_4 = value;
		Il2CppCodeGenWriteBarrier(&____instance_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
