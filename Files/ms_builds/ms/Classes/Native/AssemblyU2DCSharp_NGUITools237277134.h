#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioListener
struct AudioListener_t1735598807;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t3227571696;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NGUITools
struct  NGUITools_t237277134  : public Il2CppObject
{
public:

public:
};

struct NGUITools_t237277134_StaticFields
{
public:
	// UnityEngine.AudioListener NGUITools::mListener
	AudioListener_t1735598807 * ___mListener_0;
	// System.Boolean NGUITools::mLoaded
	bool ___mLoaded_1;
	// System.Single NGUITools::mGlobalVolume
	float ___mGlobalVolume_2;
	// UnityEngine.Vector3[] NGUITools::mSides
	Vector3U5BU5D_t3227571696* ___mSides_3;

public:
	inline static int32_t get_offset_of_mListener_0() { return static_cast<int32_t>(offsetof(NGUITools_t237277134_StaticFields, ___mListener_0)); }
	inline AudioListener_t1735598807 * get_mListener_0() const { return ___mListener_0; }
	inline AudioListener_t1735598807 ** get_address_of_mListener_0() { return &___mListener_0; }
	inline void set_mListener_0(AudioListener_t1735598807 * value)
	{
		___mListener_0 = value;
		Il2CppCodeGenWriteBarrier(&___mListener_0, value);
	}

	inline static int32_t get_offset_of_mLoaded_1() { return static_cast<int32_t>(offsetof(NGUITools_t237277134_StaticFields, ___mLoaded_1)); }
	inline bool get_mLoaded_1() const { return ___mLoaded_1; }
	inline bool* get_address_of_mLoaded_1() { return &___mLoaded_1; }
	inline void set_mLoaded_1(bool value)
	{
		___mLoaded_1 = value;
	}

	inline static int32_t get_offset_of_mGlobalVolume_2() { return static_cast<int32_t>(offsetof(NGUITools_t237277134_StaticFields, ___mGlobalVolume_2)); }
	inline float get_mGlobalVolume_2() const { return ___mGlobalVolume_2; }
	inline float* get_address_of_mGlobalVolume_2() { return &___mGlobalVolume_2; }
	inline void set_mGlobalVolume_2(float value)
	{
		___mGlobalVolume_2 = value;
	}

	inline static int32_t get_offset_of_mSides_3() { return static_cast<int32_t>(offsetof(NGUITools_t237277134_StaticFields, ___mSides_3)); }
	inline Vector3U5BU5D_t3227571696* get_mSides_3() const { return ___mSides_3; }
	inline Vector3U5BU5D_t3227571696** get_address_of_mSides_3() { return &___mSides_3; }
	inline void set_mSides_3(Vector3U5BU5D_t3227571696* value)
	{
		___mSides_3 = value;
		Il2CppCodeGenWriteBarrier(&___mSides_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
