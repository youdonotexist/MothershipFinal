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

// EasyTouchInput
struct EasyTouchInput_t733653389;
// Finger
struct Finger_t2104389513;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Finger2104389513.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"

// System.Void EasyTouchInput::.ctor()
extern "C"  void EasyTouchInput__ctor_m3552350638 (EasyTouchInput_t733653389 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EasyTouchInput::TouchCount()
extern "C"  int32_t EasyTouchInput_TouchCount_m3378202676 (EasyTouchInput_t733653389 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EasyTouchInput::getTouchCount(System.Boolean)
extern "C"  int32_t EasyTouchInput_getTouchCount_m3984434715 (EasyTouchInput_t733653389 * __this, bool ___realTouch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Finger EasyTouchInput::GetMouseTouch(System.Int32,Finger)
extern "C"  Finger_t2104389513 * EasyTouchInput_GetMouseTouch_m3982994852 (EasyTouchInput_t733653389 * __this, int32_t ___fingerIndex, Finger_t2104389513 * ___myFinger, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 EasyTouchInput::GetSecondFingerPosition()
extern "C"  Vector2_t3525329788  EasyTouchInput_GetSecondFingerPosition_m1284325837 (EasyTouchInput_t733653389 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 EasyTouchInput::GetPointerPosition(System.Int32)
extern "C"  Vector2_t3525329788  EasyTouchInput_GetPointerPosition_m1664663826 (EasyTouchInput_t733653389 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 EasyTouchInput::GetPinchTwist2Finger()
extern "C"  Vector2_t3525329788  EasyTouchInput_GetPinchTwist2Finger_m2356128073 (EasyTouchInput_t733653389 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 EasyTouchInput::GetComplex2finger()
extern "C"  Vector2_t3525329788  EasyTouchInput_GetComplex2finger_m2377045810 (EasyTouchInput_t733653389 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
