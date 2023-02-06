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

// UIProgressBar
struct UIProgressBar_t168062834;
// UnityEngine.Transform
struct Transform_t284553113;
// UnityEngine.Camera
struct Camera_t3533968274;
// UIWidget
struct UIWidget_t769069560;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_UIWidget769069560.h"
#include "AssemblyU2DCSharp_UIProgressBar_FillDirection2100946204.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

// System.Void UIProgressBar::.ctor()
extern "C"  void UIProgressBar__ctor_m2180461113 (UIProgressBar_t168062834 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UIProgressBar::get_cachedTransform()
extern "C"  Transform_t284553113 * UIProgressBar_get_cachedTransform_m3270764438 (UIProgressBar_t168062834 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UIProgressBar::get_cachedCamera()
extern "C"  Camera_t3533968274 * UIProgressBar_get_cachedCamera_m1817360186 (UIProgressBar_t168062834 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIWidget UIProgressBar::get_foregroundWidget()
extern "C"  UIWidget_t769069560 * UIProgressBar_get_foregroundWidget_m1020554326 (UIProgressBar_t168062834 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIProgressBar::set_foregroundWidget(UIWidget)
extern "C"  void UIProgressBar_set_foregroundWidget_m1424123255 (UIProgressBar_t168062834 * __this, UIWidget_t769069560 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIWidget UIProgressBar::get_backgroundWidget()
extern "C"  UIWidget_t769069560 * UIProgressBar_get_backgroundWidget_m2765831489 (UIProgressBar_t168062834 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIProgressBar::set_backgroundWidget(UIWidget)
extern "C"  void UIProgressBar_set_backgroundWidget_m199957346 (UIProgressBar_t168062834 * __this, UIWidget_t769069560 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIProgressBar/FillDirection UIProgressBar::get_fillDirection()
extern "C"  int32_t UIProgressBar_get_fillDirection_m3700778238 (UIProgressBar_t168062834 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIProgressBar::set_fillDirection(UIProgressBar/FillDirection)
extern "C"  void UIProgressBar_set_fillDirection_m4148172797 (UIProgressBar_t168062834 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UIProgressBar::get_value()
extern "C"  float UIProgressBar_get_value_m1994834827 (UIProgressBar_t168062834 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIProgressBar::set_value(System.Single)
extern "C"  void UIProgressBar_set_value_m1993536704 (UIProgressBar_t168062834 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UIProgressBar::get_alpha()
extern "C"  float UIProgressBar_get_alpha_m855350328 (UIProgressBar_t168062834 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIProgressBar::set_alpha(System.Single)
extern "C"  void UIProgressBar_set_alpha_m3225312563 (UIProgressBar_t168062834 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIProgressBar::get_isHorizontal()
extern "C"  bool UIProgressBar_get_isHorizontal_m3374795278 (UIProgressBar_t168062834 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIProgressBar::get_isInverted()
extern "C"  bool UIProgressBar_get_isInverted_m2196456159 (UIProgressBar_t168062834 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIProgressBar::Start()
extern "C"  void UIProgressBar_Start_m1127598905 (UIProgressBar_t168062834 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIProgressBar::Upgrade()
extern "C"  void UIProgressBar_Upgrade_m308927731 (UIProgressBar_t168062834 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIProgressBar::OnStart()
extern "C"  void UIProgressBar_OnStart_m2860551898 (UIProgressBar_t168062834 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIProgressBar::Update()
extern "C"  void UIProgressBar_Update_m601679860 (UIProgressBar_t168062834 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIProgressBar::OnValidate()
extern "C"  void UIProgressBar_OnValidate_m3838182208 (UIProgressBar_t168062834 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UIProgressBar::ScreenToValue(UnityEngine.Vector2)
extern "C"  float UIProgressBar_ScreenToValue_m487337549 (UIProgressBar_t168062834 * __this, Vector2_t3525329788  ___screenPos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UIProgressBar::LocalToValue(UnityEngine.Vector2)
extern "C"  float UIProgressBar_LocalToValue_m3611952080 (UIProgressBar_t168062834 * __this, Vector2_t3525329788  ___localPos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIProgressBar::ForceUpdate()
extern "C"  void UIProgressBar_ForceUpdate_m3725983083 (UIProgressBar_t168062834 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIProgressBar::SetThumbPosition(UnityEngine.Vector3)
extern "C"  void UIProgressBar_SetThumbPosition_m853645649 (UIProgressBar_t168062834 * __this, Vector3_t3525329789  ___worldPos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
