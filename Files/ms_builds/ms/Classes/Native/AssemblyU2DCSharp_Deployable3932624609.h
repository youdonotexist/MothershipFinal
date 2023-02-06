#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// SpatialNode
struct SpatialNode_t3293136134;
// HeroAIManager
struct HeroAIManager_t825711499;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Deployable
struct  Deployable_t3932624609  : public MonoBehaviour_t3012272455
{
public:
	// SpatialNode Deployable::_node
	SpatialNode_t3293136134 * ____node_2;
	// HeroAIManager Deployable::_aiManager
	HeroAIManager_t825711499 * ____aiManager_3;

public:
	inline static int32_t get_offset_of__node_2() { return static_cast<int32_t>(offsetof(Deployable_t3932624609, ____node_2)); }
	inline SpatialNode_t3293136134 * get__node_2() const { return ____node_2; }
	inline SpatialNode_t3293136134 ** get_address_of__node_2() { return &____node_2; }
	inline void set__node_2(SpatialNode_t3293136134 * value)
	{
		____node_2 = value;
		Il2CppCodeGenWriteBarrier(&____node_2, value);
	}

	inline static int32_t get_offset_of__aiManager_3() { return static_cast<int32_t>(offsetof(Deployable_t3932624609, ____aiManager_3)); }
	inline HeroAIManager_t825711499 * get__aiManager_3() const { return ____aiManager_3; }
	inline HeroAIManager_t825711499 ** get_address_of__aiManager_3() { return &____aiManager_3; }
	inline void set__aiManager_3(HeroAIManager_t825711499 * value)
	{
		____aiManager_3 = value;
		Il2CppCodeGenWriteBarrier(&____aiManager_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
