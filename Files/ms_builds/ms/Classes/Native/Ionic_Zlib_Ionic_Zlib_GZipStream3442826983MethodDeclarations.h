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

// Ionic.Zlib.GZipStream
struct GZipStream_t3442826983;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t58506160;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_IO_SeekOrigin3506139269.h"

// System.String Ionic.Zlib.GZipStream::get_Comment()
extern "C"  String_t* GZipStream_get_Comment_m2860525352 (GZipStream_t3442826983 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zlib.GZipStream::set_Comment(System.String)
extern "C"  void GZipStream_set_Comment_m3530711121 (GZipStream_t3442826983 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Ionic.Zlib.GZipStream::get_FileName()
extern "C"  String_t* GZipStream_get_FileName_m3518660320 (GZipStream_t3442826983 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zlib.GZipStream::set_FileName(System.String)
extern "C"  void GZipStream_set_FileName_m2990748555 (GZipStream_t3442826983 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zlib.GZipStream::Dispose(System.Boolean)
extern "C"  void GZipStream_Dispose_m2766848421 (GZipStream_t3442826983 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Ionic.Zlib.GZipStream::get_CanRead()
extern "C"  bool GZipStream_get_CanRead_m3222411346 (GZipStream_t3442826983 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Ionic.Zlib.GZipStream::get_CanSeek()
extern "C"  bool GZipStream_get_CanSeek_m3251166388 (GZipStream_t3442826983 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Ionic.Zlib.GZipStream::get_CanWrite()
extern "C"  bool GZipStream_get_CanWrite_m1633157445 (GZipStream_t3442826983 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zlib.GZipStream::Flush()
extern "C"  void GZipStream_Flush_m4257693651 (GZipStream_t3442826983 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Ionic.Zlib.GZipStream::get_Length()
extern "C"  int64_t GZipStream_get_Length_m3495282369 (GZipStream_t3442826983 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Ionic.Zlib.GZipStream::get_Position()
extern "C"  int64_t GZipStream_get_Position_m523432388 (GZipStream_t3442826983 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zlib.GZipStream::set_Position(System.Int64)
extern "C"  void GZipStream_set_Position_m2332647083 (GZipStream_t3442826983 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Ionic.Zlib.GZipStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t GZipStream_Read_m4038669440 (GZipStream_t3442826983 * __this, ByteU5BU5D_t58506160* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Ionic.Zlib.GZipStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C"  int64_t GZipStream_Seek_m3468448899 (GZipStream_t3442826983 * __this, int64_t ___offset, int32_t ___origin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zlib.GZipStream::SetLength(System.Int64)
extern "C"  void GZipStream_SetLength_m3313286409 (GZipStream_t3442826983 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zlib.GZipStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C"  void GZipStream_Write_m3288365627 (GZipStream_t3442826983 * __this, ByteU5BU5D_t58506160* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Ionic.Zlib.GZipStream::EmitHeader()
extern "C"  int32_t GZipStream_EmitHeader_m455901683 (GZipStream_t3442826983 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zlib.GZipStream::.cctor()
extern "C"  void GZipStream__cctor_m55021852 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
