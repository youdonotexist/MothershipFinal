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

// exSpriteBorder
struct exSpriteBorder_t2368169892;
// exGUIBorder
struct exGUIBorder_t1778287060;
// exAtlas
struct exAtlas_t2942648216;
// UnityEngine.Mesh
struct Mesh_t1525280346;
// exAtlas/Element
struct Element_t1816284;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Color1588175760.h"
#include "UnityEngine_UnityEngine_Mesh1525280346.h"
#include "ex2D_Runtime_exGUIBorder1778287060.h"
#include "ex2D_Runtime_exAtlas2942648216.h"

// System.Void exSpriteBorder::.ctor()
extern "C"  void exSpriteBorder__ctor_m1908758136 (exSpriteBorder_t2368169892 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single exSpriteBorder::get_width()
extern "C"  float exSpriteBorder_get_width_m1290812679 (exSpriteBorder_t2368169892 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void exSpriteBorder::set_width(System.Single)
extern "C"  void exSpriteBorder_set_width_m3303638380 (exSpriteBorder_t2368169892 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single exSpriteBorder::get_height()
extern "C"  float exSpriteBorder_get_height_m1864301736 (exSpriteBorder_t2368169892 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void exSpriteBorder::set_height(System.Single)
extern "C"  void exSpriteBorder_set_height_m1779590555 (exSpriteBorder_t2368169892 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// exGUIBorder exSpriteBorder::get_guiBorder()
extern "C"  exGUIBorder_t1778287060 * exSpriteBorder_get_guiBorder_m2326684341 (exSpriteBorder_t2368169892 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// exAtlas exSpriteBorder::get_atlas()
extern "C"  exAtlas_t2942648216 * exSpriteBorder_get_atlas_m765718077 (exSpriteBorder_t2368169892 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 exSpriteBorder::get_index()
extern "C"  int32_t exSpriteBorder_get_index_m4186386927 (exSpriteBorder_t2368169892 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean exSpriteBorder::get_useAtlas()
extern "C"  bool exSpriteBorder_get_useAtlas_m3328955151 (exSpriteBorder_t2368169892 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color exSpriteBorder::get_color()
extern "C"  Color_t1588175760  exSpriteBorder_get_color_m2032287369 (exSpriteBorder_t2368169892 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void exSpriteBorder::set_color(UnityEngine.Color)
extern "C"  void exSpriteBorder_set_color_m3941145770 (exSpriteBorder_t2368169892 * __this, Color_t1588175760  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void exSpriteBorder::UpdateMesh(UnityEngine.Mesh)
extern "C"  void exSpriteBorder_UpdateMesh_m2180076350 (exSpriteBorder_t2368169892 * __this, Mesh_t1525280346 * ____mesh, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void exSpriteBorder::ForceUpdateMesh(UnityEngine.Mesh)
extern "C"  void exSpriteBorder_ForceUpdateMesh_m4067099027 (exSpriteBorder_t2368169892 * __this, Mesh_t1525280346 * ____mesh, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void exSpriteBorder::Commit()
extern "C"  void exSpriteBorder_Commit_m3138902147 (exSpriteBorder_t2368169892 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void exSpriteBorder::Awake()
extern "C"  void exSpriteBorder_Awake_m2146363355 (exSpriteBorder_t2368169892 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void exSpriteBorder::OnEnable()
extern "C"  void exSpriteBorder_OnEnable_m518209038 (exSpriteBorder_t2368169892 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void exSpriteBorder::OnDisable()
extern "C"  void exSpriteBorder_OnDisable_m3620515551 (exSpriteBorder_t2368169892 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void exSpriteBorder::Clear()
extern "C"  void exSpriteBorder_Clear_m3609858723 (exSpriteBorder_t2368169892 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// exAtlas/Element exSpriteBorder::GetCurrentElement()
extern "C"  Element_t1816284 * exSpriteBorder_GetCurrentElement_m2966696833 (exSpriteBorder_t2368169892 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void exSpriteBorder::SetBorder(exGUIBorder,exAtlas,System.Int32)
extern "C"  void exSpriteBorder_SetBorder_m3329503145 (exSpriteBorder_t2368169892 * __this, exGUIBorder_t1778287060 * ____border, exAtlas_t2942648216 * ____atlas, int32_t ____index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
