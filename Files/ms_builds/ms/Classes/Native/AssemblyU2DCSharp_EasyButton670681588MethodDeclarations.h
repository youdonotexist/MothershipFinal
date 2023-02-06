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

// EasyButton
struct EasyButton_t670681588;
// EasyButton/ButtonDownHandler
struct ButtonDownHandler_t1077042582;
// EasyButton/ButtonPressHandler
struct ButtonPressHandler_t3422062073;
// EasyButton/ButtonUpHandler
struct ButtonUpHandler_t3041195261;
// UnityEngine.Texture2D
struct Texture2D_t2509538522;
// Gesture
struct Gesture_t1589572905;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_EasyButton_ButtonDownHandler1077042582.h"
#include "AssemblyU2DCSharp_EasyButton_ButtonPressHandler3422062073.h"
#include "AssemblyU2DCSharp_EasyButton_ButtonUpHandler3041195261.h"
#include "AssemblyU2DCSharp_EasyButton_ButtonAnchor592673959.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"
#include "UnityEngine_UnityEngine_Texture2D2509538522.h"
#include "AssemblyU2DCSharp_EasyButton_MessageName794573586.h"
#include "AssemblyU2DCSharp_Gesture1589572905.h"

// System.Void EasyButton::.ctor()
extern "C"  void EasyButton__ctor_m3687039271 (EasyButton_t670681588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyButton::add_On_ButtonDown(EasyButton/ButtonDownHandler)
extern "C"  void EasyButton_add_On_ButtonDown_m3825552192 (Il2CppObject * __this /* static, unused */, ButtonDownHandler_t1077042582 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyButton::remove_On_ButtonDown(EasyButton/ButtonDownHandler)
extern "C"  void EasyButton_remove_On_ButtonDown_m2223336795 (Il2CppObject * __this /* static, unused */, ButtonDownHandler_t1077042582 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyButton::add_On_ButtonPress(EasyButton/ButtonPressHandler)
extern "C"  void EasyButton_add_On_ButtonPress_m3470723122 (Il2CppObject * __this /* static, unused */, ButtonPressHandler_t3422062073 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyButton::remove_On_ButtonPress(EasyButton/ButtonPressHandler)
extern "C"  void EasyButton_remove_On_ButtonPress_m1340018573 (Il2CppObject * __this /* static, unused */, ButtonPressHandler_t3422062073 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyButton::add_On_ButtonUp(EasyButton/ButtonUpHandler)
extern "C"  void EasyButton_add_On_ButtonUp_m2992439410 (Il2CppObject * __this /* static, unused */, ButtonUpHandler_t3041195261 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyButton::remove_On_ButtonUp(EasyButton/ButtonUpHandler)
extern "C"  void EasyButton_remove_On_ButtonUp_m1482713101 (Il2CppObject * __this /* static, unused */, ButtonUpHandler_t3041195261 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// EasyButton/ButtonAnchor EasyButton::get_Anchor()
extern "C"  int32_t EasyButton_get_Anchor_m1181826540 (EasyButton_t670681588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyButton::set_Anchor(EasyButton/ButtonAnchor)
extern "C"  void EasyButton_set_Anchor_m1042113025 (EasyButton_t670681588 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 EasyButton::get_Offset()
extern "C"  Vector2_t3525329788  EasyButton_get_Offset_m3414262068 (EasyButton_t670681588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyButton::set_Offset(UnityEngine.Vector2)
extern "C"  void EasyButton_set_Offset_m340303181 (EasyButton_t670681588 * __this, Vector2_t3525329788  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 EasyButton::get_Scale()
extern "C"  Vector2_t3525329788  EasyButton_get_Scale_m3846530923 (EasyButton_t670681588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyButton::set_Scale(UnityEngine.Vector2)
extern "C"  void EasyButton_set_Scale_m3051944520 (EasyButton_t670681588 * __this, Vector2_t3525329788  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D EasyButton::get_NormalTexture()
extern "C"  Texture2D_t2509538522 * EasyButton_get_NormalTexture_m1771063219 (EasyButton_t670681588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyButton::set_NormalTexture(UnityEngine.Texture2D)
extern "C"  void EasyButton_set_NormalTexture_m3213634560 (EasyButton_t670681588 * __this, Texture2D_t2509538522 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D EasyButton::get_ActiveTexture()
extern "C"  Texture2D_t2509538522 * EasyButton_get_ActiveTexture_m2315679860 (EasyButton_t670681588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyButton::set_ActiveTexture(UnityEngine.Texture2D)
extern "C"  void EasyButton_set_ActiveTexture_m581283295 (EasyButton_t670681588 * __this, Texture2D_t2509538522 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyButton::OnEnable()
extern "C"  void EasyButton_OnEnable_m3164872959 (EasyButton_t670681588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyButton::OnDisable()
extern "C"  void EasyButton_OnDisable_m4062718478 (EasyButton_t670681588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyButton::OnDestroy()
extern "C"  void EasyButton_OnDestroy_m1945283232 (EasyButton_t670681588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyButton::Start()
extern "C"  void EasyButton_Start_m2634177063 (EasyButton_t670681588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyButton::OnGUI()
extern "C"  void EasyButton_OnGUI_m3182437921 (EasyButton_t670681588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyButton::Update()
extern "C"  void EasyButton_Update_m60962502 (EasyButton_t670681588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyButton::OnDrawGizmos()
extern "C"  void EasyButton_OnDrawGizmos_m1896416793 (EasyButton_t670681588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyButton::ComputeButtonAnchor(EasyButton/ButtonAnchor)
extern "C"  void EasyButton_ComputeButtonAnchor_m1062529101 (EasyButton_t670681588 * __this, int32_t ___anchor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyButton::RaiseEvent(EasyButton/MessageName)
extern "C"  void EasyButton_RaiseEvent_m1196721844 (EasyButton_t670681588 * __this, int32_t ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyButton::On_TouchStart(Gesture)
extern "C"  void EasyButton_On_TouchStart_m3104050945 (EasyButton_t670681588 * __this, Gesture_t1589572905 * ___gesture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyButton::On_TouchDown(Gesture)
extern "C"  void EasyButton_On_TouchDown_m646935979 (EasyButton_t670681588 * __this, Gesture_t1589572905 * ___gesture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyButton::On_TouchUp(Gesture)
extern "C"  void EasyButton_On_TouchUp_m4192854290 (EasyButton_t670681588 * __this, Gesture_t1589572905 * ___gesture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
