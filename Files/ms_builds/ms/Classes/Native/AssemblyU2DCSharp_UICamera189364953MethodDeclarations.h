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

// UICamera
struct UICamera_t189364953;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// UnityEngine.Camera
struct Camera_t3533968274;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// UnityEngine.Rigidbody
struct Rigidbody_t1972007546;
// UnityEngine.Transform
struct Transform_t284553113;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t3632243084;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// UICamera/MouseOrTouch
struct MouseOrTouch_t908473047;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Ray1522967639.h"
#include "UnityEngine_UnityEngine_GameObject4012695102.h"
#include "AssemblyU2DCSharp_UICamera_ControlScheme1667267906.h"
#include "AssemblyU2DCSharp_UICamera189364953.h"
#include "UnityEngine_UnityEngine_Transform284553113.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "AssemblyU2DCSharp_UICamera_DepthEntry2194697103.h"
#include "UnityEngine_UnityEngine_KeyCode2371581209.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Object837106420.h"

// System.Void UICamera::.ctor()
extern "C"  void UICamera__ctor_m2978047970 (UICamera_t189364953 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::.cctor()
extern "C"  void UICamera__cctor_m1643077643 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UICamera::get_stickyPress()
extern "C"  bool UICamera_get_stickyPress_m902490973 (UICamera_t189364953 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Ray UICamera::get_currentRay()
extern "C"  Ray_t1522967639  UICamera_get_currentRay_m1943112348 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UICamera::get_genericEventHandler()
extern "C"  GameObject_t4012695102 * UICamera_get_genericEventHandler_m1372983657 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::set_genericEventHandler(UnityEngine.GameObject)
extern "C"  void UICamera_set_genericEventHandler_m1583245378 (Il2CppObject * __this /* static, unused */, GameObject_t4012695102 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UICamera::get_handlesEvents()
extern "C"  bool UICamera_get_handlesEvents_m3964417223 (UICamera_t189364953 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UICamera::get_cachedCamera()
extern "C"  Camera_t3533968274 * UICamera_get_cachedCamera_m269881363 (UICamera_t189364953 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UICamera::get_isOverUI()
extern "C"  bool UICamera_get_isOverUI_m3999030001 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UICamera::get_selectedObject()
extern "C"  GameObject_t4012695102 * UICamera_get_selectedObject_m1709372474 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::set_selectedObject(UnityEngine.GameObject)
extern "C"  void UICamera_set_selectedObject_m734101361 (Il2CppObject * __this /* static, unused */, GameObject_t4012695102 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UICamera::IsPressed(UnityEngine.GameObject)
extern "C"  bool UICamera_IsPressed_m2263685468 (Il2CppObject * __this /* static, unused */, GameObject_t4012695102 * ___go, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::SetSelection(UnityEngine.GameObject,UICamera/ControlScheme)
extern "C"  void UICamera_SetSelection_m879288790 (Il2CppObject * __this /* static, unused */, GameObject_t4012695102 * ___go, int32_t ___scheme, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UICamera::ChangeSelection()
extern "C"  Il2CppObject * UICamera_ChangeSelection_m2272367540 (UICamera_t189364953 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UICamera::get_touchCount()
extern "C"  int32_t UICamera_get_touchCount_m700725161 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UICamera::get_dragCount()
extern "C"  int32_t UICamera_get_dragCount_m938745316 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UICamera::get_mainCamera()
extern "C"  Camera_t3533968274 * UICamera_get_mainCamera_m1601227882 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UICamera UICamera::get_eventHandler()
extern "C"  UICamera_t189364953 * UICamera_get_eventHandler_m643934687 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UICamera::CompareFunc(UICamera,UICamera)
extern "C"  int32_t UICamera_CompareFunc_m2639586507 (Il2CppObject * __this /* static, unused */, UICamera_t189364953 * ___a, UICamera_t189364953 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rigidbody UICamera::FindRootRigidbody(UnityEngine.Transform)
extern "C"  Rigidbody_t1972007546 * UICamera_FindRootRigidbody_m2948444808 (Il2CppObject * __this /* static, unused */, Transform_t284553113 * ___trans, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rigidbody2D UICamera::FindRootRigidbody2D(UnityEngine.Transform)
extern "C"  Rigidbody2D_t3632243084 * UICamera_FindRootRigidbody2D_m139188388 (Il2CppObject * __this /* static, unused */, Transform_t284553113 * ___trans, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UICamera::Raycast(UnityEngine.Vector3)
extern "C"  bool UICamera_Raycast_m2420302724 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___inPos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UICamera::IsVisible(UnityEngine.Vector3,UnityEngine.GameObject)
extern "C"  bool UICamera_IsVisible_m1362530233 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___worldPoint, GameObject_t4012695102 * ___go, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UICamera::IsVisible(UICamera/DepthEntry&)
extern "C"  bool UICamera_IsVisible_m1299075475 (Il2CppObject * __this /* static, unused */, DepthEntry_t2194697103 * ___de, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UICamera::IsHighlighted(UnityEngine.GameObject)
extern "C"  bool UICamera_IsHighlighted_m1305001485 (Il2CppObject * __this /* static, unused */, GameObject_t4012695102 * ___go, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UICamera UICamera::FindCameraForLayer(System.Int32)
extern "C"  UICamera_t189364953 * UICamera_FindCameraForLayer_m2152131997 (Il2CppObject * __this /* static, unused */, int32_t ___layer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UICamera::GetDirection(UnityEngine.KeyCode,UnityEngine.KeyCode)
extern "C"  int32_t UICamera_GetDirection_m2450741211 (Il2CppObject * __this /* static, unused */, int32_t ___up, int32_t ___down, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UICamera::GetDirection(UnityEngine.KeyCode,UnityEngine.KeyCode,UnityEngine.KeyCode,UnityEngine.KeyCode)
extern "C"  int32_t UICamera_GetDirection_m285642313 (Il2CppObject * __this /* static, unused */, int32_t ___up0, int32_t ___up1, int32_t ___down0, int32_t ___down1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UICamera::GetDirection(System.String)
extern "C"  int32_t UICamera_GetDirection_m759218409 (Il2CppObject * __this /* static, unused */, String_t* ___axis, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::Notify(UnityEngine.GameObject,System.String,System.Object)
extern "C"  void UICamera_Notify_m1535613613 (Il2CppObject * __this /* static, unused */, GameObject_t4012695102 * ___go, String_t* ___funcName, Il2CppObject * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UICamera/MouseOrTouch UICamera::GetMouse(System.Int32)
extern "C"  MouseOrTouch_t908473047 * UICamera_GetMouse_m1121080520 (Il2CppObject * __this /* static, unused */, int32_t ___button, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UICamera/MouseOrTouch UICamera::GetTouch(System.Int32)
extern "C"  MouseOrTouch_t908473047 * UICamera_GetTouch_m3606012386 (Il2CppObject * __this /* static, unused */, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::RemoveTouch(System.Int32)
extern "C"  void UICamera_RemoveTouch_m2980431084 (Il2CppObject * __this /* static, unused */, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::Awake()
extern "C"  void UICamera_Awake_m3215653189 (UICamera_t189364953 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::OnEnable()
extern "C"  void UICamera_OnEnable_m4254186596 (UICamera_t189364953 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::OnDisable()
extern "C"  void UICamera_OnDisable_m3471702857 (UICamera_t189364953 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::Start()
extern "C"  void UICamera_Start_m1925185762 (UICamera_t189364953 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::Update()
extern "C"  void UICamera_Update_m3852035947 (UICamera_t189364953 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::LateUpdate()
extern "C"  void UICamera_LateUpdate_m3569582001 (UICamera_t189364953 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::ProcessMouse()
extern "C"  void UICamera_ProcessMouse_m2917197336 (UICamera_t189364953 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::ProcessTouches()
extern "C"  void UICamera_ProcessTouches_m2887277344 (UICamera_t189364953 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::ProcessFakeTouches()
extern "C"  void UICamera_ProcessFakeTouches_m3498912331 (UICamera_t189364953 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::ProcessOthers()
extern "C"  void UICamera_ProcessOthers_m3482327090 (UICamera_t189364953 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::ProcessTouch(System.Boolean,System.Boolean)
extern "C"  void UICamera_ProcessTouch_m3860306996 (UICamera_t189364953 * __this, bool ___pressed, bool ___unpressed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::ShowTooltip(System.Boolean)
extern "C"  void UICamera_ShowTooltip_m3052573053 (UICamera_t189364953 * __this, bool ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::OnApplicationPause()
extern "C"  void UICamera_OnApplicationPause_m2276564135 (UICamera_t189364953 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UICamera::<Raycast>m__15(UICamera/DepthEntry,UICamera/DepthEntry)
extern "C"  int32_t UICamera_U3CRaycastU3Em__15_m3574513092 (Il2CppObject * __this /* static, unused */, DepthEntry_t2194697103  ___r1, DepthEntry_t2194697103  ___r2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UICamera::<Raycast>m__16(UICamera/DepthEntry,UICamera/DepthEntry)
extern "C"  int32_t UICamera_U3CRaycastU3Em__16_m3698586339 (Il2CppObject * __this /* static, unused */, DepthEntry_t2194697103  ___r1, DepthEntry_t2194697103  ___r2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
