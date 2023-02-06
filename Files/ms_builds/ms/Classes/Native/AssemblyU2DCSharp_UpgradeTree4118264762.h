#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UpgraderCircle[]
struct UpgraderCircleU5BU5D_t3472139587;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UpgradeTree
struct  UpgradeTree_t4118264762  : public MonoBehaviour_t3012272455
{
public:
	// UpgraderCircle[] UpgradeTree::upgradeCircles
	UpgraderCircleU5BU5D_t3472139587* ___upgradeCircles_2;

public:
	inline static int32_t get_offset_of_upgradeCircles_2() { return static_cast<int32_t>(offsetof(UpgradeTree_t4118264762, ___upgradeCircles_2)); }
	inline UpgraderCircleU5BU5D_t3472139587* get_upgradeCircles_2() const { return ___upgradeCircles_2; }
	inline UpgraderCircleU5BU5D_t3472139587** get_address_of_upgradeCircles_2() { return &___upgradeCircles_2; }
	inline void set_upgradeCircles_2(UpgraderCircleU5BU5D_t3472139587* value)
	{
		___upgradeCircles_2 = value;
		Il2CppCodeGenWriteBarrier(&___upgradeCircles_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
