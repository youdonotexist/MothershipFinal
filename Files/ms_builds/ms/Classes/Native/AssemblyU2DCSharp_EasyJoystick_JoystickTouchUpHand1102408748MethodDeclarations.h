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

// EasyJoystick/JoystickTouchUpHandler
struct JoystickTouchUpHandler_t1102408748;
// System.Object
struct Il2CppObject;
// MovingJoystick
struct MovingJoystick_t1664889802;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "AssemblyU2DCSharp_MovingJoystick1664889802.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void EasyJoystick/JoystickTouchUpHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void JoystickTouchUpHandler__ctor_m3950715188 (JoystickTouchUpHandler_t1102408748 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyJoystick/JoystickTouchUpHandler::Invoke(MovingJoystick)
extern "C"  void JoystickTouchUpHandler_Invoke_m2917242692 (JoystickTouchUpHandler_t1102408748 * __this, MovingJoystick_t1664889802 * ___move, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_JoystickTouchUpHandler_t1102408748(Il2CppObject* delegate, MovingJoystick_t1664889802 * ___move);
// System.IAsyncResult EasyJoystick/JoystickTouchUpHandler::BeginInvoke(MovingJoystick,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * JoystickTouchUpHandler_BeginInvoke_m3880259083 (JoystickTouchUpHandler_t1102408748 * __this, MovingJoystick_t1664889802 * ___move, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyJoystick/JoystickTouchUpHandler::EndInvoke(System.IAsyncResult)
extern "C"  void JoystickTouchUpHandler_EndInvoke_m2086096196 (JoystickTouchUpHandler_t1102408748 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
