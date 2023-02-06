#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t4012695102;

#include "AssemblyU2DCSharp_UIDragDropItem2087865514.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExampleDragDropItem
struct  ExampleDragDropItem_t1551469152  : public UIDragDropItem_t2087865514
{
public:
	// UnityEngine.GameObject ExampleDragDropItem::prefab
	GameObject_t4012695102 * ___prefab_18;

public:
	inline static int32_t get_offset_of_prefab_18() { return static_cast<int32_t>(offsetof(ExampleDragDropItem_t1551469152, ___prefab_18)); }
	inline GameObject_t4012695102 * get_prefab_18() const { return ___prefab_18; }
	inline GameObject_t4012695102 ** get_address_of_prefab_18() { return &___prefab_18; }
	inline void set_prefab_18(GameObject_t4012695102 * value)
	{
		___prefab_18 = value;
		Il2CppCodeGenWriteBarrier(&___prefab_18, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
