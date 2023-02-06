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

// UIEventListener
struct UIEventListener_t1278105402;
// UnityEngine.GameObject
struct GameObject_t4012695102;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"
#include "UnityEngine_UnityEngine_GameObject4012695102.h"
#include "UnityEngine_UnityEngine_KeyCode2371581209.h"

// System.Void UIEventListener::.ctor()
extern "C"  void UIEventListener__ctor_m2815357297 (UIEventListener_t1278105402 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventListener::OnSubmit()
extern "C"  void UIEventListener_OnSubmit_m2845269450 (UIEventListener_t1278105402 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventListener::OnClick()
extern "C"  void UIEventListener_OnClick_m1573171128 (UIEventListener_t1278105402 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventListener::OnDoubleClick()
extern "C"  void UIEventListener_OnDoubleClick_m3780554599 (UIEventListener_t1278105402 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventListener::OnHover(System.Boolean)
extern "C"  void UIEventListener_OnHover_m2983436003 (UIEventListener_t1278105402 * __this, bool ___isOver, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventListener::OnPress(System.Boolean)
extern "C"  void UIEventListener_OnPress_m903121898 (UIEventListener_t1278105402 * __this, bool ___isPressed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventListener::OnSelect(System.Boolean)
extern "C"  void UIEventListener_OnSelect_m1853740709 (UIEventListener_t1278105402 * __this, bool ___selected, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventListener::OnScroll(System.Single)
extern "C"  void UIEventListener_OnScroll_m1917015244 (UIEventListener_t1278105402 * __this, float ___delta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventListener::OnDragStart()
extern "C"  void UIEventListener_OnDragStart_m1666848958 (UIEventListener_t1278105402 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventListener::OnDrag(UnityEngine.Vector2)
extern "C"  void UIEventListener_OnDrag_m4051178964 (UIEventListener_t1278105402 * __this, Vector2_t3525329788  ___delta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventListener::OnDragOver()
extern "C"  void UIEventListener_OnDragOver_m3266352538 (UIEventListener_t1278105402 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventListener::OnDragOut()
extern "C"  void UIEventListener_OnDragOut_m1629369194 (UIEventListener_t1278105402 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventListener::OnDragEnd()
extern "C"  void UIEventListener_OnDragEnd_m1619910071 (UIEventListener_t1278105402 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventListener::OnDrop(UnityEngine.GameObject)
extern "C"  void UIEventListener_OnDrop_m974445529 (UIEventListener_t1278105402 * __this, GameObject_t4012695102 * ___go, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventListener::OnKey(UnityEngine.KeyCode)
extern "C"  void UIEventListener_OnKey_m3871507150 (UIEventListener_t1278105402 * __this, int32_t ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventListener::OnTooltip(System.Boolean)
extern "C"  void UIEventListener_OnTooltip_m2285549546 (UIEventListener_t1278105402 * __this, bool ___show, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIEventListener UIEventListener::Get(UnityEngine.GameObject)
extern "C"  UIEventListener_t1278105402 * UIEventListener_Get_m1638309430 (Il2CppObject * __this /* static, unused */, GameObject_t4012695102 * ___go, const MethodInfo* method) IL2CPP_METHOD_ATTR;
