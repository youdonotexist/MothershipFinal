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

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_LayerMask1862190090.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ArmGrabber
struct  ArmGrabber_t3152484583  : public MonoBehaviour_t3012272455
{
public:
	// IKTest ArmGrabber::_arm
	IKTest_t2161795284 * ____arm_2;
	// UnityEngine.LayerMask ArmGrabber::GrabberLayer
	LayerMask_t1862190090  ___GrabberLayer_3;
	// UnityEngine.Transform ArmGrabber::currentTarget
	Transform_t284553113 * ___currentTarget_4;

public:
	inline static int32_t get_offset_of__arm_2() { return static_cast<int32_t>(offsetof(ArmGrabber_t3152484583, ____arm_2)); }
	inline IKTest_t2161795284 * get__arm_2() const { return ____arm_2; }
	inline IKTest_t2161795284 ** get_address_of__arm_2() { return &____arm_2; }
	inline void set__arm_2(IKTest_t2161795284 * value)
	{
		____arm_2 = value;
		Il2CppCodeGenWriteBarrier(&____arm_2, value);
	}

	inline static int32_t get_offset_of_GrabberLayer_3() { return static_cast<int32_t>(offsetof(ArmGrabber_t3152484583, ___GrabberLayer_3)); }
	inline LayerMask_t1862190090  get_GrabberLayer_3() const { return ___GrabberLayer_3; }
	inline LayerMask_t1862190090 * get_address_of_GrabberLayer_3() { return &___GrabberLayer_3; }
	inline void set_GrabberLayer_3(LayerMask_t1862190090  value)
	{
		___GrabberLayer_3 = value;
	}

	inline static int32_t get_offset_of_currentTarget_4() { return static_cast<int32_t>(offsetof(ArmGrabber_t3152484583, ___currentTarget_4)); }
	inline Transform_t284553113 * get_currentTarget_4() const { return ___currentTarget_4; }
	inline Transform_t284553113 ** get_address_of_currentTarget_4() { return &___currentTarget_4; }
	inline void set_currentTarget_4(Transform_t284553113 * value)
	{
		___currentTarget_4 = value;
		Il2CppCodeGenWriteBarrier(&___currentTarget_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
