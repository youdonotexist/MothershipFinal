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

// Ionic.Zip.ZipOutputStream
struct ZipOutputStream_t544682873;
// System.IO.Stream
struct Stream_t219029575;
// System.String
struct String_t;
// System.Text.Encoding
struct Encoding_t180559927;
// Ionic.Zip.ZipEntry
struct ZipEntry_t2226789352;
// System.Byte[]
struct ByteU5BU5D_t58506160;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream219029575.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_Ionic_Zip_EncryptionAlgorithm2765650435.h"
#include "Ionic_Zlib_Ionic_Zlib_CompressionStrategy2328611910.h"
#include "AssemblyU2DCSharp_Ionic_Zip_ZipEntryTimestamp3546947612.h"
#include "Ionic_Zlib_Ionic_Zlib_CompressionLevel3940478795.h"
#include "AssemblyU2DCSharp_Ionic_Zip_CompressionMethod2250333118.h"
#include "AssemblyU2DCSharp_Ionic_Zip_Zip64Option669838539.h"
#include "mscorlib_System_Text_Encoding180559927.h"
#include "AssemblyU2DCSharp_Ionic_Zip_ZipOption4149672141.h"
#include "AssemblyU2DCSharp_Ionic_Zip_ZipEntry2226789352.h"
#include "mscorlib_System_IO_SeekOrigin3506139269.h"

// System.Void Ionic.Zip.ZipOutputStream::.ctor(System.IO.Stream)
extern "C"  void ZipOutputStream__ctor_m2715102841 (ZipOutputStream_t544682873 * __this, Stream_t219029575 * ___stream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipOutputStream::.ctor(System.String)
extern "C"  void ZipOutputStream__ctor_m2626589280 (ZipOutputStream_t544682873 * __this, String_t* ___fileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipOutputStream::.ctor(System.IO.Stream,System.Boolean)
extern "C"  void ZipOutputStream__ctor_m3097183204 (ZipOutputStream_t544682873 * __this, Stream_t219029575 * ___stream, bool ___leaveOpen, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipOutputStream::_Init(System.IO.Stream,System.Boolean,System.String)
extern "C"  void ZipOutputStream__Init_m1220810419 (ZipOutputStream_t544682873 * __this, Stream_t219029575 * ___stream, bool ___leaveOpen, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Ionic.Zip.ZipOutputStream::ToString()
extern "C"  String_t* ZipOutputStream_ToString_m3559988171 (ZipOutputStream_t544682873 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipOutputStream::set_Password(System.String)
extern "C"  void ZipOutputStream_set_Password_m2137743688 (ZipOutputStream_t544682873 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Ionic.Zip.EncryptionAlgorithm Ionic.Zip.ZipOutputStream::get_Encryption()
extern "C"  int32_t ZipOutputStream_get_Encryption_m4074777198 (ZipOutputStream_t544682873 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipOutputStream::set_Encryption(Ionic.Zip.EncryptionAlgorithm)
extern "C"  void ZipOutputStream_set_Encryption_m304855869 (ZipOutputStream_t544682873 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Ionic.Zip.ZipOutputStream::get_CodecBufferSize()
extern "C"  int32_t ZipOutputStream_get_CodecBufferSize_m528423804 (ZipOutputStream_t544682873 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipOutputStream::set_CodecBufferSize(System.Int32)
extern "C"  void ZipOutputStream_set_CodecBufferSize_m462249419 (ZipOutputStream_t544682873 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Ionic.Zlib.CompressionStrategy Ionic.Zip.ZipOutputStream::get_Strategy()
extern "C"  int32_t ZipOutputStream_get_Strategy_m4014825539 (ZipOutputStream_t544682873 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipOutputStream::set_Strategy(Ionic.Zlib.CompressionStrategy)
extern "C"  void ZipOutputStream_set_Strategy_m1978836880 (ZipOutputStream_t544682873 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Ionic.Zip.ZipEntryTimestamp Ionic.Zip.ZipOutputStream::get_Timestamp()
extern "C"  int32_t ZipOutputStream_get_Timestamp_m475849204 (ZipOutputStream_t544682873 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipOutputStream::set_Timestamp(Ionic.Zip.ZipEntryTimestamp)
extern "C"  void ZipOutputStream_set_Timestamp_m891067405 (ZipOutputStream_t544682873 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Ionic.Zlib.CompressionLevel Ionic.Zip.ZipOutputStream::get_CompressionLevel()
extern "C"  int32_t ZipOutputStream_get_CompressionLevel_m2871877643 (ZipOutputStream_t544682873 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipOutputStream::set_CompressionLevel(Ionic.Zlib.CompressionLevel)
extern "C"  void ZipOutputStream_set_CompressionLevel_m1506607744 (ZipOutputStream_t544682873 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Ionic.Zip.CompressionMethod Ionic.Zip.ZipOutputStream::get_CompressionMethod()
extern "C"  int32_t ZipOutputStream_get_CompressionMethod_m1570284195 (ZipOutputStream_t544682873 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipOutputStream::set_CompressionMethod(Ionic.Zip.CompressionMethod)
extern "C"  void ZipOutputStream_set_CompressionMethod_m1781017466 (ZipOutputStream_t544682873 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Ionic.Zip.ZipOutputStream::get_Comment()
extern "C"  String_t* ZipOutputStream_get_Comment_m2627291609 (ZipOutputStream_t544682873 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipOutputStream::set_Comment(System.String)
extern "C"  void ZipOutputStream_set_Comment_m2936663424 (ZipOutputStream_t544682873 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Ionic.Zip.Zip64Option Ionic.Zip.ZipOutputStream::get_EnableZip64()
extern "C"  int32_t ZipOutputStream_get_EnableZip64_m3585174699 (ZipOutputStream_t544682873 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipOutputStream::set_EnableZip64(Ionic.Zip.Zip64Option)
extern "C"  void ZipOutputStream_set_EnableZip64_m604628216 (ZipOutputStream_t544682873 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Ionic.Zip.ZipOutputStream::get_OutputUsedZip64()
extern "C"  bool ZipOutputStream_get_OutputUsedZip64_m4192160876 (ZipOutputStream_t544682873 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Ionic.Zip.ZipOutputStream::get_IgnoreCase()
extern "C"  bool ZipOutputStream_get_IgnoreCase_m1377987225 (ZipOutputStream_t544682873 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipOutputStream::set_IgnoreCase(System.Boolean)
extern "C"  void ZipOutputStream_set_IgnoreCase_m866129912 (ZipOutputStream_t544682873 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Ionic.Zip.ZipOutputStream::get_UseUnicodeAsNecessary()
extern "C"  bool ZipOutputStream_get_UseUnicodeAsNecessary_m2186606994 (ZipOutputStream_t544682873 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipOutputStream::set_UseUnicodeAsNecessary(System.Boolean)
extern "C"  void ZipOutputStream_set_UseUnicodeAsNecessary_m1589950177 (ZipOutputStream_t544682873 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding Ionic.Zip.ZipOutputStream::get_ProvisionalAlternateEncoding()
extern "C"  Encoding_t180559927 * ZipOutputStream_get_ProvisionalAlternateEncoding_m564178224 (ZipOutputStream_t544682873 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipOutputStream::set_ProvisionalAlternateEncoding(System.Text.Encoding)
extern "C"  void ZipOutputStream_set_ProvisionalAlternateEncoding_m407192951 (ZipOutputStream_t544682873 * __this, Encoding_t180559927 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding Ionic.Zip.ZipOutputStream::get_AlternateEncoding()
extern "C"  Encoding_t180559927 * ZipOutputStream_get_AlternateEncoding_m2316465036 (ZipOutputStream_t544682873 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipOutputStream::set_AlternateEncoding(System.Text.Encoding)
extern "C"  void ZipOutputStream_set_AlternateEncoding_m869473755 (ZipOutputStream_t544682873 * __this, Encoding_t180559927 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Ionic.Zip.ZipOption Ionic.Zip.ZipOutputStream::get_AlternateEncodingUsage()
extern "C"  int32_t ZipOutputStream_get_AlternateEncodingUsage_m1347806505 (ZipOutputStream_t544682873 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipOutputStream::set_AlternateEncodingUsage(Ionic.Zip.ZipOption)
extern "C"  void ZipOutputStream_set_AlternateEncodingUsage_m1449427234 (ZipOutputStream_t544682873 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding Ionic.Zip.ZipOutputStream::get_DefaultEncoding()
extern "C"  Encoding_t180559927 * ZipOutputStream_get_DefaultEncoding_m4138048531 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipOutputStream::set_ParallelDeflateThreshold(System.Int64)
extern "C"  void ZipOutputStream_set_ParallelDeflateThreshold_m632676056 (ZipOutputStream_t544682873 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Ionic.Zip.ZipOutputStream::get_ParallelDeflateThreshold()
extern "C"  int64_t ZipOutputStream_get_ParallelDeflateThreshold_m1792395491 (ZipOutputStream_t544682873 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Ionic.Zip.ZipOutputStream::get_ParallelDeflateMaxBufferPairs()
extern "C"  int32_t ZipOutputStream_get_ParallelDeflateMaxBufferPairs_m2703941790 (ZipOutputStream_t544682873 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipOutputStream::set_ParallelDeflateMaxBufferPairs(System.Int32)
extern "C"  void ZipOutputStream_set_ParallelDeflateMaxBufferPairs_m3481889645 (ZipOutputStream_t544682873 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipOutputStream::InsureUniqueEntry(Ionic.Zip.ZipEntry)
extern "C"  void ZipOutputStream_InsureUniqueEntry_m2036180189 (ZipOutputStream_t544682873 * __this, ZipEntry_t2226789352 * ___ze1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Ionic.Zip.ZipOutputStream::get_OutputStream()
extern "C"  Stream_t219029575 * ZipOutputStream_get_OutputStream_m825578360 (ZipOutputStream_t544682873 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Ionic.Zip.ZipOutputStream::get_Name()
extern "C"  String_t* ZipOutputStream_get_Name_m4198263091 (ZipOutputStream_t544682873 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Ionic.Zip.ZipOutputStream::ContainsEntry(System.String)
extern "C"  bool ZipOutputStream_ContainsEntry_m1943518683 (ZipOutputStream_t544682873 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipOutputStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C"  void ZipOutputStream_Write_m4268005866 (ZipOutputStream_t544682873 * __this, ByteU5BU5D_t58506160* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Ionic.Zip.ZipEntry Ionic.Zip.ZipOutputStream::PutNextEntry(System.String)
extern "C"  ZipEntry_t2226789352 * ZipOutputStream_PutNextEntry_m2532373251 (ZipOutputStream_t544682873 * __this, String_t* ___entryName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipOutputStream::_InitiateCurrentEntry(System.Boolean)
extern "C"  void ZipOutputStream__InitiateCurrentEntry_m4045851976 (ZipOutputStream_t544682873 * __this, bool ___finishing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipOutputStream::_FinishCurrentEntry()
extern "C"  void ZipOutputStream__FinishCurrentEntry_m4092028299 (ZipOutputStream_t544682873 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipOutputStream::Dispose(System.Boolean)
extern "C"  void ZipOutputStream_Dispose_m105306838 (ZipOutputStream_t544682873 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Ionic.Zip.ZipOutputStream::get_CanRead()
extern "C"  bool ZipOutputStream_get_CanRead_m1919328977 (ZipOutputStream_t544682873 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Ionic.Zip.ZipOutputStream::get_CanSeek()
extern "C"  bool ZipOutputStream_get_CanSeek_m1948084019 (ZipOutputStream_t544682873 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Ionic.Zip.ZipOutputStream::get_CanWrite()
extern "C"  bool ZipOutputStream_get_CanWrite_m4187276966 (ZipOutputStream_t544682873 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Ionic.Zip.ZipOutputStream::get_Length()
extern "C"  int64_t ZipOutputStream_get_Length_m4288334882 (ZipOutputStream_t544682873 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Ionic.Zip.ZipOutputStream::get_Position()
extern "C"  int64_t ZipOutputStream_get_Position_m2437685989 (ZipOutputStream_t544682873 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipOutputStream::set_Position(System.Int64)
extern "C"  void ZipOutputStream_set_Position_m1738599386 (ZipOutputStream_t544682873 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipOutputStream::Flush()
extern "C"  void ZipOutputStream_Flush_m2973096708 (ZipOutputStream_t544682873 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Ionic.Zip.ZipOutputStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t ZipOutputStream_Read_m2437515199 (ZipOutputStream_t544682873 * __this, ByteU5BU5D_t58506160* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Ionic.Zip.ZipOutputStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C"  int64_t ZipOutputStream_Seek_m2427452034 (ZipOutputStream_t544682873 * __this, int64_t ___offset, int32_t ___origin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipOutputStream::SetLength(System.Int64)
extern "C"  void ZipOutputStream_SetLength_m651744826 (ZipOutputStream_t544682873 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
