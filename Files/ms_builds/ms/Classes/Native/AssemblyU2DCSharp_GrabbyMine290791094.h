#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// IKTest
struct IKTest_t2161795284;
// UnityEngine.Transform
struct Transform_t284553113;

#include "AssemblyU2DCSharp_Mine2398323.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GrabbyMine
struct  GrabbyMine_t290791094  : public Mine_t2398323
{
public:
	// IKTest GrabbyMine::arm
	IKTest_t2161795284 * ___arm_10;
	// System.Boolean GrabbyMine::haveTarget
	bool ___haveTarget_11;
	// System.Single GrabbyMine::waitForRelease
	float ___waitForRelease_12;
	// UnityEngine.Vector3 GrabbyMine::lastPosition
	Vector3_t3525329789  ___lastPosition_13;
	// UnityEngine.Transform GrabbyMine::mothership
	Transform_t284553113 * ___mothership_14;

public:
	inline static int32_t get_offset_of_arm_10() { return static_cast<int32_t>(offsetof(GrabbyMine_t290791094, ___arm_10)); }
	inline IKTest_t2161795284 * get_arm_10() const { return ___arm_10; }
	inline IKTest_t2161795284 ** get_address_of_arm_10() { return &___arm_10; }
	inline void set_arm_10(IKTest_t2161795284 * value)
	{
		___arm_10 = value;
		Il2CppCodeGenWriteBarrier(&___arm_10, value);
	}

	inline static int32_t get_offset_of_haveTarget_11() { return static_cast<int32_t>(offsetof(GrabbyMine_t290791094, ___haveTarget_11)); }
	inline bool get_haveTarget_11() const { return ___haveTarget_11; }
	inline bool* get_address_of_haveTarget_11() { return &___haveTarget_11; }
	inline void set_haveTarget_11(bool value)
	{
		___haveTarget_11 = value;
	}

	inline static int32_t get_offset_of_waitForRelease_12() { return static_cast<int32_t>(offsetof(GrabbyMine_t290791094, ___waitForRelease_12)); }
	inline float get_waitForRelease_12() const { return ___waitForRelease_12; }
	inline float* get_address_of_waitForRelease_12() { return &___waitForRelease_12; }
	inline void set_waitForRelease_12(float value)
	{
		___waitForRelease_12 = value;
	}

	inline static int32_t get_offset_of_lastPosition_13() { return static_cast<int32_t>(offsetof(GrabbyMine_t290791094, ___lastPosition_13)); }
	inline Vector3_t3525329789  get_lastPosition_13() const { return ___lastPosition_13; }
	inline Vector3_t3525329789 * get_address_of_lastPosition_13() { return &___lastPosition_13; }
	inline void set_lastPosition_13(Vector3_t3525329789  value)
	{
		___lastPosition_13 = value;
	}

	inline static int32_t get_offset_of_mothership_14() { return static_cast<int32_t>(offsetof(GrabbyMine_t290791094, ___mothership_14)); }
	inline Transform_t284553113 * get_mothership_14() const { return ___mothership_14; }
	inline Transform_t284553113 ** get_address_of_mothership_14() { return &___mothership_14; }
	inline void set_mothership_14(Transform_t284553113 * value)
	{
		___mothership_14 = value;
		Il2CppCodeGenWriteBarrier(&___mothership_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
