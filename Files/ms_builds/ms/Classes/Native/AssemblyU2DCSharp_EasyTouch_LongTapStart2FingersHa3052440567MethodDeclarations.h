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

// EasyTouch/LongTapStart2FingersHandler
struct LongTapStart2FingersHandler_t3052440567;
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

// System.Void EasyTouch/LongTapStart2FingersHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void LongTapStart2FingersHandler__ctor_m4265062012 (LongTapStart2FingersHandler_t3052440567 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyTouch/LongTapStart2FingersHandler::Invoke(Gesture)
extern "C"  void LongTapStart2FingersHandler_Invoke_m3308578259 (LongTapStart2FingersHandler_t3052440567 * __this, Gesture_t1589572905 * ___gesture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_LongTapStart2FingersHandler_t3052440567(Il2CppObject* delegate, Gesture_t1589572905 * ___gesture);
// System.IAsyncResult EasyTouch/LongTapStart2FingersHandler::BeginInvoke(Gesture,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * LongTapStart2FingersHandler_BeginInvoke_m857559794 (LongTapStart2FingersHandler_t3052440567 * __this, Gesture_t1589572905 * ___gesture, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyTouch/LongTapStart2FingersHandler::EndInvoke(System.IAsyncResult)
extern "C"  void LongTapStart2FingersHandler_EndInvoke_m1975369356 (LongTapStart2FingersHandler_t3052440567 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
