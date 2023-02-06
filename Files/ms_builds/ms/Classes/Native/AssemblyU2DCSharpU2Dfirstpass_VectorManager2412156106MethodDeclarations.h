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

// VectorManager
struct VectorManager_t2412156106;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// Vectrosity.VectorLine
struct VectorLine_t3065371647;
// RefInt
struct RefInt_t2443978364;
// UnityEngine.Transform
struct Transform_t284553113;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t3227571696;
// UnityEngine.Mesh
struct Mesh_t1525280346;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Color1588175760.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_GameObject4012695102.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Vectrosity_VectorLin3065371647.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Vectrosity_Visibility693539642.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Vectrosity_Brightnes3695336569.h"
#include "AssemblyU2DCSharpU2Dfirstpass_RefInt2443978364.h"
#include "UnityEngine_UnityEngine_Transform284553113.h"
#include "UnityEngine_UnityEngine_Bounds3518514978.h"

// System.Void VectorManager::.ctor()
extern "C"  void VectorManager__ctor_m3584607661 (VectorManager_t2412156106 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VectorManager::.cctor()
extern "C"  void VectorManager__cctor_m3266558880 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VectorManager::SetBrightnessParameters(System.Single,System.Single,System.Int32,System.Single,UnityEngine.Color)
extern "C"  void VectorManager_SetBrightnessParameters_m841823540 (Il2CppObject * __this /* static, unused */, float ___min, float ___max, int32_t ___levels, float ___frequency, Color_t1588175760  ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single VectorManager::GetBrightnessValue(UnityEngine.Vector3)
extern "C"  float VectorManager_GetBrightnessValue_m4105026724 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___pos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VectorManager::ObjectSetup(UnityEngine.GameObject,Vectrosity.VectorLine,Vectrosity.Visibility,Vectrosity.Brightness)
extern "C"  void VectorManager_ObjectSetup_m2405021609 (Il2CppObject * __this /* static, unused */, GameObject_t4012695102 * ___go, VectorLine_t3065371647 * ___line, int32_t ___visibility, int32_t ___brightness, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VectorManager::ObjectSetup(UnityEngine.GameObject,Vectrosity.VectorLine,Vectrosity.Visibility,Vectrosity.Brightness,System.Boolean)
extern "C"  void VectorManager_ObjectSetup_m3987551412 (Il2CppObject * __this /* static, unused */, GameObject_t4012695102 * ___go, VectorLine_t3065371647 * ___line, int32_t ___visibility, int32_t ___brightness, bool ___makeBounds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 VectorManager::get_arrayCount()
extern "C"  int32_t VectorManager_get_arrayCount_m2719297696 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VectorManager::VisibilityStaticSetup(Vectrosity.VectorLine,RefInt&)
extern "C"  void VectorManager_VisibilityStaticSetup_m1991771327 (Il2CppObject * __this /* static, unused */, VectorLine_t3065371647 * ___line, RefInt_t2443978364 ** ___objectNum, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VectorManager::VisibilityStaticRemove(System.Int32)
extern "C"  void VectorManager_VisibilityStaticRemove_m1831949580 (Il2CppObject * __this /* static, unused */, int32_t ___objectNumber, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 VectorManager::get_arrayCount2()
extern "C"  int32_t VectorManager_get_arrayCount2_m2693859572 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VectorManager::VisibilitySetup(UnityEngine.Transform,Vectrosity.VectorLine,RefInt&)
extern "C"  void VectorManager_VisibilitySetup_m17334120 (Il2CppObject * __this /* static, unused */, Transform_t284553113 * ___thisTransform, VectorLine_t3065371647 * ___line, RefInt_t2443978364 ** ___objectNum, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VectorManager::VisibilityRemove(System.Int32)
extern "C"  void VectorManager_VisibilityRemove_m1486836606 (Il2CppObject * __this /* static, unused */, int32_t ___objectNumber, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VectorManager::CheckDistanceSetup(UnityEngine.Transform,Vectrosity.VectorLine,UnityEngine.Color,RefInt)
extern "C"  void VectorManager_CheckDistanceSetup_m2302020677 (Il2CppObject * __this /* static, unused */, Transform_t284553113 * ___thisTransform, VectorLine_t3065371647 * ___line, Color_t1588175760  ___color, RefInt_t2443978364 * ___objectNum, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VectorManager::DistanceRemove(System.Int32)
extern "C"  void VectorManager_DistanceRemove_m875917921 (Il2CppObject * __this /* static, unused */, int32_t ___objectNumber, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VectorManager::CheckDistance()
extern "C"  void VectorManager_CheckDistance_m12991144 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VectorManager::SetOldDistance(System.Int32,System.Int32)
extern "C"  void VectorManager_SetOldDistance_m3757577941 (Il2CppObject * __this /* static, unused */, int32_t ___objectNumber, int32_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VectorManager::SetDistanceColor(System.Int32)
extern "C"  void VectorManager_SetDistanceColor_m3207545332 (Il2CppObject * __this /* static, unused */, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VectorManager::DrawArrayLine(System.Int32)
extern "C"  void VectorManager_DrawArrayLine_m1764293349 (Il2CppObject * __this /* static, unused */, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VectorManager::DrawArrayLine2(System.Int32)
extern "C"  void VectorManager_DrawArrayLine2_m3943401937 (Il2CppObject * __this /* static, unused */, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VectorManager::DrawArrayLines()
extern "C"  void VectorManager_DrawArrayLines_m3879307393 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VectorManager::DrawArrayLines2()
extern "C"  void VectorManager_DrawArrayLines2_m4294421811 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Bounds VectorManager::GetBounds(Vectrosity.VectorLine)
extern "C"  Bounds_t3518514978  VectorManager_GetBounds_m1642502902 (Il2CppObject * __this /* static, unused */, VectorLine_t3065371647 * ___line, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Bounds VectorManager::GetBounds(UnityEngine.Vector3[])
extern "C"  Bounds_t3518514978  VectorManager_GetBounds_m705122920 (Il2CppObject * __this /* static, unused */, Vector3U5BU5D_t3227571696* ___points3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Mesh VectorManager::MakeBoundsMesh(UnityEngine.Bounds)
extern "C"  Mesh_t1525280346 * VectorManager_MakeBoundsMesh_m3435098170 (Il2CppObject * __this /* static, unused */, Bounds_t3518514978  ___bounds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VectorManager::SetupBoundsMesh(UnityEngine.GameObject,Vectrosity.VectorLine)
extern "C"  void VectorManager_SetupBoundsMesh_m2532184609 (Il2CppObject * __this /* static, unused */, GameObject_t4012695102 * ___go, VectorLine_t3065371647 * ___line, const MethodInfo* method) IL2CPP_METHOD_ATTR;
