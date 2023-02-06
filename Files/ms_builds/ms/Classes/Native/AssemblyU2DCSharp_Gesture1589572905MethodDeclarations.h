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

// Gesture
struct Gesture_t1589572905;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_Rect1525428817.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"

// System.Void Gesture::.ctor()
extern "C"  void Gesture__ctor_m1915811938 (Gesture_t1589572905 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Gesture::GetTouchToWordlPoint(System.Single,System.Boolean)
extern "C"  Vector3_t3525329789  Gesture_GetTouchToWordlPoint_m999598572 (Gesture_t1589572905 * __this, float ___z, bool ___worldZ, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Gesture::GetSwipeOrDragAngle()
extern "C"  float Gesture_GetSwipeOrDragAngle_m2979904068 (Gesture_t1589572905 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Gesture::IsInRect(UnityEngine.Rect,System.Boolean)
extern "C"  bool Gesture_IsInRect_m2486440023 (Gesture_t1589572905 * __this, Rect_t1525428817  ___rect, bool ___guiRect, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Gesture::NormalizedPosition()
extern "C"  Vector2_t3525329788  Gesture_NormalizedPosition_m2274306215 (Gesture_t1589572905 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
