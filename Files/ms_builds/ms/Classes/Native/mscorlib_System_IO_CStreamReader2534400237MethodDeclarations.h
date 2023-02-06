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

// System.IO.CStreamReader
struct CStreamReader_t2534400237;
// System.IO.Stream
struct Stream_t219029575;
// System.Text.Encoding
struct Encoding_t180559927;
// System.Char[]
struct CharU5BU5D_t3416858730;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream219029575.h"
#include "mscorlib_System_Text_Encoding180559927.h"

// System.Void System.IO.CStreamReader::.ctor(System.IO.Stream,System.Text.Encoding)
extern "C"  void CStreamReader__ctor_m725065443 (CStreamReader_t2534400237 * __this, Stream_t219029575 * ___stream, Encoding_t180559927 * ___encoding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.CStreamReader::Peek()
extern "C"  int32_t CStreamReader_Peek_m2109289740 (CStreamReader_t2534400237 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.CStreamReader::Read()
extern "C"  int32_t CStreamReader_Read_m2166422151 (CStreamReader_t2534400237 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.CStreamReader::Read(System.Char[],System.Int32,System.Int32)
extern "C"  int32_t CStreamReader_Read_m4060504052 (CStreamReader_t2534400237 * __this, CharU5BU5D_t3416858730* ___dest, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.CStreamReader::ReadLine()
extern "C"  String_t* CStreamReader_ReadLine_m1098008948 (CStreamReader_t2534400237 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.CStreamReader::ReadToEnd()
extern "C"  String_t* CStreamReader_ReadToEnd_m2617837506 (CStreamReader_t2534400237 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
