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

// EasyTouch/SwipeEnd2FingersHandler
struct SwipeEnd2FingersHandler_t4110429457;
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

// System.Void EasyTouch/SwipeEnd2FingersHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void SwipeEnd2FingersHandler__ctor_m1327062422 (SwipeEnd2FingersHandler_t4110429457 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyTouch/SwipeEnd2FingersHandler::Invoke(Gesture)
extern "C"  void SwipeEnd2FingersHandler_Invoke_m1326721273 (SwipeEnd2FingersHandler_t4110429457 * __this, Gesture_t1589572905 * ___gesture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_SwipeEnd2FingersHandler_t4110429457(Il2CppObject* delegate, Gesture_t1589572905 * ___gesture);
// System.IAsyncResult EasyTouch/SwipeEnd2FingersHandler::BeginInvoke(Gesture,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * SwipeEnd2FingersHandler_BeginInvoke_m2656623128 (SwipeEnd2FingersHandler_t4110429457 * __this, Gesture_t1589572905 * ___gesture, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyTouch/SwipeEnd2FingersHandler::EndInvoke(System.IAsyncResult)
extern "C"  void SwipeEnd2FingersHandler_EndInvoke_m3132557990 (SwipeEnd2FingersHandler_t4110429457 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
