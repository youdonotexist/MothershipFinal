#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Asteroid
struct  Asteroid_t4014993627  : public MonoBehaviour_t3012272455
{
public:
	// System.Single Asteroid::spinSpeed
	float ___spinSpeed_2;
	// System.Single Asteroid::moveSpeed
	float ___moveSpeed_3;
	// UnityEngine.Vector2 Asteroid::speedRange
	Vector2_t3525329788  ___speedRange_4;

public:
	inline static int32_t get_offset_of_spinSpeed_2() { return static_cast<int32_t>(offsetof(Asteroid_t4014993627, ___spinSpeed_2)); }
	inline float get_spinSpeed_2() const { return ___spinSpeed_2; }
	inline float* get_address_of_spinSpeed_2() { return &___spinSpeed_2; }
	inline void set_spinSpeed_2(float value)
	{
		___spinSpeed_2 = value;
	}

	inline static int32_t get_offset_of_moveSpeed_3() { return static_cast<int32_t>(offsetof(Asteroid_t4014993627, ___moveSpeed_3)); }
	inline float get_moveSpeed_3() const { return ___moveSpeed_3; }
	inline float* get_address_of_moveSpeed_3() { return &___moveSpeed_3; }
	inline void set_moveSpeed_3(float value)
	{
		___moveSpeed_3 = value;
	}

	inline static int32_t get_offset_of_speedRange_4() { return static_cast<int32_t>(offsetof(Asteroid_t4014993627, ___speedRange_4)); }
	inline Vector2_t3525329788  get_speedRange_4() const { return ___speedRange_4; }
	inline Vector2_t3525329788 * get_address_of_speedRange_4() { return &___speedRange_4; }
	inline void set_speedRange_4(Vector2_t3525329788  value)
	{
		___speedRange_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
