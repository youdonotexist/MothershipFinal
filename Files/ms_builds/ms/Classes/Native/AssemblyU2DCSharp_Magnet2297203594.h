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
// ArmGrabber
struct ArmGrabber_t3152484583;
// exSpriteAnimation
struct exSpriteAnimation_t1937626380;
// UnityEngine.Transform
struct Transform_t284553113;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_LayerMask1862190090.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Magnet
struct  Magnet_t2297203594  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.LayerMask Magnet::GrabberLayer
	LayerMask_t1862190090  ___GrabberLayer_2;
	// IKTest Magnet::_ikTest
	IKTest_t2161795284 * ____ikTest_3;
	// ArmGrabber Magnet::_grabberZone
	ArmGrabber_t3152484583 * ____grabberZone_4;
	// exSpriteAnimation Magnet::_animation
	exSpriteAnimation_t1937626380 * ____animation_5;
	// UnityEngine.Transform Magnet::current
	Transform_t284553113 * ___current_6;

public:
	inline static int32_t get_offset_of_GrabberLayer_2() { return static_cast<int32_t>(offsetof(Magnet_t2297203594, ___GrabberLayer_2)); }
	inline LayerMask_t1862190090  get_GrabberLayer_2() const { return ___GrabberLayer_2; }
	inline LayerMask_t1862190090 * get_address_of_GrabberLayer_2() { return &___GrabberLayer_2; }
	inline void set_GrabberLayer_2(LayerMask_t1862190090  value)
	{
		___GrabberLayer_2 = value;
	}

	inline static int32_t get_offset_of__ikTest_3() { return static_cast<int32_t>(offsetof(Magnet_t2297203594, ____ikTest_3)); }
	inline IKTest_t2161795284 * get__ikTest_3() const { return ____ikTest_3; }
	inline IKTest_t2161795284 ** get_address_of__ikTest_3() { return &____ikTest_3; }
	inline void set__ikTest_3(IKTest_t2161795284 * value)
	{
		____ikTest_3 = value;
		Il2CppCodeGenWriteBarrier(&____ikTest_3, value);
	}

	inline static int32_t get_offset_of__grabberZone_4() { return static_cast<int32_t>(offsetof(Magnet_t2297203594, ____grabberZone_4)); }
	inline ArmGrabber_t3152484583 * get__grabberZone_4() const { return ____grabberZone_4; }
	inline ArmGrabber_t3152484583 ** get_address_of__grabberZone_4() { return &____grabberZone_4; }
	inline void set__grabberZone_4(ArmGrabber_t3152484583 * value)
	{
		____grabberZone_4 = value;
		Il2CppCodeGenWriteBarrier(&____grabberZone_4, value);
	}

	inline static int32_t get_offset_of__animation_5() { return static_cast<int32_t>(offsetof(Magnet_t2297203594, ____animation_5)); }
	inline exSpriteAnimation_t1937626380 * get__animation_5() const { return ____animation_5; }
	inline exSpriteAnimation_t1937626380 ** get_address_of__animation_5() { return &____animation_5; }
	inline void set__animation_5(exSpriteAnimation_t1937626380 * value)
	{
		____animation_5 = value;
		Il2CppCodeGenWriteBarrier(&____animation_5, value);
	}

	inline static int32_t get_offset_of_current_6() { return static_cast<int32_t>(offsetof(Magnet_t2297203594, ___current_6)); }
	inline Transform_t284553113 * get_current_6() const { return ___current_6; }
	inline Transform_t284553113 ** get_address_of_current_6() { return &___current_6; }
	inline void set_current_6(Transform_t284553113 * value)
	{
		___current_6 = value;
		Il2CppCodeGenWriteBarrier(&___current_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
