#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// AIPath
struct AIPath_t1930792045;
// UnityEngine.Transform
struct Transform_t284553113;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "AssemblyU2DCSharp_AIPathNode_PATH_NODE_TYPE4128257981.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AIPathNode
struct  AIPathNode_t2610212879  : public MonoBehaviour_t3012272455
{
public:
	// AIPath AIPathNode::_parent
	AIPath_t1930792045 * ____parent_2;
	// UnityEngine.Transform AIPathNode::_transform
	Transform_t284553113 * ____transform_3;
	// AIPathNode/PATH_NODE_TYPE AIPathNode::_nodeType
	int32_t ____nodeType_4;

public:
	inline static int32_t get_offset_of__parent_2() { return static_cast<int32_t>(offsetof(AIPathNode_t2610212879, ____parent_2)); }
	inline AIPath_t1930792045 * get__parent_2() const { return ____parent_2; }
	inline AIPath_t1930792045 ** get_address_of__parent_2() { return &____parent_2; }
	inline void set__parent_2(AIPath_t1930792045 * value)
	{
		____parent_2 = value;
		Il2CppCodeGenWriteBarrier(&____parent_2, value);
	}

	inline static int32_t get_offset_of__transform_3() { return static_cast<int32_t>(offsetof(AIPathNode_t2610212879, ____transform_3)); }
	inline Transform_t284553113 * get__transform_3() const { return ____transform_3; }
	inline Transform_t284553113 ** get_address_of__transform_3() { return &____transform_3; }
	inline void set__transform_3(Transform_t284553113 * value)
	{
		____transform_3 = value;
		Il2CppCodeGenWriteBarrier(&____transform_3, value);
	}

	inline static int32_t get_offset_of__nodeType_4() { return static_cast<int32_t>(offsetof(AIPathNode_t2610212879, ____nodeType_4)); }
	inline int32_t get__nodeType_4() const { return ____nodeType_4; }
	inline int32_t* get_address_of__nodeType_4() { return &____nodeType_4; }
	inline void set__nodeType_4(int32_t value)
	{
		____nodeType_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
