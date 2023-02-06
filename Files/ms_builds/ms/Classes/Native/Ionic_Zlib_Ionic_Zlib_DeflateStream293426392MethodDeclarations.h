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

// Ionic.Zlib.DeflateStream
struct DeflateStream_t293426392;
// System.IO.Stream
struct Stream_t219029575;
// System.Byte[]
struct ByteU5BU5D_t58506160;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream219029575.h"
#include "Ionic_Zlib_Ionic_Zlib_CompressionMode1632830838.h"
#include "Ionic_Zlib_Ionic_Zlib_CompressionLevel3940478795.h"
#include "Ionic_Zlib_Ionic_Zlib_CompressionStrategy2328611910.h"
#include "mscorlib_System_IO_SeekOrigin3506139269.h"

// System.Void Ionic.Zlib.DeflateStream::.ctor(System.IO.Stream,Ionic.Zlib.CompressionMode,System.Boolean)
extern "C"  void DeflateStream__ctor_m4052365776 (DeflateStream_t293426392 * __this, Stream_t219029575 * ___stream, int32_t ___mode, bool ___leaveOpen, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zlib.DeflateStream::.ctor(System.IO.Stream,Ionic.Zlib.CompressionMode,Ionic.Zlib.CompressionLevel,System.Boolean)
extern "C"  void DeflateStream__ctor_m1151427001 (DeflateStream_t293426392 * __this, Stream_t219029575 * ___stream, int32_t ___mode, int32_t ___level, bool ___leaveOpen, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zlib.DeflateStream::set_BufferSize(System.Int32)
extern "C"  void DeflateStream_set_BufferSize_m4068481699 (DeflateStream_t293426392 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zlib.DeflateStream::set_Strategy(Ionic.Zlib.CompressionStrategy)
extern "C"  void DeflateStream_set_Strategy_m4237647906 (DeflateStream_t293426392 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zlib.DeflateStream::Dispose(System.Boolean)
extern "C"  void DeflateStream_Dispose_m722316036 (DeflateStream_t293426392 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Ionic.Zlib.DeflateStream::get_CanRead()
extern "C"  bool DeflateStream_get_CanRead_m475000165 (DeflateStream_t293426392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Ionic.Zlib.DeflateStream::get_CanSeek()
extern "C"  bool DeflateStream_get_CanSeek_m503755207 (DeflateStream_t293426392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Ionic.Zlib.DeflateStream::get_CanWrite()
extern "C"  bool DeflateStream_get_CanWrite_m2362756754 (DeflateStream_t293426392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zlib.DeflateStream::Flush()
extern "C"  void DeflateStream_Flush_m4006528818 (DeflateStream_t293426392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Ionic.Zlib.DeflateStream::get_Length()
extern "C"  int64_t DeflateStream_get_Length_m3363716900 (DeflateStream_t293426392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Ionic.Zlib.DeflateStream::get_Position()
extern "C"  int64_t DeflateStream_get_Position_m2938035559 (DeflateStream_t293426392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zlib.DeflateStream::set_Position(System.Int64)
extern "C"  void DeflateStream_set_Position_m599590124 (DeflateStream_t293426392 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Ionic.Zlib.DeflateStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t DeflateStream_Read_m1654765087 (DeflateStream_t293426392 * __this, ByteU5BU5D_t58506160* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Ionic.Zlib.DeflateStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C"  int64_t DeflateStream_Seek_m434026048 (DeflateStream_t293426392 * __this, int64_t ___offset, int32_t ___origin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zlib.DeflateStream::SetLength(System.Int64)
extern "C"  void DeflateStream_SetLength_m1268754024 (DeflateStream_t293426392 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zlib.DeflateStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C"  void DeflateStream_Write_m1731950076 (DeflateStream_t293426392 * __this, ByteU5BU5D_t58506160* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
