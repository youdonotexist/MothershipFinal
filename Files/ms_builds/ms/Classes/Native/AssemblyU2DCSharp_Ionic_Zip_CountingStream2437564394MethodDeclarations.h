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

// Ionic.Zip.CountingStream
struct CountingStream_t2437564394;
// System.IO.Stream
struct Stream_t219029575;
// System.Byte[]
struct ByteU5BU5D_t58506160;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream219029575.h"
#include "mscorlib_System_IO_SeekOrigin3506139269.h"

// System.Void Ionic.Zip.CountingStream::.ctor(System.IO.Stream)
extern "C"  void CountingStream__ctor_m162087366 (CountingStream_t2437564394 * __this, Stream_t219029575 * ___stream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Ionic.Zip.CountingStream::get_WrappedStream()
extern "C"  Stream_t219029575 * CountingStream_get_WrappedStream_m44713141 (CountingStream_t2437564394 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Ionic.Zip.CountingStream::get_BytesWritten()
extern "C"  int64_t CountingStream_get_BytesWritten_m1234873977 (CountingStream_t2437564394 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Ionic.Zip.CountingStream::get_BytesRead()
extern "C"  int64_t CountingStream_get_BytesRead_m377485974 (CountingStream_t2437564394 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.CountingStream::Adjust(System.Int64)
extern "C"  void CountingStream_Adjust_m2645065686 (CountingStream_t2437564394 * __this, int64_t ___delta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Ionic.Zip.CountingStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t CountingStream_Read_m3754504560 (CountingStream_t2437564394 * __this, ByteU5BU5D_t58506160* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.CountingStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C"  void CountingStream_Write_m4062388221 (CountingStream_t2437564394 * __this, ByteU5BU5D_t58506160* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Ionic.Zip.CountingStream::get_CanRead()
extern "C"  bool CountingStream_get_CanRead_m3939534454 (CountingStream_t2437564394 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Ionic.Zip.CountingStream::get_CanSeek()
extern "C"  bool CountingStream_get_CanSeek_m3968289496 (CountingStream_t2437564394 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Ionic.Zip.CountingStream::get_CanWrite()
extern "C"  bool CountingStream_get_CanWrite_m2389137313 (CountingStream_t2437564394 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.CountingStream::Flush()
extern "C"  void CountingStream_Flush_m1781278801 (CountingStream_t2437564394 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Ionic.Zip.CountingStream::get_Length()
extern "C"  int64_t CountingStream_get_Length_m2986840499 (CountingStream_t2437564394 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Ionic.Zip.CountingStream::get_ComputedPosition()
extern "C"  int64_t CountingStream_get_ComputedPosition_m1044671267 (CountingStream_t2437564394 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Ionic.Zip.CountingStream::get_Position()
extern "C"  int64_t CountingStream_get_Position_m1537067062 (CountingStream_t2437564394 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.CountingStream::set_Position(System.Int64)
extern "C"  void CountingStream_set_Position_m135461229 (CountingStream_t2437564394 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Ionic.Zip.CountingStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C"  int64_t CountingStream_Seek_m4225057361 (CountingStream_t2437564394 * __this, int64_t ___offset, int32_t ___origin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.CountingStream::SetLength(System.Int64)
extern "C"  void CountingStream_SetLength_m2393696647 (CountingStream_t2437564394 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
