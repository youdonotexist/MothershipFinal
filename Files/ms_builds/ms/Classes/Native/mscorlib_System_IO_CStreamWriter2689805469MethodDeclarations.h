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

// System.IO.CStreamWriter
struct CStreamWriter_t2689805469;
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
#include "mscorlib_System_String968488902.h"

// System.Void System.IO.CStreamWriter::.ctor(System.IO.Stream,System.Text.Encoding)
extern "C"  void CStreamWriter__ctor_m74053267 (CStreamWriter_t2689805469 * __this, Stream_t219029575 * ___stream, Encoding_t180559927 * ___encoding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.CStreamWriter::Write(System.Char[],System.Int32,System.Int32)
extern "C"  void CStreamWriter_Write_m3335432183 (CStreamWriter_t2689805469 * __this, CharU5BU5D_t3416858730* ___buffer, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.CStreamWriter::Write(System.Char)
extern "C"  void CStreamWriter_Write_m3868841081 (CStreamWriter_t2689805469 * __this, uint16_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.CStreamWriter::InternalWriteString(System.String)
extern "C"  void CStreamWriter_InternalWriteString_m3690019882 (CStreamWriter_t2689805469 * __this, String_t* ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.CStreamWriter::InternalWriteChar(System.Char)
extern "C"  void CStreamWriter_InternalWriteChar_m4024750432 (CStreamWriter_t2689805469 * __this, uint16_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.CStreamWriter::InternalWriteChars(System.Char[],System.Int32)
extern "C"  void CStreamWriter_InternalWriteChars_m3458541524 (CStreamWriter_t2689805469 * __this, CharU5BU5D_t3416858730* ___buffer, int32_t ___n, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.CStreamWriter::Write(System.Char[])
extern "C"  void CStreamWriter_Write_m2809618775 (CStreamWriter_t2689805469 * __this, CharU5BU5D_t3416858730* ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.CStreamWriter::Write(System.String)
extern "C"  void CStreamWriter_Write_m188808606 (CStreamWriter_t2689805469 * __this, String_t* ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
