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

#include "AssemblyU2DCSharp_UpgradeTree4118264762.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UpgraderTreeLevel
struct  UpgraderTreeLevel_t2491691312  : public UpgradeTree_t4118264762
{
public:
	// UpgraderCircle UpgraderTreeLevel::_level1
	UpgraderCircle_t998631014 * ____level1_3;
	// UpgraderCircle UpgraderTreeLevel::_level2
	UpgraderCircle_t998631014 * ____level2_4;
	// UpgraderCircle UpgraderTreeLevel::_level3
	UpgraderCircle_t998631014 * ____level3_5;
	// UpgraderCircle UpgraderTreeLevel::_downgrade
	UpgraderCircle_t998631014 * ____downgrade_6;

public:
	inline static int32_t get_offset_of__level1_3() { return static_cast<int32_t>(offsetof(UpgraderTreeLevel_t2491691312, ____level1_3)); }
	inline UpgraderCircle_t998631014 * get__level1_3() const { return ____level1_3; }
	inline UpgraderCircle_t998631014 ** get_address_of__level1_3() { return &____level1_3; }
	inline void set__level1_3(UpgraderCircle_t998631014 * value)
	{
		____level1_3 = value;
		Il2CppCodeGenWriteBarrier(&____level1_3, value);
	}

	inline static int32_t get_offset_of__level2_4() { return static_cast<int32_t>(offsetof(UpgraderTreeLevel_t2491691312, ____level2_4)); }
	inline UpgraderCircle_t998631014 * get__level2_4() const { return ____level2_4; }
	inline UpgraderCircle_t998631014 ** get_address_of__level2_4() { return &____level2_4; }
	inline void set__level2_4(UpgraderCircle_t998631014 * value)
	{
		____level2_4 = value;
		Il2CppCodeGenWriteBarrier(&____level2_4, value);
	}

	inline static int32_t get_offset_of__level3_5() { return static_cast<int32_t>(offsetof(UpgraderTreeLevel_t2491691312, ____level3_5)); }
	inline UpgraderCircle_t998631014 * get__level3_5() const { return ____level3_5; }
	inline UpgraderCircle_t998631014 ** get_address_of__level3_5() { return &____level3_5; }
	inline void set__level3_5(UpgraderCircle_t998631014 * value)
	{
		____level3_5 = value;
		Il2CppCodeGenWriteBarrier(&____level3_5, value);
	}

	inline static int32_t get_offset_of__downgrade_6() { return static_cast<int32_t>(offsetof(UpgraderTreeLevel_t2491691312, ____downgrade_6)); }
	inline UpgraderCircle_t998631014 * get__downgrade_6() const { return ____downgrade_6; }
	inline UpgraderCircle_t998631014 ** get_address_of__downgrade_6() { return &____downgrade_6; }
	inline void set__downgrade_6(UpgraderCircle_t998631014 * value)
	{
		____downgrade_6 = value;
		Il2CppCodeGenWriteBarrier(&____downgrade_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
