#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// IKTest[]
struct IKTestU5BU5D_t723451229;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ArmManager
struct  ArmManager_t3707824593  : public MonoBehaviour_t3012272455
{
public:
	// IKTest[] ArmManager::arms
	IKTestU5BU5D_t723451229* ___arms_2;

public:
	inline static int32_t get_offset_of_arms_2() { return static_cast<int32_t>(offsetof(ArmManager_t3707824593, ___arms_2)); }
	inline IKTestU5BU5D_t723451229* get_arms_2() const { return ___arms_2; }
	inline IKTestU5BU5D_t723451229** get_address_of_arms_2() { return &___arms_2; }
	inline void set_arms_2(IKTestU5BU5D_t723451229* value)
	{
		___arms_2 = value;
		Il2CppCodeGenWriteBarrier(&___arms_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
