﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UIRect
struct UIRect_t2503437976;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// UnityEngine.Transform
struct Transform_t284553113;
// UnityEngine.Camera
struct Camera_t3533968274;
// UIRoot
struct UIRoot_t2503447958;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t3227571696;
// UIRect/AnchorPoint
struct AnchorPoint_t109622203;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Transform284553113.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "AssemblyU2DCSharp_UIRect_AnchorPoint109622203.h"
#include "UnityEngine_UnityEngine_GameObject4012695102.h"

// System.Void UIRect::.ctor()
extern "C"  void UIRect__ctor_m1059512579 (UIRect_t2503437976 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRect::.cctor()
extern "C"  void UIRect__cctor_m2298022666 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UIRect::get_cachedGameObject()
extern "C"  GameObject_t4012695102 * UIRect_get_cachedGameObject_m418520850 (UIRect_t2503437976 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UIRect::get_cachedTransform()
extern "C"  Transform_t284553113 * UIRect_get_cachedTransform_m1757861860 (UIRect_t2503437976 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UIRect::get_anchorCamera()
extern "C"  Camera_t3533968274 * UIRect_get_anchorCamera_m1098050341 (UIRect_t2503437976 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIRect::get_isFullyAnchored()
extern "C"  bool UIRect_get_isFullyAnchored_m227218776 (UIRect_t2503437976 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIRect::get_isAnchoredHorizontally()
extern "C"  bool UIRect_get_isAnchoredHorizontally_m2439216813 (UIRect_t2503437976 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIRect::get_isAnchoredVertically()
extern "C"  bool UIRect_get_isAnchoredVertically_m527266751 (UIRect_t2503437976 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIRect::get_canBeAnchored()
extern "C"  bool UIRect_get_canBeAnchored_m1850136011 (UIRect_t2503437976 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIRect UIRect::get_parent()
extern "C"  UIRect_t2503437976 * UIRect_get_parent_m2985047705 (UIRect_t2503437976 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIRoot UIRect::get_root()
extern "C"  UIRoot_t2503447958 * UIRect_get_root_m512643219 (UIRect_t2503437976 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIRect::get_isAnchored()
extern "C"  bool UIRect_get_isAnchored_m3752430236 (UIRect_t2503437976 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UIRect::get_cameraRayDistance()
extern "C"  float UIRect_get_cameraRayDistance_m2332969190 (UIRect_t2503437976 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRect::Invalidate(System.Boolean)
extern "C"  void UIRect_Invalidate_m3602426579 (UIRect_t2503437976 * __this, bool ___includeChildren, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] UIRect::GetSides(UnityEngine.Transform)
extern "C"  Vector3U5BU5D_t3227571696* UIRect_GetSides_m1517056542 (UIRect_t2503437976 * __this, Transform_t284553113 * ___relativeTo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UIRect::GetLocalPos(UIRect/AnchorPoint,UnityEngine.Transform)
extern "C"  Vector3_t3525329789  UIRect_GetLocalPos_m763968249 (UIRect_t2503437976 * __this, AnchorPoint_t109622203 * ___ac, Transform_t284553113 * ___trans, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRect::OnEnable()
extern "C"  void UIRect_OnEnable_m2296161187 (UIRect_t2503437976 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRect::OnInit()
extern "C"  void UIRect_OnInit_m103751600 (UIRect_t2503437976 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRect::OnDisable()
extern "C"  void UIRect_OnDisable_m2902457322 (UIRect_t2503437976 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRect::Start()
extern "C"  void UIRect_Start_m6650371 (UIRect_t2503437976 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRect::Update()
extern "C"  void UIRect_Update_m212013674 (UIRect_t2503437976 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRect::UpdateAnchors()
extern "C"  void UIRect_UpdateAnchors_m2241057846 (UIRect_t2503437976 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRect::SetAnchor(UnityEngine.Transform)
extern "C"  void UIRect_SetAnchor_m1873301541 (UIRect_t2503437976 * __this, Transform_t284553113 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRect::SetAnchor(UnityEngine.GameObject)
extern "C"  void UIRect_SetAnchor_m2444135312 (UIRect_t2503437976 * __this, GameObject_t4012695102 * ___go, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRect::SetAnchor(UnityEngine.GameObject,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void UIRect_SetAnchor_m4102854224 (UIRect_t2503437976 * __this, GameObject_t4012695102 * ___go, int32_t ___left, int32_t ___bottom, int32_t ___right, int32_t ___top, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRect::ResetAnchors()
extern "C"  void UIRect_ResetAnchors_m25739312 (UIRect_t2503437976 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRect::ResetAndUpdateAnchors()
extern "C"  void UIRect_ResetAndUpdateAnchors_m2258824462 (UIRect_t2503437976 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRect::FindCameraFor(UIRect/AnchorPoint)
extern "C"  void UIRect_FindCameraFor_m4212580360 (UIRect_t2503437976 * __this, AnchorPoint_t109622203 * ___ap, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRect::ParentHasChanged()
extern "C"  void UIRect_ParentHasChanged_m2258951653 (UIRect_t2503437976 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRect::OnUpdate()
extern "C"  void UIRect_OnUpdate_m1976565097 (UIRect_t2503437976 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
