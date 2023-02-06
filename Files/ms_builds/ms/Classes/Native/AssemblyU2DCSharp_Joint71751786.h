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

// Joint
struct  Joint_t71751786  : public MonoBehaviour_t3012272455
{
public:
	// System.Int32 Joint::jointIndex
	int32_t ___jointIndex_2;
	// UnityEngine.Vector2 Joint::minMaxLimit
	Vector2_t3525329788  ___minMaxLimit_3;

public:
	inline static int32_t get_offset_of_jointIndex_2() { return static_cast<int32_t>(offsetof(Joint_t71751786, ___jointIndex_2)); }
	inline int32_t get_jointIndex_2() const { return ___jointIndex_2; }
	inline int32_t* get_address_of_jointIndex_2() { return &___jointIndex_2; }
	inline void set_jointIndex_2(int32_t value)
	{
		___jointIndex_2 = value;
	}

	inline static int32_t get_offset_of_minMaxLimit_3() { return static_cast<int32_t>(offsetof(Joint_t71751786, ___minMaxLimit_3)); }
	inline Vector2_t3525329788  get_minMaxLimit_3() const { return ___minMaxLimit_3; }
	inline Vector2_t3525329788 * get_address_of_minMaxLimit_3() { return &___minMaxLimit_3; }
	inline void set_minMaxLimit_3(Vector2_t3525329788  value)
	{
		___minMaxLimit_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
