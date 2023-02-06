#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UIButton[]
struct UIButtonU5BU5D_t2312321731;
// UILabel
struct UILabel_t291504320;
// UISprite
struct UISprite_t661437049;
// UpgradeTree
struct UpgradeTree_t4118264762;
// UpgraderTreeBase
struct UpgraderTreeBase_t495717285;
// UpgraderDetails
struct UpgraderDetails_t1667562348;
// UpgradeWireframe
struct UpgradeWireframe_t4293979500;
// System.Collections.Generic.List`1<UpgradeMenuItem>
struct List_1_t1885780007;
// PortState[]
struct PortStateU5BU5D_t296168401;
// ColliderOutline2D[]
struct ColliderOutline2DU5BU5D_t1640141345;

#include "AssemblyU2DCSharp_PostEncounterView3799458200.h"
#include "AssemblyU2DCSharp_PortState_MinionTypeDetails2901012274.h"
#include "AssemblyU2DCSharp_PortState_MinionTypeLevelDetail70250981.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Upgrader
struct  Upgrader_t1488260598  : public PostEncounterView_t3799458200
{
public:
	// UIButton[] Upgrader::componentButtons
	UIButtonU5BU5D_t2312321731* ___componentButtons_6;
	// UILabel Upgrader::scrapCount
	UILabel_t291504320 * ___scrapCount_7;
	// UISprite Upgrader::_nextPortraitSprite
	UISprite_t661437049 * ____nextPortraitSprite_8;
	// UpgradeTree Upgrader::_currentTree
	UpgradeTree_t4118264762 * ____currentTree_9;
	// UpgraderTreeBase Upgrader::baseTree
	UpgraderTreeBase_t495717285 * ___baseTree_10;
	// UpgraderDetails Upgrader::_details
	UpgraderDetails_t1667562348 * ____details_11;
	// UpgradeWireframe Upgrader::_wireframe
	UpgradeWireframe_t4293979500 * ____wireframe_12;
	// System.Int32 Upgrader::scrapMetal
	int32_t ___scrapMetal_13;
	// System.Int32 Upgrader::scrapTap
	int32_t ___scrapTap_14;
	// System.Collections.Generic.List`1<UpgradeMenuItem> Upgrader::_cachedMenuItems
	List_1_t1885780007 * ____cachedMenuItems_15;
	// System.Int32 Upgrader::currentPortIndex
	int32_t ___currentPortIndex_16;
	// PortState/MinionTypeDetails Upgrader::currentDetails
	MinionTypeDetails_t2901012274  ___currentDetails_17;
	// PortState/MinionTypeLevelDetail Upgrader::currentLevel
	MinionTypeLevelDetail_t70250981  ___currentLevel_18;
	// PortState[] Upgrader::portStates
	PortStateU5BU5D_t296168401* ___portStates_19;
	// ColliderOutline2D[] Upgrader::portOutlines
	ColliderOutline2DU5BU5D_t1640141345* ___portOutlines_20;

public:
	inline static int32_t get_offset_of_componentButtons_6() { return static_cast<int32_t>(offsetof(Upgrader_t1488260598, ___componentButtons_6)); }
	inline UIButtonU5BU5D_t2312321731* get_componentButtons_6() const { return ___componentButtons_6; }
	inline UIButtonU5BU5D_t2312321731** get_address_of_componentButtons_6() { return &___componentButtons_6; }
	inline void set_componentButtons_6(UIButtonU5BU5D_t2312321731* value)
	{
		___componentButtons_6 = value;
		Il2CppCodeGenWriteBarrier(&___componentButtons_6, value);
	}

	inline static int32_t get_offset_of_scrapCount_7() { return static_cast<int32_t>(offsetof(Upgrader_t1488260598, ___scrapCount_7)); }
	inline UILabel_t291504320 * get_scrapCount_7() const { return ___scrapCount_7; }
	inline UILabel_t291504320 ** get_address_of_scrapCount_7() { return &___scrapCount_7; }
	inline void set_scrapCount_7(UILabel_t291504320 * value)
	{
		___scrapCount_7 = value;
		Il2CppCodeGenWriteBarrier(&___scrapCount_7, value);
	}

	inline static int32_t get_offset_of__nextPortraitSprite_8() { return static_cast<int32_t>(offsetof(Upgrader_t1488260598, ____nextPortraitSprite_8)); }
	inline UISprite_t661437049 * get__nextPortraitSprite_8() const { return ____nextPortraitSprite_8; }
	inline UISprite_t661437049 ** get_address_of__nextPortraitSprite_8() { return &____nextPortraitSprite_8; }
	inline void set__nextPortraitSprite_8(UISprite_t661437049 * value)
	{
		____nextPortraitSprite_8 = value;
		Il2CppCodeGenWriteBarrier(&____nextPortraitSprite_8, value);
	}

	inline static int32_t get_offset_of__currentTree_9() { return static_cast<int32_t>(offsetof(Upgrader_t1488260598, ____currentTree_9)); }
	inline UpgradeTree_t4118264762 * get__currentTree_9() const { return ____currentTree_9; }
	inline UpgradeTree_t4118264762 ** get_address_of__currentTree_9() { return &____currentTree_9; }
	inline void set__currentTree_9(UpgradeTree_t4118264762 * value)
	{
		____currentTree_9 = value;
		Il2CppCodeGenWriteBarrier(&____currentTree_9, value);
	}

	inline static int32_t get_offset_of_baseTree_10() { return static_cast<int32_t>(offsetof(Upgrader_t1488260598, ___baseTree_10)); }
	inline UpgraderTreeBase_t495717285 * get_baseTree_10() const { return ___baseTree_10; }
	inline UpgraderTreeBase_t495717285 ** get_address_of_baseTree_10() { return &___baseTree_10; }
	inline void set_baseTree_10(UpgraderTreeBase_t495717285 * value)
	{
		___baseTree_10 = value;
		Il2CppCodeGenWriteBarrier(&___baseTree_10, value);
	}

	inline static int32_t get_offset_of__details_11() { return static_cast<int32_t>(offsetof(Upgrader_t1488260598, ____details_11)); }
	inline UpgraderDetails_t1667562348 * get__details_11() const { return ____details_11; }
	inline UpgraderDetails_t1667562348 ** get_address_of__details_11() { return &____details_11; }
	inline void set__details_11(UpgraderDetails_t1667562348 * value)
	{
		____details_11 = value;
		Il2CppCodeGenWriteBarrier(&____details_11, value);
	}

	inline static int32_t get_offset_of__wireframe_12() { return static_cast<int32_t>(offsetof(Upgrader_t1488260598, ____wireframe_12)); }
	inline UpgradeWireframe_t4293979500 * get__wireframe_12() const { return ____wireframe_12; }
	inline UpgradeWireframe_t4293979500 ** get_address_of__wireframe_12() { return &____wireframe_12; }
	inline void set__wireframe_12(UpgradeWireframe_t4293979500 * value)
	{
		____wireframe_12 = value;
		Il2CppCodeGenWriteBarrier(&____wireframe_12, value);
	}

	inline static int32_t get_offset_of_scrapMetal_13() { return static_cast<int32_t>(offsetof(Upgrader_t1488260598, ___scrapMetal_13)); }
	inline int32_t get_scrapMetal_13() const { return ___scrapMetal_13; }
	inline int32_t* get_address_of_scrapMetal_13() { return &___scrapMetal_13; }
	inline void set_scrapMetal_13(int32_t value)
	{
		___scrapMetal_13 = value;
	}

	inline static int32_t get_offset_of_scrapTap_14() { return static_cast<int32_t>(offsetof(Upgrader_t1488260598, ___scrapTap_14)); }
	inline int32_t get_scrapTap_14() const { return ___scrapTap_14; }
	inline int32_t* get_address_of_scrapTap_14() { return &___scrapTap_14; }
	inline void set_scrapTap_14(int32_t value)
	{
		___scrapTap_14 = value;
	}

	inline static int32_t get_offset_of__cachedMenuItems_15() { return static_cast<int32_t>(offsetof(Upgrader_t1488260598, ____cachedMenuItems_15)); }
	inline List_1_t1885780007 * get__cachedMenuItems_15() const { return ____cachedMenuItems_15; }
	inline List_1_t1885780007 ** get_address_of__cachedMenuItems_15() { return &____cachedMenuItems_15; }
	inline void set__cachedMenuItems_15(List_1_t1885780007 * value)
	{
		____cachedMenuItems_15 = value;
		Il2CppCodeGenWriteBarrier(&____cachedMenuItems_15, value);
	}

	inline static int32_t get_offset_of_currentPortIndex_16() { return static_cast<int32_t>(offsetof(Upgrader_t1488260598, ___currentPortIndex_16)); }
	inline int32_t get_currentPortIndex_16() const { return ___currentPortIndex_16; }
	inline int32_t* get_address_of_currentPortIndex_16() { return &___currentPortIndex_16; }
	inline void set_currentPortIndex_16(int32_t value)
	{
		___currentPortIndex_16 = value;
	}

	inline static int32_t get_offset_of_currentDetails_17() { return static_cast<int32_t>(offsetof(Upgrader_t1488260598, ___currentDetails_17)); }
	inline MinionTypeDetails_t2901012274  get_currentDetails_17() const { return ___currentDetails_17; }
	inline MinionTypeDetails_t2901012274 * get_address_of_currentDetails_17() { return &___currentDetails_17; }
	inline void set_currentDetails_17(MinionTypeDetails_t2901012274  value)
	{
		___currentDetails_17 = value;
	}

	inline static int32_t get_offset_of_currentLevel_18() { return static_cast<int32_t>(offsetof(Upgrader_t1488260598, ___currentLevel_18)); }
	inline MinionTypeLevelDetail_t70250981  get_currentLevel_18() const { return ___currentLevel_18; }
	inline MinionTypeLevelDetail_t70250981 * get_address_of_currentLevel_18() { return &___currentLevel_18; }
	inline void set_currentLevel_18(MinionTypeLevelDetail_t70250981  value)
	{
		___currentLevel_18 = value;
	}

	inline static int32_t get_offset_of_portStates_19() { return static_cast<int32_t>(offsetof(Upgrader_t1488260598, ___portStates_19)); }
	inline PortStateU5BU5D_t296168401* get_portStates_19() const { return ___portStates_19; }
	inline PortStateU5BU5D_t296168401** get_address_of_portStates_19() { return &___portStates_19; }
	inline void set_portStates_19(PortStateU5BU5D_t296168401* value)
	{
		___portStates_19 = value;
		Il2CppCodeGenWriteBarrier(&___portStates_19, value);
	}

	inline static int32_t get_offset_of_portOutlines_20() { return static_cast<int32_t>(offsetof(Upgrader_t1488260598, ___portOutlines_20)); }
	inline ColliderOutline2DU5BU5D_t1640141345* get_portOutlines_20() const { return ___portOutlines_20; }
	inline ColliderOutline2DU5BU5D_t1640141345** get_address_of_portOutlines_20() { return &___portOutlines_20; }
	inline void set_portOutlines_20(ColliderOutline2DU5BU5D_t1640141345* value)
	{
		___portOutlines_20 = value;
		Il2CppCodeGenWriteBarrier(&___portOutlines_20, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
