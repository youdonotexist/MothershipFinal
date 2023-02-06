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

// SplitMinion
struct SplitMinion_t3493129232;
// MinionBaseVehicle
struct MinionBaseVehicle_t3259673765;
// UnityEngine.Transform[]
struct TransformU5BU5D_t3681339876;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t3227571696;
// UnityEngine.Collider
struct Collider_t955670625;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "AssemblyU2DCSharp_PortState_MinionTypeLevelDetail70250981.h"
#include "UnityEngine_UnityEngine_Collider955670625.h"

// System.Void SplitMinion::.ctor()
extern "C"  void SplitMinion__ctor_m1985421659 (SplitMinion_t3493129232 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SplitMinion::Awake()
extern "C"  void SplitMinion_Awake_m2223026878 (SplitMinion_t3493129232 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MinionBaseVehicle SplitMinion::mid(UnityEngine.Vector3)
extern "C"  MinionBaseVehicle_t3259673765 * SplitMinion_mid_m1841567434 (SplitMinion_t3493129232 * __this, Vector3_t3525329789  ___inheritedVelocity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MinionBaseVehicle SplitMinion::angled(System.Single,UnityEngine.Vector3)
extern "C"  MinionBaseVehicle_t3259673765 * SplitMinion_angled_m3752313778 (SplitMinion_t3493129232 * __this, float ___angle, Vector3_t3525329789  ___inheritedVelocity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SplitMinion::SetLevelDetails(PortState/MinionTypeLevelDetail)
extern "C"  void SplitMinion_SetLevelDetails_m787154291 (SplitMinion_t3493129232 * __this, MinionTypeLevelDetail_t70250981  ___levelDets, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SplitMinion::OnPathEnd()
extern "C"  void SplitMinion_OnPathEnd_m1247051856 (SplitMinion_t3493129232 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform[] SplitMinion::GetTargets(UnityEngine.Vector3[])
extern "C"  TransformU5BU5D_t3681339876* SplitMinion_GetTargets_m3189961278 (SplitMinion_t3493129232 * __this, Vector3U5BU5D_t3227571696* ___forwards, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SplitMinion::<GetTargets>m__71(UnityEngine.Collider,UnityEngine.Collider)
extern "C"  int32_t SplitMinion_U3CGetTargetsU3Em__71_m4229852142 (SplitMinion_t3493129232 * __this, Collider_t955670625 * ___o1, Collider_t955670625 * ___o2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
