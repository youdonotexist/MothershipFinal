#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Camera
struct Camera_t3533968274;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ECamera
struct  ECamera_t3119294410  : public Il2CppObject
{
public:
	// UnityEngine.Camera ECamera::camera
	Camera_t3533968274 * ___camera_0;
	// System.Boolean ECamera::guiCamera
	bool ___guiCamera_1;

public:
	inline static int32_t get_offset_of_camera_0() { return static_cast<int32_t>(offsetof(ECamera_t3119294410, ___camera_0)); }
	inline Camera_t3533968274 * get_camera_0() const { return ___camera_0; }
	inline Camera_t3533968274 ** get_address_of_camera_0() { return &___camera_0; }
	inline void set_camera_0(Camera_t3533968274 * value)
	{
		___camera_0 = value;
		Il2CppCodeGenWriteBarrier(&___camera_0, value);
	}

	inline static int32_t get_offset_of_guiCamera_1() { return static_cast<int32_t>(offsetof(ECamera_t3119294410, ___guiCamera_1)); }
	inline bool get_guiCamera_1() const { return ___guiCamera_1; }
	inline bool* get_address_of_guiCamera_1() { return &___guiCamera_1; }
	inline void set_guiCamera_1(bool value)
	{
		___guiCamera_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
