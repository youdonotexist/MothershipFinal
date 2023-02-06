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

// System.TermInfoReader
struct TermInfoReader_t4060213330;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t58506160;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_TermInfoNumbers832752933.h"
#include "mscorlib_System_TermInfoStrings951509341.h"

// System.Void System.TermInfoReader::.ctor(System.String,System.String)
extern "C"  void TermInfoReader__ctor_m1302979654 (TermInfoReader_t4060213330 * __this, String_t* ___term, String_t* ___filename, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TermInfoReader::.ctor(System.String,System.Byte[])
extern "C"  void TermInfoReader__ctor_m3540141325 (TermInfoReader_t4060213330 * __this, String_t* ___term, ByteU5BU5D_t58506160* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TermInfoReader::ReadHeader(System.Byte[],System.Int32&)
extern "C"  void TermInfoReader_ReadHeader_m4013801455 (TermInfoReader_t4060213330 * __this, ByteU5BU5D_t58506160* ___buffer, int32_t* ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TermInfoReader::ReadNames(System.Byte[],System.Int32&)
extern "C"  void TermInfoReader_ReadNames_m2648058614 (TermInfoReader_t4060213330 * __this, ByteU5BU5D_t58506160* ___buffer, int32_t* ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TermInfoReader::Get(System.TermInfoNumbers)
extern "C"  int32_t TermInfoReader_Get_m2971495351 (TermInfoReader_t4060213330 * __this, int32_t ___number, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.TermInfoReader::Get(System.TermInfoStrings)
extern "C"  String_t* TermInfoReader_Get_m2499976838 (TermInfoReader_t4060213330 * __this, int32_t ___tstr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.TermInfoReader::GetStringBytes(System.TermInfoStrings)
extern "C"  ByteU5BU5D_t58506160* TermInfoReader_GetStringBytes_m447772157 (TermInfoReader_t4060213330 * __this, int32_t ___tstr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.TermInfoReader::GetInt16(System.Byte[],System.Int32)
extern "C"  int16_t TermInfoReader_GetInt16_m1978272194 (TermInfoReader_t4060213330 * __this, ByteU5BU5D_t58506160* ___buffer, int32_t ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.TermInfoReader::GetString(System.Byte[],System.Int32)
extern "C"  String_t* TermInfoReader_GetString_m3202419502 (TermInfoReader_t4060213330 * __this, ByteU5BU5D_t58506160* ___buffer, int32_t ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.TermInfoReader::GetStringBytes(System.Byte[],System.Int32)
extern "C"  ByteU5BU5D_t58506160* TermInfoReader_GetStringBytes_m3815155956 (TermInfoReader_t4060213330 * __this, ByteU5BU5D_t58506160* ___buffer, int32_t ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
