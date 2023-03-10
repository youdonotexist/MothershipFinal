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

// EasyTouch/LongTapStartHandler
struct LongTapStartHandler_t1240596879;
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

// System.Void EasyTouch/LongTapStartHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void LongTapStartHandler__ctor_m4094680596 (LongTapStartHandler_t1240596879 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyTouch/LongTapStartHandler::Invoke(Gesture)
extern "C"  void LongTapStartHandler_Invoke_m172518715 (LongTapStartHandler_t1240596879 * __this, Gesture_t1589572905 * ___gesture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_LongTapStartHandler_t1240596879(Il2CppObject* delegate, Gesture_t1589572905 * ___gesture);
// System.IAsyncResult EasyTouch/LongTapStartHandler::BeginInvoke(Gesture,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * LongTapStartHandler_BeginInvoke_m2774144602 (LongTapStartHandler_t1240596879 * __this, Gesture_t1589572905 * ___gesture, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyTouch/LongTapStartHandler::EndInvoke(System.IAsyncResult)
extern "C"  void LongTapStartHandler_EndInvoke_m2542631460 (LongTapStartHandler_t1240596879 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
