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

// HeroMissile
struct HeroMissile_t4116636588;
// Path2
struct Path2_t76886157;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t3227571696;
// UnityEngine.Collision
struct Collision_t1119538015;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Path276886157.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_Collision1119538015.h"

// System.Void HeroMissile::.ctor()
extern "C"  void HeroMissile__ctor_m3358849343 (HeroMissile_t4116636588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HeroMissile::Start()
extern "C"  void HeroMissile_Start_m2305987135 (HeroMissile_t4116636588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HeroMissile::SetPath(Path2,UnityEngine.Vector3)
extern "C"  void HeroMissile_SetPath_m1454962708 (HeroMissile_t4116636588 * __this, Path2_t76886157 * ___p, Vector3_t3525329789  ___start, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HeroMissile::SetPathNormal(UnityEngine.Vector3[])
extern "C"  void HeroMissile_SetPathNormal_m3946483532 (HeroMissile_t4116636588 * __this, Vector3U5BU5D_t3227571696* ___points, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HeroMissile::Update()
extern "C"  void HeroMissile_Update_m2771976622 (HeroMissile_t4116636588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HeroMissile::FixedUpdate()
extern "C"  void HeroMissile_FixedUpdate_m1615309690 (HeroMissile_t4116636588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HeroMissile::OnCollisionEnter(UnityEngine.Collision)
extern "C"  void HeroMissile_OnCollisionEnter_m3457154829 (HeroMissile_t4116636588 * __this, Collision_t1119538015 * ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HeroMissile::OnDestroy()
extern "C"  void HeroMissile_OnDestroy_m3201898168 (HeroMissile_t4116636588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HeroMissile::OnBecameInvisible()
extern "C"  void HeroMissile_OnBecameInvisible_m3790091698 (HeroMissile_t4116636588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
