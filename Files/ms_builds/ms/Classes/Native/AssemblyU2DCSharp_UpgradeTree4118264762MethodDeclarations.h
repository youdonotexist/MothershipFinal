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

// UpgradeTree
struct UpgradeTree_t4118264762;
// PortState
struct PortState_t3108340848;
// EventDelegate
struct EventDelegate_t4004424223;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Color1588175760.h"
#include "AssemblyU2DCSharp_PortState3108340848.h"
#include "AssemblyU2DCSharp_EventDelegate4004424223.h"

// System.Void UpgradeTree::.ctor()
extern "C"  void UpgradeTree__ctor_m3063042289 (UpgradeTree_t4118264762 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UpgradeTree::SetHighlight(System.Int32,UnityEngine.Color)
extern "C"  void UpgradeTree_SetHighlight_m796544214 (UpgradeTree_t4118264762 * __this, int32_t ___index, Color_t1588175760  ___highlight, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UpgradeTree::SetSelected(System.Int32,System.Int32)
extern "C"  void UpgradeTree_SetSelected_m1718850362 (UpgradeTree_t4118264762 * __this, int32_t ___selectedTypeIndex, int32_t ___selectedLevelContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UpgradeTree::SetState(PortState)
extern "C"  void UpgradeTree_SetState_m410773312 (UpgradeTree_t4118264762 * __this, PortState_t3108340848 * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UpgradeTree::SetOnClick(EventDelegate)
extern "C"  void UpgradeTree_SetOnClick_m780019353 (UpgradeTree_t4118264762 * __this, EventDelegate_t4004424223 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UpgradeTree::OnShow()
extern "C"  void UpgradeTree_OnShow_m2364562479 (UpgradeTree_t4118264762 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UpgradeTree::OnHide()
extern "C"  void UpgradeTree_OnHide_m2050220340 (UpgradeTree_t4118264762 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
