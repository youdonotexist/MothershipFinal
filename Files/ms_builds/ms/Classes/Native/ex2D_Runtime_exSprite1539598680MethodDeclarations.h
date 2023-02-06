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

// exSprite
struct exSprite_t1539598680;
// exAtlas
struct exAtlas_t2942648216;
// UnityEngine.Mesh
struct Mesh_t1525280346;
// exAtlas/Element
struct Element_t1816284;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Color1588175760.h"
#include "UnityEngine_UnityEngine_Mesh1525280346.h"
#include "ex2D_Runtime_exAtlas2942648216.h"

// System.Void exSprite::.ctor()
extern "C"  void exSprite__ctor_m1181419012 (exSprite_t1539598680 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean exSprite::get_useTextureOffset()
extern "C"  bool exSprite_get_useTextureOffset_m4107353030 (exSprite_t1539598680 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void exSprite::set_useTextureOffset(System.Boolean)
extern "C"  void exSprite_set_useTextureOffset_m2386533275 (exSprite_t1539598680 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color exSprite::get_color()
extern "C"  Color_t1588175760  exSprite_get_color_m754413269 (exSprite_t1539598680 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void exSprite::set_color(UnityEngine.Color)
extern "C"  void exSprite_set_color_m3675839646 (exSprite_t1539598680 * __this, Color_t1588175760  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean exSprite::get_customSize()
extern "C"  bool exSprite_get_customSize_m2860513105 (exSprite_t1539598680 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void exSprite::set_customSize(System.Boolean)
extern "C"  void exSprite_set_customSize_m4290528870 (exSprite_t1539598680 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single exSprite::get_width()
extern "C"  float exSprite_get_width_m3009080723 (exSprite_t1539598680 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void exSprite::set_width(System.Single)
extern "C"  void exSprite_set_width_m1748983648 (exSprite_t1539598680 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single exSprite::get_height()
extern "C"  float exSprite_get_height_m3591003548 (exSprite_t1539598680 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void exSprite::set_height(System.Single)
extern "C"  void exSprite_set_height_m829934119 (exSprite_t1539598680 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// exAtlas exSprite::get_atlas()
extern "C"  exAtlas_t2942648216 * exSprite_get_atlas_m788166537 (exSprite_t1539598680 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 exSprite::get_index()
extern "C"  int32_t exSprite_get_index_m1277409147 (exSprite_t1539598680 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean exSprite::get_useAtlas()
extern "C"  bool exSprite_get_useAtlas_m2087433859 (exSprite_t1539598680 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean exSprite::get_isHFlipped()
extern "C"  bool exSprite_get_isHFlipped_m685222659 (exSprite_t1539598680 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean exSprite::get_isVFlipped()
extern "C"  bool exSprite_get_isVFlipped_m2229000885 (exSprite_t1539598680 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void exSprite::CalculateVertex(System.Single&,System.Single&,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
extern "C"  void exSprite_CalculateVertex_m167596152 (exSprite_t1539598680 * __this, float* ____x, float* ____y, float ____widthScaled, float ____heightScaled, float ____col, float ____row, float ____offsetX, float ____offsetY, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void exSprite::UpdateMesh(UnityEngine.Mesh)
extern "C"  void exSprite_UpdateMesh_m1914770226 (exSprite_t1539598680 * __this, Mesh_t1525280346 * ____mesh, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void exSprite::ForceUpdateMesh(UnityEngine.Mesh)
extern "C"  void exSprite_ForceUpdateMesh_m1436097055 (exSprite_t1539598680 * __this, Mesh_t1525280346 * ____mesh, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void exSprite::Commit()
extern "C"  void exSprite_Commit_m2066225783 (exSprite_t1539598680 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void exSprite::OnEnable()
extern "C"  void exSprite_OnEnable_m468374274 (exSprite_t1539598680 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void exSprite::OnDisable()
extern "C"  void exSprite_OnDisable_m2075637867 (exSprite_t1539598680 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void exSprite::Awake()
extern "C"  void exSprite_Awake_m1419024231 (exSprite_t1539598680 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void exSprite::Clear()
extern "C"  void exSprite_Clear_m2882519599 (exSprite_t1539598680 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// exAtlas/Element exSprite::GetCurrentElement()
extern "C"  Element_t1816284 * exSprite_GetCurrentElement_m819097229 (exSprite_t1539598680 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void exSprite::SetSprite(exAtlas,System.Int32,System.Boolean)
extern "C"  void exSprite_SetSprite_m1941808983 (exSprite_t1539598680 * __this, exAtlas_t2942648216 * ____atlas, int32_t ____index, bool ____changeDefaultAnimSprite, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void exSprite::HFlip()
extern "C"  void exSprite_HFlip_m1943864023 (exSprite_t1539598680 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void exSprite::VFlip()
extern "C"  void exSprite_VFlip_m1484013669 (exSprite_t1539598680 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
