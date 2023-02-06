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

// MothershipVehicle
struct MothershipVehicle_t3966619277;
// Gesture
struct Gesture_t1589572905;
// UnityEngine.Collision
struct Collision_t1119538015;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Gesture1589572905.h"
#include "UnityEngine_UnityEngine_Collision1119538015.h"
#include "UnityEngine_UnityEngine_Color1588175760.h"
#include "AssemblyU2DCSharp_MothershipVehicle_PortStatus1869286387.h"
#include "AssemblyU2DCSharp_PortState_MinionTypeDetails2901012274.h"
#include "AssemblyU2DCSharp_MothershipVehicle_MothershipUpgr1958933756.h"
#include "AssemblyU2DCSharp_MissionManager_PostBattleMessage1866294095.h"

// System.Void MothershipVehicle::.ctor()
extern "C"  void MothershipVehicle__ctor_m4219530622 (MothershipVehicle_t3966619277 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MothershipVehicle::Awake()
extern "C"  void MothershipVehicle_Awake_m162168545 (MothershipVehicle_t3966619277 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MothershipVehicle::Start()
extern "C"  void MothershipVehicle_Start_m3166668414 (MothershipVehicle_t3966619277 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MothershipVehicle::MoveMe(Gesture)
extern "C"  void MothershipVehicle_MoveMe_m1833752506 (MothershipVehicle_t3966619277 * __this, Gesture_t1589572905 * ___gesture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MothershipVehicle::OnMissionStart()
extern "C"  void MothershipVehicle_OnMissionStart_m3059626555 (MothershipVehicle_t3966619277 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MothershipVehicle::OnCollisionEnter(UnityEngine.Collision)
extern "C"  void MothershipVehicle_OnCollisionEnter_m1755592524 (MothershipVehicle_t3966619277 * __this, Collision_t1119538015 * ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MothershipVehicle::Update()
extern "C"  void MothershipVehicle_Update_m3683292495 (MothershipVehicle_t3966619277 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MothershipVehicle::DestroyPorts()
extern "C"  void MothershipVehicle_DestroyPorts_m3018582334 (MothershipVehicle_t3966619277 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MothershipVehicle::ConstructDamagePanels()
extern "C"  void MothershipVehicle_ConstructDamagePanels_m388313105 (MothershipVehicle_t3966619277 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MothershipVehicle::UpdateDamagePanels(System.Single)
extern "C"  void MothershipVehicle_UpdateDamagePanels_m3098758814 (MothershipVehicle_t3966619277 * __this, float ___healthPercentage, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MothershipVehicle::OnDamage(System.Single)
extern "C"  void MothershipVehicle_OnDamage_m2219235831 (MothershipVehicle_t3966619277 * __this, float ___amt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator MothershipVehicle::FlashDamage(System.Single,UnityEngine.Color)
extern "C"  Il2CppObject * MothershipVehicle_FlashDamage_m3426289288 (MothershipVehicle_t3966619277 * __this, float ___duration, Color_t1588175760  ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MothershipVehicle::OnHeal(System.Single)
extern "C"  void MothershipVehicle_OnHeal_m3910190430 (MothershipVehicle_t3966619277 * __this, float ___amt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MothershipVehicle::AddScrap(System.Int32)
extern "C"  void MothershipVehicle_AddScrap_m3172897159 (MothershipVehicle_t3966619277 * __this, int32_t ___amount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MothershipVehicle::RemoveScrap(System.Single)
extern "C"  void MothershipVehicle_RemoveScrap_m4157801346 (MothershipVehicle_t3966619277 * __this, float ___amount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single MothershipVehicle::GetScrap()
extern "C"  float MothershipVehicle_GetScrap_m376965013 (MothershipVehicle_t3966619277 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MothershipVehicle::UpdateMothersipComponent(System.Int32,System.Int32,System.Int32)
extern "C"  void MothershipVehicle_UpdateMothersipComponent_m3755197350 (MothershipVehicle_t3966619277 * __this, int32_t ___portIndex, int32_t ___portType, int32_t ___levelIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MothershipVehicle::EnablePorts(System.Boolean,MothershipVehicle/PortStatus)
extern "C"  void MothershipVehicle_EnablePorts_m4093799183 (MothershipVehicle_t3966619277 * __this, bool ___enable, int32_t ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator MothershipVehicle::WaitForDisable(System.Single)
extern "C"  Il2CppObject * MothershipVehicle_WaitForDisable_m2924295225 (MothershipVehicle_t3966619277 * __this, float ___wait, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PortState/MinionTypeDetails MothershipVehicle::DetailsForUpgradeType(MothershipVehicle/MothershipUpgradeTypes)
extern "C"  MinionTypeDetails_t2901012274  MothershipVehicle_DetailsForUpgradeType_m631007821 (MothershipVehicle_t3966619277 * __this, int32_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MothershipVehicle::OnUpgradeDialog(MissionManager/PostBattleMessage)
extern "C"  void MothershipVehicle_OnUpgradeDialog_m670767424 (MothershipVehicle_t3966619277 * __this, PostBattleMessage_t1866294095  ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MothershipVehicle::OnHeroReady()
extern "C"  void MothershipVehicle_OnHeroReady_m1966584454 (MothershipVehicle_t3966619277 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MothershipVehicle::OnEnable()
extern "C"  void MothershipVehicle_OnEnable_m1005519176 (MothershipVehicle_t3966619277 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MothershipVehicle::OnDisable()
extern "C"  void MothershipVehicle_OnDisable_m1547260645 (MothershipVehicle_t3966619277 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MothershipVehicle::OnDestroy()
extern "C"  void MothershipVehicle_OnDestroy_m3724792695 (MothershipVehicle_t3966619277 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
