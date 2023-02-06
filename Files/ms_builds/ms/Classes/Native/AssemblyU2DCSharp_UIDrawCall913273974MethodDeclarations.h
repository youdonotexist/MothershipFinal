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

// UIDrawCall
struct UIDrawCall_t913273974;
// BetterList`1<UIDrawCall>
struct BetterList_1_t2410241986;
// UnityEngine.Transform
struct Transform_t284553113;
// UnityEngine.Material
struct Material_t1886596500;
// UnityEngine.Texture
struct Texture_t1769722184;
// UnityEngine.Shader
struct Shader_t3998140498;
// System.Int32[]
struct Int32U5BU5D_t1809983122;
// UIPanel
struct UIPanel_t295209936;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Material1886596500.h"
#include "UnityEngine_UnityEngine_Texture1769722184.h"
#include "UnityEngine_UnityEngine_Shader3998140498.h"
#include "UnityEngine_UnityEngine_Vector43525329790.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"
#include "AssemblyU2DCSharp_UIPanel295209936.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_UIDrawCall913273974.h"

// System.Void UIDrawCall::.ctor()
extern "C"  void UIDrawCall__ctor_m324585701 (UIDrawCall_t913273974 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::.cctor()
extern "C"  void UIDrawCall__cctor_m990125928 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BetterList`1<UIDrawCall> UIDrawCall::get_list()
extern "C"  BetterList_1_t2410241986 * UIDrawCall_get_list_m2568141816 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BetterList`1<UIDrawCall> UIDrawCall::get_activeList()
extern "C"  BetterList_1_t2410241986 * UIDrawCall_get_activeList_m3346908126 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BetterList`1<UIDrawCall> UIDrawCall::get_inactiveList()
extern "C"  BetterList_1_t2410241986 * UIDrawCall_get_inactiveList_m2062737219 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIDrawCall::get_renderQueue()
extern "C"  int32_t UIDrawCall_get_renderQueue_m2264531335 (UIDrawCall_t913273974 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::set_renderQueue(System.Int32)
extern "C"  void UIDrawCall_set_renderQueue_m410080434 (UIDrawCall_t913273974 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIDrawCall::get_sortingOrder()
extern "C"  int32_t UIDrawCall_get_sortingOrder_m2698353120 (UIDrawCall_t913273974 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::set_sortingOrder(System.Int32)
extern "C"  void UIDrawCall_set_sortingOrder_m1123473943 (UIDrawCall_t913273974 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIDrawCall::get_finalRenderQueue()
extern "C"  int32_t UIDrawCall_get_finalRenderQueue_m1363140155 (UIDrawCall_t913273974 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UIDrawCall::get_cachedTransform()
extern "C"  Transform_t284553113 * UIDrawCall_get_cachedTransform_m3832236870 (UIDrawCall_t913273974 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UIDrawCall::get_baseMaterial()
extern "C"  Material_t1886596500 * UIDrawCall_get_baseMaterial_m2414423327 (UIDrawCall_t913273974 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::set_baseMaterial(UnityEngine.Material)
extern "C"  void UIDrawCall_set_baseMaterial_m779527702 (UIDrawCall_t913273974 * __this, Material_t1886596500 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UIDrawCall::get_dynamicMaterial()
extern "C"  Material_t1886596500 * UIDrawCall_get_dynamicMaterial_m1371287873 (UIDrawCall_t913273974 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UIDrawCall::get_mainTexture()
extern "C"  Texture_t1769722184 * UIDrawCall_get_mainTexture_m1188489325 (UIDrawCall_t913273974 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::set_mainTexture(UnityEngine.Texture)
extern "C"  void UIDrawCall_set_mainTexture_m1626748742 (UIDrawCall_t913273974 * __this, Texture_t1769722184 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Shader UIDrawCall::get_shader()
extern "C"  Shader_t3998140498 * UIDrawCall_get_shader_m349578670 (UIDrawCall_t913273974 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::set_shader(UnityEngine.Shader)
extern "C"  void UIDrawCall_set_shader_m1330587813 (UIDrawCall_t913273974 * __this, Shader_t3998140498 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIDrawCall::get_triangles()
extern "C"  int32_t UIDrawCall_get_triangles_m3884842647 (UIDrawCall_t913273974 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIDrawCall::get_isClipped()
extern "C"  bool UIDrawCall_get_isClipped_m2727955323 (UIDrawCall_t913273974 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::CreateMaterial()
extern "C"  void UIDrawCall_CreateMaterial_m1591936962 (UIDrawCall_t913273974 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UIDrawCall::RebuildMaterial()
extern "C"  Material_t1886596500 * UIDrawCall_RebuildMaterial_m4148258854 (UIDrawCall_t913273974 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::UpdateMaterials()
extern "C"  void UIDrawCall_UpdateMaterials_m208764966 (UIDrawCall_t913273974 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::UpdateGeometry(System.Int32)
extern "C"  void UIDrawCall_UpdateGeometry_m12828203 (UIDrawCall_t913273974 * __this, int32_t ___widgetCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] UIDrawCall::GenerateCachedIndexBuffer(System.Int32,System.Int32)
extern "C"  Int32U5BU5D_t1809983122* UIDrawCall_GenerateCachedIndexBuffer_m498608084 (UIDrawCall_t913273974 * __this, int32_t ___vertexCount, int32_t ___indexCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::OnWillRenderObject()
extern "C"  void UIDrawCall_OnWillRenderObject_m3115295525 (UIDrawCall_t913273974 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::SetClipping(System.Int32,UnityEngine.Vector4,UnityEngine.Vector2,System.Single)
extern "C"  void UIDrawCall_SetClipping_m2405117475 (UIDrawCall_t913273974 * __this, int32_t ___index, Vector4_t3525329790  ___cr, Vector2_t3525329788  ___soft, float ___angle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::Awake()
extern "C"  void UIDrawCall_Awake_m562190920 (UIDrawCall_t913273974 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::OnEnable()
extern "C"  void UIDrawCall_OnEnable_m3832813697 (UIDrawCall_t913273974 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::OnDisable()
extern "C"  void UIDrawCall_OnDisable_m3294044876 (UIDrawCall_t913273974 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::OnDestroy()
extern "C"  void UIDrawCall_OnDestroy_m1176609630 (UIDrawCall_t913273974 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIDrawCall UIDrawCall::Create(UIPanel,UnityEngine.Material,UnityEngine.Texture,UnityEngine.Shader)
extern "C"  UIDrawCall_t913273974 * UIDrawCall_Create_m1977839930 (Il2CppObject * __this /* static, unused */, UIPanel_t295209936 * ___panel, Material_t1886596500 * ___mat, Texture_t1769722184 * ___tex, Shader_t3998140498 * ___shader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIDrawCall UIDrawCall::Create(System.String,UIPanel,UnityEngine.Material,UnityEngine.Texture,UnityEngine.Shader)
extern "C"  UIDrawCall_t913273974 * UIDrawCall_Create_m1851065462 (Il2CppObject * __this /* static, unused */, String_t* ___name, UIPanel_t295209936 * ___pan, Material_t1886596500 * ___mat, Texture_t1769722184 * ___tex, Shader_t3998140498 * ___shader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIDrawCall UIDrawCall::Create(System.String)
extern "C"  UIDrawCall_t913273974 * UIDrawCall_Create_m2035491776 (Il2CppObject * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::ClearAll()
extern "C"  void UIDrawCall_ClearAll_m2954886099 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::ReleaseAll()
extern "C"  void UIDrawCall_ReleaseAll_m3911161561 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::ReleaseInactive()
extern "C"  void UIDrawCall_ReleaseInactive_m1722493077 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIDrawCall::Count(UIPanel)
extern "C"  int32_t UIDrawCall_Count_m3643626398 (Il2CppObject * __this /* static, unused */, UIPanel_t295209936 * ___panel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::Destroy(UIDrawCall)
extern "C"  void UIDrawCall_Destroy_m3444514887 (Il2CppObject * __this /* static, unused */, UIDrawCall_t913273974 * ___dc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
