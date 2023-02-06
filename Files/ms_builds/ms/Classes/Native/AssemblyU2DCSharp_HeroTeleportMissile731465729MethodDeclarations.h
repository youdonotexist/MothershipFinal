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

// HeroTeleportMissile
struct HeroTeleportMissile_t731465729;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// SpatialNode
struct SpatialNode_t3293136134;
// UnityEngine.Collision
struct Collision_t1119538015;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_SpatialNode3293136134.h"
#include "UnityEngine_UnityEngine_Collision1119538015.h"

// System.Void HeroTeleportMissile::.ctor()
extern "C"  void HeroTeleportMissile__ctor_m247413898 (HeroTeleportMissile_t731465729 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HeroTeleportMissile::Awake()
extern "C"  void HeroTeleportMissile_Awake_m485019117 (HeroTeleportMissile_t731465729 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HeroTeleportMissile::Start()
extern "C"  void HeroTeleportMissile_Start_m3489518986 (HeroTeleportMissile_t731465729 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator HeroTeleportMissile::FireMissile(SpatialNode)
extern "C"  Il2CppObject * HeroTeleportMissile_FireMissile_m3614235884 (HeroTeleportMissile_t731465729 * __this, SpatialNode_t3293136134 * ___startNode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator HeroTeleportMissile::MoveFromTo(SpatialNode,SpatialNode)
extern "C"  Il2CppObject * HeroTeleportMissile_MoveFromTo_m1860911914 (HeroTeleportMissile_t731465729 * __this, SpatialNode_t3293136134 * ___fromNode, SpatialNode_t3293136134 * ___toNode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator HeroTeleportMissile::AnimateTeleport(SpatialNode,SpatialNode)
extern "C"  Il2CppObject * HeroTeleportMissile_AnimateTeleport_m441278006 (HeroTeleportMissile_t731465729 * __this, SpatialNode_t3293136134 * ___teleportSpot, SpatialNode_t3293136134 * ___futureNode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HeroTeleportMissile::OnCollisionEnter(UnityEngine.Collision)
extern "C"  void HeroTeleportMissile_OnCollisionEnter_m2097370712 (HeroTeleportMissile_t731465729 * __this, Collision_t1119538015 * ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HeroTeleportMissile::OnDestroy()
extern "C"  void HeroTeleportMissile_OnDestroy_m2083241091 (HeroTeleportMissile_t731465729 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HeroTeleportMissile::OnBecameInvisible()
extern "C"  void HeroTeleportMissile_OnBecameInvisible_m3674857597 (HeroTeleportMissile_t731465729 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
