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

// Ionic.Zip.OffsetStream
struct OffsetStream_t3042518026;
// System.IO.Stream
struct Stream_t219029575;
// System.Byte[]
struct ByteU5BU5D_t58506160;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream219029575.h"
#include "mscorlib_System_IO_SeekOrigin3506139269.h"

// System.Void Ionic.Zip.OffsetStream::.ctor(System.IO.Stream)
extern "C"  void OffsetStream__ctor_m1215630694 (OffsetStream_t3042518026 * __this, Stream_t219029575 * ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.OffsetStream::System.IDisposable.Dispose()
extern "C"  void OffsetStream_System_IDisposable_Dispose_m4177261104 (OffsetStream_t3042518026 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Ionic.Zip.OffsetStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t OffsetStream_Read_m3088673168 (OffsetStream_t3042518026 * __this, ByteU5BU5D_t58506160* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.OffsetStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C"  void OffsetStream_Write_m4231807069 (OffsetStream_t3042518026 * __this, ByteU5BU5D_t58506160* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Ionic.Zip.OffsetStream::get_CanRead()
extern "C"  bool OffsetStream_get_CanRead_m1821220118 (OffsetStream_t3042518026 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Ionic.Zip.OffsetStream::get_CanSeek()
extern "C"  bool OffsetStream_get_CanSeek_m1849975160 (OffsetStream_t3042518026 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Ionic.Zip.OffsetStream::get_CanWrite()
extern "C"  bool OffsetStream_get_CanWrite_m1145902337 (OffsetStream_t3042518026 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.OffsetStream::Flush()
extern "C"  void OffsetStream_Flush_m4404209 (OffsetStream_t3042518026 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Ionic.Zip.OffsetStream::get_Length()
extern "C"  int64_t OffsetStream_get_Length_m3310555603 (OffsetStream_t3042518026 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Ionic.Zip.OffsetStream::get_Position()
extern "C"  int64_t OffsetStream_get_Position_m3389636694 (OffsetStream_t3042518026 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.OffsetStream::set_Position(System.Int64)
extern "C"  void OffsetStream_set_Position_m2918713805 (OffsetStream_t3042518026 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Ionic.Zip.OffsetStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C"  int64_t OffsetStream_Seek_m3480923697 (OffsetStream_t3042518026 * __this, int64_t ___offset, int32_t ___origin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.OffsetStream::SetLength(System.Int64)
extern "C"  void OffsetStream_SetLength_m3447239975 (OffsetStream_t3042518026 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.OffsetStream::Close()
extern "C"  void OffsetStream_Close_m1631316453 (OffsetStream_t3042518026 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
