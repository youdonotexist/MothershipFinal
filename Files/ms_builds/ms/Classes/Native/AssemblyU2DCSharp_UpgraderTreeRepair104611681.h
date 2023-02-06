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
// UIGrid
struct UIGrid_t2503122938;
// System.Collections.Generic.List`1<UpgraderCircle>
struct List_1_t1795589983;

#include "AssemblyU2DCSharp_UpgradeTree4118264762.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UpgraderTreeRepair
struct  UpgraderTreeRepair_t104611681  : public UpgradeTree_t4118264762
{
public:
	// UpgraderCircle UpgraderTreeRepair::circlePrefab
	UpgraderCircle_t998631014 * ___circlePrefab_3;
	// UIGrid UpgraderTreeRepair::_grid
	UIGrid_t2503122938 * ____grid_4;
	// System.Collections.Generic.List`1<UpgraderCircle> UpgraderTreeRepair::_cachedCircles
	List_1_t1795589983 * ____cachedCircles_5;
	// System.Single UpgraderTreeRepair::mothershipHealth
	float ___mothershipHealth_6;
	// System.Single UpgraderTreeRepair::maxMothershipHealth
	float ___maxMothershipHealth_7;

public:
	inline static int32_t get_offset_of_circlePrefab_3() { return static_cast<int32_t>(offsetof(UpgraderTreeRepair_t104611681, ___circlePrefab_3)); }
	inline UpgraderCircle_t998631014 * get_circlePrefab_3() const { return ___circlePrefab_3; }
	inline UpgraderCircle_t998631014 ** get_address_of_circlePrefab_3() { return &___circlePrefab_3; }
	inline void set_circlePrefab_3(UpgraderCircle_t998631014 * value)
	{
		___circlePrefab_3 = value;
		Il2CppCodeGenWriteBarrier(&___circlePrefab_3, value);
	}

	inline static int32_t get_offset_of__grid_4() { return static_cast<int32_t>(offsetof(UpgraderTreeRepair_t104611681, ____grid_4)); }
	inline UIGrid_t2503122938 * get__grid_4() const { return ____grid_4; }
	inline UIGrid_t2503122938 ** get_address_of__grid_4() { return &____grid_4; }
	inline void set__grid_4(UIGrid_t2503122938 * value)
	{
		____grid_4 = value;
		Il2CppCodeGenWriteBarrier(&____grid_4, value);
	}

	inline static int32_t get_offset_of__cachedCircles_5() { return static_cast<int32_t>(offsetof(UpgraderTreeRepair_t104611681, ____cachedCircles_5)); }
	inline List_1_t1795589983 * get__cachedCircles_5() const { return ____cachedCircles_5; }
	inline List_1_t1795589983 ** get_address_of__cachedCircles_5() { return &____cachedCircles_5; }
	inline void set__cachedCircles_5(List_1_t1795589983 * value)
	{
		____cachedCircles_5 = value;
		Il2CppCodeGenWriteBarrier(&____cachedCircles_5, value);
	}

	inline static int32_t get_offset_of_mothershipHealth_6() { return static_cast<int32_t>(offsetof(UpgraderTreeRepair_t104611681, ___mothershipHealth_6)); }
	inline float get_mothershipHealth_6() const { return ___mothershipHealth_6; }
	inline float* get_address_of_mothershipHealth_6() { return &___mothershipHealth_6; }
	inline void set_mothershipHealth_6(float value)
	{
		___mothershipHealth_6 = value;
	}

	inline static int32_t get_offset_of_maxMothershipHealth_7() { return static_cast<int32_t>(offsetof(UpgraderTreeRepair_t104611681, ___maxMothershipHealth_7)); }
	inline float get_maxMothershipHealth_7() const { return ___maxMothershipHealth_7; }
	inline float* get_address_of_maxMothershipHealth_7() { return &___maxMothershipHealth_7; }
	inline void set_maxMothershipHealth_7(float value)
	{
		___maxMothershipHealth_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
