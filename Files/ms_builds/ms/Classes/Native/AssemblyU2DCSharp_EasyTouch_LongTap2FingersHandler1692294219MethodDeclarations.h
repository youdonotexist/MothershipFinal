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

// EasyTouch/LongTap2FingersHandler
struct LongTap2FingersHandler_t1692294219;
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

// System.Void EasyTouch/LongTap2FingersHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void LongTap2FingersHandler__ctor_m1249632388 (LongTap2FingersHandler_t1692294219 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyTouch/LongTap2FingersHandler::Invoke(Gesture)
extern "C"  void LongTap2FingersHandler_Invoke_m841621707 (LongTap2FingersHandler_t1692294219 * __this, Gesture_t1589572905 * ___gesture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_LongTap2FingersHandler_t1692294219(Il2CppObject* delegate, Gesture_t1589572905 * ___gesture);
// System.IAsyncResult EasyTouch/LongTap2FingersHandler::BeginInvoke(Gesture,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * LongTap2FingersHandler_BeginInvoke_m816288354 (LongTap2FingersHandler_t1692294219 * __this, Gesture_t1589572905 * ___gesture, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyTouch/LongTap2FingersHandler::EndInvoke(System.IAsyncResult)
extern "C"  void LongTap2FingersHandler_EndInvoke_m1908159636 (LongTap2FingersHandler_t1692294219 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
