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

// EasyTouch/TouchDown2FingersHandler
struct TouchDown2FingersHandler_t2414075921;
// System.Object
struct Il2CppObject;
// Gesture
struct Gesture_t1589572905;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "AssemblyU2DCSharp_Gesture1589572905.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void EasyTouch/TouchDown2FingersHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void TouchDown2FingersHandler__ctor_m1456235210 (TouchDown2FingersHandler_t2414075921 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyTouch/TouchDown2FingersHandler::Invoke(Gesture)
extern "C"  void TouchDown2FingersHandler_Invoke_m1290692677 (TouchDown2FingersHandler_t2414075921 * __this, Gesture_t1589572905 * ___gesture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_TouchDown2FingersHandler_t2414075921(Il2CppObject* delegate, Gesture_t1589572905 * ___gesture);
// System.IAsyncResult EasyTouch/TouchDown2FingersHandler::BeginInvoke(Gesture,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * TouchDown2FingersHandler_BeginInvoke_m1016989916 (TouchDown2FingersHandler_t2414075921 * __this, Gesture_t1589572905 * ___gesture, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyTouch/TouchDown2FingersHandler::EndInvoke(System.IAsyncResult)
extern "C"  void TouchDown2FingersHandler_EndInvoke_m3934570970 (TouchDown2FingersHandler_t2414075921 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
