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

// EasyJoystick/JoystickMoveHandler
struct JoystickMoveHandler_t2267610941;
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

// System.Void EasyJoystick/JoystickMoveHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void JoystickMoveHandler__ctor_m3753109971 (JoystickMoveHandler_t2267610941 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyJoystick/JoystickMoveHandler::Invoke(MovingJoystick)
extern "C"  void JoystickMoveHandler_Invoke_m696456803 (JoystickMoveHandler_t2267610941 * __this, MovingJoystick_t1664889802 * ___move, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_JoystickMoveHandler_t2267610941(Il2CppObject* delegate, MovingJoystick_t1664889802 * ___move);
// System.IAsyncResult EasyJoystick/JoystickMoveHandler::BeginInvoke(MovingJoystick,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * JoystickMoveHandler_BeginInvoke_m3213582258 (JoystickMoveHandler_t2267610941 * __this, MovingJoystick_t1664889802 * ___move, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyJoystick/JoystickMoveHandler::EndInvoke(System.IAsyncResult)
extern "C"  void JoystickMoveHandler_EndInvoke_m2924690787 (JoystickMoveHandler_t2267610941 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
