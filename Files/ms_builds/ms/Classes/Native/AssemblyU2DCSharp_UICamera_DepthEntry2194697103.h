#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t4012695102;

#include "mscorlib_System_ValueType4014882752.h"
#include "UnityEngine_UnityEngine_RaycastHit46221527.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UICamera/DepthEntry
struct  DepthEntry_t2194697103 
{
public:
	// System.Int32 UICamera/DepthEntry::depth
	int32_t ___depth_0;
	// UnityEngine.RaycastHit UICamera/DepthEntry::hit
	RaycastHit_t46221527  ___hit_1;
	// UnityEngine.Vector3 UICamera/DepthEntry::point
	Vector3_t3525329789  ___point_2;
	// UnityEngine.GameObject UICamera/DepthEntry::go
	GameObject_t4012695102 * ___go_3;

public:
	inline static int32_t get_offset_of_depth_0() { return static_cast<int32_t>(offsetof(DepthEntry_t2194697103, ___depth_0)); }
	inline int32_t get_depth_0() const { return ___depth_0; }
	inline int32_t* get_address_of_depth_0() { return &___depth_0; }
	inline void set_depth_0(int32_t value)
	{
		___depth_0 = value;
	}

	inline static int32_t get_offset_of_hit_1() { return static_cast<int32_t>(offsetof(DepthEntry_t2194697103, ___hit_1)); }
	inline RaycastHit_t46221527  get_hit_1() const { return ___hit_1; }
	inline RaycastHit_t46221527 * get_address_of_hit_1() { return &___hit_1; }
	inline void set_hit_1(RaycastHit_t46221527  value)
	{
		___hit_1 = value;
	}

	inline static int32_t get_offset_of_point_2() { return static_cast<int32_t>(offsetof(DepthEntry_t2194697103, ___point_2)); }
	inline Vector3_t3525329789  get_point_2() const { return ___point_2; }
	inline Vector3_t3525329789 * get_address_of_point_2() { return &___point_2; }
	inline void set_point_2(Vector3_t3525329789  value)
	{
		___point_2 = value;
	}

	inline static int32_t get_offset_of_go_3() { return static_cast<int32_t>(offsetof(DepthEntry_t2194697103, ___go_3)); }
	inline GameObject_t4012695102 * get_go_3() const { return ___go_3; }
	inline GameObject_t4012695102 ** get_address_of_go_3() { return &___go_3; }
	inline void set_go_3(GameObject_t4012695102 * value)
	{
		___go_3 = value;
		Il2CppCodeGenWriteBarrier(&___go_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
