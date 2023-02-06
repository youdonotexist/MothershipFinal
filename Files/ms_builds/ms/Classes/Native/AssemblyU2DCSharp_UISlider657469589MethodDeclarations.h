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

// UISlider
struct UISlider_t657469589;
// UnityEngine.GameObject
struct GameObject_t4012695102;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GameObject4012695102.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"
#include "UnityEngine_UnityEngine_KeyCode2371581209.h"

// System.Void UISlider::.ctor()
extern "C"  void UISlider__ctor_m3947193766 (UISlider_t657469589 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UISlider::get_sliderValue()
extern "C"  float UISlider_get_sliderValue_m2734035647 (UISlider_t657469589 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISlider::set_sliderValue(System.Single)
extern "C"  void UISlider_set_sliderValue_m1958627316 (UISlider_t657469589 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UISlider::get_inverted()
extern "C"  bool UISlider_get_inverted_m1442361008 (UISlider_t657469589 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISlider::set_inverted(System.Boolean)
extern "C"  void UISlider_set_inverted_m1069482215 (UISlider_t657469589 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISlider::Upgrade()
extern "C"  void UISlider_Upgrade_m1626925344 (UISlider_t657469589 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISlider::OnStart()
extern "C"  void UISlider_OnStart_m4178549511 (UISlider_t657469589 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISlider::OnPressBackground(UnityEngine.GameObject,System.Boolean)
extern "C"  void UISlider_OnPressBackground_m3877979919 (UISlider_t657469589 * __this, GameObject_t4012695102 * ___go, bool ___isPressed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISlider::OnDragBackground(UnityEngine.GameObject,UnityEngine.Vector2)
extern "C"  void UISlider_OnDragBackground_m943415947 (UISlider_t657469589 * __this, GameObject_t4012695102 * ___go, Vector2_t3525329788  ___delta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISlider::OnPressForeground(UnityEngine.GameObject,System.Boolean)
extern "C"  void UISlider_OnPressForeground_m2545644890 (UISlider_t657469589 * __this, GameObject_t4012695102 * ___go, bool ___isPressed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISlider::OnDragForeground(UnityEngine.GameObject,UnityEngine.Vector2)
extern "C"  void UISlider_OnDragForeground_m1951230752 (UISlider_t657469589 * __this, GameObject_t4012695102 * ___go, Vector2_t3525329788  ___delta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISlider::OnKey(UnityEngine.KeyCode)
extern "C"  void UISlider_OnKey_m3710972025 (UISlider_t657469589 * __this, int32_t ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
