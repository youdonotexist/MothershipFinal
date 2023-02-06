#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "AssemblyU2DCSharp_Singleton_1_gen3968408290.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CameraShake
struct  CameraShake_t3715592897  : public Singleton_1_t3968408290
{
public:
	// System.Single CameraShake::magnitude
	float ___magnitude_5;
	// System.Single CameraShake::duration
	float ___duration_6;
	// UnityEngine.Vector3 CameraShake::originalCamPos
	Vector3_t3525329789  ___originalCamPos_7;

public:
	inline static int32_t get_offset_of_magnitude_5() { return static_cast<int32_t>(offsetof(CameraShake_t3715592897, ___magnitude_5)); }
	inline float get_magnitude_5() const { return ___magnitude_5; }
	inline float* get_address_of_magnitude_5() { return &___magnitude_5; }
	inline void set_magnitude_5(float value)
	{
		___magnitude_5 = value;
	}

	inline static int32_t get_offset_of_duration_6() { return static_cast<int32_t>(offsetof(CameraShake_t3715592897, ___duration_6)); }
	inline float get_duration_6() const { return ___duration_6; }
	inline float* get_address_of_duration_6() { return &___duration_6; }
	inline void set_duration_6(float value)
	{
		___duration_6 = value;
	}

	inline static int32_t get_offset_of_originalCamPos_7() { return static_cast<int32_t>(offsetof(CameraShake_t3715592897, ___originalCamPos_7)); }
	inline Vector3_t3525329789  get_originalCamPos_7() const { return ___originalCamPos_7; }
	inline Vector3_t3525329789 * get_address_of_originalCamPos_7() { return &___originalCamPos_7; }
	inline void set_originalCamPos_7(Vector3_t3525329789  value)
	{
		___originalCamPos_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
