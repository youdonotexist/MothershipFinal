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

// UpgraderDetails
struct UpgraderDetails_t1667562348;
// PortState
struct PortState_t3108340848;
// UpgraderDetailStat
struct UpgraderDetailStat_t2757325019;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_PortState3108340848.h"
#include "mscorlib_System_String968488902.h"

// System.Void UpgraderDetails::.ctor()
extern "C"  void UpgraderDetails__ctor_m271115647 (UpgraderDetails_t1667562348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UpgraderDetails::Awake()
extern "C"  void UpgraderDetails_Awake_m508720866 (UpgraderDetails_t1667562348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UpgraderDetails::SetDetails(PortState,System.Int32,System.Int32)
extern "C"  void UpgraderDetails_SetDetails_m4257674269 (UpgraderDetails_t1667562348 * __this, PortState_t3108340848 * ___portState, int32_t ___selectedTypeIndex, int32_t ___selectedLevelIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UpgraderDetailStat UpgraderDetails::GetCachedItem()
extern "C"  UpgraderDetailStat_t2757325019 * UpgraderDetails_GetCachedItem_m564640810 (UpgraderDetails_t1667562348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UpgraderDetails::DetailsForSingleUse(PortState,System.Int32,System.Int32)
extern "C"  void UpgraderDetails_DetailsForSingleUse_m1538495021 (UpgraderDetails_t1667562348 * __this, PortState_t3108340848 * ___port, int32_t ___selectedTypeIndex, int32_t ___selectedLevelIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UpgraderDetails::DetailsForSingleLevel(PortState,System.Int32,System.Int32)
extern "C"  void UpgraderDetails_DetailsForSingleLevel_m945331600 (UpgraderDetails_t1667562348 * __this, PortState_t3108340848 * ___port, int32_t ___selectedTypeIndex, int32_t ___selectedLevelIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UpgraderDetails::DetailsForLevel(PortState,System.Int32,System.Int32)
extern "C"  void UpgraderDetails_DetailsForLevel_m1275482984 (UpgraderDetails_t1667562348 * __this, PortState_t3108340848 * ___port, int32_t ___selectedTypeIndex, int32_t ___selectedLevelIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UpgraderDetails::ShowUpgraderButton(System.Boolean)
extern "C"  void UpgraderDetails_ShowUpgraderButton_m609321121 (UpgraderDetails_t1667562348 * __this, bool ___show, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UpgraderDetails::CleanupStatItems()
extern "C"  void UpgraderDetails_CleanupStatItems_m3326176109 (UpgraderDetails_t1667562348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UpgraderDetails::OnUpgraderMessage(System.String)
extern "C"  void UpgraderDetails_OnUpgraderMessage_m1549570515 (UpgraderDetails_t1667562348 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UpgraderDetails::UpgraderMessage(System.String)
extern "C"  Il2CppObject * UpgraderDetails_UpgraderMessage_m2814163404 (UpgraderDetails_t1667562348 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UpgraderDetails::OnEnable()
extern "C"  void UpgraderDetails_OnEnable_m44334503 (UpgraderDetails_t1667562348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UpgraderDetails::OnDisable()
extern "C"  void UpgraderDetails_OnDisable_m1815306854 (UpgraderDetails_t1667562348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
