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

// Upgrader
struct Upgrader_t1488260598;
// PortState
struct PortState_t3108340848;
// ColliderOutline2D
struct ColliderOutline2D_t1787330656;
// System.String
struct String_t;
// UpgradeMenuItem
struct UpgradeMenuItem_t1088821038;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "AssemblyU2DCSharp_PortState3108340848.h"
#include "AssemblyU2DCSharp_PortState_MinionTypeDetails2901012274.h"
#include "AssemblyU2DCSharp_ColliderOutline2D1787330656.h"
#include "AssemblyU2DCSharp_MissionManager_PostBattleMessage1866294095.h"
#include "mscorlib_System_String968488902.h"

// System.Void Upgrader::.ctor()
extern "C"  void Upgrader__ctor_m616367461 (Upgrader_t1488260598 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Upgrader::Awake()
extern "C"  void Upgrader_Awake_m853972680 (Upgrader_t1488260598 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Upgrader::HandleChangePort()
extern "C"  void Upgrader_HandleChangePort_m1905342616 (Upgrader_t1488260598 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Upgrader::ChangePort(System.Int32,UnityEngine.Vector3)
extern "C"  void Upgrader_ChangePort_m1909768500 (Upgrader_t1488260598 * __this, int32_t ___index, Vector3_t3525329789  ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Upgrader::SelectPowerup2(System.Int32,System.Int32,PortState)
extern "C"  void Upgrader_SelectPowerup2_m2830473557 (Upgrader_t1488260598 * __this, int32_t ___selectedTypeIndex, int32_t ___selectedLevelIndex, PortState_t3108340848 * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Upgrader::SelectedPowerup2()
extern "C"  void Upgrader_SelectedPowerup2_m2347350156 (Upgrader_t1488260598 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PortState/MinionTypeDetails Upgrader::GetCurrentDetails(System.Int32)
extern "C"  MinionTypeDetails_t2901012274  Upgrader_GetCurrentDetails_m2268890355 (Upgrader_t1488260598 * __this, int32_t ___portIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Upgrader::UpgradePort()
extern "C"  void Upgrader_UpgradePort_m3174809216 (Upgrader_t1488260598 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Upgrader::UpdateScrapMetal(System.Single)
extern "C"  void Upgrader_UpdateScrapMetal_m2983346317 (Upgrader_t1488260598 * __this, float ___metal, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Upgrader::OnPortInit(PortState,ColliderOutline2D)
extern "C"  void Upgrader_OnPortInit_m1420816895 (Upgrader_t1488260598 * __this, PortState_t3108340848 * ___port, ColliderOutline2D_t1787330656 * ___outline, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Upgrader::OnPortLoadoutUpdate(PortState,System.Boolean)
extern "C"  void Upgrader_OnPortLoadoutUpdate_m4029354671 (Upgrader_t1488260598 * __this, PortState_t3108340848 * ___portState, bool ___updateUI, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Upgrader::SetBattleMessage(MissionManager/PostBattleMessage)
extern "C"  void Upgrader_SetBattleMessage_m911425707 (Upgrader_t1488260598 * __this, PostBattleMessage_t1866294095  ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Upgrader::OnUpgraderMessage(System.String)
extern "C"  void Upgrader_OnUpgraderMessage_m3499753645 (Upgrader_t1488260598 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Upgrader::UpdatePortHighlight()
extern "C"  void Upgrader_UpdatePortHighlight_m296347501 (Upgrader_t1488260598 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UpgradeMenuItem Upgrader::GetCachedItem()
extern "C"  UpgradeMenuItem_t1088821038 * Upgrader_GetCachedItem_m1710331913 (Upgrader_t1488260598 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Upgrader::Show()
extern "C"  void Upgrader_Show_m1083635452 (Upgrader_t1488260598 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Upgrader::Hide()
extern "C"  void Upgrader_Hide_m769293313 (Upgrader_t1488260598 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Upgrader::DoShow(System.Single)
extern "C"  Il2CppObject * Upgrader_DoShow_m2649818588 (Upgrader_t1488260598 * __this, float ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Upgrader::DoHide(System.Single)
extern "C"  Il2CppObject * Upgrader_DoHide_m950178039 (Upgrader_t1488260598 * __this, float ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Upgrader::OnWillAppear()
extern "C"  void Upgrader_OnWillAppear_m775762693 (Upgrader_t1488260598 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Upgrader::OnWillDisappear()
extern "C"  void Upgrader_OnWillDisappear_m726881237 (Upgrader_t1488260598 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Upgrader::OnDidDisappear()
extern "C"  void Upgrader_OnDidDisappear_m2146687586 (Upgrader_t1488260598 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Upgrader::OnDidAppear()
extern "C"  void Upgrader_OnDidAppear_m702283672 (Upgrader_t1488260598 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Upgrader::__DEBUG_SCRAP_GIVAR()
extern "C"  void Upgrader___DEBUG_SCRAP_GIVAR_m1281859918 (Upgrader_t1488260598 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Upgrader::OnEnable()
extern "C"  void Upgrader_OnEnable_m3289418753 (Upgrader_t1488260598 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Upgrader::OnDisable()
extern "C"  void Upgrader_OnDisable_m3628670796 (Upgrader_t1488260598 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
