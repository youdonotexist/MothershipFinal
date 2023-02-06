#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// DragRigidbody
struct DragRigidbody_t2531437401;

#include "Boo_Lang_Boo_Lang_GenericGenerator_1_gen1905578860.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DragRigidbody/$DragObject$3
struct  U24DragObjectU243_t605040550  : public GenericGenerator_1_t1905578860
{
public:
	// System.Single DragRigidbody/$DragObject$3::$distance$10
	float ___U24distanceU2410_0;
	// DragRigidbody DragRigidbody/$DragObject$3::$self_$11
	DragRigidbody_t2531437401 * ___U24self_U2411_1;

public:
	inline static int32_t get_offset_of_U24distanceU2410_0() { return static_cast<int32_t>(offsetof(U24DragObjectU243_t605040550, ___U24distanceU2410_0)); }
	inline float get_U24distanceU2410_0() const { return ___U24distanceU2410_0; }
	inline float* get_address_of_U24distanceU2410_0() { return &___U24distanceU2410_0; }
	inline void set_U24distanceU2410_0(float value)
	{
		___U24distanceU2410_0 = value;
	}

	inline static int32_t get_offset_of_U24self_U2411_1() { return static_cast<int32_t>(offsetof(U24DragObjectU243_t605040550, ___U24self_U2411_1)); }
	inline DragRigidbody_t2531437401 * get_U24self_U2411_1() const { return ___U24self_U2411_1; }
	inline DragRigidbody_t2531437401 ** get_address_of_U24self_U2411_1() { return &___U24self_U2411_1; }
	inline void set_U24self_U2411_1(DragRigidbody_t2531437401 * value)
	{
		___U24self_U2411_1 = value;
		Il2CppCodeGenWriteBarrier(&___U24self_U2411_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
