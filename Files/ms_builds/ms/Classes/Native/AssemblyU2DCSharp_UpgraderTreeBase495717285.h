#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UpgraderCircle
struct UpgraderCircle_t998631014;
// UpgraderCircle[]
struct UpgraderCircleU5BU5D_t3472139587;

#include "AssemblyU2DCSharp_UpgradeTree4118264762.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UpgraderTreeBase
struct  UpgraderTreeBase_t495717285  : public UpgradeTree_t4118264762
{
public:
	// UpgraderCircle UpgraderTreeBase::_center
	UpgraderCircle_t998631014 * ____center_3;
	// UpgraderCircle[] UpgraderTreeBase::_speedBranch
	UpgraderCircleU5BU5D_t3472139587* ____speedBranch_4;
	// UpgraderCircle[] UpgraderTreeBase::_2HitBranch
	UpgraderCircleU5BU5D_t3472139587* ____2HitBranch_5;
	// UpgraderCircle[] UpgraderTreeBase::_shieldBranch
	UpgraderCircleU5BU5D_t3472139587* ____shieldBranch_6;
	// UpgraderCircle[] UpgraderTreeBase::_splitBranch
	UpgraderCircleU5BU5D_t3472139587* ____splitBranch_7;

public:
	inline static int32_t get_offset_of__center_3() { return static_cast<int32_t>(offsetof(UpgraderTreeBase_t495717285, ____center_3)); }
	inline UpgraderCircle_t998631014 * get__center_3() const { return ____center_3; }
	inline UpgraderCircle_t998631014 ** get_address_of__center_3() { return &____center_3; }
	inline void set__center_3(UpgraderCircle_t998631014 * value)
	{
		____center_3 = value;
		Il2CppCodeGenWriteBarrier(&____center_3, value);
	}

	inline static int32_t get_offset_of__speedBranch_4() { return static_cast<int32_t>(offsetof(UpgraderTreeBase_t495717285, ____speedBranch_4)); }
	inline UpgraderCircleU5BU5D_t3472139587* get__speedBranch_4() const { return ____speedBranch_4; }
	inline UpgraderCircleU5BU5D_t3472139587** get_address_of__speedBranch_4() { return &____speedBranch_4; }
	inline void set__speedBranch_4(UpgraderCircleU5BU5D_t3472139587* value)
	{
		____speedBranch_4 = value;
		Il2CppCodeGenWriteBarrier(&____speedBranch_4, value);
	}

	inline static int32_t get_offset_of__2HitBranch_5() { return static_cast<int32_t>(offsetof(UpgraderTreeBase_t495717285, ____2HitBranch_5)); }
	inline UpgraderCircleU5BU5D_t3472139587* get__2HitBranch_5() const { return ____2HitBranch_5; }
	inline UpgraderCircleU5BU5D_t3472139587** get_address_of__2HitBranch_5() { return &____2HitBranch_5; }
	inline void set__2HitBranch_5(UpgraderCircleU5BU5D_t3472139587* value)
	{
		____2HitBranch_5 = value;
		Il2CppCodeGenWriteBarrier(&____2HitBranch_5, value);
	}

	inline static int32_t get_offset_of__shieldBranch_6() { return static_cast<int32_t>(offsetof(UpgraderTreeBase_t495717285, ____shieldBranch_6)); }
	inline UpgraderCircleU5BU5D_t3472139587* get__shieldBranch_6() const { return ____shieldBranch_6; }
	inline UpgraderCircleU5BU5D_t3472139587** get_address_of__shieldBranch_6() { return &____shieldBranch_6; }
	inline void set__shieldBranch_6(UpgraderCircleU5BU5D_t3472139587* value)
	{
		____shieldBranch_6 = value;
		Il2CppCodeGenWriteBarrier(&____shieldBranch_6, value);
	}

	inline static int32_t get_offset_of__splitBranch_7() { return static_cast<int32_t>(offsetof(UpgraderTreeBase_t495717285, ____splitBranch_7)); }
	inline UpgraderCircleU5BU5D_t3472139587* get__splitBranch_7() const { return ____splitBranch_7; }
	inline UpgraderCircleU5BU5D_t3472139587** get_address_of__splitBranch_7() { return &____splitBranch_7; }
	inline void set__splitBranch_7(UpgraderCircleU5BU5D_t3472139587* value)
	{
		____splitBranch_7 = value;
		Il2CppCodeGenWriteBarrier(&____splitBranch_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
