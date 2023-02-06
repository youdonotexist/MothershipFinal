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

// MinionPhysicsVehicle
struct MinionPhysicsVehicle_t2819122459;
// Path2
struct Path2_t76886157;
// UnityEngine.Collision
struct Collision_t1119538015;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Path276886157.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_Collision1119538015.h"
#include "AssemblyU2DCSharp_MinionPhysicsVehicle_Destruction1847166700.h"

// System.Void MinionPhysicsVehicle::.ctor()
extern "C"  void MinionPhysicsVehicle__ctor_m3045098464 (MinionPhysicsVehicle_t2819122459 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MinionPhysicsVehicle::.cctor()
extern "C"  void MinionPhysicsVehicle__cctor_m3721642957 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MinionPhysicsVehicle::Awake()
extern "C"  void MinionPhysicsVehicle_Awake_m3282703683 (MinionPhysicsVehicle_t2819122459 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MinionPhysicsVehicle::SetFollowPath()
extern "C"  void MinionPhysicsVehicle_SetFollowPath_m2644703094 (MinionPhysicsVehicle_t2819122459 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MinionPhysicsVehicle::StopFollowPath(System.Boolean)
extern "C"  void MinionPhysicsVehicle_StopFollowPath_m1501708595 (MinionPhysicsVehicle_t2819122459 * __this, bool ___keepMoving, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MinionPhysicsVehicle::Update()
extern "C"  void MinionPhysicsVehicle_Update_m1635633965 (MinionPhysicsVehicle_t2819122459 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MinionPhysicsVehicle::FixedUpdate()
extern "C"  void MinionPhysicsVehicle_FixedUpdate_m2236610907 (MinionPhysicsVehicle_t2819122459 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MinionPhysicsVehicle::SetPath(Path2)
extern "C"  void MinionPhysicsVehicle_SetPath_m3787754304 (MinionPhysicsVehicle_t2819122459 * __this, Path2_t76886157 * ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MinionPhysicsVehicle::SmoothPath()
extern "C"  void MinionPhysicsVehicle_SmoothPath_m1026485591 (MinionPhysicsVehicle_t2819122459 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MinionPhysicsVehicle::SetToSplinePosition(UnityEngine.Vector3)
extern "C"  void MinionPhysicsVehicle_SetToSplinePosition_m3515177284 (MinionPhysicsVehicle_t2819122459 * __this, Vector3_t3525329789  ___splinePosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MinionPhysicsVehicle::NormalPath()
extern "C"  void MinionPhysicsVehicle_NormalPath_m313927120 (MinionPhysicsVehicle_t2819122459 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MinionPhysicsVehicle::OnBecameInvisible()
extern "C"  void MinionPhysicsVehicle_OnBecameInvisible_m3743209171 (MinionPhysicsVehicle_t2819122459 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MinionPhysicsVehicle::OnCollisionEnter(UnityEngine.Collision)
extern "C"  void MinionPhysicsVehicle_OnCollisionEnter_m4217488814 (MinionPhysicsVehicle_t2819122459 * __this, Collision_t1119538015 * ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MinionPhysicsVehicle::OnDamage(System.Single)
extern "C"  void MinionPhysicsVehicle_OnDamage_m3378605145 (MinionPhysicsVehicle_t2819122459 * __this, float ___damage, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MinionPhysicsVehicle::CleanupAndDestroy(UnityEngine.Vector3,System.Boolean,MinionPhysicsVehicle/DestructionType)
extern "C"  void MinionPhysicsVehicle_CleanupAndDestroy_m2414307269 (MinionPhysicsVehicle_t2819122459 * __this, Vector3_t3525329789  ___explosionPoint, bool ___explode, int32_t ___destroyType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MinionPhysicsVehicle::PlaySoundForDestroy(MinionPhysicsVehicle/DestructionType)
extern "C"  void MinionPhysicsVehicle_PlaySoundForDestroy_m102386514 (MinionPhysicsVehicle_t2819122459 * __this, int32_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MinionPhysicsVehicle::SetDisabled()
extern "C"  void MinionPhysicsVehicle_SetDisabled_m2811021500 (MinionPhysicsVehicle_t2819122459 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MinionPhysicsVehicle::OnPortChange(System.Boolean)
extern "C"  void MinionPhysicsVehicle_OnPortChange_m2649162667 (MinionPhysicsVehicle_t2819122459 * __this, bool ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MinionPhysicsVehicle::SetLaseredState(System.Boolean)
extern "C"  void MinionPhysicsVehicle_SetLaseredState_m4137723710 (MinionPhysicsVehicle_t2819122459 * __this, bool ___isLasered, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 MinionPhysicsVehicle::LastVelocity()
extern "C"  Vector3_t3525329789  MinionPhysicsVehicle_LastVelocity_m2317057969 (MinionPhysicsVehicle_t2819122459 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MinionPhysicsVehicle::OnDrawGizmos()
extern "C"  void MinionPhysicsVehicle_OnDrawGizmos_m562524480 (MinionPhysicsVehicle_t2819122459 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MinionPhysicsVehicle::OnPooled()
extern "C"  void MinionPhysicsVehicle_OnPooled_m3589075422 (MinionPhysicsVehicle_t2819122459 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MinionPhysicsVehicle::OnDestroy()
extern "C"  void MinionPhysicsVehicle_OnDestroy_m3350030553 (MinionPhysicsVehicle_t2819122459 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
