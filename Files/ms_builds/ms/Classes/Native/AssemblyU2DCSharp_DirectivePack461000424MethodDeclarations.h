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

// DirectivePack
struct DirectivePack_t461000424;
// HeroVehicle
struct HeroVehicle_t3389256114;
// AIDirective
struct AIDirective_t3038039303;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// SpatialNode
struct SpatialNode_t3293136134;
// UnityEngine.GameObject
struct GameObject_t4012695102;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_HeroVehicle3389256114.h"
#include "AssemblyU2DCSharp_HeroAIManager_DirectiveState1409446306.h"
#include "AssemblyU2DCSharp_AIDirective3038039303.h"
#include "AssemblyU2DCSharp_SpatialNode3293136134.h"
#include "UnityEngine_UnityEngine_GameObject4012695102.h"
#include "AssemblyU2DCSharp_SpatialNode_SpatialNodeZone1151199698.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

// System.Void DirectivePack::.ctor()
extern "C"  void DirectivePack__ctor_m3615905667 (DirectivePack_t461000424 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DirectivePack::Awake()
extern "C"  void DirectivePack_Awake_m3853510886 (DirectivePack_t461000424 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DirectivePack::SetHero(HeroVehicle)
extern "C"  void DirectivePack_SetHero_m3568435011 (DirectivePack_t461000424 * __this, HeroVehicle_t3389256114 * ___veh, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// HeroAIManager/DirectiveState DirectivePack::handleDirective(AIDirective)
extern "C"  int32_t DirectivePack_handleDirective_m121241612 (DirectivePack_t461000424 * __this, AIDirective_t3038039303 * ___directive, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator DirectivePack::MoveToLaneProper(SpatialNode,System.Single)
extern "C"  Il2CppObject * DirectivePack_MoveToLaneProper_m3513647856 (DirectivePack_t461000424 * __this, SpatialNode_t3293136134 * ___node, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator DirectivePack::DeployDeployable(AIDirective,UnityEngine.GameObject,SpatialNode/SpatialNodeZone)
extern "C"  Il2CppObject * DirectivePack_DeployDeployable_m3792628279 (DirectivePack_t461000424 * __this, AIDirective_t3038039303 * ___directive, GameObject_t4012695102 * ___deployablePrefab, int32_t ___zone, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator DirectivePack::KickBack(System.Single,System.Single,UnityEngine.Vector3)
extern "C"  Il2CppObject * DirectivePack_KickBack_m3504684285 (DirectivePack_t461000424 * __this, float ___duration, float ___wait, Vector3_t3525329789  ___kickbackDirection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DirectivePack::OnHeroReady()
extern "C"  void DirectivePack_OnHeroReady_m3599025355 (DirectivePack_t461000424 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DirectivePack::OnHeroWin()
extern "C"  void DirectivePack_OnHeroWin_m397318788 (DirectivePack_t461000424 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
