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

// WalkthroughMissionManager
struct WalkthroughMissionManager_t2130911325;
// MissionManager
struct MissionManager_t3465239713;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// HeroVehicle
struct HeroVehicle_t3389256114;
// MothershipVehicle
struct MothershipVehicle_t3966619277;
// System.Collections.IDictionary
struct IDictionary_t1654916945;
// System.Collections.Generic.List`1<System.Collections.IDictionary>
struct List_1_t2451875914;
// System.String
struct String_t;
// HeroConfig[]
struct HeroConfigU5BU5D_t3683245205;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_MissionManager3465239713.h"
#include "UnityEngine_UnityEngine_GameObject4012695102.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "AssemblyU2DCSharp_HeroVehicle3389256114.h"
#include "AssemblyU2DCSharp_MothershipVehicle3966619277.h"
#include "mscorlib_System_String968488902.h"

// System.Void WalkthroughMissionManager::.ctor()
extern "C"  void WalkthroughMissionManager__ctor_m3181591982 (WalkthroughMissionManager_t2130911325 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WalkthroughMissionManager WalkthroughMissionManager::CopyComponent(MissionManager,UnityEngine.GameObject)
extern "C"  WalkthroughMissionManager_t2130911325 * WalkthroughMissionManager_CopyComponent_m2885234869 (Il2CppObject * __this /* static, unused */, MissionManager_t3465239713 * ___original, GameObject_t4012695102 * ___destination, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WalkthroughMissionManager::OnUpgradeFinish()
extern "C"  void WalkthroughMissionManager_OnUpgradeFinish_m1787119420 (WalkthroughMissionManager_t2130911325 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WalkthroughMissionManager::SpawnHero()
extern "C"  void WalkthroughMissionManager_SpawnHero_m714315297 (WalkthroughMissionManager_t2130911325 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WalkthroughMissionManager::OnHeroDie(UnityEngine.Vector3,HeroVehicle)
extern "C"  void WalkthroughMissionManager_OnHeroDie_m3335806304 (WalkthroughMissionManager_t2130911325 * __this, Vector3_t3525329789  ___pos, HeroVehicle_t3389256114 * ___hero, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WalkthroughMissionManager::OnMothershipDie(MothershipVehicle)
extern "C"  void WalkthroughMissionManager_OnMothershipDie_m2405192855 (WalkthroughMissionManager_t2130911325 * __this, MothershipVehicle_t3966619277 * ___mothership, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WalkthroughMissionManager::ShowUpgraderDialog()
extern "C"  void WalkthroughMissionManager_ShowUpgraderDialog_m1635160433 (WalkthroughMissionManager_t2130911325 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WalkthroughMissionManager::ShowingUpgraderDialog()
extern "C"  void WalkthroughMissionManager_ShowingUpgraderDialog_m2280057327 (WalkthroughMissionManager_t2130911325 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WalkthroughMissionManager::ShowingRepairDialog()
extern "C"  void WalkthroughMissionManager_ShowingRepairDialog_m2097374374 (WalkthroughMissionManager_t2130911325 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionary WalkthroughMissionManager::buildWalkthroughHeroList()
extern "C"  Il2CppObject * WalkthroughMissionManager_buildWalkthroughHeroList_m3864883494 (WalkthroughMissionManager_t2130911325 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Collections.IDictionary> WalkthroughMissionManager::FinalHeroDirectives()
extern "C"  List_1_t2451875914 * WalkthroughMissionManager_FinalHeroDirectives_m1451029690 (WalkthroughMissionManager_t2130911325 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WalkthroughMissionManager::Download(System.String)
extern "C"  void WalkthroughMissionManager_Download_m3547939300 (WalkthroughMissionManager_t2130911325 * __this, String_t* ___encId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WalkthroughMissionManager::SpawnHeroWalkthrough()
extern "C"  void WalkthroughMissionManager_SpawnHeroWalkthrough_m3112107421 (WalkthroughMissionManager_t2130911325 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// HeroConfig[] WalkthroughMissionManager::HeroList()
extern "C"  HeroConfigU5BU5D_t3683245205* WalkthroughMissionManager_HeroList_m2201523919 (WalkthroughMissionManager_t2130911325 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WalkthroughMissionManager::OnDestroy()
extern "C"  void WalkthroughMissionManager_OnDestroy_m690129831 (WalkthroughMissionManager_t2130911325 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WalkthroughMissionManager::IndexOfHero(HeroVehicle)
extern "C"  int32_t WalkthroughMissionManager_IndexOfHero_m3285931171 (WalkthroughMissionManager_t2130911325 * __this, HeroVehicle_t3389256114 * ___vehicle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WalkthroughMissionManager::BeginWalkthrough()
extern "C"  void WalkthroughMissionManager_BeginWalkthrough_m4236151305 (WalkthroughMissionManager_t2130911325 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WalkthroughMissionManager::Intro()
extern "C"  void WalkthroughMissionManager_Intro_m1689394744 (WalkthroughMissionManager_t2130911325 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WalkthroughMissionManager::IntroduceMinions()
extern "C"  void WalkthroughMissionManager_IntroduceMinions_m1703128948 (WalkthroughMissionManager_t2130911325 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WalkthroughMissionManager::OnMinionKilled()
extern "C"  void WalkthroughMissionManager_OnMinionKilled_m1955997480 (WalkthroughMissionManager_t2130911325 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WalkthroughMissionManager::FirstTarget()
extern "C"  void WalkthroughMissionManager_FirstTarget_m399095469 (WalkthroughMissionManager_t2130911325 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WalkthroughMissionManager::<OnUpgradeFinish>m__65()
extern "C"  void WalkthroughMissionManager_U3COnUpgradeFinishU3Em__65_m164483160 (WalkthroughMissionManager_t2130911325 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WalkthroughMissionManager::<OnUpgradeFinish>m__66()
extern "C"  void WalkthroughMissionManager_U3COnUpgradeFinishU3Em__66_m164484121 (WalkthroughMissionManager_t2130911325 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WalkthroughMissionManager::<OnHeroDie>m__68()
extern "C"  void WalkthroughMissionManager_U3COnHeroDieU3Em__68_m2660158578 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WalkthroughMissionManager::<ShowUpgraderDialog>m__6A()
extern "C"  void WalkthroughMissionManager_U3CShowUpgraderDialogU3Em__6A_m952720765 (WalkthroughMissionManager_t2130911325 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WalkthroughMissionManager::<ShowingUpgraderDialog>m__6B()
extern "C"  void WalkthroughMissionManager_U3CShowingUpgraderDialogU3Em__6B_m967212824 (WalkthroughMissionManager_t2130911325 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WalkthroughMissionManager::<ShowingRepairDialog>m__6C()
extern "C"  void WalkthroughMissionManager_U3CShowingRepairDialogU3Em__6C_m4271461328 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WalkthroughMissionManager::<IntroduceMinions>m__6D()
extern "C"  void WalkthroughMissionManager_U3CIntroduceMinionsU3Em__6D_m361950467 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
