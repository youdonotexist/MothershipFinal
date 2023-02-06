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

// UITexture
struct UITexture_t3903132647;
// UnityEngine.Texture
struct Texture_t1769722184;
// UnityEngine.Material
struct Material_t1886596500;
// UnityEngine.Shader
struct Shader_t3998140498;
// BetterList`1<UnityEngine.Vector3>
struct BetterList_1_t727330505;
// BetterList`1<UnityEngine.Vector2>
struct BetterList_1_t727330504;
// BetterList`1<UnityEngine.Color32>
struct BetterList_1_t1339084923;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Texture1769722184.h"
#include "UnityEngine_UnityEngine_Material1886596500.h"
#include "UnityEngine_UnityEngine_Shader3998140498.h"
#include "UnityEngine_UnityEngine_Vector43525329790.h"
#include "UnityEngine_UnityEngine_Rect1525428817.h"

// System.Void UITexture::.ctor()
extern "C"  void UITexture__ctor_m1606448484 (UITexture_t3903132647 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UITexture::get_mainTexture()
extern "C"  Texture_t1769722184 * UITexture_get_mainTexture_m3400120682 (UITexture_t3903132647 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITexture::set_mainTexture(UnityEngine.Texture)
extern "C"  void UITexture_set_mainTexture_m4209454887 (UITexture_t3903132647 * __this, Texture_t1769722184 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UITexture::get_material()
extern "C"  Material_t1886596500 * UITexture_get_material_m1341168497 (UITexture_t3903132647 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITexture::set_material(UnityEngine.Material)
extern "C"  void UITexture_set_material_m2912196742 (UITexture_t3903132647 * __this, Material_t1886596500 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Shader UITexture::get_shader()
extern "C"  Shader_t3998140498 * UITexture_get_shader_m3259374125 (UITexture_t3903132647 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITexture::set_shader(UnityEngine.Shader)
extern "C"  void UITexture_set_shader_m265018694 (UITexture_t3903132647 * __this, Shader_t3998140498 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UITexture::get_premultipliedAlpha()
extern "C"  bool UITexture_get_premultipliedAlpha_m1638491133 (UITexture_t3903132647 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UITexture::get_border()
extern "C"  Vector4_t3525329790  UITexture_get_border_m2382663228 (UITexture_t3903132647 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITexture::set_border(UnityEngine.Vector4)
extern "C"  void UITexture_set_border_m2360646895 (UITexture_t3903132647 * __this, Vector4_t3525329790  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UITexture::get_uvRect()
extern "C"  Rect_t1525428817  UITexture_get_uvRect_m2135926764 (UITexture_t3903132647 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITexture::set_uvRect(UnityEngine.Rect)
extern "C"  void UITexture_set_uvRect_m3913517031 (UITexture_t3903132647 * __this, Rect_t1525428817  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UITexture::get_drawingDimensions()
extern "C"  Vector4_t3525329790  UITexture_get_drawingDimensions_m1970525 (UITexture_t3903132647 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UITexture::get_fixedAspect()
extern "C"  bool UITexture_get_fixedAspect_m1097060057 (UITexture_t3903132647 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITexture::set_fixedAspect(System.Boolean)
extern "C"  void UITexture_set_fixedAspect_m3934661096 (UITexture_t3903132647 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITexture::MakePixelPerfect()
extern "C"  void UITexture_MakePixelPerfect_m2252403541 (UITexture_t3903132647 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITexture::OnUpdate()
extern "C"  void UITexture_OnUpdate_m638189928 (UITexture_t3903132647 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITexture::OnFill(BetterList`1<UnityEngine.Vector3>,BetterList`1<UnityEngine.Vector2>,BetterList`1<UnityEngine.Color32>)
extern "C"  void UITexture_OnFill_m2476806963 (UITexture_t3903132647 * __this, BetterList_1_t727330505 * ___verts, BetterList_1_t727330504 * ___uvs, BetterList_1_t1339084923 * ___cols, const MethodInfo* method) IL2CPP_METHOD_ATTR;
