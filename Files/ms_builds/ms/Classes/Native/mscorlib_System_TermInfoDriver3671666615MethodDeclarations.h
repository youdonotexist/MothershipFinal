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

// System.TermInfoDriver
struct TermInfoDriver_t3671666615;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Char[]
struct CharU5BU5D_t3416858730;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_ConsoleKeyInfo93518347.h"
#include "mscorlib_System_TermInfoStrings951509341.h"

// System.Void System.TermInfoDriver::.ctor(System.String)
extern "C"  void TermInfoDriver__ctor_m961129263 (TermInfoDriver_t3671666615 * __this, String_t* ___term, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TermInfoDriver::.cctor()
extern "C"  void TermInfoDriver__cctor_m2015556442 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.TermInfoDriver::SearchTerminfo(System.String)
extern "C"  String_t* TermInfoDriver_SearchTerminfo_m1886888370 (Il2CppObject * __this /* static, unused */, String_t* ___term, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TermInfoDriver::WriteConsole(System.String)
extern "C"  void TermInfoDriver_WriteConsole_m2006396665 (TermInfoDriver_t3671666615 * __this, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TermInfoDriver::get_Initialized()
extern "C"  bool TermInfoDriver_get_Initialized_m1878296958 (TermInfoDriver_t3671666615 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TermInfoDriver::Init()
extern "C"  void TermInfoDriver_Init_m2537372993 (TermInfoDriver_t3671666615 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.TermInfoDriver::MangleParameters(System.String)
extern "C"  String_t* TermInfoDriver_MangleParameters_m2375225604 (Il2CppObject * __this /* static, unused */, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TermInfoDriver::IncrementX()
extern "C"  void TermInfoDriver_IncrementX_m1580993722 (TermInfoDriver_t3671666615 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TermInfoDriver::WriteSpecialKey(System.ConsoleKeyInfo)
extern "C"  void TermInfoDriver_WriteSpecialKey_m1409468007 (TermInfoDriver_t3671666615 * __this, ConsoleKeyInfo_t93518347  ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TermInfoDriver::WriteSpecialKey(System.Char)
extern "C"  void TermInfoDriver_WriteSpecialKey_m1067077223 (TermInfoDriver_t3671666615 * __this, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TermInfoDriver::IsSpecialKey(System.ConsoleKeyInfo)
extern "C"  bool TermInfoDriver_IsSpecialKey_m1702100638 (TermInfoDriver_t3671666615 * __this, ConsoleKeyInfo_t93518347  ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TermInfoDriver::IsSpecialKey(System.Char)
extern "C"  bool TermInfoDriver_IsSpecialKey_m2824015710 (TermInfoDriver_t3671666615 * __this, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TermInfoDriver::GetCursorPosition()
extern "C"  void TermInfoDriver_GetCursorPosition_m3443782182 (TermInfoDriver_t3671666615 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TermInfoDriver::CheckWindowDimensions()
extern "C"  void TermInfoDriver_CheckWindowDimensions_m750529430 (TermInfoDriver_t3671666615 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TermInfoDriver::get_WindowHeight()
extern "C"  int32_t TermInfoDriver_get_WindowHeight_m656872213 (TermInfoDriver_t3671666615 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TermInfoDriver::get_WindowWidth()
extern "C"  int32_t TermInfoDriver_get_WindowWidth_m3884262650 (TermInfoDriver_t3671666615 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TermInfoDriver::AddToBuffer(System.Int32)
extern "C"  void TermInfoDriver_AddToBuffer_m1760042238 (TermInfoDriver_t3671666615 * __this, int32_t ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TermInfoDriver::AdjustBuffer()
extern "C"  void TermInfoDriver_AdjustBuffer_m3847015712 (TermInfoDriver_t3671666615 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ConsoleKeyInfo System.TermInfoDriver::CreateKeyInfoFromInt(System.Int32,System.Boolean)
extern "C"  ConsoleKeyInfo_t93518347  TermInfoDriver_CreateKeyInfoFromInt_m2412611429 (TermInfoDriver_t3671666615 * __this, int32_t ___n, bool ___alt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.TermInfoDriver::GetKeyFromBuffer(System.Boolean)
extern "C"  Il2CppObject * TermInfoDriver_GetKeyFromBuffer_m4107262054 (TermInfoDriver_t3671666615 * __this, bool ___cooked, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ConsoleKeyInfo System.TermInfoDriver::ReadKeyInternal(System.Boolean&)
extern "C"  ConsoleKeyInfo_t93518347  TermInfoDriver_ReadKeyInternal_m2867972160 (TermInfoDriver_t3671666615 * __this, bool* ___fresh, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TermInfoDriver::InputPending()
extern "C"  bool TermInfoDriver_InputPending_m2207207836 (TermInfoDriver_t3671666615 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TermInfoDriver::QueueEcho(System.Char)
extern "C"  void TermInfoDriver_QueueEcho_m1715059542 (TermInfoDriver_t3671666615 * __this, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TermInfoDriver::Echo(System.ConsoleKeyInfo)
extern "C"  void TermInfoDriver_Echo_m839824391 (TermInfoDriver_t3671666615 * __this, ConsoleKeyInfo_t93518347  ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TermInfoDriver::EchoFlush()
extern "C"  void TermInfoDriver_EchoFlush_m721231856 (TermInfoDriver_t3671666615 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TermInfoDriver::Read(System.Char[],System.Int32,System.Int32)
extern "C"  int32_t TermInfoDriver_Read_m3344402512 (TermInfoDriver_t3671666615 * __this, CharU5BU5D_t3416858730* ___dest, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ConsoleKeyInfo System.TermInfoDriver::ReadKey(System.Boolean)
extern "C"  ConsoleKeyInfo_t93518347  TermInfoDriver_ReadKey_m1554575151 (TermInfoDriver_t3671666615 * __this, bool ___intercept, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.TermInfoDriver::ReadLine()
extern "C"  String_t* TermInfoDriver_ReadLine_m2210648280 (TermInfoDriver_t3671666615 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TermInfoDriver::SetCursorPosition(System.Int32,System.Int32)
extern "C"  void TermInfoDriver_SetCursorPosition_m1517807668 (TermInfoDriver_t3671666615 * __this, int32_t ___left, int32_t ___top, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TermInfoDriver::CreateKeyMap()
extern "C"  void TermInfoDriver_CreateKeyMap_m2813610122 (TermInfoDriver_t3671666615 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TermInfoDriver::InitKeys()
extern "C"  void TermInfoDriver_InitKeys_m1328187989 (TermInfoDriver_t3671666615 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TermInfoDriver::AddStringMapping(System.TermInfoStrings)
extern "C"  void TermInfoDriver_AddStringMapping_m1346202500 (TermInfoDriver_t3671666615 * __this, int32_t ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
