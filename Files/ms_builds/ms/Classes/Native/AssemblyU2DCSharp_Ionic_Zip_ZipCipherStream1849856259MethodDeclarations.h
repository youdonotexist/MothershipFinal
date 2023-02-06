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

// Ionic.Zip.ZipCipherStream
struct ZipCipherStream_t1849856259;
// System.IO.Stream
struct Stream_t219029575;
// Ionic.Zip.ZipCrypto
struct ZipCrypto_t3808125209;
// System.Byte[]
struct ByteU5BU5D_t58506160;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream219029575.h"
#include "AssemblyU2DCSharp_Ionic_Zip_ZipCrypto3808125209.h"
#include "AssemblyU2DCSharp_Ionic_Zip_CryptoMode2316327963.h"
#include "mscorlib_System_IO_SeekOrigin3506139269.h"

// System.Void Ionic.Zip.ZipCipherStream::.ctor(System.IO.Stream,Ionic.Zip.ZipCrypto,Ionic.Zip.CryptoMode)
extern "C"  void ZipCipherStream__ctor_m4115616087 (ZipCipherStream_t1849856259 * __this, Stream_t219029575 * ___s, ZipCrypto_t3808125209 * ___cipher, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Ionic.Zip.ZipCipherStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t ZipCipherStream_Read_m3290942709 (ZipCipherStream_t1849856259 * __this, ByteU5BU5D_t58506160* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipCipherStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C"  void ZipCipherStream_Write_m659487604 (ZipCipherStream_t1849856259 * __this, ByteU5BU5D_t58506160* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Ionic.Zip.ZipCipherStream::get_CanRead()
extern "C"  bool ZipCipherStream_get_CanRead_m192364551 (ZipCipherStream_t1849856259 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Ionic.Zip.ZipCipherStream::get_CanSeek()
extern "C"  bool ZipCipherStream_get_CanSeek_m221119593 (ZipCipherStream_t1849856259 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Ionic.Zip.ZipCipherStream::get_CanWrite()
extern "C"  bool ZipCipherStream_get_CanWrite_m2190987312 (ZipCipherStream_t1849856259 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipCipherStream::Flush()
extern "C"  void ZipCipherStream_Flush_m360323258 (ZipCipherStream_t1849856259 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Ionic.Zip.ZipCipherStream::get_Length()
extern "C"  int64_t ZipCipherStream_get_Length_m4094079020 (ZipCipherStream_t1849856259 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Ionic.Zip.ZipCipherStream::get_Position()
extern "C"  int64_t ZipCipherStream_get_Position_m441396335 (ZipCipherStream_t1849856259 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipCipherStream::set_Position(System.Int64)
extern "C"  void ZipCipherStream_set_Position_m2986341988 (ZipCipherStream_t1849856259 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Ionic.Zip.ZipCipherStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C"  int64_t ZipCipherStream_Seek_m3290423352 (ZipCipherStream_t1849856259 * __this, int64_t ___offset, int32_t ___origin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipCipherStream::SetLength(System.Int64)
extern "C"  void ZipCipherStream_SetLength_m1439098864 (ZipCipherStream_t1849856259 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
