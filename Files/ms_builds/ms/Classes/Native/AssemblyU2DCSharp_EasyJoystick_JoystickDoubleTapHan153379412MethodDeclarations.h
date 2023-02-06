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

// EasyJoystick/JoystickDoubleTapHandler
struct JoystickDoubleTapHandler_t153379412;
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

// System.Void EasyJoystick/JoystickDoubleTapHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void JoystickDoubleTapHandler__ctor_m2963600668 (JoystickDoubleTapHandler_t153379412 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyJoystick/JoystickDoubleTapHandler::Invoke(MovingJoystick)
extern "C"  void JoystickDoubleTapHandler_Invoke_m326895404 (JoystickDoubleTapHandler_t153379412 * __this, MovingJoystick_t1664889802 * ___move, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_JoystickDoubleTapHandler_t153379412(Il2CppObject* delegate, MovingJoystick_t1664889802 * ___move);
// System.IAsyncResult EasyJoystick/JoystickDoubleTapHandler::BeginInvoke(MovingJoystick,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * JoystickDoubleTapHandler_BeginInvoke_m1463150323 (JoystickDoubleTapHandler_t153379412 * __this, MovingJoystick_t1664889802 * ___move, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyJoystick/JoystickDoubleTapHandler::EndInvoke(System.IAsyncResult)
extern "C"  void JoystickDoubleTapHandler_EndInvoke_m2987873580 (JoystickDoubleTapHandler_t153379412 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
