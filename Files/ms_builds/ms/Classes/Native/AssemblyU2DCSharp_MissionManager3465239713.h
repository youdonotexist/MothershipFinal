#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// CurtainHelper
struct CurtainHelper_t4100984000;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// UnityEngine.AudioClip
struct AudioClip_t3714538611;
// UnityEngine.Texture2D
struct Texture2D_t2509538522;
// AsteroidField[]
struct AsteroidFieldU5BU5D_t2518584518;
// InGameMenu
struct InGameMenu_t4173128918;
// MothershipVehicle
struct MothershipVehicle_t3966619277;
// HeroAIManager
struct HeroAIManager_t825711499;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t3644373756;
// HeroConfig[]
struct HeroConfigU5BU5D_t3683245205;
// System.Collections.Hashtable
struct Hashtable_t3875263730;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MissionManager
struct  MissionManager_t3465239713  : public MonoBehaviour_t3012272455
{
public:
	// CurtainHelper MissionManager::_curtainHelper
	CurtainHelper_t4100984000 * ____curtainHelper_3;
	// UnityEngine.GameObject MissionManager::basicHeroPrefab
	GameObject_t4012695102 * ___basicHeroPrefab_4;
	// UnityEngine.GameObject MissionManager::juggernautHeroPrefab
	GameObject_t4012695102 * ___juggernautHeroPrefab_5;
	// UnityEngine.GameObject MissionManager::scientistHeroPrefab
	GameObject_t4012695102 * ___scientistHeroPrefab_6;
	// UnityEngine.GameObject MissionManager::basicHeroFinalPrefab
	GameObject_t4012695102 * ___basicHeroFinalPrefab_7;
	// UnityEngine.GameObject MissionManager::juggernautHeroFinalPrefab
	GameObject_t4012695102 * ___juggernautHeroFinalPrefab_8;
	// UnityEngine.GameObject MissionManager::scientistHeroFinalPrefab
	GameObject_t4012695102 * ___scientistHeroFinalPrefab_9;
	// UnityEngine.GameObject MissionManager::finalBossPrefab
	GameObject_t4012695102 * ___finalBossPrefab_10;
	// System.String MissionManager::heroType
	String_t* ___heroType_11;
	// System.String MissionManager::currentEncounterId
	String_t* ___currentEncounterId_12;
	// UnityEngine.GameObject MissionManager::healthPrefab
	GameObject_t4012695102 * ___healthPrefab_13;
	// UnityEngine.GameObject MissionManager::scrapPrefab
	GameObject_t4012695102 * ___scrapPrefab_14;
	// UnityEngine.GameObject MissionManager::mothershipExplosionPrefab
	GameObject_t4012695102 * ___mothershipExplosionPrefab_15;
	// UnityEngine.GameObject MissionManager::mothershipWreckagePrefab
	GameObject_t4012695102 * ___mothershipWreckagePrefab_16;
	// UnityEngine.GameObject MissionManager::offscreen
	GameObject_t4012695102 * ___offscreen_17;
	// UnityEngine.GameObject MissionManager::offscreenWin
	GameObject_t4012695102 * ___offscreenWin_18;
	// UnityEngine.GameObject MissionManager::offscreenLose
	GameObject_t4012695102 * ___offscreenLose_19;
	// UnityEngine.GameObject MissionManager::healthSpawn
	GameObject_t4012695102 * ___healthSpawn_20;
	// UnityEngine.AudioClip MissionManager::music1prefab
	AudioClip_t3714538611 * ___music1prefab_21;
	// UnityEngine.AudioClip MissionManager::music2prefab
	AudioClip_t3714538611 * ___music2prefab_22;
	// UnityEngine.AudioClip MissionManager::winMusic
	AudioClip_t3714538611 * ___winMusic_23;
	// UnityEngine.AudioClip MissionManager::loseMusic
	AudioClip_t3714538611 * ___loseMusic_24;
	// UnityEngine.Texture2D MissionManager::defaultPortrait
	Texture2D_t2509538522 * ___defaultPortrait_25;
	// AsteroidField[] MissionManager::asteroids
	AsteroidFieldU5BU5D_t2518584518* ___asteroids_26;
	// InGameMenu MissionManager::_gameMenu
	InGameMenu_t4173128918 * ____gameMenu_27;
	// UnityEngine.GameObject MissionManager::currentHeroObject
	GameObject_t4012695102 * ___currentHeroObject_28;
	// System.Boolean MissionManager::needsUpgraderDialogDisplay
	bool ___needsUpgraderDialogDisplay_29;
	// MothershipVehicle MissionManager::_mothershipVehicle
	MothershipVehicle_t3966619277 * ____mothershipVehicle_30;
	// HeroAIManager MissionManager::_manager
	HeroAIManager_t825711499 * ____manager_31;
	// System.Int32 MissionManager::currentHero
	int32_t ___currentHero_32;
	// System.Int32 MissionManager::launchedMinions
	int32_t ___launchedMinions_33;
	// System.Collections.Generic.List`1<System.Int32> MissionManager::scrapDistribution
	List_1_t3644373756 * ___scrapDistribution_34;
	// HeroConfig[] MissionManager::heros
	HeroConfigU5BU5D_t3683245205* ___heros_35;
	// System.Boolean MissionManager::quitting
	bool ___quitting_36;
	// System.Boolean MissionManager::mothershipDead
	bool ___mothershipDead_37;
	// System.Boolean MissionManager::postMetrics
	bool ___postMetrics_38;
	// System.Boolean MissionManager::reallyKillPrologueHero
	bool ___reallyKillPrologueHero_39;
	// System.Boolean MissionManager::firstFauxDeath
	bool ___firstFauxDeath_40;
	// System.Collections.Hashtable MissionManager::data
	Hashtable_t3875263730 * ___data_41;
	// System.Int32 MissionManager::MaxPathNodes
	int32_t ___MaxPathNodes_42;
	// System.String MissionManager::uniqueishId
	String_t* ___uniqueishId_43;

public:
	inline static int32_t get_offset_of__curtainHelper_3() { return static_cast<int32_t>(offsetof(MissionManager_t3465239713, ____curtainHelper_3)); }
	inline CurtainHelper_t4100984000 * get__curtainHelper_3() const { return ____curtainHelper_3; }
	inline CurtainHelper_t4100984000 ** get_address_of__curtainHelper_3() { return &____curtainHelper_3; }
	inline void set__curtainHelper_3(CurtainHelper_t4100984000 * value)
	{
		____curtainHelper_3 = value;
		Il2CppCodeGenWriteBarrier(&____curtainHelper_3, value);
	}

	inline static int32_t get_offset_of_basicHeroPrefab_4() { return static_cast<int32_t>(offsetof(MissionManager_t3465239713, ___basicHeroPrefab_4)); }
	inline GameObject_t4012695102 * get_basicHeroPrefab_4() const { return ___basicHeroPrefab_4; }
	inline GameObject_t4012695102 ** get_address_of_basicHeroPrefab_4() { return &___basicHeroPrefab_4; }
	inline void set_basicHeroPrefab_4(GameObject_t4012695102 * value)
	{
		___basicHeroPrefab_4 = value;
		Il2CppCodeGenWriteBarrier(&___basicHeroPrefab_4, value);
	}

	inline static int32_t get_offset_of_juggernautHeroPrefab_5() { return static_cast<int32_t>(offsetof(MissionManager_t3465239713, ___juggernautHeroPrefab_5)); }
	inline GameObject_t4012695102 * get_juggernautHeroPrefab_5() const { return ___juggernautHeroPrefab_5; }
	inline GameObject_t4012695102 ** get_address_of_juggernautHeroPrefab_5() { return &___juggernautHeroPrefab_5; }
	inline void set_juggernautHeroPrefab_5(GameObject_t4012695102 * value)
	{
		___juggernautHeroPrefab_5 = value;
		Il2CppCodeGenWriteBarrier(&___juggernautHeroPrefab_5, value);
	}

	inline static int32_t get_offset_of_scientistHeroPrefab_6() { return static_cast<int32_t>(offsetof(MissionManager_t3465239713, ___scientistHeroPrefab_6)); }
	inline GameObject_t4012695102 * get_scientistHeroPrefab_6() const { return ___scientistHeroPrefab_6; }
	inline GameObject_t4012695102 ** get_address_of_scientistHeroPrefab_6() { return &___scientistHeroPrefab_6; }
	inline void set_scientistHeroPrefab_6(GameObject_t4012695102 * value)
	{
		___scientistHeroPrefab_6 = value;
		Il2CppCodeGenWriteBarrier(&___scientistHeroPrefab_6, value);
	}

	inline static int32_t get_offset_of_basicHeroFinalPrefab_7() { return static_cast<int32_t>(offsetof(MissionManager_t3465239713, ___basicHeroFinalPrefab_7)); }
	inline GameObject_t4012695102 * get_basicHeroFinalPrefab_7() const { return ___basicHeroFinalPrefab_7; }
	inline GameObject_t4012695102 ** get_address_of_basicHeroFinalPrefab_7() { return &___basicHeroFinalPrefab_7; }
	inline void set_basicHeroFinalPrefab_7(GameObject_t4012695102 * value)
	{
		___basicHeroFinalPrefab_7 = value;
		Il2CppCodeGenWriteBarrier(&___basicHeroFinalPrefab_7, value);
	}

	inline static int32_t get_offset_of_juggernautHeroFinalPrefab_8() { return static_cast<int32_t>(offsetof(MissionManager_t3465239713, ___juggernautHeroFinalPrefab_8)); }
	inline GameObject_t4012695102 * get_juggernautHeroFinalPrefab_8() const { return ___juggernautHeroFinalPrefab_8; }
	inline GameObject_t4012695102 ** get_address_of_juggernautHeroFinalPrefab_8() { return &___juggernautHeroFinalPrefab_8; }
	inline void set_juggernautHeroFinalPrefab_8(GameObject_t4012695102 * value)
	{
		___juggernautHeroFinalPrefab_8 = value;
		Il2CppCodeGenWriteBarrier(&___juggernautHeroFinalPrefab_8, value);
	}

	inline static int32_t get_offset_of_scientistHeroFinalPrefab_9() { return static_cast<int32_t>(offsetof(MissionManager_t3465239713, ___scientistHeroFinalPrefab_9)); }
	inline GameObject_t4012695102 * get_scientistHeroFinalPrefab_9() const { return ___scientistHeroFinalPrefab_9; }
	inline GameObject_t4012695102 ** get_address_of_scientistHeroFinalPrefab_9() { return &___scientistHeroFinalPrefab_9; }
	inline void set_scientistHeroFinalPrefab_9(GameObject_t4012695102 * value)
	{
		___scientistHeroFinalPrefab_9 = value;
		Il2CppCodeGenWriteBarrier(&___scientistHeroFinalPrefab_9, value);
	}

	inline static int32_t get_offset_of_finalBossPrefab_10() { return static_cast<int32_t>(offsetof(MissionManager_t3465239713, ___finalBossPrefab_10)); }
	inline GameObject_t4012695102 * get_finalBossPrefab_10() const { return ___finalBossPrefab_10; }
	inline GameObject_t4012695102 ** get_address_of_finalBossPrefab_10() { return &___finalBossPrefab_10; }
	inline void set_finalBossPrefab_10(GameObject_t4012695102 * value)
	{
		___finalBossPrefab_10 = value;
		Il2CppCodeGenWriteBarrier(&___finalBossPrefab_10, value);
	}

	inline static int32_t get_offset_of_heroType_11() { return static_cast<int32_t>(offsetof(MissionManager_t3465239713, ___heroType_11)); }
	inline String_t* get_heroType_11() const { return ___heroType_11; }
	inline String_t** get_address_of_heroType_11() { return &___heroType_11; }
	inline void set_heroType_11(String_t* value)
	{
		___heroType_11 = value;
		Il2CppCodeGenWriteBarrier(&___heroType_11, value);
	}

	inline static int32_t get_offset_of_currentEncounterId_12() { return static_cast<int32_t>(offsetof(MissionManager_t3465239713, ___currentEncounterId_12)); }
	inline String_t* get_currentEncounterId_12() const { return ___currentEncounterId_12; }
	inline String_t** get_address_of_currentEncounterId_12() { return &___currentEncounterId_12; }
	inline void set_currentEncounterId_12(String_t* value)
	{
		___currentEncounterId_12 = value;
		Il2CppCodeGenWriteBarrier(&___currentEncounterId_12, value);
	}

	inline static int32_t get_offset_of_healthPrefab_13() { return static_cast<int32_t>(offsetof(MissionManager_t3465239713, ___healthPrefab_13)); }
	inline GameObject_t4012695102 * get_healthPrefab_13() const { return ___healthPrefab_13; }
	inline GameObject_t4012695102 ** get_address_of_healthPrefab_13() { return &___healthPrefab_13; }
	inline void set_healthPrefab_13(GameObject_t4012695102 * value)
	{
		___healthPrefab_13 = value;
		Il2CppCodeGenWriteBarrier(&___healthPrefab_13, value);
	}

	inline static int32_t get_offset_of_scrapPrefab_14() { return static_cast<int32_t>(offsetof(MissionManager_t3465239713, ___scrapPrefab_14)); }
	inline GameObject_t4012695102 * get_scrapPrefab_14() const { return ___scrapPrefab_14; }
	inline GameObject_t4012695102 ** get_address_of_scrapPrefab_14() { return &___scrapPrefab_14; }
	inline void set_scrapPrefab_14(GameObject_t4012695102 * value)
	{
		___scrapPrefab_14 = value;
		Il2CppCodeGenWriteBarrier(&___scrapPrefab_14, value);
	}

	inline static int32_t get_offset_of_mothershipExplosionPrefab_15() { return static_cast<int32_t>(offsetof(MissionManager_t3465239713, ___mothershipExplosionPrefab_15)); }
	inline GameObject_t4012695102 * get_mothershipExplosionPrefab_15() const { return ___mothershipExplosionPrefab_15; }
	inline GameObject_t4012695102 ** get_address_of_mothershipExplosionPrefab_15() { return &___mothershipExplosionPrefab_15; }
	inline void set_mothershipExplosionPrefab_15(GameObject_t4012695102 * value)
	{
		___mothershipExplosionPrefab_15 = value;
		Il2CppCodeGenWriteBarrier(&___mothershipExplosionPrefab_15, value);
	}

	inline static int32_t get_offset_of_mothershipWreckagePrefab_16() { return static_cast<int32_t>(offsetof(MissionManager_t3465239713, ___mothershipWreckagePrefab_16)); }
	inline GameObject_t4012695102 * get_mothershipWreckagePrefab_16() const { return ___mothershipWreckagePrefab_16; }
	inline GameObject_t4012695102 ** get_address_of_mothershipWreckagePrefab_16() { return &___mothershipWreckagePrefab_16; }
	inline void set_mothershipWreckagePrefab_16(GameObject_t4012695102 * value)
	{
		___mothershipWreckagePrefab_16 = value;
		Il2CppCodeGenWriteBarrier(&___mothershipWreckagePrefab_16, value);
	}

	inline static int32_t get_offset_of_offscreen_17() { return static_cast<int32_t>(offsetof(MissionManager_t3465239713, ___offscreen_17)); }
	inline GameObject_t4012695102 * get_offscreen_17() const { return ___offscreen_17; }
	inline GameObject_t4012695102 ** get_address_of_offscreen_17() { return &___offscreen_17; }
	inline void set_offscreen_17(GameObject_t4012695102 * value)
	{
		___offscreen_17 = value;
		Il2CppCodeGenWriteBarrier(&___offscreen_17, value);
	}

	inline static int32_t get_offset_of_offscreenWin_18() { return static_cast<int32_t>(offsetof(MissionManager_t3465239713, ___offscreenWin_18)); }
	inline GameObject_t4012695102 * get_offscreenWin_18() const { return ___offscreenWin_18; }
	inline GameObject_t4012695102 ** get_address_of_offscreenWin_18() { return &___offscreenWin_18; }
	inline void set_offscreenWin_18(GameObject_t4012695102 * value)
	{
		___offscreenWin_18 = value;
		Il2CppCodeGenWriteBarrier(&___offscreenWin_18, value);
	}

	inline static int32_t get_offset_of_offscreenLose_19() { return static_cast<int32_t>(offsetof(MissionManager_t3465239713, ___offscreenLose_19)); }
	inline GameObject_t4012695102 * get_offscreenLose_19() const { return ___offscreenLose_19; }
	inline GameObject_t4012695102 ** get_address_of_offscreenLose_19() { return &___offscreenLose_19; }
	inline void set_offscreenLose_19(GameObject_t4012695102 * value)
	{
		___offscreenLose_19 = value;
		Il2CppCodeGenWriteBarrier(&___offscreenLose_19, value);
	}

	inline static int32_t get_offset_of_healthSpawn_20() { return static_cast<int32_t>(offsetof(MissionManager_t3465239713, ___healthSpawn_20)); }
	inline GameObject_t4012695102 * get_healthSpawn_20() const { return ___healthSpawn_20; }
	inline GameObject_t4012695102 ** get_address_of_healthSpawn_20() { return &___healthSpawn_20; }
	inline void set_healthSpawn_20(GameObject_t4012695102 * value)
	{
		___healthSpawn_20 = value;
		Il2CppCodeGenWriteBarrier(&___healthSpawn_20, value);
	}

	inline static int32_t get_offset_of_music1prefab_21() { return static_cast<int32_t>(offsetof(MissionManager_t3465239713, ___music1prefab_21)); }
	inline AudioClip_t3714538611 * get_music1prefab_21() const { return ___music1prefab_21; }
	inline AudioClip_t3714538611 ** get_address_of_music1prefab_21() { return &___music1prefab_21; }
	inline void set_music1prefab_21(AudioClip_t3714538611 * value)
	{
		___music1prefab_21 = value;
		Il2CppCodeGenWriteBarrier(&___music1prefab_21, value);
	}

	inline static int32_t get_offset_of_music2prefab_22() { return static_cast<int32_t>(offsetof(MissionManager_t3465239713, ___music2prefab_22)); }
	inline AudioClip_t3714538611 * get_music2prefab_22() const { return ___music2prefab_22; }
	inline AudioClip_t3714538611 ** get_address_of_music2prefab_22() { return &___music2prefab_22; }
	inline void set_music2prefab_22(AudioClip_t3714538611 * value)
	{
		___music2prefab_22 = value;
		Il2CppCodeGenWriteBarrier(&___music2prefab_22, value);
	}

	inline static int32_t get_offset_of_winMusic_23() { return static_cast<int32_t>(offsetof(MissionManager_t3465239713, ___winMusic_23)); }
	inline AudioClip_t3714538611 * get_winMusic_23() const { return ___winMusic_23; }
	inline AudioClip_t3714538611 ** get_address_of_winMusic_23() { return &___winMusic_23; }
	inline void set_winMusic_23(AudioClip_t3714538611 * value)
	{
		___winMusic_23 = value;
		Il2CppCodeGenWriteBarrier(&___winMusic_23, value);
	}

	inline static int32_t get_offset_of_loseMusic_24() { return static_cast<int32_t>(offsetof(MissionManager_t3465239713, ___loseMusic_24)); }
	inline AudioClip_t3714538611 * get_loseMusic_24() const { return ___loseMusic_24; }
	inline AudioClip_t3714538611 ** get_address_of_loseMusic_24() { return &___loseMusic_24; }
	inline void set_loseMusic_24(AudioClip_t3714538611 * value)
	{
		___loseMusic_24 = value;
		Il2CppCodeGenWriteBarrier(&___loseMusic_24, value);
	}

	inline static int32_t get_offset_of_defaultPortrait_25() { return static_cast<int32_t>(offsetof(MissionManager_t3465239713, ___defaultPortrait_25)); }
	inline Texture2D_t2509538522 * get_defaultPortrait_25() const { return ___defaultPortrait_25; }
	inline Texture2D_t2509538522 ** get_address_of_defaultPortrait_25() { return &___defaultPortrait_25; }
	inline void set_defaultPortrait_25(Texture2D_t2509538522 * value)
	{
		___defaultPortrait_25 = value;
		Il2CppCodeGenWriteBarrier(&___defaultPortrait_25, value);
	}

	inline static int32_t get_offset_of_asteroids_26() { return static_cast<int32_t>(offsetof(MissionManager_t3465239713, ___asteroids_26)); }
	inline AsteroidFieldU5BU5D_t2518584518* get_asteroids_26() const { return ___asteroids_26; }
	inline AsteroidFieldU5BU5D_t2518584518** get_address_of_asteroids_26() { return &___asteroids_26; }
	inline void set_asteroids_26(AsteroidFieldU5BU5D_t2518584518* value)
	{
		___asteroids_26 = value;
		Il2CppCodeGenWriteBarrier(&___asteroids_26, value);
	}

	inline static int32_t get_offset_of__gameMenu_27() { return static_cast<int32_t>(offsetof(MissionManager_t3465239713, ____gameMenu_27)); }
	inline InGameMenu_t4173128918 * get__gameMenu_27() const { return ____gameMenu_27; }
	inline InGameMenu_t4173128918 ** get_address_of__gameMenu_27() { return &____gameMenu_27; }
	inline void set__gameMenu_27(InGameMenu_t4173128918 * value)
	{
		____gameMenu_27 = value;
		Il2CppCodeGenWriteBarrier(&____gameMenu_27, value);
	}

	inline static int32_t get_offset_of_currentHeroObject_28() { return static_cast<int32_t>(offsetof(MissionManager_t3465239713, ___currentHeroObject_28)); }
	inline GameObject_t4012695102 * get_currentHeroObject_28() const { return ___currentHeroObject_28; }
	inline GameObject_t4012695102 ** get_address_of_currentHeroObject_28() { return &___currentHeroObject_28; }
	inline void set_currentHeroObject_28(GameObject_t4012695102 * value)
	{
		___currentHeroObject_28 = value;
		Il2CppCodeGenWriteBarrier(&___currentHeroObject_28, value);
	}

	inline static int32_t get_offset_of_needsUpgraderDialogDisplay_29() { return static_cast<int32_t>(offsetof(MissionManager_t3465239713, ___needsUpgraderDialogDisplay_29)); }
	inline bool get_needsUpgraderDialogDisplay_29() const { return ___needsUpgraderDialogDisplay_29; }
	inline bool* get_address_of_needsUpgraderDialogDisplay_29() { return &___needsUpgraderDialogDisplay_29; }
	inline void set_needsUpgraderDialogDisplay_29(bool value)
	{
		___needsUpgraderDialogDisplay_29 = value;
	}

	inline static int32_t get_offset_of__mothershipVehicle_30() { return static_cast<int32_t>(offsetof(MissionManager_t3465239713, ____mothershipVehicle_30)); }
	inline MothershipVehicle_t3966619277 * get__mothershipVehicle_30() const { return ____mothershipVehicle_30; }
	inline MothershipVehicle_t3966619277 ** get_address_of__mothershipVehicle_30() { return &____mothershipVehicle_30; }
	inline void set__mothershipVehicle_30(MothershipVehicle_t3966619277 * value)
	{
		____mothershipVehicle_30 = value;
		Il2CppCodeGenWriteBarrier(&____mothershipVehicle_30, value);
	}

	inline static int32_t get_offset_of__manager_31() { return static_cast<int32_t>(offsetof(MissionManager_t3465239713, ____manager_31)); }
	inline HeroAIManager_t825711499 * get__manager_31() const { return ____manager_31; }
	inline HeroAIManager_t825711499 ** get_address_of__manager_31() { return &____manager_31; }
	inline void set__manager_31(HeroAIManager_t825711499 * value)
	{
		____manager_31 = value;
		Il2CppCodeGenWriteBarrier(&____manager_31, value);
	}

	inline static int32_t get_offset_of_currentHero_32() { return static_cast<int32_t>(offsetof(MissionManager_t3465239713, ___currentHero_32)); }
	inline int32_t get_currentHero_32() const { return ___currentHero_32; }
	inline int32_t* get_address_of_currentHero_32() { return &___currentHero_32; }
	inline void set_currentHero_32(int32_t value)
	{
		___currentHero_32 = value;
	}

	inline static int32_t get_offset_of_launchedMinions_33() { return static_cast<int32_t>(offsetof(MissionManager_t3465239713, ___launchedMinions_33)); }
	inline int32_t get_launchedMinions_33() const { return ___launchedMinions_33; }
	inline int32_t* get_address_of_launchedMinions_33() { return &___launchedMinions_33; }
	inline void set_launchedMinions_33(int32_t value)
	{
		___launchedMinions_33 = value;
	}

	inline static int32_t get_offset_of_scrapDistribution_34() { return static_cast<int32_t>(offsetof(MissionManager_t3465239713, ___scrapDistribution_34)); }
	inline List_1_t3644373756 * get_scrapDistribution_34() const { return ___scrapDistribution_34; }
	inline List_1_t3644373756 ** get_address_of_scrapDistribution_34() { return &___scrapDistribution_34; }
	inline void set_scrapDistribution_34(List_1_t3644373756 * value)
	{
		___scrapDistribution_34 = value;
		Il2CppCodeGenWriteBarrier(&___scrapDistribution_34, value);
	}

	inline static int32_t get_offset_of_heros_35() { return static_cast<int32_t>(offsetof(MissionManager_t3465239713, ___heros_35)); }
	inline HeroConfigU5BU5D_t3683245205* get_heros_35() const { return ___heros_35; }
	inline HeroConfigU5BU5D_t3683245205** get_address_of_heros_35() { return &___heros_35; }
	inline void set_heros_35(HeroConfigU5BU5D_t3683245205* value)
	{
		___heros_35 = value;
		Il2CppCodeGenWriteBarrier(&___heros_35, value);
	}

	inline static int32_t get_offset_of_quitting_36() { return static_cast<int32_t>(offsetof(MissionManager_t3465239713, ___quitting_36)); }
	inline bool get_quitting_36() const { return ___quitting_36; }
	inline bool* get_address_of_quitting_36() { return &___quitting_36; }
	inline void set_quitting_36(bool value)
	{
		___quitting_36 = value;
	}

	inline static int32_t get_offset_of_mothershipDead_37() { return static_cast<int32_t>(offsetof(MissionManager_t3465239713, ___mothershipDead_37)); }
	inline bool get_mothershipDead_37() const { return ___mothershipDead_37; }
	inline bool* get_address_of_mothershipDead_37() { return &___mothershipDead_37; }
	inline void set_mothershipDead_37(bool value)
	{
		___mothershipDead_37 = value;
	}

	inline static int32_t get_offset_of_postMetrics_38() { return static_cast<int32_t>(offsetof(MissionManager_t3465239713, ___postMetrics_38)); }
	inline bool get_postMetrics_38() const { return ___postMetrics_38; }
	inline bool* get_address_of_postMetrics_38() { return &___postMetrics_38; }
	inline void set_postMetrics_38(bool value)
	{
		___postMetrics_38 = value;
	}

	inline static int32_t get_offset_of_reallyKillPrologueHero_39() { return static_cast<int32_t>(offsetof(MissionManager_t3465239713, ___reallyKillPrologueHero_39)); }
	inline bool get_reallyKillPrologueHero_39() const { return ___reallyKillPrologueHero_39; }
	inline bool* get_address_of_reallyKillPrologueHero_39() { return &___reallyKillPrologueHero_39; }
	inline void set_reallyKillPrologueHero_39(bool value)
	{
		___reallyKillPrologueHero_39 = value;
	}

	inline static int32_t get_offset_of_firstFauxDeath_40() { return static_cast<int32_t>(offsetof(MissionManager_t3465239713, ___firstFauxDeath_40)); }
	inline bool get_firstFauxDeath_40() const { return ___firstFauxDeath_40; }
	inline bool* get_address_of_firstFauxDeath_40() { return &___firstFauxDeath_40; }
	inline void set_firstFauxDeath_40(bool value)
	{
		___firstFauxDeath_40 = value;
	}

	inline static int32_t get_offset_of_data_41() { return static_cast<int32_t>(offsetof(MissionManager_t3465239713, ___data_41)); }
	inline Hashtable_t3875263730 * get_data_41() const { return ___data_41; }
	inline Hashtable_t3875263730 ** get_address_of_data_41() { return &___data_41; }
	inline void set_data_41(Hashtable_t3875263730 * value)
	{
		___data_41 = value;
		Il2CppCodeGenWriteBarrier(&___data_41, value);
	}

	inline static int32_t get_offset_of_MaxPathNodes_42() { return static_cast<int32_t>(offsetof(MissionManager_t3465239713, ___MaxPathNodes_42)); }
	inline int32_t get_MaxPathNodes_42() const { return ___MaxPathNodes_42; }
	inline int32_t* get_address_of_MaxPathNodes_42() { return &___MaxPathNodes_42; }
	inline void set_MaxPathNodes_42(int32_t value)
	{
		___MaxPathNodes_42 = value;
	}

	inline static int32_t get_offset_of_uniqueishId_43() { return static_cast<int32_t>(offsetof(MissionManager_t3465239713, ___uniqueishId_43)); }
	inline String_t* get_uniqueishId_43() const { return ___uniqueishId_43; }
	inline String_t** get_address_of_uniqueishId_43() { return &___uniqueishId_43; }
	inline void set_uniqueishId_43(String_t* value)
	{
		___uniqueishId_43 = value;
		Il2CppCodeGenWriteBarrier(&___uniqueishId_43, value);
	}
};

struct MissionManager_t3465239713_StaticFields
{
public:
	// System.String MissionManager::BaseUrl
	String_t* ___BaseUrl_2;

public:
	inline static int32_t get_offset_of_BaseUrl_2() { return static_cast<int32_t>(offsetof(MissionManager_t3465239713_StaticFields, ___BaseUrl_2)); }
	inline String_t* get_BaseUrl_2() const { return ___BaseUrl_2; }
	inline String_t** get_address_of_BaseUrl_2() { return &___BaseUrl_2; }
	inline void set_BaseUrl_2(String_t* value)
	{
		___BaseUrl_2 = value;
		Il2CppCodeGenWriteBarrier(&___BaseUrl_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
