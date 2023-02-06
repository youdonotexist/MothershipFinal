#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Object
struct Object_t3878351788;
struct Object_t3878351788_marshaled_pinvoke;
// HeroAIManager
struct HeroAIManager_t825711499;
// SpatialNode[]
struct SpatialNodeU5BU5D_t1480054819;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "AssemblyU2DCSharp_SpatialNode_SpatialNodeZone1151199698.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SpatialNode
struct  SpatialNode_t3293136134  : public MonoBehaviour_t3012272455
{
public:
	// System.Int32 SpatialNode::slot
	int32_t ___slot_2;
	// UnityEngine.Object SpatialNode::_object
	Object_t3878351788 * ____object_3;
	// HeroAIManager SpatialNode::_aiManager
	HeroAIManager_t825711499 * ____aiManager_4;
	// SpatialNode[] SpatialNode::_forward
	SpatialNodeU5BU5D_t1480054819* ____forward_5;
	// SpatialNode[] SpatialNode::_backward
	SpatialNodeU5BU5D_t1480054819* ____backward_6;
	// SpatialNode/SpatialNodeZone SpatialNode::_zone
	int32_t ____zone_7;

public:
	inline static int32_t get_offset_of_slot_2() { return static_cast<int32_t>(offsetof(SpatialNode_t3293136134, ___slot_2)); }
	inline int32_t get_slot_2() const { return ___slot_2; }
	inline int32_t* get_address_of_slot_2() { return &___slot_2; }
	inline void set_slot_2(int32_t value)
	{
		___slot_2 = value;
	}

	inline static int32_t get_offset_of__object_3() { return static_cast<int32_t>(offsetof(SpatialNode_t3293136134, ____object_3)); }
	inline Object_t3878351788 * get__object_3() const { return ____object_3; }
	inline Object_t3878351788 ** get_address_of__object_3() { return &____object_3; }
	inline void set__object_3(Object_t3878351788 * value)
	{
		____object_3 = value;
		Il2CppCodeGenWriteBarrier(&____object_3, value);
	}

	inline static int32_t get_offset_of__aiManager_4() { return static_cast<int32_t>(offsetof(SpatialNode_t3293136134, ____aiManager_4)); }
	inline HeroAIManager_t825711499 * get__aiManager_4() const { return ____aiManager_4; }
	inline HeroAIManager_t825711499 ** get_address_of__aiManager_4() { return &____aiManager_4; }
	inline void set__aiManager_4(HeroAIManager_t825711499 * value)
	{
		____aiManager_4 = value;
		Il2CppCodeGenWriteBarrier(&____aiManager_4, value);
	}

	inline static int32_t get_offset_of__forward_5() { return static_cast<int32_t>(offsetof(SpatialNode_t3293136134, ____forward_5)); }
	inline SpatialNodeU5BU5D_t1480054819* get__forward_5() const { return ____forward_5; }
	inline SpatialNodeU5BU5D_t1480054819** get_address_of__forward_5() { return &____forward_5; }
	inline void set__forward_5(SpatialNodeU5BU5D_t1480054819* value)
	{
		____forward_5 = value;
		Il2CppCodeGenWriteBarrier(&____forward_5, value);
	}

	inline static int32_t get_offset_of__backward_6() { return static_cast<int32_t>(offsetof(SpatialNode_t3293136134, ____backward_6)); }
	inline SpatialNodeU5BU5D_t1480054819* get__backward_6() const { return ____backward_6; }
	inline SpatialNodeU5BU5D_t1480054819** get_address_of__backward_6() { return &____backward_6; }
	inline void set__backward_6(SpatialNodeU5BU5D_t1480054819* value)
	{
		____backward_6 = value;
		Il2CppCodeGenWriteBarrier(&____backward_6, value);
	}

	inline static int32_t get_offset_of__zone_7() { return static_cast<int32_t>(offsetof(SpatialNode_t3293136134, ____zone_7)); }
	inline int32_t get__zone_7() const { return ____zone_7; }
	inline int32_t* get_address_of__zone_7() { return &____zone_7; }
	inline void set__zone_7(int32_t value)
	{
		____zone_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
