#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// TimestampPoint
struct TimestampPoint_t2272609850;
// UnityEngine.AudioSource
struct AudioSource_t3628549054;

#include "AssemblyU2DCSharp_MinionBaseVehicle3259673765.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MinionVehicle
struct  MinionVehicle_t1974701494  : public MinionBaseVehicle_t3259673765
{
public:
	// System.Single MinionVehicle::lastPointTime
	float ___lastPointTime_13;
	// System.Single MinionVehicle::lastVelocity
	float ___lastVelocity_14;
	// UnityEngine.Vector3 MinionVehicle::lastForward
	Vector3_t3525329789  ___lastForward_15;
	// TimestampPoint MinionVehicle::fromPoint
	TimestampPoint_t2272609850 * ___fromPoint_16;
	// TimestampPoint MinionVehicle::goToPoint
	TimestampPoint_t2272609850 * ___goToPoint_17;
	// UnityEngine.AudioSource MinionVehicle::_audioSource
	AudioSource_t3628549054 * ____audioSource_18;

public:
	inline static int32_t get_offset_of_lastPointTime_13() { return static_cast<int32_t>(offsetof(MinionVehicle_t1974701494, ___lastPointTime_13)); }
	inline float get_lastPointTime_13() const { return ___lastPointTime_13; }
	inline float* get_address_of_lastPointTime_13() { return &___lastPointTime_13; }
	inline void set_lastPointTime_13(float value)
	{
		___lastPointTime_13 = value;
	}

	inline static int32_t get_offset_of_lastVelocity_14() { return static_cast<int32_t>(offsetof(MinionVehicle_t1974701494, ___lastVelocity_14)); }
	inline float get_lastVelocity_14() const { return ___lastVelocity_14; }
	inline float* get_address_of_lastVelocity_14() { return &___lastVelocity_14; }
	inline void set_lastVelocity_14(float value)
	{
		___lastVelocity_14 = value;
	}

	inline static int32_t get_offset_of_lastForward_15() { return static_cast<int32_t>(offsetof(MinionVehicle_t1974701494, ___lastForward_15)); }
	inline Vector3_t3525329789  get_lastForward_15() const { return ___lastForward_15; }
	inline Vector3_t3525329789 * get_address_of_lastForward_15() { return &___lastForward_15; }
	inline void set_lastForward_15(Vector3_t3525329789  value)
	{
		___lastForward_15 = value;
	}

	inline static int32_t get_offset_of_fromPoint_16() { return static_cast<int32_t>(offsetof(MinionVehicle_t1974701494, ___fromPoint_16)); }
	inline TimestampPoint_t2272609850 * get_fromPoint_16() const { return ___fromPoint_16; }
	inline TimestampPoint_t2272609850 ** get_address_of_fromPoint_16() { return &___fromPoint_16; }
	inline void set_fromPoint_16(TimestampPoint_t2272609850 * value)
	{
		___fromPoint_16 = value;
		Il2CppCodeGenWriteBarrier(&___fromPoint_16, value);
	}

	inline static int32_t get_offset_of_goToPoint_17() { return static_cast<int32_t>(offsetof(MinionVehicle_t1974701494, ___goToPoint_17)); }
	inline TimestampPoint_t2272609850 * get_goToPoint_17() const { return ___goToPoint_17; }
	inline TimestampPoint_t2272609850 ** get_address_of_goToPoint_17() { return &___goToPoint_17; }
	inline void set_goToPoint_17(TimestampPoint_t2272609850 * value)
	{
		___goToPoint_17 = value;
		Il2CppCodeGenWriteBarrier(&___goToPoint_17, value);
	}

	inline static int32_t get_offset_of__audioSource_18() { return static_cast<int32_t>(offsetof(MinionVehicle_t1974701494, ____audioSource_18)); }
	inline AudioSource_t3628549054 * get__audioSource_18() const { return ____audioSource_18; }
	inline AudioSource_t3628549054 ** get_address_of__audioSource_18() { return &____audioSource_18; }
	inline void set__audioSource_18(AudioSource_t3628549054 * value)
	{
		____audioSource_18 = value;
		Il2CppCodeGenWriteBarrier(&____audioSource_18, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
