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

// EasyTouch/PinchInHandler
struct PinchInHandler_t7450347;
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

// System.Void EasyTouch/PinchInHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void PinchInHandler__ctor_m1803222308 (PinchInHandler_t7450347 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyTouch/PinchInHandler::Invoke(Gesture)
extern "C"  void PinchInHandler_Invoke_m3165390891 (PinchInHandler_t7450347 * __this, Gesture_t1589572905 * ___gesture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_PinchInHandler_t7450347(Il2CppObject* delegate, Gesture_t1589572905 * ___gesture);
// System.IAsyncResult EasyTouch/PinchInHandler::BeginInvoke(Gesture,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * PinchInHandler_BeginInvoke_m2515621314 (PinchInHandler_t7450347 * __this, Gesture_t1589572905 * ___gesture, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyTouch/PinchInHandler::EndInvoke(System.IAsyncResult)
extern "C"  void PinchInHandler_EndInvoke_m2869076276 (PinchInHandler_t7450347 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
