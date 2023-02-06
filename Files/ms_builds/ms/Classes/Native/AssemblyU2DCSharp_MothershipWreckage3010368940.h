#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform[]
struct TransformU5BU5D_t3681339876;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MothershipWreckage
struct  MothershipWreckage_t3010368940  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Transform[] MothershipWreckage::wreckageParts
	TransformU5BU5D_t3681339876* ___wreckageParts_2;

public:
	inline static int32_t get_offset_of_wreckageParts_2() { return static_cast<int32_t>(offsetof(MothershipWreckage_t3010368940, ___wreckageParts_2)); }
	inline TransformU5BU5D_t3681339876* get_wreckageParts_2() const { return ___wreckageParts_2; }
	inline TransformU5BU5D_t3681339876** get_address_of_wreckageParts_2() { return &___wreckageParts_2; }
	inline void set_wreckageParts_2(TransformU5BU5D_t3681339876* value)
	{
		___wreckageParts_2 = value;
		Il2CppCodeGenWriteBarrier(&___wreckageParts_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
