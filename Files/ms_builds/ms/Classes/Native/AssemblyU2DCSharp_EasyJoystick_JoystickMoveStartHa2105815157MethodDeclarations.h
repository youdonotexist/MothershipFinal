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

// EasyJoystick/JoystickMoveStartHandler
struct JoystickMoveStartHandler_t2105815157;
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

// System.Void EasyJoystick/JoystickMoveStartHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void JoystickMoveStartHandler__ctor_m911738557 (JoystickMoveStartHandler_t2105815157 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyJoystick/JoystickMoveStartHandler::Invoke(MovingJoystick)
extern "C"  void JoystickMoveStartHandler_Invoke_m51102285 (JoystickMoveStartHandler_t2105815157 * __this, MovingJoystick_t1664889802 * ___move, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_JoystickMoveStartHandler_t2105815157(Il2CppObject* delegate, MovingJoystick_t1664889802 * ___move);
// System.IAsyncResult EasyJoystick/JoystickMoveStartHandler::BeginInvoke(MovingJoystick,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * JoystickMoveStartHandler_BeginInvoke_m1809067284 (JoystickMoveStartHandler_t2105815157 * __this, MovingJoystick_t1664889802 * ___move, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyJoystick/JoystickMoveStartHandler::EndInvoke(System.IAsyncResult)
extern "C"  void JoystickMoveStartHandler_EndInvoke_m3163447117 (JoystickMoveStartHandler_t2105815157 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
