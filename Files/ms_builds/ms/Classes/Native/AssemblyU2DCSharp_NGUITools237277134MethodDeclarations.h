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

// UnityEngine.AudioSource
struct AudioSource_t3628549054;
// UnityEngine.AudioClip
struct AudioClip_t3714538611;
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// UnityEngine.Camera
struct Camera_t3533968274;
// UnityEngine.BoxCollider
struct BoxCollider_t131631884;
// UnityEngine.BoxCollider2D
struct BoxCollider2D_t262790558;
// UnityEngine.Object
struct Object_t3878351788;
struct Object_t3878351788_marshaled_pinvoke;
// UIWidget[]
struct UIWidgetU5BU5D_t4236988201;
// UIPanel
struct UIPanel_t295209936;
// UnityEngine.Transform
struct Transform_t284553113;
// UISprite
struct UISprite_t661437049;
// UIAtlas
struct UIAtlas_t281921111;
// System.Object
struct Il2CppObject;
// UnityEngine.Behaviour
struct Behaviour_t3120504042;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t3227571696;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_AudioClip3714538611.h"
#include "UnityEngine_UnityEngine_GameObject4012695102.h"
#include "UnityEngine_UnityEngine_BoxCollider131631884.h"
#include "UnityEngine_UnityEngine_BoxCollider2D262790558.h"
#include "UnityEngine_UnityEngine_Object3878351788.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_UnityEngine_Transform284553113.h"
#include "AssemblyU2DCSharp_UIAtlas281921111.h"
#include "mscorlib_System_Object837106420.h"
#include "UnityEngine_UnityEngine_Behaviour3120504042.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_Color1588175760.h"
#include "UnityEngine_UnityEngine_Camera3533968274.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"

// System.Void NGUITools::.cctor()
extern "C"  void NGUITools__cctor_m1251019248 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NGUITools::get_soundVolume()
extern "C"  float NGUITools_get_soundVolume_m1030274695 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::set_soundVolume(System.Single)
extern "C"  void NGUITools_set_soundVolume_m422422852 (Il2CppObject * __this /* static, unused */, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NGUITools::get_fileAccess()
extern "C"  bool NGUITools_get_fileAccess_m3917217212 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioSource NGUITools::PlaySound(UnityEngine.AudioClip)
extern "C"  AudioSource_t3628549054 * NGUITools_PlaySound_m903278708 (Il2CppObject * __this /* static, unused */, AudioClip_t3714538611 * ___clip, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioSource NGUITools::PlaySound(UnityEngine.AudioClip,System.Single)
extern "C"  AudioSource_t3628549054 * NGUITools_PlaySound_m2950275161 (Il2CppObject * __this /* static, unused */, AudioClip_t3714538611 * ___clip, float ___volume, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioSource NGUITools::PlaySound(UnityEngine.AudioClip,System.Single,System.Single)
extern "C"  AudioSource_t3628549054 * NGUITools_PlaySound_m3712228222 (Il2CppObject * __this /* static, unused */, AudioClip_t3714538611 * ___clip, float ___volume, float ___pitch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NGUITools::RandomRange(System.Int32,System.Int32)
extern "C"  int32_t NGUITools_RandomRange_m4187782595 (Il2CppObject * __this /* static, unused */, int32_t ___min, int32_t ___max, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NGUITools::GetHierarchy(UnityEngine.GameObject)
extern "C"  String_t* NGUITools_GetHierarchy_m3656632443 (Il2CppObject * __this /* static, unused */, GameObject_t4012695102 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera NGUITools::FindCameraForLayer(System.Int32)
extern "C"  Camera_t3533968274 * NGUITools_FindCameraForLayer_m3244779261 (Il2CppObject * __this /* static, unused */, int32_t ___layer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::AddWidgetCollider(UnityEngine.GameObject)
extern "C"  void NGUITools_AddWidgetCollider_m3993103116 (Il2CppObject * __this /* static, unused */, GameObject_t4012695102 * ___go, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::AddWidgetCollider(UnityEngine.GameObject,System.Boolean)
extern "C"  void NGUITools_AddWidgetCollider_m3030478577 (Il2CppObject * __this /* static, unused */, GameObject_t4012695102 * ___go, bool ___considerInactive, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::UpdateWidgetCollider(UnityEngine.GameObject)
extern "C"  void NGUITools_UpdateWidgetCollider_m2709673216 (Il2CppObject * __this /* static, unused */, GameObject_t4012695102 * ___go, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::UpdateWidgetCollider(UnityEngine.GameObject,System.Boolean)
extern "C"  void NGUITools_UpdateWidgetCollider_m1680432765 (Il2CppObject * __this /* static, unused */, GameObject_t4012695102 * ___go, bool ___considerInactive, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::UpdateWidgetCollider(UnityEngine.BoxCollider,System.Boolean)
extern "C"  void NGUITools_UpdateWidgetCollider_m2847204763 (Il2CppObject * __this /* static, unused */, BoxCollider_t131631884 * ___box, bool ___considerInactive, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::UpdateWidgetCollider(UnityEngine.BoxCollider2D,System.Boolean)
extern "C"  void NGUITools_UpdateWidgetCollider_m1433750061 (Il2CppObject * __this /* static, unused */, BoxCollider2D_t262790558 * ___box, bool ___considerInactive, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NGUITools::GetTypeName(UnityEngine.Object)
extern "C"  String_t* NGUITools_GetTypeName_m1006989123 (Il2CppObject * __this /* static, unused */, Object_t3878351788 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::RegisterUndo(UnityEngine.Object,System.String)
extern "C"  void NGUITools_RegisterUndo_m1996201268 (Il2CppObject * __this /* static, unused */, Object_t3878351788 * ___obj, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::SetDirty(UnityEngine.Object)
extern "C"  void NGUITools_SetDirty_m1970830817 (Il2CppObject * __this /* static, unused */, Object_t3878351788 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject NGUITools::AddChild(UnityEngine.GameObject)
extern "C"  GameObject_t4012695102 * NGUITools_AddChild_m4000033701 (Il2CppObject * __this /* static, unused */, GameObject_t4012695102 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject NGUITools::AddChild(UnityEngine.GameObject,System.Boolean)
extern "C"  GameObject_t4012695102 * NGUITools_AddChild_m3954002232 (Il2CppObject * __this /* static, unused */, GameObject_t4012695102 * ___parent, bool ___undo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject NGUITools::AddChild(UnityEngine.GameObject,UnityEngine.GameObject)
extern "C"  GameObject_t4012695102 * NGUITools_AddChild_m4238455353 (Il2CppObject * __this /* static, unused */, GameObject_t4012695102 * ___parent, GameObject_t4012695102 * ___prefab, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NGUITools::CalculateRaycastDepth(UnityEngine.GameObject)
extern "C"  int32_t NGUITools_CalculateRaycastDepth_m2521596961 (Il2CppObject * __this /* static, unused */, GameObject_t4012695102 * ___go, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NGUITools::CalculateNextDepth(UnityEngine.GameObject)
extern "C"  int32_t NGUITools_CalculateNextDepth_m2083506555 (Il2CppObject * __this /* static, unused */, GameObject_t4012695102 * ___go, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NGUITools::CalculateNextDepth(UnityEngine.GameObject,System.Boolean)
extern "C"  int32_t NGUITools_CalculateNextDepth_m3011183778 (Il2CppObject * __this /* static, unused */, GameObject_t4012695102 * ___go, bool ___ignoreChildrenWithColliders, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NGUITools::AdjustDepth(UnityEngine.GameObject,System.Int32)
extern "C"  int32_t NGUITools_AdjustDepth_m880605378 (Il2CppObject * __this /* static, unused */, GameObject_t4012695102 * ___go, int32_t ___adjustment, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::BringForward(UnityEngine.GameObject)
extern "C"  void NGUITools_BringForward_m4248312402 (Il2CppObject * __this /* static, unused */, GameObject_t4012695102 * ___go, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::PushBack(UnityEngine.GameObject)
extern "C"  void NGUITools_PushBack_m2013312416 (Il2CppObject * __this /* static, unused */, GameObject_t4012695102 * ___go, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::NormalizeDepths()
extern "C"  void NGUITools_NormalizeDepths_m4237390392 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::NormalizeWidgetDepths()
extern "C"  void NGUITools_NormalizeWidgetDepths_m1976791900 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::NormalizeWidgetDepths(UnityEngine.GameObject)
extern "C"  void NGUITools_NormalizeWidgetDepths_m2638525908 (Il2CppObject * __this /* static, unused */, GameObject_t4012695102 * ___go, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::NormalizeWidgetDepths(UIWidget[])
extern "C"  void NGUITools_NormalizeWidgetDepths_m1726266242 (Il2CppObject * __this /* static, unused */, UIWidgetU5BU5D_t4236988201* ___list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::NormalizePanelDepths()
extern "C"  void NGUITools_NormalizePanelDepths_m212743790 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIPanel NGUITools::CreateUI(System.Boolean)
extern "C"  UIPanel_t295209936 * NGUITools_CreateUI_m4182919403 (Il2CppObject * __this /* static, unused */, bool ___advanced3D, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIPanel NGUITools::CreateUI(System.Boolean,System.Int32)
extern "C"  UIPanel_t295209936 * NGUITools_CreateUI_m3797805516 (Il2CppObject * __this /* static, unused */, bool ___advanced3D, int32_t ___layer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIPanel NGUITools::CreateUI(UnityEngine.Transform,System.Boolean,System.Int32)
extern "C"  UIPanel_t295209936 * NGUITools_CreateUI_m3097720387 (Il2CppObject * __this /* static, unused */, Transform_t284553113 * ___trans, bool ___advanced3D, int32_t ___layer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::SetChildLayer(UnityEngine.Transform,System.Int32)
extern "C"  void NGUITools_SetChildLayer_m254483084 (Il2CppObject * __this /* static, unused */, Transform_t284553113 * ___t, int32_t ___layer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UISprite NGUITools::AddSprite(UnityEngine.GameObject,UIAtlas,System.String)
extern "C"  UISprite_t661437049 * NGUITools_AddSprite_m1335980110 (Il2CppObject * __this /* static, unused */, GameObject_t4012695102 * ___go, UIAtlas_t281921111 * ___atlas, String_t* ___spriteName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject NGUITools::GetRoot(UnityEngine.GameObject)
extern "C"  GameObject_t4012695102 * NGUITools_GetRoot_m1555863296 (Il2CppObject * __this /* static, unused */, GameObject_t4012695102 * ___go, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::Destroy(UnityEngine.Object)
extern "C"  void NGUITools_Destroy_m2062477823 (Il2CppObject * __this /* static, unused */, Object_t3878351788 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::DestroyImmediate(UnityEngine.Object)
extern "C"  void NGUITools_DestroyImmediate_m2881657512 (Il2CppObject * __this /* static, unused */, Object_t3878351788 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::Broadcast(System.String)
extern "C"  void NGUITools_Broadcast_m1618900614 (Il2CppObject * __this /* static, unused */, String_t* ___funcName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::Broadcast(System.String,System.Object)
extern "C"  void NGUITools_Broadcast_m4119322324 (Il2CppObject * __this /* static, unused */, String_t* ___funcName, Il2CppObject * ___param, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NGUITools::IsChild(UnityEngine.Transform,UnityEngine.Transform)
extern "C"  bool NGUITools_IsChild_m3856680211 (Il2CppObject * __this /* static, unused */, Transform_t284553113 * ___parent, Transform_t284553113 * ___child, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::Activate(UnityEngine.Transform)
extern "C"  void NGUITools_Activate_m4166839811 (Il2CppObject * __this /* static, unused */, Transform_t284553113 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::Activate(UnityEngine.Transform,System.Boolean)
extern "C"  void NGUITools_Activate_m274677530 (Il2CppObject * __this /* static, unused */, Transform_t284553113 * ___t, bool ___compatibilityMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::Deactivate(UnityEngine.Transform)
extern "C"  void NGUITools_Deactivate_m826907362 (Il2CppObject * __this /* static, unused */, Transform_t284553113 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::SetActive(UnityEngine.GameObject,System.Boolean)
extern "C"  void NGUITools_SetActive_m3941650786 (Il2CppObject * __this /* static, unused */, GameObject_t4012695102 * ___go, bool ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::SetActive(UnityEngine.GameObject,System.Boolean,System.Boolean)
extern "C"  void NGUITools_SetActive_m1380602331 (Il2CppObject * __this /* static, unused */, GameObject_t4012695102 * ___go, bool ___state, bool ___compatibilityMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::CallCreatePanel(UnityEngine.Transform)
extern "C"  void NGUITools_CallCreatePanel_m2740362168 (Il2CppObject * __this /* static, unused */, Transform_t284553113 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::SetActiveChildren(UnityEngine.GameObject,System.Boolean)
extern "C"  void NGUITools_SetActiveChildren_m3209452643 (Il2CppObject * __this /* static, unused */, GameObject_t4012695102 * ___go, bool ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NGUITools::IsActive(UnityEngine.Behaviour)
extern "C"  bool NGUITools_IsActive_m1286411273 (Il2CppObject * __this /* static, unused */, Behaviour_t3120504042 * ___mb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NGUITools::GetActive(UnityEngine.Behaviour)
extern "C"  bool NGUITools_GetActive_m4064435393 (Il2CppObject * __this /* static, unused */, Behaviour_t3120504042 * ___mb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NGUITools::GetActive(UnityEngine.GameObject)
extern "C"  bool NGUITools_GetActive_m3605198179 (Il2CppObject * __this /* static, unused */, GameObject_t4012695102 * ___go, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::SetActiveSelf(UnityEngine.GameObject,System.Boolean)
extern "C"  void NGUITools_SetActiveSelf_m794901878 (Il2CppObject * __this /* static, unused */, GameObject_t4012695102 * ___go, bool ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::SetLayer(UnityEngine.GameObject,System.Int32)
extern "C"  void NGUITools_SetLayer_m2517753097 (Il2CppObject * __this /* static, unused */, GameObject_t4012695102 * ___go, int32_t ___layer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 NGUITools::Round(UnityEngine.Vector3)
extern "C"  Vector3_t3525329789  NGUITools_Round_m2505662326 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___v, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::MakePixelPerfect(UnityEngine.Transform)
extern "C"  void NGUITools_MakePixelPerfect_m248907521 (Il2CppObject * __this /* static, unused */, Transform_t284553113 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NGUITools::Save(System.String,System.Byte[])
extern "C"  bool NGUITools_Save_m2301133877 (Il2CppObject * __this /* static, unused */, String_t* ___fileName, ByteU5BU5D_t58506160* ___bytes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] NGUITools::Load(System.String)
extern "C"  ByteU5BU5D_t58506160* NGUITools_Load_m1655611871 (Il2CppObject * __this /* static, unused */, String_t* ___fileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color NGUITools::ApplyPMA(UnityEngine.Color)
extern "C"  Color_t1588175760  NGUITools_ApplyPMA_m3323520848 (Il2CppObject * __this /* static, unused */, Color_t1588175760  ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::MarkParentAsChanged(UnityEngine.GameObject)
extern "C"  void NGUITools_MarkParentAsChanged_m3553868606 (Il2CppObject * __this /* static, unused */, GameObject_t4012695102 * ___go, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NGUITools::get_clipboard()
extern "C"  String_t* NGUITools_get_clipboard_m2315645355 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::set_clipboard(System.String)
extern "C"  void NGUITools_set_clipboard_m2912444206 (Il2CppObject * __this /* static, unused */, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NGUITools::EncodeColor(UnityEngine.Color)
extern "C"  String_t* NGUITools_EncodeColor_m607375803 (Il2CppObject * __this /* static, unused */, Color_t1588175760  ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color NGUITools::ParseColor(System.String,System.Int32)
extern "C"  Color_t1588175760  NGUITools_ParseColor_m976643365 (Il2CppObject * __this /* static, unused */, String_t* ___text, int32_t ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NGUITools::StripSymbols(System.String)
extern "C"  String_t* NGUITools_StripSymbols_m1226020347 (Il2CppObject * __this /* static, unused */, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] NGUITools::GetSides(UnityEngine.Camera)
extern "C"  Vector3U5BU5D_t3227571696* NGUITools_GetSides_m4215456409 (Il2CppObject * __this /* static, unused */, Camera_t3533968274 * ___cam, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] NGUITools::GetSides(UnityEngine.Camera,System.Single)
extern "C"  Vector3U5BU5D_t3227571696* NGUITools_GetSides_m400838078 (Il2CppObject * __this /* static, unused */, Camera_t3533968274 * ___cam, float ___depth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] NGUITools::GetSides(UnityEngine.Camera,UnityEngine.Transform)
extern "C"  Vector3U5BU5D_t3227571696* NGUITools_GetSides_m98162768 (Il2CppObject * __this /* static, unused */, Camera_t3533968274 * ___cam, Transform_t284553113 * ___relativeTo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] NGUITools::GetSides(UnityEngine.Camera,System.Single,UnityEngine.Transform)
extern "C"  Vector3U5BU5D_t3227571696* NGUITools_GetSides_m723274165 (Il2CppObject * __this /* static, unused */, Camera_t3533968274 * ___cam, float ___depth, Transform_t284553113 * ___relativeTo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] NGUITools::GetWorldCorners(UnityEngine.Camera)
extern "C"  Vector3U5BU5D_t3227571696* NGUITools_GetWorldCorners_m624135161 (Il2CppObject * __this /* static, unused */, Camera_t3533968274 * ___cam, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] NGUITools::GetWorldCorners(UnityEngine.Camera,System.Single)
extern "C"  Vector3U5BU5D_t3227571696* NGUITools_GetWorldCorners_m378089246 (Il2CppObject * __this /* static, unused */, Camera_t3533968274 * ___cam, float ___depth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] NGUITools::GetWorldCorners(UnityEngine.Camera,UnityEngine.Transform)
extern "C"  Vector3U5BU5D_t3227571696* NGUITools_GetWorldCorners_m3753335216 (Il2CppObject * __this /* static, unused */, Camera_t3533968274 * ___cam, Transform_t284553113 * ___relativeTo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] NGUITools::GetWorldCorners(UnityEngine.Camera,System.Single,UnityEngine.Transform)
extern "C"  Vector3U5BU5D_t3227571696* NGUITools_GetWorldCorners_m1091298069 (Il2CppObject * __this /* static, unused */, Camera_t3533968274 * ___cam, float ___depth, Transform_t284553113 * ___relativeTo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NGUITools::GetFuncName(System.Object,System.String)
extern "C"  String_t* NGUITools_GetFuncName_m1931517229 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj, String_t* ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::ImmediatelyCreateDrawCalls(UnityEngine.GameObject)
extern "C"  void NGUITools_ImmediatelyCreateDrawCalls_m1096702838 (Il2CppObject * __this /* static, unused */, GameObject_t4012695102 * ___root, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 NGUITools::get_screenSize()
extern "C"  Vector2_t3525329788  NGUITools_get_screenSize_m3641609218 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
