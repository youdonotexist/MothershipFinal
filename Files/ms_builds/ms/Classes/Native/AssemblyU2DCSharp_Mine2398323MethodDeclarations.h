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

// Mine
struct Mine_t2398323;
// SpatialNode
struct SpatialNode_t3293136134;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// UnityEngine.Collision
struct Collision_t1119538015;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_SpatialNode3293136134.h"
#include "UnityEngine_UnityEngine_Collision1119538015.h"

// System.Void Mine::.ctor()
extern "C"  void Mine__ctor_m1040434056 (Mine_t2398323 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mine::Start()
extern "C"  void Mine_Start_m4282539144 (Mine_t2398323 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mine::OnCreate(SpatialNode,SpatialNode)
extern "C"  void Mine_OnCreate_m4198262523 (Mine_t2398323 * __this, SpatialNode_t3293136134 * ___start, SpatialNode_t3293136134 * ___end, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Mine::AnimateMineRoutine(SpatialNode,SpatialNode)
extern "C"  Il2CppObject * Mine_AnimateMineRoutine_m367489406 (Mine_t2398323 * __this, SpatialNode_t3293136134 * ___start, SpatialNode_t3293136134 * ___end, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mine::OnFullyDeployed()
extern "C"  void Mine_OnFullyDeployed_m1188645943 (Mine_t2398323 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mine::OnCollisionEnter(UnityEngine.Collision)
extern "C"  void Mine_OnCollisionEnter_m1690068310 (Mine_t2398323 * __this, Collision_t1119538015 * ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mine::OnBecameInvisible()
extern "C"  void Mine_OnBecameInvisible_m2142624379 (Mine_t2398323 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
