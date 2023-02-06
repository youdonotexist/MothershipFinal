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

// Ionic.Zip.ZipInputStream
struct ZipInputStream_t1956564000;
// System.IO.Stream
struct Stream_t219029575;
// System.String
struct String_t;
// System.Text.Encoding
struct Encoding_t180559927;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// Ionic.Zip.ZipEntry
struct ZipEntry_t2226789352;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream219029575.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Text_Encoding180559927.h"
#include "mscorlib_System_IO_SeekOrigin3506139269.h"

// System.Void Ionic.Zip.ZipInputStream::.ctor(System.IO.Stream)
extern "C"  void ZipInputStream__ctor_m1065928272 (ZipInputStream_t1956564000 * __this, Stream_t219029575 * ___stream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipInputStream::.ctor(System.String)
extern "C"  void ZipInputStream__ctor_m1854071273 (ZipInputStream_t1956564000 * __this, String_t* ___fileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipInputStream::.ctor(System.IO.Stream,System.Boolean)
extern "C"  void ZipInputStream__ctor_m434643757 (ZipInputStream_t1956564000 * __this, Stream_t219029575 * ___stream, bool ___leaveOpen, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipInputStream::_Init(System.IO.Stream,System.Boolean,System.String)
extern "C"  void ZipInputStream__Init_m909115964 (ZipInputStream_t1956564000 * __this, Stream_t219029575 * ___stream, bool ___leaveOpen, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Ionic.Zip.ZipInputStream::ToString()
extern "C"  String_t* ZipInputStream_ToString_m2927708026 (ZipInputStream_t1956564000 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding Ionic.Zip.ZipInputStream::get_ProvisionalAlternateEncoding()
extern "C"  Encoding_t180559927 * ZipInputStream_get_ProvisionalAlternateEncoding_m285552777 (ZipInputStream_t1956564000 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipInputStream::set_ProvisionalAlternateEncoding(System.Text.Encoding)
extern "C"  void ZipInputStream_set_ProvisionalAlternateEncoding_m1516532416 (ZipInputStream_t1956564000 * __this, Encoding_t180559927 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Ionic.Zip.ZipInputStream::get_CodecBufferSize()
extern "C"  int32_t ZipInputStream_get_CodecBufferSize_m3058214711 (ZipInputStream_t1956564000 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipInputStream::set_CodecBufferSize(System.Int32)
extern "C"  void ZipInputStream_set_CodecBufferSize_m1728206050 (ZipInputStream_t1956564000 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipInputStream::set_Password(System.String)
extern "C"  void ZipInputStream_set_Password_m1733375391 (ZipInputStream_t1956564000 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipInputStream::SetupStream()
extern "C"  void ZipInputStream_SetupStream_m3150413684 (ZipInputStream_t1956564000 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Ionic.Zip.ZipInputStream::get_ReadStream()
extern "C"  Stream_t219029575 * ZipInputStream_get_ReadStream_m3766420670 (ZipInputStream_t1956564000 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Ionic.Zip.ZipInputStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t ZipInputStream_Read_m1714049658 (ZipInputStream_t1956564000 * __this, ByteU5BU5D_t58506160* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Ionic.Zip.ZipEntry Ionic.Zip.ZipInputStream::GetNextEntry()
extern "C"  ZipEntry_t2226789352 * ZipInputStream_GetNextEntry_m2695554503 (ZipInputStream_t1956564000 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipInputStream::Dispose(System.Boolean)
extern "C"  void ZipInputStream_Dispose_m2751099565 (ZipInputStream_t1956564000 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Ionic.Zip.ZipInputStream::get_CanRead()
extern "C"  bool ZipInputStream_get_CanRead_m1076383616 (ZipInputStream_t1956564000 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Ionic.Zip.ZipInputStream::get_CanSeek()
extern "C"  bool ZipInputStream_get_CanSeek_m1105138658 (ZipInputStream_t1956564000 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Ionic.Zip.ZipInputStream::get_CanWrite()
extern "C"  bool ZipInputStream_get_CanWrite_m3825774551 (ZipInputStream_t1956564000 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Ionic.Zip.ZipInputStream::get_Length()
extern "C"  int64_t ZipInputStream_get_Length_m1231912809 (ZipInputStream_t1956564000 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Ionic.Zip.ZipInputStream::get_Position()
extern "C"  int64_t ZipInputStream_get_Position_m2973704300 (ZipInputStream_t1956564000 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipInputStream::set_Position(System.Int64)
extern "C"  void ZipInputStream_set_Position_m1309913251 (ZipInputStream_t1956564000 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipInputStream::Flush()
extern "C"  void ZipInputStream_Flush_m1797914843 (ZipInputStream_t1956564000 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipInputStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C"  void ZipInputStream_Write_m937828403 (ZipInputStream_t1956564000 * __this, ByteU5BU5D_t58506160* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Ionic.Zip.ZipInputStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C"  int64_t ZipInputStream_Seek_m2780721883 (ZipInputStream_t1956564000 * __this, int64_t ___offset, int32_t ___origin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipInputStream::SetLength(System.Int64)
extern "C"  void ZipInputStream_SetLength_m3297537553 (ZipInputStream_t1956564000 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
