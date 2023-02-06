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

// MeshCombineUtility
struct MeshCombineUtility_t3596014234;
// UnityEngine.Mesh
struct Mesh_t1525280346;
// MeshCombineUtility/MeshInstance[]
struct MeshInstanceU5BU5D_t333451511;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t3227571696;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t2741383957;
// UnityEngine.Color[]
struct ColorU5BU5D_t3477081137;
// UnityEngine.Vector4[]
struct Vector4U5BU5D_t3713759435;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Matrix4x4277289660.h"

// System.Void MeshCombineUtility::.ctor()
extern "C"  void MeshCombineUtility__ctor_m46400757 (MeshCombineUtility_t3596014234 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Mesh MeshCombineUtility::Combine(MeshCombineUtility/MeshInstance[],System.Boolean)
extern "C"  Mesh_t1525280346 * MeshCombineUtility_Combine_m1001147125 (Il2CppObject * __this /* static, unused */, MeshInstanceU5BU5D_t333451511* ___combines, bool ___generateStrips, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MeshCombineUtility::Copy(System.Int32,UnityEngine.Vector3[],UnityEngine.Vector3[],System.Int32&,UnityEngine.Matrix4x4)
extern "C"  void MeshCombineUtility_Copy_m2623235360 (Il2CppObject * __this /* static, unused */, int32_t ___vertexcount, Vector3U5BU5D_t3227571696* ___src, Vector3U5BU5D_t3227571696* ___dst, int32_t* ___offset, Matrix4x4_t277289660  ___transform, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MeshCombineUtility::CopyNormal(System.Int32,UnityEngine.Vector3[],UnityEngine.Vector3[],System.Int32&,UnityEngine.Matrix4x4)
extern "C"  void MeshCombineUtility_CopyNormal_m2003892647 (Il2CppObject * __this /* static, unused */, int32_t ___vertexcount, Vector3U5BU5D_t3227571696* ___src, Vector3U5BU5D_t3227571696* ___dst, int32_t* ___offset, Matrix4x4_t277289660  ___transform, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MeshCombineUtility::Copy(System.Int32,UnityEngine.Vector2[],UnityEngine.Vector2[],System.Int32&)
extern "C"  void MeshCombineUtility_Copy_m1971532654 (Il2CppObject * __this /* static, unused */, int32_t ___vertexcount, Vector2U5BU5D_t2741383957* ___src, Vector2U5BU5D_t2741383957* ___dst, int32_t* ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MeshCombineUtility::CopyColors(System.Int32,UnityEngine.Color[],UnityEngine.Color[],System.Int32&)
extern "C"  void MeshCombineUtility_CopyColors_m3859583382 (Il2CppObject * __this /* static, unused */, int32_t ___vertexcount, ColorU5BU5D_t3477081137* ___src, ColorU5BU5D_t3477081137* ___dst, int32_t* ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MeshCombineUtility::CopyTangents(System.Int32,UnityEngine.Vector4[],UnityEngine.Vector4[],System.Int32&,UnityEngine.Matrix4x4)
extern "C"  void MeshCombineUtility_CopyTangents_m795097356 (Il2CppObject * __this /* static, unused */, int32_t ___vertexcount, Vector4U5BU5D_t3713759435* ___src, Vector4U5BU5D_t3713759435* ___dst, int32_t* ___offset, Matrix4x4_t277289660  ___transform, const MethodInfo* method) IL2CPP_METHOD_ATTR;
