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
// UISprite
struct UISprite_t661437049;
// UIPanel
struct UIPanel_t295209936;
// EncounterSummary
struct EncounterSummary_t296676115;
// Upgrader
struct Upgrader_t1488260598;
// RepairView
struct RepairView_t4125236210;
// UpgraderDetailStat
struct UpgraderDetailStat_t2757325019;
// PostEncounterView[]
struct PostEncounterViewU5BU5D_t2375806217;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PostEncounterManager
struct  PostEncounterManager_t472244186  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.GameObject PostEncounterManager::rootContainer
	GameObject_t4012695102 * ___rootContainer_3;
	// UISprite PostEncounterManager::mainPanel
	UISprite_t661437049 * ___mainPanel_4;
	// UISprite PostEncounterManager::secondaryPanel
	UISprite_t661437049 * ___secondaryPanel_5;
	// UnityEngine.Vector3 PostEncounterManager::startPos
	Vector3_t3525329789  ___startPos_6;
	// UnityEngine.Vector3 PostEncounterManager::hiddenPos
	Vector3_t3525329789  ___hiddenPos_7;
	// UIPanel PostEncounterManager::_panel
	UIPanel_t295209936 * ____panel_8;
	// EncounterSummary PostEncounterManager::_summary
	EncounterSummary_t296676115 * ____summary_9;
	// Upgrader PostEncounterManager::_upgrader
	Upgrader_t1488260598 * ____upgrader_10;
	// RepairView PostEncounterManager::_repair
	RepairView_t4125236210 * ____repair_11;
	// UISprite PostEncounterManager::_background
	UISprite_t661437049 * ____background_12;
	// UpgraderDetailStat PostEncounterManager::statPrefab
	UpgraderDetailStat_t2757325019 * ___statPrefab_13;
	// PostEncounterView[] PostEncounterManager::screens
	PostEncounterViewU5BU5D_t2375806217* ___screens_14;
	// System.Int32 PostEncounterManager::screenIndex
	int32_t ___screenIndex_15;
	// UnityEngine.Vector3 PostEncounterManager::initPos
	Vector3_t3525329789  ___initPos_16;
	// System.Single PostEncounterManager::verticalHeight
	float ___verticalHeight_17;

public:
	inline static int32_t get_offset_of_rootContainer_3() { return static_cast<int32_t>(offsetof(PostEncounterManager_t472244186, ___rootContainer_3)); }
	inline GameObject_t4012695102 * get_rootContainer_3() const { return ___rootContainer_3; }
	inline GameObject_t4012695102 ** get_address_of_rootContainer_3() { return &___rootContainer_3; }
	inline void set_rootContainer_3(GameObject_t4012695102 * value)
	{
		___rootContainer_3 = value;
		Il2CppCodeGenWriteBarrier(&___rootContainer_3, value);
	}

	inline static int32_t get_offset_of_mainPanel_4() { return static_cast<int32_t>(offsetof(PostEncounterManager_t472244186, ___mainPanel_4)); }
	inline UISprite_t661437049 * get_mainPanel_4() const { return ___mainPanel_4; }
	inline UISprite_t661437049 ** get_address_of_mainPanel_4() { return &___mainPanel_4; }
	inline void set_mainPanel_4(UISprite_t661437049 * value)
	{
		___mainPanel_4 = value;
		Il2CppCodeGenWriteBarrier(&___mainPanel_4, value);
	}

	inline static int32_t get_offset_of_secondaryPanel_5() { return static_cast<int32_t>(offsetof(PostEncounterManager_t472244186, ___secondaryPanel_5)); }
	inline UISprite_t661437049 * get_secondaryPanel_5() const { return ___secondaryPanel_5; }
	inline UISprite_t661437049 ** get_address_of_secondaryPanel_5() { return &___secondaryPanel_5; }
	inline void set_secondaryPanel_5(UISprite_t661437049 * value)
	{
		___secondaryPanel_5 = value;
		Il2CppCodeGenWriteBarrier(&___secondaryPanel_5, value);
	}

	inline static int32_t get_offset_of_startPos_6() { return static_cast<int32_t>(offsetof(PostEncounterManager_t472244186, ___startPos_6)); }
	inline Vector3_t3525329789  get_startPos_6() const { return ___startPos_6; }
	inline Vector3_t3525329789 * get_address_of_startPos_6() { return &___startPos_6; }
	inline void set_startPos_6(Vector3_t3525329789  value)
	{
		___startPos_6 = value;
	}

	inline static int32_t get_offset_of_hiddenPos_7() { return static_cast<int32_t>(offsetof(PostEncounterManager_t472244186, ___hiddenPos_7)); }
	inline Vector3_t3525329789  get_hiddenPos_7() const { return ___hiddenPos_7; }
	inline Vector3_t3525329789 * get_address_of_hiddenPos_7() { return &___hiddenPos_7; }
	inline void set_hiddenPos_7(Vector3_t3525329789  value)
	{
		___hiddenPos_7 = value;
	}

	inline static int32_t get_offset_of__panel_8() { return static_cast<int32_t>(offsetof(PostEncounterManager_t472244186, ____panel_8)); }
	inline UIPanel_t295209936 * get__panel_8() const { return ____panel_8; }
	inline UIPanel_t295209936 ** get_address_of__panel_8() { return &____panel_8; }
	inline void set__panel_8(UIPanel_t295209936 * value)
	{
		____panel_8 = value;
		Il2CppCodeGenWriteBarrier(&____panel_8, value);
	}

	inline static int32_t get_offset_of__summary_9() { return static_cast<int32_t>(offsetof(PostEncounterManager_t472244186, ____summary_9)); }
	inline EncounterSummary_t296676115 * get__summary_9() const { return ____summary_9; }
	inline EncounterSummary_t296676115 ** get_address_of__summary_9() { return &____summary_9; }
	inline void set__summary_9(EncounterSummary_t296676115 * value)
	{
		____summary_9 = value;
		Il2CppCodeGenWriteBarrier(&____summary_9, value);
	}

	inline static int32_t get_offset_of__upgrader_10() { return static_cast<int32_t>(offsetof(PostEncounterManager_t472244186, ____upgrader_10)); }
	inline Upgrader_t1488260598 * get__upgrader_10() const { return ____upgrader_10; }
	inline Upgrader_t1488260598 ** get_address_of__upgrader_10() { return &____upgrader_10; }
	inline void set__upgrader_10(Upgrader_t1488260598 * value)
	{
		____upgrader_10 = value;
		Il2CppCodeGenWriteBarrier(&____upgrader_10, value);
	}

	inline static int32_t get_offset_of__repair_11() { return static_cast<int32_t>(offsetof(PostEncounterManager_t472244186, ____repair_11)); }
	inline RepairView_t4125236210 * get__repair_11() const { return ____repair_11; }
	inline RepairView_t4125236210 ** get_address_of__repair_11() { return &____repair_11; }
	inline void set__repair_11(RepairView_t4125236210 * value)
	{
		____repair_11 = value;
		Il2CppCodeGenWriteBarrier(&____repair_11, value);
	}

	inline static int32_t get_offset_of__background_12() { return static_cast<int32_t>(offsetof(PostEncounterManager_t472244186, ____background_12)); }
	inline UISprite_t661437049 * get__background_12() const { return ____background_12; }
	inline UISprite_t661437049 ** get_address_of__background_12() { return &____background_12; }
	inline void set__background_12(UISprite_t661437049 * value)
	{
		____background_12 = value;
		Il2CppCodeGenWriteBarrier(&____background_12, value);
	}

	inline static int32_t get_offset_of_statPrefab_13() { return static_cast<int32_t>(offsetof(PostEncounterManager_t472244186, ___statPrefab_13)); }
	inline UpgraderDetailStat_t2757325019 * get_statPrefab_13() const { return ___statPrefab_13; }
	inline UpgraderDetailStat_t2757325019 ** get_address_of_statPrefab_13() { return &___statPrefab_13; }
	inline void set_statPrefab_13(UpgraderDetailStat_t2757325019 * value)
	{
		___statPrefab_13 = value;
		Il2CppCodeGenWriteBarrier(&___statPrefab_13, value);
	}

	inline static int32_t get_offset_of_screens_14() { return static_cast<int32_t>(offsetof(PostEncounterManager_t472244186, ___screens_14)); }
	inline PostEncounterViewU5BU5D_t2375806217* get_screens_14() const { return ___screens_14; }
	inline PostEncounterViewU5BU5D_t2375806217** get_address_of_screens_14() { return &___screens_14; }
	inline void set_screens_14(PostEncounterViewU5BU5D_t2375806217* value)
	{
		___screens_14 = value;
		Il2CppCodeGenWriteBarrier(&___screens_14, value);
	}

	inline static int32_t get_offset_of_screenIndex_15() { return static_cast<int32_t>(offsetof(PostEncounterManager_t472244186, ___screenIndex_15)); }
	inline int32_t get_screenIndex_15() const { return ___screenIndex_15; }
	inline int32_t* get_address_of_screenIndex_15() { return &___screenIndex_15; }
	inline void set_screenIndex_15(int32_t value)
	{
		___screenIndex_15 = value;
	}

	inline static int32_t get_offset_of_initPos_16() { return static_cast<int32_t>(offsetof(PostEncounterManager_t472244186, ___initPos_16)); }
	inline Vector3_t3525329789  get_initPos_16() const { return ___initPos_16; }
	inline Vector3_t3525329789 * get_address_of_initPos_16() { return &___initPos_16; }
	inline void set_initPos_16(Vector3_t3525329789  value)
	{
		___initPos_16 = value;
	}

	inline static int32_t get_offset_of_verticalHeight_17() { return static_cast<int32_t>(offsetof(PostEncounterManager_t472244186, ___verticalHeight_17)); }
	inline float get_verticalHeight_17() const { return ___verticalHeight_17; }
	inline float* get_address_of_verticalHeight_17() { return &___verticalHeight_17; }
	inline void set_verticalHeight_17(float value)
	{
		___verticalHeight_17 = value;
	}
};

struct PostEncounterManager_t472244186_StaticFields
{
public:
	// System.Boolean PostEncounterManager::showingPostEncounter
	bool ___showingPostEncounter_2;

public:
	inline static int32_t get_offset_of_showingPostEncounter_2() { return static_cast<int32_t>(offsetof(PostEncounterManager_t472244186_StaticFields, ___showingPostEncounter_2)); }
	inline bool get_showingPostEncounter_2() const { return ___showingPostEncounter_2; }
	inline bool* get_address_of_showingPostEncounter_2() { return &___showingPostEncounter_2; }
	inline void set_showingPostEncounter_2(bool value)
	{
		___showingPostEncounter_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
