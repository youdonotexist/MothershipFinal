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

// System.WindowsConsoleDriver
struct WindowsConsoleDriver_t2866849361;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_ConsoleKeyInfo93518347.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_Handles839097024.h"
#include "mscorlib_System_ConsoleScreenBufferInfo1169518982.h"
#include "mscorlib_System_InputRecord4095575088.h"

// System.Void System.WindowsConsoleDriver::.ctor()
extern "C"  void WindowsConsoleDriver__ctor_m3567726553 (WindowsConsoleDriver_t2866849361 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ConsoleKeyInfo System.WindowsConsoleDriver::ReadKey(System.Boolean)
extern "C"  ConsoleKeyInfo_t93518347  WindowsConsoleDriver_ReadKey_m1393188309 (WindowsConsoleDriver_t2866849361 * __this, bool ___intercept, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.WindowsConsoleDriver::GetStdHandle(System.Handles)
extern "C"  IntPtr_t WindowsConsoleDriver_GetStdHandle_m2710701471 (Il2CppObject * __this /* static, unused */, int32_t ___handle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.WindowsConsoleDriver::GetConsoleScreenBufferInfo(System.IntPtr,System.ConsoleScreenBufferInfo&)
extern "C"  bool WindowsConsoleDriver_GetConsoleScreenBufferInfo_m4057528648 (Il2CppObject * __this /* static, unused */, IntPtr_t ___handle, ConsoleScreenBufferInfo_t1169518982 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.WindowsConsoleDriver::ReadConsoleInput(System.IntPtr,System.InputRecord&,System.Int32,System.Int32&)
extern "C"  bool WindowsConsoleDriver_ReadConsoleInput_m9651400 (Il2CppObject * __this /* static, unused */, IntPtr_t ___handle, InputRecord_t4095575088 * ___record, int32_t ___length, int32_t* ___nread, const MethodInfo* method) IL2CPP_METHOD_ATTR;
