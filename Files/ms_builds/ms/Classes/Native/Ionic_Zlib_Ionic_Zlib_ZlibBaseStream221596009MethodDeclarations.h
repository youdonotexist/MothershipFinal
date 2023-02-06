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

// Ionic.Zlib.ZlibBaseStream
struct ZlibBaseStream_t221596009;
// System.IO.Stream
struct Stream_t219029575;
// Ionic.Zlib.ZlibCodec
struct ZlibCodec_t3910383704;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream219029575.h"
#include "Ionic_Zlib_Ionic_Zlib_CompressionMode1632830838.h"
#include "Ionic_Zlib_Ionic_Zlib_CompressionLevel3940478795.h"
#include "Ionic_Zlib_Ionic_Zlib_ZlibStreamFlavor1582004022.h"
#include "mscorlib_System_IO_SeekOrigin3506139269.h"

// System.Int32 Ionic.Zlib.ZlibBaseStream::get_Crc32()
extern "C"  int32_t ZlibBaseStream_get_Crc32_m4044686679 (ZlibBaseStream_t221596009 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zlib.ZlibBaseStream::.ctor(System.IO.Stream,Ionic.Zlib.CompressionMode,Ionic.Zlib.CompressionLevel,Ionic.Zlib.ZlibStreamFlavor,System.Boolean)
extern "C"  void ZlibBaseStream__ctor_m2985015980 (ZlibBaseStream_t221596009 * __this, Stream_t219029575 * ___stream, int32_t ___compressionMode, int32_t ___level, int32_t ___flavor, bool ___leaveOpen, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Ionic.Zlib.ZlibBaseStream::get__wantCompress()
extern "C"  bool ZlibBaseStream_get__wantCompress_m3875481371 (ZlibBaseStream_t221596009 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Ionic.Zlib.ZlibCodec Ionic.Zlib.ZlibBaseStream::get_z()
extern "C"  ZlibCodec_t3910383704 * ZlibBaseStream_get_z_m3746658137 (ZlibBaseStream_t221596009 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Ionic.Zlib.ZlibBaseStream::get_workingBuffer()
extern "C"  ByteU5BU5D_t58506160* ZlibBaseStream_get_workingBuffer_m691659519 (ZlibBaseStream_t221596009 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zlib.ZlibBaseStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C"  void ZlibBaseStream_Write_m3011480765 (ZlibBaseStream_t221596009 * __this, ByteU5BU5D_t58506160* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zlib.ZlibBaseStream::finish()
extern "C"  void ZlibBaseStream_finish_m2429739432 (ZlibBaseStream_t221596009 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zlib.ZlibBaseStream::end()
extern "C"  void ZlibBaseStream_end_m2688641736 (ZlibBaseStream_t221596009 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zlib.ZlibBaseStream::Close()
extern "C"  void ZlibBaseStream_Close_m2354203013 (ZlibBaseStream_t221596009 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zlib.ZlibBaseStream::Flush()
extern "C"  void ZlibBaseStream_Flush_m727290769 (ZlibBaseStream_t221596009 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Ionic.Zlib.ZlibBaseStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C"  int64_t ZlibBaseStream_Seek_m1431750593 (ZlibBaseStream_t221596009 * __this, int64_t ___offset, int32_t ___origin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zlib.ZlibBaseStream::SetLength(System.Int64)
extern "C"  void ZlibBaseStream_SetLength_m2149307591 (ZlibBaseStream_t221596009 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Ionic.Zlib.ZlibBaseStream::ReadZeroTerminatedString()
extern "C"  String_t* ZlibBaseStream_ReadZeroTerminatedString_m3062105476 (ZlibBaseStream_t221596009 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Ionic.Zlib.ZlibBaseStream::_ReadAndValidateGzipHeader()
extern "C"  int32_t ZlibBaseStream__ReadAndValidateGzipHeader_m1793764788 (ZlibBaseStream_t221596009 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Ionic.Zlib.ZlibBaseStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t ZlibBaseStream_Read_m596322750 (ZlibBaseStream_t221596009 * __this, ByteU5BU5D_t58506160* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Ionic.Zlib.ZlibBaseStream::get_CanRead()
extern "C"  bool ZlibBaseStream_get_CanRead_m2053399184 (ZlibBaseStream_t221596009 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Ionic.Zlib.ZlibBaseStream::get_CanSeek()
extern "C"  bool ZlibBaseStream_get_CanSeek_m2082154226 (ZlibBaseStream_t221596009 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Ionic.Zlib.ZlibBaseStream::get_CanWrite()
extern "C"  bool ZlibBaseStream_get_CanWrite_m4048486087 (ZlibBaseStream_t221596009 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Ionic.Zlib.ZlibBaseStream::get_Length()
extern "C"  int64_t ZlibBaseStream_get_Length_m1844851267 (ZlibBaseStream_t221596009 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Ionic.Zlib.ZlibBaseStream::get_Position()
extern "C"  int64_t ZlibBaseStream_get_Position_m3597042886 (ZlibBaseStream_t221596009 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zlib.ZlibBaseStream::set_Position(System.Int64)
extern "C"  void ZlibBaseStream_set_Position_m3805627949 (ZlibBaseStream_t221596009 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
