#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// MissionManager
struct MissionManager_t3465239713;
// HeroConfig[]
struct HeroConfigU5BU5D_t3683245205;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// HeroVehicle
struct HeroVehicle_t3389256114;
// MothershipVehicle
struct MothershipVehicle_t3966619277;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// System.Collections.Hashtable
struct Hashtable_t3875263730;
// System.Collections.IDictionary
struct IDictionary_t1654916945;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "AssemblyU2DCSharp_HeroVehicle3389256114.h"
#include "AssemblyU2DCSharp_MothershipVehicle3966619277.h"
#include "mscorlib_System_Collections_Hashtable3875263730.h"
#include "UnityEngine_UnityEngine_GameObject4012695102.h"

// System.Void MissionManager::.ctor()
extern "C"  void MissionManager__ctor_m3401717018 (MissionManager_t3465239713 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MissionManager::.cctor()
extern "C"  void MissionManager__cctor_m1891916243 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MissionManager::HeroesLeft()
extern "C"  int32_t MissionManager_HeroesLeft_m278530503 (MissionManager_t3465239713 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MissionManager::Awake()
extern "C"  void MissionManager_Awake_m3639322237 (MissionManager_t3465239713 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MissionManager::Start()
extern "C"  void MissionManager_Start_m2348854810 (MissionManager_t3465239713 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// HeroConfig[] MissionManager::HeroList()
extern "C"  HeroConfigU5BU5D_t3683245205* MissionManager_HeroList_m677194497 (MissionManager_t3465239713 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MissionManager::Download(System.String)
extern "C"  void MissionManager_Download_m2511585616 (MissionManager_t3465239713 * __this, String_t* ___encId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MissionManager::StartBattle()
extern "C"  void MissionManager_StartBattle_m1399529010 (MissionManager_t3465239713 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MissionManager::BuildLevels()
extern "C"  void MissionManager_BuildLevels_m311068469 (MissionManager_t3465239713 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MissionManager::OnApplicationQuit()
extern "C"  void MissionManager_OnApplicationQuit_m2644618136 (MissionManager_t3465239713 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MissionManager::BuildScrapDistribution(System.Int32)
extern "C"  void MissionManager_BuildScrapDistribution_m1384781538 (MissionManager_t3465239713 * __this, int32_t ___heroCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MissionManager::GetScrapDistribution()
extern "C"  int32_t MissionManager_GetScrapDistribution_m2767318775 (MissionManager_t3465239713 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator MissionManager::QualitySpinner(System.Int32)
extern "C"  Il2CppObject * MissionManager_QualitySpinner_m2211593437 (MissionManager_t3465239713 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator MissionManager::TutorialEnd()
extern "C"  Il2CppObject * MissionManager_TutorialEnd_m3200387341 (MissionManager_t3465239713 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MissionManager::LoadMainMenu()
extern "C"  void MissionManager_LoadMainMenu_m2611612200 (MissionManager_t3465239713 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MissionManager::OnHeroDie(UnityEngine.Vector3,HeroVehicle)
extern "C"  void MissionManager_OnHeroDie_m1475997300 (MissionManager_t3465239713 * __this, Vector3_t3525329789  ___pos, HeroVehicle_t3389256114 * ___hero, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MissionManager::OnMothershipDie(MothershipVehicle)
extern "C"  void MissionManager_OnMothershipDie_m1692285355 (MissionManager_t3465239713 * __this, MothershipVehicle_t3966619277 * ___mothership, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MissionManager::RetryBattle()
extern "C"  void MissionManager_RetryBattle_m3821983352 (MissionManager_t3465239713 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator MissionManager::SpawnHealthAndWait(UnityEngine.Vector3)
extern "C"  Il2CppObject * MissionManager_SpawnHealthAndWait_m129171474 (MissionManager_t3465239713 * __this, Vector3_t3525329789  ___pos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject MissionManager::PrefabForHeroType(System.Boolean)
extern "C"  GameObject_t4012695102 * MissionManager_PrefabForHeroType_m1306588467 (MissionManager_t3465239713 * __this, bool ___finalForm, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator MissionManager::metrics()
extern "C"  Il2CppObject * MissionManager_metrics_m1197680467 (MissionManager_t3465239713 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MissionManager::SpawnHero()
extern "C"  void MissionManager_SpawnHero_m1415632781 (MissionManager_t3465239713 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MissionManager::ShowUpgraderDialog()
extern "C"  void MissionManager_ShowUpgraderDialog_m2734565765 (MissionManager_t3465239713 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MissionManager::OnUpgradeFinish()
extern "C"  void MissionManager_OnUpgradeFinish_m213829544 (MissionManager_t3465239713 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MissionManager::postScore()
extern "C"  void MissionManager_postScore_m226708522 (MissionManager_t3465239713 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator MissionManager::PostScoreAsync(System.Collections.Hashtable)
extern "C"  Il2CppObject * MissionManager_PostScoreAsync_m487551988 (MissionManager_t3465239713 * __this, Hashtable_t3875263730 * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator MissionManager::LoadHeroImage(HeroVehicle)
extern "C"  Il2CppObject * MissionManager_LoadHeroImage_m1877732149 (MissionManager_t3465239713 * __this, HeroVehicle_t3389256114 * ___hero, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MissionManager::YouLose(MothershipVehicle)
extern "C"  void MissionManager_YouLose_m3139043961 (MissionManager_t3465239713 * __this, MothershipVehicle_t3966619277 * ___mothership, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MissionManager::YouWin()
extern "C"  void MissionManager_YouWin_m2071818919 (MissionManager_t3465239713 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MissionManager::UnlockNextMission()
extern "C"  void MissionManager_UnlockNextMission_m2345411501 (MissionManager_t3465239713 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator MissionManager::ExplodeMothership(MothershipVehicle)
extern "C"  Il2CppObject * MissionManager_ExplodeMothership_m376277653 (MissionManager_t3465239713 * __this, MothershipVehicle_t3966619277 * ___mothership, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator MissionManager::MothershipLose(MothershipVehicle)
extern "C"  Il2CppObject * MissionManager_MothershipLose_m976903903 (MissionManager_t3465239713 * __this, MothershipVehicle_t3966619277 * ___mothership, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator MissionManager::CurrentHeroWin()
extern "C"  Il2CppObject * MissionManager_CurrentHeroWin_m1958201211 (MissionManager_t3465239713 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator MissionManager::SpawnHeroWin(System.Int32)
extern "C"  Il2CppObject * MissionManager_SpawnHeroWin_m811844554 (MissionManager_t3465239713 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator MissionManager::MothershipWin()
extern "C"  Il2CppObject * MissionManager_MothershipWin_m1741307021 (MissionManager_t3465239713 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator MissionManager::MothershipFlyOff()
extern "C"  Il2CppObject * MissionManager_MothershipFlyOff_m4114822477 (MissionManager_t3465239713 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator MissionManager::BossSwap(UnityEngine.GameObject,HeroVehicle)
extern "C"  Il2CppObject * MissionManager_BossSwap_m3414769284 (MissionManager_t3465239713 * __this, GameObject_t4012695102 * ___oldHero, HeroVehicle_t3389256114 * ___hero, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator MissionManager::DriveOnScreen(HeroVehicle)
extern "C"  Il2CppObject * MissionManager_DriveOnScreen_m1569816027 (MissionManager_t3465239713 * __this, HeroVehicle_t3389256114 * ___hero, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String MissionManager::BuildSpriteName(System.String,System.Int32)
extern "C"  String_t* MissionManager_BuildSpriteName_m3629428616 (MissionManager_t3465239713 * __this, String_t* ___type, int32_t ___zeroIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionary MissionManager::buildTutorialMission()
extern "C"  Il2CppObject * MissionManager_buildTutorialMission_m2113406464 (MissionManager_t3465239713 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MissionManager::OnMinionFired()
extern "C"  void MissionManager_OnMinionFired_m1805800369 (MissionManager_t3465239713 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MissionManager::OnEnable()
extern "C"  void MissionManager_OnEnable_m2869912620 (MissionManager_t3465239713 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MissionManager::OnDisable()
extern "C"  void MissionManager_OnDisable_m3508882561 (MissionManager_t3465239713 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MissionManager::Switch(System.String)
extern "C"  void MissionManager_Switch_m773359332 (MissionManager_t3465239713 * __this, String_t* ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MissionManager::<OnHeroDie>m__62()
extern "C"  void MissionManager_U3COnHeroDieU3Em__62_m1132806912 (MissionManager_t3465239713 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
