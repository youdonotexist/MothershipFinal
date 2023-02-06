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

// EasyJoystick/JoystickMoveEndHandler
struct JoystickMoveEndHandler_t2083928348;
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

// System.Void EasyJoystick/JoystickMoveEndHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void JoystickMoveEndHandler__ctor_m266090020 (JoystickMoveEndHandler_t2083928348 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyJoystick/JoystickMoveEndHandler::Invoke(MovingJoystick)
extern "C"  void JoystickMoveEndHandler_Invoke_m3540423732 (JoystickMoveEndHandler_t2083928348 * __this, MovingJoystick_t1664889802 * ___move, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_JoystickMoveEndHandler_t2083928348(Il2CppObject* delegate, MovingJoystick_t1664889802 * ___move);
// System.IAsyncResult EasyJoystick/JoystickMoveEndHandler::BeginInvoke(MovingJoystick,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * JoystickMoveEndHandler_BeginInvoke_m2565430011 (JoystickMoveEndHandler_t2083928348 * __this, MovingJoystick_t1664889802 * ___move, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyJoystick/JoystickMoveEndHandler::EndInvoke(System.IAsyncResult)
extern "C"  void JoystickMoveEndHandler_EndInvoke_m2598918708 (JoystickMoveEndHandler_t2083928348 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
