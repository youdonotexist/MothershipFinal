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

// EasyTouch/Cancel2FingersHandler
struct Cancel2FingersHandler_t1748880568;
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

// System.Void EasyTouch/Cancel2FingersHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void Cancel2FingersHandler__ctor_m1379176253 (Cancel2FingersHandler_t1748880568 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyTouch/Cancel2FingersHandler::Invoke(Gesture)
extern "C"  void Cancel2FingersHandler_Invoke_m1490830002 (Cancel2FingersHandler_t1748880568 * __this, Gesture_t1589572905 * ___gesture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_Cancel2FingersHandler_t1748880568(Il2CppObject* delegate, Gesture_t1589572905 * ___gesture);
// System.IAsyncResult EasyTouch/Cancel2FingersHandler::BeginInvoke(Gesture,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Cancel2FingersHandler_BeginInvoke_m3797800913 (Cancel2FingersHandler_t1748880568 * __this, Gesture_t1589572905 * ___gesture, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyTouch/Cancel2FingersHandler::EndInvoke(System.IAsyncResult)
extern "C"  void Cancel2FingersHandler_EndInvoke_m688072653 (Cancel2FingersHandler_t1748880568 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
