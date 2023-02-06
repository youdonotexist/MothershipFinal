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

// UpgraderTreeRepair
struct UpgraderTreeRepair_t104611681;
// PortState
struct PortState_t3108340848;
// UpgraderCircle
struct UpgraderCircle_t998631014;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_PortState3108340848.h"

// System.Void UpgraderTreeRepair::.ctor()
extern "C"  void UpgraderTreeRepair__ctor_m3088350810 (UpgraderTreeRepair_t104611681 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UpgraderTreeRepair::Awake()
extern "C"  void UpgraderTreeRepair_Awake_m3325956029 (UpgraderTreeRepair_t104611681 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UpgraderTreeRepair::Start()
extern "C"  void UpgraderTreeRepair_Start_m2035488602 (UpgraderTreeRepair_t104611681 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UpgraderTreeRepair::SetSelected(System.Int32,System.Int32)
extern "C"  void UpgraderTreeRepair_SetSelected_m196475057 (UpgraderTreeRepair_t104611681 * __this, int32_t ___selectedTypeIndex, int32_t ___selectedLevelIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UpgraderTreeRepair::SetState(PortState)
extern "C"  void UpgraderTreeRepair_SetState_m3269476137 (UpgraderTreeRepair_t104611681 * __this, PortState_t3108340848 * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UpgraderCircle UpgraderTreeRepair::GetCached()
extern "C"  UpgraderCircle_t998631014 * UpgraderTreeRepair_GetCached_m954058713 (UpgraderTreeRepair_t104611681 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UpgraderTreeRepair::DestroyOldCircles()
extern "C"  void UpgraderTreeRepair_DestroyOldCircles_m1335764110 (UpgraderTreeRepair_t104611681 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UpgraderTreeRepair::OnHealthChange(System.Single,System.Single)
extern "C"  void UpgraderTreeRepair_OnHealthChange_m2842698203 (UpgraderTreeRepair_t104611681 * __this, float ___currentHealth, float ___maxHealth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UpgraderTreeRepair::CalculateCoreLevel(System.Single,System.Single)
extern "C"  String_t* UpgraderTreeRepair_CalculateCoreLevel_m665912356 (UpgraderTreeRepair_t104611681 * __this, float ___currentHealth, float ___maxHealth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
