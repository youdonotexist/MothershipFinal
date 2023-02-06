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

// EasyTouch/DragEndHandler
struct DragEndHandler_t3041046115;
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

// System.Void EasyTouch/DragEndHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void DragEndHandler__ctor_m1520672924 (DragEndHandler_t3041046115 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyTouch/DragEndHandler::Invoke(Gesture)
extern "C"  void DragEndHandler_Invoke_m3061508019 (DragEndHandler_t3041046115 * __this, Gesture_t1589572905 * ___gesture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_DragEndHandler_t3041046115(Il2CppObject* delegate, Gesture_t1589572905 * ___gesture);
// System.IAsyncResult EasyTouch/DragEndHandler::BeginInvoke(Gesture,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * DragEndHandler_BeginInvoke_m1682705738 (DragEndHandler_t3041046115 * __this, Gesture_t1589572905 * ___gesture, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyTouch/DragEndHandler::EndInvoke(System.IAsyncResult)
extern "C"  void DragEndHandler_EndInvoke_m20431020 (DragEndHandler_t3041046115 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
