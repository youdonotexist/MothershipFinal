#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Renderer
struct Renderer_t1092684080;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Background
struct  Background_t661270862  : public MonoBehaviour_t3012272455
{
public:
	// System.Single Background::layer0moveSpeed
	float ___layer0moveSpeed_2;
	// UnityEngine.Renderer Background::layer0Renderer
	Renderer_t1092684080 * ___layer0Renderer_3;
	// System.Int32 Background::state
	int32_t ___state_4;

public:
	inline static int32_t get_offset_of_layer0moveSpeed_2() { return static_cast<int32_t>(offsetof(Background_t661270862, ___layer0moveSpeed_2)); }
	inline float get_layer0moveSpeed_2() const { return ___layer0moveSpeed_2; }
	inline float* get_address_of_layer0moveSpeed_2() { return &___layer0moveSpeed_2; }
	inline void set_layer0moveSpeed_2(float value)
	{
		___layer0moveSpeed_2 = value;
	}

	inline static int32_t get_offset_of_layer0Renderer_3() { return static_cast<int32_t>(offsetof(Background_t661270862, ___layer0Renderer_3)); }
	inline Renderer_t1092684080 * get_layer0Renderer_3() const { return ___layer0Renderer_3; }
	inline Renderer_t1092684080 ** get_address_of_layer0Renderer_3() { return &___layer0Renderer_3; }
	inline void set_layer0Renderer_3(Renderer_t1092684080 * value)
	{
		___layer0Renderer_3 = value;
		Il2CppCodeGenWriteBarrier(&___layer0Renderer_3, value);
	}

	inline static int32_t get_offset_of_state_4() { return static_cast<int32_t>(offsetof(Background_t661270862, ___state_4)); }
	inline int32_t get_state_4() const { return ___state_4; }
	inline int32_t* get_address_of_state_4() { return &___state_4; }
	inline void set_state_4(int32_t value)
	{
		___state_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
