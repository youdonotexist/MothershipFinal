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

// EncounterSummary
struct EncounterSummary_t296676115;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1765447871;
// System.Collections.Hashtable
struct Hashtable_t3875263730;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// MothershipVehicle
struct MothershipVehicle_t3966619277;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_MissionManager_PostBattleMessage1866294095.h"
#include "mscorlib_System_Collections_Hashtable3875263730.h"
#include "AssemblyU2DCSharp_MothershipVehicle3966619277.h"

// System.Void EncounterSummary::.ctor()
extern "C"  void EncounterSummary__ctor_m1722941672 (EncounterSummary_t296676115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EncounterSummary::SetSummary(MissionManager/PostBattleMessage)
extern "C"  void EncounterSummary_SetSummary_m1567152575 (EncounterSummary_t296676115 * __this, PostBattleMessage_t1866294095  ___battleMessage, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EncounterSummary::OnWillAppear()
extern "C"  void EncounterSummary_OnWillAppear_m2164379170 (EncounterSummary_t296676115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EncounterSummary::OnDidAppear()
extern "C"  void EncounterSummary_OnDidAppear_m4072213723 (EncounterSummary_t296676115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EncounterSummary::buildStats()
extern "C"  void EncounterSummary_buildStats_m176921997 (EncounterSummary_t296676115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.String> EncounterSummary::summaryStats(System.Collections.Hashtable)
extern "C"  List_1_t1765447871 * EncounterSummary_summaryStats_m2518333502 (EncounterSummary_t296676115 * __this, Hashtable_t3875263730 * ___metricsHash, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator EncounterSummary::DoSummaryBang()
extern "C"  Il2CppObject * EncounterSummary_DoSummaryBang_m1068904561 (EncounterSummary_t296676115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator EncounterSummary::DeadStamp()
extern "C"  Il2CppObject * EncounterSummary_DeadStamp_m3464782909 (EncounterSummary_t296676115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator EncounterSummary::PortraitFlip()
extern "C"  Il2CppObject * EncounterSummary_PortraitFlip_m1518248780 (EncounterSummary_t296676115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator EncounterSummary::FadeInButtons()
extern "C"  Il2CppObject * EncounterSummary_FadeInButtons_m2314737470 (EncounterSummary_t296676115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EncounterSummary::OnMothershipInit(MothershipVehicle)
extern "C"  void EncounterSummary_OnMothershipInit_m2166311227 (EncounterSummary_t296676115 * __this, MothershipVehicle_t3966619277 * ___vehicle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EncounterSummary::OnEnable()
extern "C"  void EncounterSummary_OnEnable_m1072774558 (EncounterSummary_t296676115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EncounterSummary::OnDisable()
extern "C"  void EncounterSummary_OnDisable_m3632177487 (EncounterSummary_t296676115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
