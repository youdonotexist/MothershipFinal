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

// UIAtlas
struct UIAtlas_t281921111;
// UnityEngine.Material
struct Material_t1886596500;
// System.Collections.Generic.List`1<UISpriteData>
struct List_1_t80337596;
// UnityEngine.Texture
struct Texture_t1769722184;
// UISpriteData
struct UISpriteData_t3578345923;
// System.String
struct String_t;
// BetterList`1<System.String>
struct BetterList_1_t2465456914;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Material1886596500.h"
#include "AssemblyU2DCSharp_UIAtlas281921111.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_UISpriteData3578345923.h"

// System.Void UIAtlas::.ctor()
extern "C"  void UIAtlas__ctor_m175086324 (UIAtlas_t281921111 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UIAtlas::get_spriteMaterial()
extern "C"  Material_t1886596500 * UIAtlas_get_spriteMaterial_m1576300038 (UIAtlas_t281921111 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIAtlas::set_spriteMaterial(UnityEngine.Material)
extern "C"  void UIAtlas_set_spriteMaterial_m882815003 (UIAtlas_t281921111 * __this, Material_t1886596500 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIAtlas::get_premultipliedAlpha()
extern "C"  bool UIAtlas_get_premultipliedAlpha_m304534381 (UIAtlas_t281921111 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UISpriteData> UIAtlas::get_spriteList()
extern "C"  List_1_t80337596 * UIAtlas_get_spriteList_m1840269286 (UIAtlas_t281921111 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIAtlas::set_spriteList(System.Collections.Generic.List`1<UISpriteData>)
extern "C"  void UIAtlas_set_spriteList_m3659254213 (UIAtlas_t281921111 * __this, List_1_t80337596 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UIAtlas::get_texture()
extern "C"  Texture_t1769722184 * UIAtlas_get_texture_m4141329395 (UIAtlas_t281921111 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UIAtlas::get_pixelSize()
extern "C"  float UIAtlas_get_pixelSize_m3644908156 (UIAtlas_t281921111 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIAtlas::set_pixelSize(System.Single)
extern "C"  void UIAtlas_set_pixelSize_m2900110959 (UIAtlas_t281921111 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIAtlas UIAtlas::get_replacement()
extern "C"  UIAtlas_t281921111 * UIAtlas_get_replacement_m239607287 (UIAtlas_t281921111 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIAtlas::set_replacement(UIAtlas)
extern "C"  void UIAtlas_set_replacement_m1847809972 (UIAtlas_t281921111 * __this, UIAtlas_t281921111 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UISpriteData UIAtlas::GetSprite(System.String)
extern "C"  UISpriteData_t3578345923 * UIAtlas_GetSprite_m2191383547 (UIAtlas_t281921111 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIAtlas::MarkSpriteListAsChanged()
extern "C"  void UIAtlas_MarkSpriteListAsChanged_m2296554916 (UIAtlas_t281921111 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIAtlas::SortAlphabetically()
extern "C"  void UIAtlas_SortAlphabetically_m3996024147 (UIAtlas_t281921111 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BetterList`1<System.String> UIAtlas::GetListOfSprites()
extern "C"  BetterList_1_t2465456914 * UIAtlas_GetListOfSprites_m2581044779 (UIAtlas_t281921111 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BetterList`1<System.String> UIAtlas::GetListOfSprites(System.String)
extern "C"  BetterList_1_t2465456914 * UIAtlas_GetListOfSprites_m77307575 (UIAtlas_t281921111 * __this, String_t* ___match, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIAtlas::References(UIAtlas)
extern "C"  bool UIAtlas_References_m1565953431 (UIAtlas_t281921111 * __this, UIAtlas_t281921111 * ___atlas, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIAtlas::CheckIfRelated(UIAtlas,UIAtlas)
extern "C"  bool UIAtlas_CheckIfRelated_m2547714030 (Il2CppObject * __this /* static, unused */, UIAtlas_t281921111 * ___a, UIAtlas_t281921111 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIAtlas::MarkAsChanged()
extern "C"  void UIAtlas_MarkAsChanged_m3933265831 (UIAtlas_t281921111 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIAtlas::Upgrade()
extern "C"  bool UIAtlas_Upgrade_m3263835298 (UIAtlas_t281921111 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIAtlas::<SortAlphabetically>m__14(UISpriteData,UISpriteData)
extern "C"  int32_t UIAtlas_U3CSortAlphabeticallyU3Em__14_m2519106101 (Il2CppObject * __this /* static, unused */, UISpriteData_t3578345923 * ___s1, UISpriteData_t3578345923 * ___s2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
