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

// Deployable
struct Deployable_t3932624609;
// SpatialNode
struct SpatialNode_t3293136134;
// HeroAIManager
struct HeroAIManager_t825711499;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_SpatialNode3293136134.h"
#include "AssemblyU2DCSharp_HeroAIManager825711499.h"

// System.Void Deployable::.ctor()
extern "C"  void Deployable__ctor_m2039066330 (Deployable_t3932624609 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Deployable::OnCreate(SpatialNode,SpatialNode)
extern "C"  void Deployable_OnCreate_m4024037325 (Deployable_t3932624609 * __this, SpatialNode_t3293136134 * ___start, SpatialNode_t3293136134 * ___end, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Deployable::OnFullyDeployed()
extern "C"  void Deployable_OnFullyDeployed_m1098299657 (Deployable_t3932624609 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Deployable::SetAiManager(HeroAIManager)
extern "C"  void Deployable_SetAiManager_m2031526682 (Deployable_t3932624609 * __this, HeroAIManager_t825711499 * ___manager, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Deployable::OnDestroy()
extern "C"  void Deployable_OnDestroy_m3168044755 (Deployable_t3932624609 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Deployable::SetSpatialNode(SpatialNode)
extern "C"  void Deployable_SetSpatialNode_m1453594782 (Deployable_t3932624609 * __this, SpatialNode_t3293136134 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
