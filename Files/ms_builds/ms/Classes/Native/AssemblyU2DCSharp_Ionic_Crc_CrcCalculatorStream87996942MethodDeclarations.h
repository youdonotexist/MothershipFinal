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

// Ionic.Crc.CrcCalculatorStream
struct CrcCalculatorStream_t87996942;
// System.IO.Stream
struct Stream_t219029575;
// Ionic.Crc.CRC32
struct CRC32_t2657347115;
// System.Byte[]
struct ByteU5BU5D_t58506160;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream219029575.h"
#include "AssemblyU2DCSharp_Ionic_Crc_CRC322657347115.h"
#include "mscorlib_System_IO_SeekOrigin3506139269.h"

// System.Void Ionic.Crc.CrcCalculatorStream::.ctor(System.IO.Stream)
extern "C"  void CrcCalculatorStream__ctor_m2862162738 (CrcCalculatorStream_t87996942 * __this, Stream_t219029575 * ___stream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Crc.CrcCalculatorStream::.ctor(System.IO.Stream,System.Boolean)
extern "C"  void CrcCalculatorStream__ctor_m3143247371 (CrcCalculatorStream_t87996942 * __this, Stream_t219029575 * ___stream, bool ___leaveOpen, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Crc.CrcCalculatorStream::.ctor(System.IO.Stream,System.Int64)
extern "C"  void CrcCalculatorStream__ctor_m1963738726 (CrcCalculatorStream_t87996942 * __this, Stream_t219029575 * ___stream, int64_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Crc.CrcCalculatorStream::.ctor(System.IO.Stream,System.Int64,System.Boolean)
extern "C"  void CrcCalculatorStream__ctor_m528331863 (CrcCalculatorStream_t87996942 * __this, Stream_t219029575 * ___stream, int64_t ___length, bool ___leaveOpen, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Crc.CrcCalculatorStream::.ctor(System.IO.Stream,System.Int64,System.Boolean,Ionic.Crc.CRC32)
extern "C"  void CrcCalculatorStream__ctor_m1341846454 (CrcCalculatorStream_t87996942 * __this, Stream_t219029575 * ___stream, int64_t ___length, bool ___leaveOpen, CRC32_t2657347115 * ___crc32, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Crc.CrcCalculatorStream::.ctor(System.Boolean,System.Int64,System.IO.Stream,Ionic.Crc.CRC32)
extern "C"  void CrcCalculatorStream__ctor_m1192824438 (CrcCalculatorStream_t87996942 * __this, bool ___leaveOpen, int64_t ___length, Stream_t219029575 * ___stream, CRC32_t2657347115 * ___crc32, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Crc.CrcCalculatorStream::.cctor()
extern "C"  void CrcCalculatorStream__cctor_m2276371570 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Crc.CrcCalculatorStream::System.IDisposable.Dispose()
extern "C"  void CrcCalculatorStream_System_IDisposable_Dispose_m2134481892 (CrcCalculatorStream_t87996942 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Ionic.Crc.CrcCalculatorStream::get_TotalBytesSlurped()
extern "C"  int64_t CrcCalculatorStream_get_TotalBytesSlurped_m2311242289 (CrcCalculatorStream_t87996942 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Ionic.Crc.CrcCalculatorStream::get_Crc()
extern "C"  int32_t CrcCalculatorStream_get_Crc_m1974103154 (CrcCalculatorStream_t87996942 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Ionic.Crc.CrcCalculatorStream::get_LeaveOpen()
extern "C"  bool CrcCalculatorStream_get_LeaveOpen_m1913606501 (CrcCalculatorStream_t87996942 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Crc.CrcCalculatorStream::set_LeaveOpen(System.Boolean)
extern "C"  void CrcCalculatorStream_set_LeaveOpen_m2214993780 (CrcCalculatorStream_t87996942 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Ionic.Crc.CrcCalculatorStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t CrcCalculatorStream_Read_m16352440 (CrcCalculatorStream_t87996942 * __this, ByteU5BU5D_t58506160* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Crc.CrcCalculatorStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C"  void CrcCalculatorStream_Write_m1670276369 (CrcCalculatorStream_t87996942 * __this, ByteU5BU5D_t58506160* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Ionic.Crc.CrcCalculatorStream::get_CanRead()
extern "C"  bool CrcCalculatorStream_get_CanRead_m1910309066 (CrcCalculatorStream_t87996942 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Ionic.Crc.CrcCalculatorStream::get_CanSeek()
extern "C"  bool CrcCalculatorStream_get_CanSeek_m1939064108 (CrcCalculatorStream_t87996942 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Ionic.Crc.CrcCalculatorStream::get_CanWrite()
extern "C"  bool CrcCalculatorStream_get_CanWrite_m3907659725 (CrcCalculatorStream_t87996942 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Crc.CrcCalculatorStream::Flush()
extern "C"  void CrcCalculatorStream_Flush_m3775160765 (CrcCalculatorStream_t87996942 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Ionic.Crc.CrcCalculatorStream::get_Length()
extern "C"  int64_t CrcCalculatorStream_get_Length_m1386504329 (CrcCalculatorStream_t87996942 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Ionic.Crc.CrcCalculatorStream::get_Position()
extern "C"  int64_t CrcCalculatorStream_get_Position_m1212299660 (CrcCalculatorStream_t87996942 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Crc.CrcCalculatorStream::set_Position(System.Int64)
extern "C"  void CrcCalculatorStream_set_Position_m1933348993 (CrcCalculatorStream_t87996942 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Ionic.Crc.CrcCalculatorStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C"  int64_t CrcCalculatorStream_Seek_m1550048699 (CrcCalculatorStream_t87996942 * __this, int64_t ___offset, int32_t ___origin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Crc.CrcCalculatorStream::SetLength(System.Int64)
extern "C"  void CrcCalculatorStream_SetLength_m798804723 (CrcCalculatorStream_t87996942 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Crc.CrcCalculatorStream::Close()
extern "C"  void CrcCalculatorStream_Close_m1107105713 (CrcCalculatorStream_t87996942 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
