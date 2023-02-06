#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// HeroConfig[]
struct HeroConfigU5BU5D_t3683245205;
// System.Action
struct Action_t437523947;

#include "AssemblyU2DCSharp_MissionManager3465239713.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WalkthroughMissionManager
struct  WalkthroughMissionManager_t2130911325  : public MissionManager_t3465239713
{
public:
	// HeroConfig[] WalkthroughMissionManager::heroList
	HeroConfigU5BU5D_t3683245205* ___heroList_44;
	// System.Int32 WalkthroughMissionManager::heroIndex
	int32_t ___heroIndex_45;
	// System.Boolean WalkthroughMissionManager::sawUpgradeMessage
	bool ___sawUpgradeMessage_46;
	// System.Boolean WalkthroughMissionManager::sawRepairMessage
	bool ___sawRepairMessage_47;
	// System.Boolean WalkthroughMissionManager::sawScrapMessage
	bool ___sawScrapMessage_48;
	// System.Int32 WalkthroughMissionManager::launchedMinions
	int32_t ___launchedMinions_49;

public:
	inline static int32_t get_offset_of_heroList_44() { return static_cast<int32_t>(offsetof(WalkthroughMissionManager_t2130911325, ___heroList_44)); }
	inline HeroConfigU5BU5D_t3683245205* get_heroList_44() const { return ___heroList_44; }
	inline HeroConfigU5BU5D_t3683245205** get_address_of_heroList_44() { return &___heroList_44; }
	inline void set_heroList_44(HeroConfigU5BU5D_t3683245205* value)
	{
		___heroList_44 = value;
		Il2CppCodeGenWriteBarrier(&___heroList_44, value);
	}

	inline static int32_t get_offset_of_heroIndex_45() { return static_cast<int32_t>(offsetof(WalkthroughMissionManager_t2130911325, ___heroIndex_45)); }
	inline int32_t get_heroIndex_45() const { return ___heroIndex_45; }
	inline int32_t* get_address_of_heroIndex_45() { return &___heroIndex_45; }
	inline void set_heroIndex_45(int32_t value)
	{
		___heroIndex_45 = value;
	}

	inline static int32_t get_offset_of_sawUpgradeMessage_46() { return static_cast<int32_t>(offsetof(WalkthroughMissionManager_t2130911325, ___sawUpgradeMessage_46)); }
	inline bool get_sawUpgradeMessage_46() const { return ___sawUpgradeMessage_46; }
	inline bool* get_address_of_sawUpgradeMessage_46() { return &___sawUpgradeMessage_46; }
	inline void set_sawUpgradeMessage_46(bool value)
	{
		___sawUpgradeMessage_46 = value;
	}

	inline static int32_t get_offset_of_sawRepairMessage_47() { return static_cast<int32_t>(offsetof(WalkthroughMissionManager_t2130911325, ___sawRepairMessage_47)); }
	inline bool get_sawRepairMessage_47() const { return ___sawRepairMessage_47; }
	inline bool* get_address_of_sawRepairMessage_47() { return &___sawRepairMessage_47; }
	inline void set_sawRepairMessage_47(bool value)
	{
		___sawRepairMessage_47 = value;
	}

	inline static int32_t get_offset_of_sawScrapMessage_48() { return static_cast<int32_t>(offsetof(WalkthroughMissionManager_t2130911325, ___sawScrapMessage_48)); }
	inline bool get_sawScrapMessage_48() const { return ___sawScrapMessage_48; }
	inline bool* get_address_of_sawScrapMessage_48() { return &___sawScrapMessage_48; }
	inline void set_sawScrapMessage_48(bool value)
	{
		___sawScrapMessage_48 = value;
	}

	inline static int32_t get_offset_of_launchedMinions_49() { return static_cast<int32_t>(offsetof(WalkthroughMissionManager_t2130911325, ___launchedMinions_49)); }
	inline int32_t get_launchedMinions_49() const { return ___launchedMinions_49; }
	inline int32_t* get_address_of_launchedMinions_49() { return &___launchedMinions_49; }
	inline void set_launchedMinions_49(int32_t value)
	{
		___launchedMinions_49 = value;
	}
};

struct WalkthroughMissionManager_t2130911325_StaticFields
{
public:
	// System.Action WalkthroughMissionManager::<>f__am$cache6
	Action_t437523947 * ___U3CU3Ef__amU24cache6_50;
	// System.Action WalkthroughMissionManager::<>f__am$cache7
	Action_t437523947 * ___U3CU3Ef__amU24cache7_51;
	// System.Action WalkthroughMissionManager::<>f__am$cache8
	Action_t437523947 * ___U3CU3Ef__amU24cache8_52;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache6_50() { return static_cast<int32_t>(offsetof(WalkthroughMissionManager_t2130911325_StaticFields, ___U3CU3Ef__amU24cache6_50)); }
	inline Action_t437523947 * get_U3CU3Ef__amU24cache6_50() const { return ___U3CU3Ef__amU24cache6_50; }
	inline Action_t437523947 ** get_address_of_U3CU3Ef__amU24cache6_50() { return &___U3CU3Ef__amU24cache6_50; }
	inline void set_U3CU3Ef__amU24cache6_50(Action_t437523947 * value)
	{
		___U3CU3Ef__amU24cache6_50 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache6_50, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache7_51() { return static_cast<int32_t>(offsetof(WalkthroughMissionManager_t2130911325_StaticFields, ___U3CU3Ef__amU24cache7_51)); }
	inline Action_t437523947 * get_U3CU3Ef__amU24cache7_51() const { return ___U3CU3Ef__amU24cache7_51; }
	inline Action_t437523947 ** get_address_of_U3CU3Ef__amU24cache7_51() { return &___U3CU3Ef__amU24cache7_51; }
	inline void set_U3CU3Ef__amU24cache7_51(Action_t437523947 * value)
	{
		___U3CU3Ef__amU24cache7_51 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache7_51, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache8_52() { return static_cast<int32_t>(offsetof(WalkthroughMissionManager_t2130911325_StaticFields, ___U3CU3Ef__amU24cache8_52)); }
	inline Action_t437523947 * get_U3CU3Ef__amU24cache8_52() const { return ___U3CU3Ef__amU24cache8_52; }
	inline Action_t437523947 ** get_address_of_U3CU3Ef__amU24cache8_52() { return &___U3CU3Ef__amU24cache8_52; }
	inline void set_U3CU3Ef__amU24cache8_52(Action_t437523947 * value)
	{
		___U3CU3Ef__amU24cache8_52 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache8_52, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
