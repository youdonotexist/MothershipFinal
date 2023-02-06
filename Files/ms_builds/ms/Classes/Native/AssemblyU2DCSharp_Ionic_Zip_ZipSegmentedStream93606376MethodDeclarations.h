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

// Ionic.Zip.ZipSegmentedStream
struct ZipSegmentedStream_t93606376;
// System.String
struct String_t;
// System.IO.Stream
struct Stream_t219029575;
// System.Byte[]
struct ByteU5BU5D_t58506160;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_IO_SeekOrigin3506139269.h"

// System.Void Ionic.Zip.ZipSegmentedStream::.ctor()
extern "C"  void ZipSegmentedStream__ctor_m2520962417 (ZipSegmentedStream_t93606376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Ionic.Zip.ZipSegmentedStream Ionic.Zip.ZipSegmentedStream::ForReading(System.String,System.UInt32,System.UInt32)
extern "C"  ZipSegmentedStream_t93606376 * ZipSegmentedStream_ForReading_m1465124161 (Il2CppObject * __this /* static, unused */, String_t* ___name, uint32_t ___initialDiskNumber, uint32_t ___maxDiskNumber, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Ionic.Zip.ZipSegmentedStream Ionic.Zip.ZipSegmentedStream::ForWriting(System.String,System.Int32)
extern "C"  ZipSegmentedStream_t93606376 * ZipSegmentedStream_ForWriting_m2822544494 (Il2CppObject * __this /* static, unused */, String_t* ___name, int32_t ___maxSegmentSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Ionic.Zip.ZipSegmentedStream::ForUpdate(System.String,System.UInt32)
extern "C"  Stream_t219029575 * ZipSegmentedStream_ForUpdate_m2729226601 (Il2CppObject * __this /* static, unused */, String_t* ___name, uint32_t ___diskNumber, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Ionic.Zip.ZipSegmentedStream::get_ContiguousWrite()
extern "C"  bool ZipSegmentedStream_get_ContiguousWrite_m1516708521 (ZipSegmentedStream_t93606376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipSegmentedStream::set_ContiguousWrite(System.Boolean)
extern "C"  void ZipSegmentedStream_set_ContiguousWrite_m407171488 (ZipSegmentedStream_t93606376 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Ionic.Zip.ZipSegmentedStream::get_CurrentSegment()
extern "C"  uint32_t ZipSegmentedStream_get_CurrentSegment_m335562833 (ZipSegmentedStream_t93606376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipSegmentedStream::set_CurrentSegment(System.UInt32)
extern "C"  void ZipSegmentedStream_set_CurrentSegment_m501966800 (ZipSegmentedStream_t93606376 * __this, uint32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Ionic.Zip.ZipSegmentedStream::get_CurrentName()
extern "C"  String_t* ZipSegmentedStream_get_CurrentName_m2942827015 (ZipSegmentedStream_t93606376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Ionic.Zip.ZipSegmentedStream::get_CurrentTempName()
extern "C"  String_t* ZipSegmentedStream_get_CurrentTempName_m4228703611 (ZipSegmentedStream_t93606376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Ionic.Zip.ZipSegmentedStream::_NameForSegment(System.UInt32)
extern "C"  String_t* ZipSegmentedStream__NameForSegment_m4026173434 (ZipSegmentedStream_t93606376 * __this, uint32_t ___diskNumber, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Ionic.Zip.ZipSegmentedStream::ComputeSegment(System.Int32)
extern "C"  uint32_t ZipSegmentedStream_ComputeSegment_m3002154587 (ZipSegmentedStream_t93606376 * __this, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Ionic.Zip.ZipSegmentedStream::ToString()
extern "C"  String_t* ZipSegmentedStream_ToString_m2076655426 (ZipSegmentedStream_t93606376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipSegmentedStream::_SetReadStream()
extern "C"  void ZipSegmentedStream__SetReadStream_m2365373804 (ZipSegmentedStream_t93606376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Ionic.Zip.ZipSegmentedStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t ZipSegmentedStream_Read_m4282065714 (ZipSegmentedStream_t93606376 * __this, ByteU5BU5D_t58506160* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipSegmentedStream::_SetWriteStream(System.UInt32)
extern "C"  void ZipSegmentedStream__SetWriteStream_m1129758703 (ZipSegmentedStream_t93606376 * __this, uint32_t ___increment, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipSegmentedStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C"  void ZipSegmentedStream_Write_m4188806523 (ZipSegmentedStream_t93606376 * __this, ByteU5BU5D_t58506160* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Ionic.Zip.ZipSegmentedStream::TruncateBackward(System.UInt32,System.Int64)
extern "C"  int64_t ZipSegmentedStream_TruncateBackward_m3600874825 (ZipSegmentedStream_t93606376 * __this, uint32_t ___diskNumber, int64_t ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Ionic.Zip.ZipSegmentedStream::get_CanRead()
extern "C"  bool ZipSegmentedStream_get_CanRead_m802300728 (ZipSegmentedStream_t93606376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Ionic.Zip.ZipSegmentedStream::get_CanSeek()
extern "C"  bool ZipSegmentedStream_get_CanSeek_m831055770 (ZipSegmentedStream_t93606376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Ionic.Zip.ZipSegmentedStream::get_CanWrite()
extern "C"  bool ZipSegmentedStream_get_CanWrite_m3919139615 (ZipSegmentedStream_t93606376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipSegmentedStream::Flush()
extern "C"  void ZipSegmentedStream_Flush_m2604909715 (ZipSegmentedStream_t93606376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Ionic.Zip.ZipSegmentedStream::get_Length()
extern "C"  int64_t ZipSegmentedStream_get_Length_m3212152625 (ZipSegmentedStream_t93606376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Ionic.Zip.ZipSegmentedStream::get_Position()
extern "C"  int64_t ZipSegmentedStream_get_Position_m3313655348 (ZipSegmentedStream_t93606376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipSegmentedStream::set_Position(System.Int64)
extern "C"  void ZipSegmentedStream_set_Position_m3489079787 (ZipSegmentedStream_t93606376 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Ionic.Zip.ZipSegmentedStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C"  int64_t ZipSegmentedStream_Seek_m225625619 (ZipSegmentedStream_t93606376 * __this, int64_t ___offset, int32_t ___origin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipSegmentedStream::SetLength(System.Int64)
extern "C"  void ZipSegmentedStream_SetLength_m14139849 (ZipSegmentedStream_t93606376 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipSegmentedStream::Dispose(System.Boolean)
extern "C"  void ZipSegmentedStream_Dispose_m3762669157 (ZipSegmentedStream_t93606376 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
