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

// UpgradeWireframe
struct UpgradeWireframe_t4293979500;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t3227571696;
// UnityEngine.Transform
struct Transform_t284553113;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Transform284553113.h"

// System.Void UpgradeWireframe::.ctor()
extern "C"  void UpgradeWireframe__ctor_m3810169519 (UpgradeWireframe_t4293979500 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UpgradeWireframe::Awake()
extern "C"  void UpgradeWireframe_Awake_m4047774738 (UpgradeWireframe_t4293979500 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UpgradeWireframe::Start()
extern "C"  void UpgradeWireframe_Start_m2757307311 (UpgradeWireframe_t4293979500 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UpgradeWireframe::OnDestroy()
extern "C"  void UpgradeWireframe_OnDestroy_m1760917544 (UpgradeWireframe_t4293979500 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UpgradeWireframe::OnShow()
extern "C"  void UpgradeWireframe_OnShow_m4050670129 (UpgradeWireframe_t4293979500 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UpgradeWireframe::OnHide()
extern "C"  void UpgradeWireframe_OnHide_m3736327990 (UpgradeWireframe_t4293979500 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UpgradeWireframe::Update()
extern "C"  void UpgradeWireframe_Update_m3878000190 (UpgradeWireframe_t4293979500 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UpgradeWireframe::UpdateLines()
extern "C"  void UpgradeWireframe_UpdateLines_m210294019 (UpgradeWireframe_t4293979500 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] UpgradeWireframe::makePoints(UnityEngine.Transform)
extern "C"  Vector3U5BU5D_t3227571696* UpgradeWireframe_makePoints_m4020449375 (UpgradeWireframe_t4293979500 * __this, Transform_t284553113 * ___port, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UpgradeWireframe::DrawConnectionForPort(System.Int32)
extern "C"  void UpgradeWireframe_DrawConnectionForPort_m3719888614 (UpgradeWireframe_t4293979500 * __this, int32_t ___portIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UpgradeWireframe::OnPortChange(System.Int32)
extern "C"  void UpgradeWireframe_OnPortChange_m3761211734 (UpgradeWireframe_t4293979500 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UpgradeWireframe::SetMothershipHealth(System.Single,System.Single)
extern "C"  void UpgradeWireframe_SetMothershipHealth_m1876788294 (UpgradeWireframe_t4293979500 * __this, float ___currentHealth, float ___maxHealth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
