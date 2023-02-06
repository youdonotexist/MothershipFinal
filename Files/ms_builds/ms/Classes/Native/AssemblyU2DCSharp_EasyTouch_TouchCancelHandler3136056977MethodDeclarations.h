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

// EasyTouch/TouchCancelHandler
struct TouchCancelHandler_t3136056977;
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

// System.Void EasyTouch/TouchCancelHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void TouchCancelHandler__ctor_m2905199818 (TouchCancelHandler_t3136056977 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyTouch/TouchCancelHandler::Invoke(Gesture)
extern "C"  void TouchCancelHandler_Invoke_m3962713669 (TouchCancelHandler_t3136056977 * __this, Gesture_t1589572905 * ___gesture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_TouchCancelHandler_t3136056977(Il2CppObject* delegate, Gesture_t1589572905 * ___gesture);
// System.IAsyncResult EasyTouch/TouchCancelHandler::BeginInvoke(Gesture,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * TouchCancelHandler_BeginInvoke_m3694199772 (TouchCancelHandler_t3136056977 * __this, Gesture_t1589572905 * ___gesture, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyTouch/TouchCancelHandler::EndInvoke(System.IAsyncResult)
extern "C"  void TouchCancelHandler_EndInvoke_m3714792410 (TouchCancelHandler_t3136056977 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
