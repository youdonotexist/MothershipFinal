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

// EasyTouch/SimpleTapHandler
struct SimpleTapHandler_t3561373081;
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

// System.Void EasyTouch/SimpleTapHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void SimpleTapHandler__ctor_m2478224978 (SimpleTapHandler_t3561373081 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyTouch/SimpleTapHandler::Invoke(Gesture)
extern "C"  void SimpleTapHandler_Invoke_m1035596221 (SimpleTapHandler_t3561373081 * __this, Gesture_t1589572905 * ___gesture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_SimpleTapHandler_t3561373081(Il2CppObject* delegate, Gesture_t1589572905 * ___gesture);
// System.IAsyncResult EasyTouch/SimpleTapHandler::BeginInvoke(Gesture,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * SimpleTapHandler_BeginInvoke_m1168930388 (SimpleTapHandler_t3561373081 * __this, Gesture_t1589572905 * ___gesture, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyTouch/SimpleTapHandler::EndInvoke(System.IAsyncResult)
extern "C"  void SimpleTapHandler_EndInvoke_m3061195106 (SimpleTapHandler_t3561373081 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
