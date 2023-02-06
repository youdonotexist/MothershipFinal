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

// IKTest
struct IKTest_t2161795284;
// Damagable
struct Damagable_t4024817136;
// UnityEngine.Transform
struct Transform_t284553113;
// Magnet
struct Magnet_t2297203594;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// UnityEngine.Collider
struct Collider_t955670625;
// ArmManager
struct ArmManager_t3707824593;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Damagable4024817136.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_Transform284553113.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"
#include "UnityEngine_UnityEngine_Collider955670625.h"
#include "AssemblyU2DCSharp_ArmManager3707824593.h"

// System.Void IKTest::.ctor()
extern "C"  void IKTest__ctor_m4159353415 (IKTest_t2161795284 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IKTest::Awake()
extern "C"  void IKTest_Awake_m101991338 (IKTest_t2161795284 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IKTest::OnEnable()
extern "C"  void IKTest_OnEnable_m3562675167 (IKTest_t2161795284 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean IKTest::IsReadyToIK()
extern "C"  bool IKTest_IsReadyToIK_m3613311943 (IKTest_t2161795284 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IKTest::setParentDamagable(Damagable)
extern "C"  void IKTest_setParentDamagable_m2481372065 (IKTest_t2161795284 * __this, Damagable_t4024817136 * ___dam, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean IKTest::IsRetracting()
extern "C"  bool IKTest_IsRetracting_m3093852444 (IKTest_t2161795284 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean IKTest::IsRetracted()
extern "C"  bool IKTest_IsRetracted_m2870617607 (IKTest_t2161795284 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IKTest::FixedUpdate()
extern "C"  void IKTest_FixedUpdate_m2004975234 (IKTest_t2161795284 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean IKTest::ComputeIK2(UnityEngine.Vector3)
extern "C"  bool IKTest_ComputeIK2_m3538083919 (IKTest_t2161795284 * __this, Vector3_t3525329789  ___end, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IKTest::CCD_Ik(UnityEngine.Transform,System.Single,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  void IKTest_CCD_Ik_m835817540 (IKTest_t2161795284 * __this, Transform_t284553113 * ___jointTrans, float ___length, Vector2_t3525329788  ___effector, Vector2_t3525329788  ___target, Vector2_t3525329788  ___minMaxAngle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single IKTest::SimplifyAngle(System.Single)
extern "C"  float IKTest_SimplifyAngle_m3789489832 (IKTest_t2161795284 * __this, float ___angle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IKTest::DeployArms()
extern "C"  void IKTest_DeployArms_m2614783163 (IKTest_t2161795284 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IKTest::RetractArm()
extern "C"  void IKTest_RetractArm_m1821319672 (IKTest_t2161795284 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Magnet IKTest::GetMagnet()
extern "C"  Magnet_t2297203594 * IKTest_GetMagnet_m3530540338 (IKTest_t2161795284 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator IKTest::RetractArmsCoroutine()
extern "C"  Il2CppObject * IKTest_RetractArmsCoroutine_m4191897573 (IKTest_t2161795284 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator IKTest::DeployArmsCoroutine()
extern "C"  Il2CppObject * IKTest_DeployArmsCoroutine_m3149351415 (IKTest_t2161795284 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IKTest::OnDrawGizmos()
extern "C"  void IKTest_OnDrawGizmos_m1971753209 (IKTest_t2161795284 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IKTest::SetCaptured(UnityEngine.Collider)
extern "C"  void IKTest_SetCaptured_m289229306 (IKTest_t2161795284 * __this, Collider_t955670625 * ___collider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IKTest::CapturedLogic()
extern "C"  void IKTest_CapturedLogic_m1363952517 (IKTest_t2161795284 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform IKTest::GetCapturedTarget()
extern "C"  Transform_t284553113 * IKTest_GetCapturedTarget_m1613274892 (IKTest_t2161795284 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IKTest::ReleaseCapturedTarget()
extern "C"  void IKTest_ReleaseCapturedTarget_m1099065051 (IKTest_t2161795284 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IKTest::SetManager(ArmManager)
extern "C"  void IKTest_SetManager_m4129231063 (IKTest_t2161795284 * __this, ArmManager_t3707824593 * ___manager, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ArmManager IKTest::GetManager()
extern "C"  ArmManager_t3707824593 * IKTest_GetManager_m2879089824 (IKTest_t2161795284 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IKTest::DrawLines(UnityEngine.Vector3,UnityEngine.Vector2)
extern "C"  void IKTest_DrawLines_m328896525 (IKTest_t2161795284 * __this, Vector3_t3525329789  ___pos, Vector2_t3525329788  ___minMax, const MethodInfo* method) IL2CPP_METHOD_ATTR;
