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

// UnityEngine.Transform
struct Transform_t284553113;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// UnityEngine.Animation
struct Animation_t350396337;
// UnityEngine.Color[]
struct ColorU5BU5D_t3477081137;
// UnityEngine.Texture2D
struct Texture2D_t2509538522;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3012272455;
// System.Int32[]
struct Int32U5BU5D_t1809983122;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Transform284553113.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_GameObject4012695102.h"
#include "UnityEngine_UnityEngine_Animation350396337.h"
#include "UnityEngine_UnityEngine_Color1588175760.h"
#include "UnityEngine_UnityEngine_Texture2D2509538522.h"
#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "mscorlib_System_String968488902.h"

// System.Void Extensions::SetPositionX(UnityEngine.Transform,System.Single)
extern "C"  void Extensions_SetPositionX_m1848089304 (Il2CppObject * __this /* static, unused */, Transform_t284553113 * ___t, float ___newX, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Extensions::SetPositionY(UnityEngine.Transform,System.Single)
extern "C"  void Extensions_SetPositionY_m3480893303 (Il2CppObject * __this /* static, unused */, Transform_t284553113 * ___t, float ___newY, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Extensions::SetPositionZ(UnityEngine.Transform,System.Single)
extern "C"  void Extensions_SetPositionZ_m818730006 (Il2CppObject * __this /* static, unused */, Transform_t284553113 * ___t, float ___newZ, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Extensions::GetPositionX(UnityEngine.Transform)
extern "C"  float Extensions_GetPositionX_m3137931739 (Il2CppObject * __this /* static, unused */, Transform_t284553113 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Extensions::GetPositionY(UnityEngine.Transform)
extern "C"  float Extensions_GetPositionY_m3070924986 (Il2CppObject * __this /* static, unused */, Transform_t284553113 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Extensions::GetPositionZ(UnityEngine.Transform)
extern "C"  float Extensions_GetPositionZ_m3003918233 (Il2CppObject * __this /* static, unused */, Transform_t284553113 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Extensions::SetPositionX(UnityEngine.Vector3,System.Single)
extern "C"  Vector3_t3525329789  Extensions_SetPositionX_m3847779898 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___t, float ___newX, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Extensions::SetPositionY(UnityEngine.Vector3,System.Single)
extern "C"  Vector3_t3525329789  Extensions_SetPositionY_m1503112857 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___t, float ___newY, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Extensions::SetPositionZ(UnityEngine.Vector3,System.Single)
extern "C"  Vector3_t3525329789  Extensions_SetPositionZ_m3453413112 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___t, float ___newZ, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Extensions::GetPositionX(UnityEngine.Vector3)
extern "C"  float Extensions_GetPositionX_m563739127 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Extensions::GetPositionY(UnityEngine.Vector3)
extern "C"  float Extensions_GetPositionY_m2820650134 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Extensions::GetPositionZ(UnityEngine.Vector3)
extern "C"  float Extensions_GetPositionZ_m782593845 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Extensions::HasRigidbody(UnityEngine.GameObject)
extern "C"  bool Extensions_HasRigidbody_m1729472444 (Il2CppObject * __this /* static, unused */, GameObject_t4012695102 * ___gobj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Extensions::HasAnimation(UnityEngine.GameObject)
extern "C"  bool Extensions_HasAnimation_m1649893363 (Il2CppObject * __this /* static, unused */, GameObject_t4012695102 * ___gobj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Extensions::SetSpeed(UnityEngine.Animation,System.Single)
extern "C"  void Extensions_SetSpeed_m3523957192 (Il2CppObject * __this /* static, unused */, Animation_t350396337 * ___anim, float ___newSpeed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Extensions::Diff(UnityEngine.Color,UnityEngine.Color)
extern "C"  float Extensions_Diff_m3151642168 (Il2CppObject * __this /* static, unused */, Color_t1588175760  ___c, Color_t1588175760  ___otherColor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Extensions::SqrDiff(UnityEngine.Color,UnityEngine.Color)
extern "C"  float Extensions_SqrDiff_m3370547796 (Il2CppObject * __this /* static, unused */, Color_t1588175760  ___c, Color_t1588175760  ___otherColor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color[] Extensions::ExtractColors(UnityEngine.Texture2D)
extern "C"  ColorU5BU5D_t3477081137* Extensions_ExtractColors_m3356407339 (Il2CppObject * __this /* static, unused */, Texture2D_t2509538522 * ___tex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Extensions::CreateWithPool(UnityEngine.MonoBehaviour)
extern "C"  void Extensions_CreateWithPool_m676267412 (Il2CppObject * __this /* static, unused */, MonoBehaviour_t3012272455 * ___behavior, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Extensions::Kill(UnityEngine.GameObject)
extern "C"  void Extensions_Kill_m3959484051 (Il2CppObject * __this /* static, unused */, GameObject_t4012695102 * ___gameObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] Extensions::AllIndexesOf(System.String,System.String)
extern "C"  Int32U5BU5D_t1809983122* Extensions_AllIndexesOf_m4246763423 (Il2CppObject * __this /* static, unused */, String_t* ___str, String_t* ___searchstring, const MethodInfo* method) IL2CPP_METHOD_ATTR;
