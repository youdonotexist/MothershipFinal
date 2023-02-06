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

// TurretMine
struct TurretMine_t1863118211;
// SpatialNode
struct SpatialNode_t3293136134;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// UnityEngine.Collision
struct Collision_t1119538015;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_SpatialNode3293136134.h"
#include "UnityEngine_UnityEngine_Collision1119538015.h"

// System.Void TurretMine::.ctor()
extern "C"  void TurretMine__ctor_m1502490232 (TurretMine_t1863118211 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TurretMine::Start()
extern "C"  void TurretMine_Start_m449628024 (TurretMine_t1863118211 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TurretMine::OnCreate(SpatialNode,SpatialNode)
extern "C"  void TurretMine_OnCreate_m2855667179 (TurretMine_t1863118211 * __this, SpatialNode_t3293136134 * ___start, SpatialNode_t3293136134 * ___end, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator TurretMine::AnimateMineRoutine(SpatialNode,SpatialNode)
extern "C"  Il2CppObject * TurretMine_AnimateMineRoutine_m3572644462 (TurretMine_t1863118211 * __this, SpatialNode_t3293136134 * ___start, SpatialNode_t3293136134 * ___end, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TurretMine::OnFullyDeployed()
extern "C"  void TurretMine_OnFullyDeployed_m1179568935 (TurretMine_t1863118211 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TurretMine::Update()
extern "C"  void TurretMine_Update_m1059419029 (TurretMine_t1863118211 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TurretMine::OnCollisionEnter(UnityEngine.Collision)
extern "C"  void TurretMine_OnCollisionEnter_m643764294 (TurretMine_t1863118211 * __this, Collision_t1119538015 * ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TurretMine::OnBecameInvisible()
extern "C"  void TurretMine_OnBecameInvisible_m2009554283 (TurretMine_t1863118211 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
