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

// Ionic.Zip.ZipEntry
struct ZipEntry_t2226789352;
// System.String
struct String_t;
// Ionic.Zip.ZipFile
struct ZipFile_t3698100756;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t2474804324;
// System.IO.Stream
struct Stream_t219029575;
// Ionic.Crc.CrcCalculatorStream
struct CrcCalculatorStream_t87996942;
// System.Object[]
struct ObjectU5BU5D_t11523773;
// System.Text.Encoding
struct Encoding_t180559927;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// Ionic.Zip.ZipContainer
struct ZipContainer_t2405009527;
// Ionic.Zip.CountingStream
struct CountingStream_t2437564394;
// System.Exception
struct Exception_t1967233988;
// Ionic.Zip.SetCompressionCallback
struct SetCompressionCallback_t2458683936;
// Ionic.Zip.WriteDelegate
struct WriteDelegate_t2087363675;
// Ionic.Zip.OpenDelegate
struct OpenDelegate_t1492450310;
// Ionic.Zip.CloseDelegate
struct CloseDelegate_t890700148;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Ionic_Zip_ZipFile3698100756.h"
#include "AssemblyU2DCSharp_Ionic_Zip_ExtractExistingFileActi788829941.h"
#include "mscorlib_System_IO_Stream219029575.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_Ionic_Zip_ZipEntry2226789352.h"
#include "mscorlib_System_Text_Encoding180559927.h"
#include "AssemblyU2DCSharp_Ionic_Zip_ZipContainer2405009527.h"
#include "AssemblyU2DCSharp_Ionic_Zip_CountingStream2437564394.h"
#include "AssemblyU2DCSharp_Ionic_Crc_CrcCalculatorStream87996942.h"
#include "mscorlib_System_Exception1967233988.h"
#include "mscorlib_System_DateTime339033936.h"
#include "AssemblyU2DCSharp_Ionic_Zip_ZipEntryTimestamp3546947612.h"
#include "mscorlib_System_IO_FileAttributes2606923962.h"
#include "AssemblyU2DCSharp_Ionic_Zip_ZipEntrySource1119123299.h"
#include "mscorlib_System_Nullable_1_gen3097043249.h"
#include "AssemblyU2DCSharp_Ionic_Zip_CompressionMethod2250333118.h"
#include "Ionic_Zlib_Ionic_Zlib_CompressionLevel3940478795.h"
#include "AssemblyU2DCSharp_Ionic_Zip_EncryptionAlgorithm2765650435.h"
#include "AssemblyU2DCSharp_Ionic_Zip_ZipErrorAction570510996.h"
#include "AssemblyU2DCSharp_Ionic_Zip_SetCompressionCallback2458683936.h"
#include "AssemblyU2DCSharp_Ionic_Zip_ZipOption4149672141.h"
#include "AssemblyU2DCSharp_Ionic_Zip_WriteDelegate2087363675.h"
#include "AssemblyU2DCSharp_Ionic_Zip_OpenDelegate1492450310.h"
#include "AssemblyU2DCSharp_Ionic_Zip_CloseDelegate890700148.h"
#include "mscorlib_System_Object837106420.h"

// System.Void Ionic.Zip.ZipEntry::.ctor()
extern "C"  void ZipEntry__ctor_m2393742897 (ZipEntry_t2226789352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipEntry::.cctor()
extern "C"  void ZipEntry__cctor_m709489564 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Ionic.Zip.ZipEntry::get_AttributesIndicateDirectory()
extern "C"  bool ZipEntry_get_AttributesIndicateDirectory_m2519567439 (ZipEntry_t2226789352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipEntry::ResetDirEntry()
extern "C"  void ZipEntry_ResetDirEntry_m2482681507 (ZipEntry_t2226789352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Ionic.Zip.ZipEntry::get_Info()
extern "C"  String_t* ZipEntry_get_Info_m2802055437 (ZipEntry_t2226789352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Ionic.Zip.ZipEntry Ionic.Zip.ZipEntry::ReadDirEntry(Ionic.Zip.ZipFile,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  ZipEntry_t2226789352 * ZipEntry_ReadDirEntry_m2309828376 (Il2CppObject * __this /* static, unused */, ZipFile_t3698100756 * ___zf, Dictionary_2_t2474804324 * ___previouslySeen, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Ionic.Zip.ZipEntry::IsNotValidZipDirEntrySig(System.Int32)
extern "C"  bool ZipEntry_IsNotValidZipDirEntrySig_m893812182 (Il2CppObject * __this /* static, unused */, int32_t ___signature, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipEntry::Extract()
extern "C"  void ZipEntry_Extract_m1973970960 (ZipEntry_t2226789352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipEntry::Extract(Ionic.Zip.ExtractExistingFileAction)
extern "C"  void ZipEntry_Extract_m2606554397 (ZipEntry_t2226789352 * __this, int32_t ___extractExistingFile, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipEntry::Extract(System.IO.Stream)
extern "C"  void ZipEntry_Extract_m3948318375 (ZipEntry_t2226789352 * __this, Stream_t219029575 * ___stream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipEntry::Extract(System.String)
extern "C"  void ZipEntry_Extract_m159305970 (ZipEntry_t2226789352 * __this, String_t* ___baseDirectory, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipEntry::Extract(System.String,Ionic.Zip.ExtractExistingFileAction)
extern "C"  void ZipEntry_Extract_m2873032921 (ZipEntry_t2226789352 * __this, String_t* ___baseDirectory, int32_t ___extractExistingFile, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipEntry::ExtractWithPassword(System.String)
extern "C"  void ZipEntry_ExtractWithPassword_m726027185 (ZipEntry_t2226789352 * __this, String_t* ___password, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipEntry::ExtractWithPassword(System.String,System.String)
extern "C"  void ZipEntry_ExtractWithPassword_m1913956909 (ZipEntry_t2226789352 * __this, String_t* ___baseDirectory, String_t* ___password, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipEntry::ExtractWithPassword(Ionic.Zip.ExtractExistingFileAction,System.String)
extern "C"  void ZipEntry_ExtractWithPassword_m3803420120 (ZipEntry_t2226789352 * __this, int32_t ___extractExistingFile, String_t* ___password, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipEntry::ExtractWithPassword(System.String,Ionic.Zip.ExtractExistingFileAction,System.String)
extern "C"  void ZipEntry_ExtractWithPassword_m2138400340 (ZipEntry_t2226789352 * __this, String_t* ___baseDirectory, int32_t ___extractExistingFile, String_t* ___password, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipEntry::ExtractWithPassword(System.IO.Stream,System.String)
extern "C"  void ZipEntry_ExtractWithPassword_m3021275588 (ZipEntry_t2226789352 * __this, Stream_t219029575 * ___stream, String_t* ___password, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Ionic.Crc.CrcCalculatorStream Ionic.Zip.ZipEntry::OpenReader()
extern "C"  CrcCalculatorStream_t87996942 * ZipEntry_OpenReader_m2502958051 (ZipEntry_t2226789352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Ionic.Crc.CrcCalculatorStream Ionic.Zip.ZipEntry::OpenReader(System.String)
extern "C"  CrcCalculatorStream_t87996942 * ZipEntry_OpenReader_m3676253183 (ZipEntry_t2226789352 * __this, String_t* ___password, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Ionic.Crc.CrcCalculatorStream Ionic.Zip.ZipEntry::InternalOpenReader(System.String)
extern "C"  CrcCalculatorStream_t87996942 * ZipEntry_InternalOpenReader_m3717597378 (ZipEntry_t2226789352 * __this, String_t* ___password, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipEntry::OnExtractProgress(System.Int64,System.Int64)
extern "C"  void ZipEntry_OnExtractProgress_m505624072 (ZipEntry_t2226789352 * __this, int64_t ___bytesWritten, int64_t ___totalBytesToWrite, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipEntry::OnBeforeExtract(System.String)
extern "C"  void ZipEntry_OnBeforeExtract_m1649090256 (ZipEntry_t2226789352 * __this, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipEntry::OnAfterExtract(System.String)
extern "C"  void ZipEntry_OnAfterExtract_m2174087275 (ZipEntry_t2226789352 * __this, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipEntry::OnExtractExisting(System.String)
extern "C"  void ZipEntry_OnExtractExisting_m1536163878 (ZipEntry_t2226789352 * __this, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipEntry::ReallyDelete(System.String)
extern "C"  void ZipEntry_ReallyDelete_m180240121 (Il2CppObject * __this /* static, unused */, String_t* ___fileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipEntry::WriteStatus(System.String,System.Object[])
extern "C"  void ZipEntry_WriteStatus_m1890050094 (ZipEntry_t2226789352 * __this, String_t* ___format, ObjectU5BU5D_t11523773* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipEntry::InternalExtract(System.String,System.IO.Stream,System.String)
extern "C"  void ZipEntry_InternalExtract_m3025245354 (ZipEntry_t2226789352 * __this, String_t* ___baseDir, Stream_t219029575 * ___outstream, String_t* ___password, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipEntry::VerifyCrcAfterExtract(System.Int32)
extern "C"  void ZipEntry_VerifyCrcAfterExtract_m2968900448 (ZipEntry_t2226789352 * __this, int32_t ___actualCrc32, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Ionic.Zip.ZipEntry::CheckExtractExistingFile(System.String,System.String)
extern "C"  int32_t ZipEntry_CheckExtractExistingFile_m3596310269 (ZipEntry_t2226789352 * __this, String_t* ___baseDir, String_t* ___targetFileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipEntry::_CheckRead(System.Int32)
extern "C"  void ZipEntry__CheckRead_m2314398467 (ZipEntry_t2226789352 * __this, int32_t ___nbytes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Ionic.Zip.ZipEntry::ExtractOne(System.IO.Stream)
extern "C"  int32_t ZipEntry_ExtractOne_m2576250109 (ZipEntry_t2226789352 * __this, Stream_t219029575 * ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Ionic.Zip.ZipEntry::GetExtractDecompressor(System.IO.Stream)
extern "C"  Stream_t219029575 * ZipEntry_GetExtractDecompressor_m2569856271 (ZipEntry_t2226789352 * __this, Stream_t219029575 * ___input2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Ionic.Zip.ZipEntry::GetExtractDecryptor(System.IO.Stream)
extern "C"  Stream_t219029575 * ZipEntry_GetExtractDecryptor_m2875464311 (ZipEntry_t2226789352 * __this, Stream_t219029575 * ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipEntry::_SetTimes(System.String,System.Boolean)
extern "C"  void ZipEntry__SetTimes_m4185341549 (ZipEntry_t2226789352 * __this, String_t* ___fileOrDirectory, bool ___isFile, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Ionic.Zip.ZipEntry::get_UnsupportedAlgorithm()
extern "C"  String_t* ZipEntry_get_UnsupportedAlgorithm_m993682201 (ZipEntry_t2226789352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Ionic.Zip.ZipEntry::get_UnsupportedCompressionMethod()
extern "C"  String_t* ZipEntry_get_UnsupportedCompressionMethod_m750954897 (ZipEntry_t2226789352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipEntry::ValidateEncryption()
extern "C"  void ZipEntry_ValidateEncryption_m2775182444 (ZipEntry_t2226789352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipEntry::ValidateCompression()
extern "C"  void ZipEntry_ValidateCompression_m1915127103 (ZipEntry_t2226789352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipEntry::SetupCryptoForExtract(System.String)
extern "C"  void ZipEntry_SetupCryptoForExtract_m2215663005 (ZipEntry_t2226789352 * __this, String_t* ___password, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Ionic.Zip.ZipEntry::ValidateOutput(System.String,System.IO.Stream,System.String&)
extern "C"  bool ZipEntry_ValidateOutput_m320171767 (ZipEntry_t2226789352 * __this, String_t* ___basedir, Stream_t219029575 * ___outstream, String_t** ___outFileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipEntry::ReadExtraField()
extern "C"  void ZipEntry_ReadExtraField_m1952831347 (ZipEntry_t2226789352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Ionic.Zip.ZipEntry::ReadHeader(Ionic.Zip.ZipEntry,System.Text.Encoding)
extern "C"  bool ZipEntry_ReadHeader_m1884489873 (Il2CppObject * __this /* static, unused */, ZipEntry_t2226789352 * ___ze, Encoding_t180559927 * ___defaultEncoding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Ionic.Zip.ZipEntry::ReadWeakEncryptionHeader(System.IO.Stream,System.Byte[])
extern "C"  int32_t ZipEntry_ReadWeakEncryptionHeader_m3458123609 (Il2CppObject * __this /* static, unused */, Stream_t219029575 * ___s, ByteU5BU5D_t58506160* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Ionic.Zip.ZipEntry::IsNotValidSig(System.Int32)
extern "C"  bool ZipEntry_IsNotValidSig_m2608565770 (Il2CppObject * __this /* static, unused */, int32_t ___signature, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Ionic.Zip.ZipEntry Ionic.Zip.ZipEntry::ReadEntry(Ionic.Zip.ZipContainer,System.Boolean)
extern "C"  ZipEntry_t2226789352 * ZipEntry_ReadEntry_m624118814 (Il2CppObject * __this /* static, unused */, ZipContainer_t2405009527 * ___zc, bool ___first, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipEntry::HandlePK00Prefix(System.IO.Stream)
extern "C"  void ZipEntry_HandlePK00Prefix_m15998751 (Il2CppObject * __this /* static, unused */, Stream_t219029575 * ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipEntry::HandleUnexpectedDataDescriptor(Ionic.Zip.ZipEntry)
extern "C"  void ZipEntry_HandleUnexpectedDataDescriptor_m3534808635 (Il2CppObject * __this /* static, unused */, ZipEntry_t2226789352 * ___entry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Ionic.Zip.ZipEntry::FindExtraFieldSegment(System.Byte[],System.Int32,System.UInt16)
extern "C"  int32_t ZipEntry_FindExtraFieldSegment_m1193742893 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t58506160* ___extra, int32_t ___offx, uint16_t ___targetHeaderId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Ionic.Zip.ZipEntry::ProcessExtraField(System.IO.Stream,System.Int16)
extern "C"  int32_t ZipEntry_ProcessExtraField_m43579904 (ZipEntry_t2226789352 * __this, Stream_t219029575 * ___s, int16_t ___extraFieldLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Ionic.Zip.ZipEntry::ProcessExtraFieldPkwareStrongEncryption(System.Byte[],System.Int32)
extern "C"  int32_t ZipEntry_ProcessExtraFieldPkwareStrongEncryption_m1923558650 (ZipEntry_t2226789352 * __this, ByteU5BU5D_t58506160* ___Buffer, int32_t ___j, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Ionic.Zip.ZipEntry::ProcessExtraFieldZip64(System.Byte[],System.Int32,System.Int16,System.Int64)
extern "C"  int32_t ZipEntry_ProcessExtraFieldZip64_m3456040284 (ZipEntry_t2226789352 * __this, ByteU5BU5D_t58506160* ___buffer, int32_t ___j, int16_t ___dataSize, int64_t ___posn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Ionic.Zip.ZipEntry::ProcessExtraFieldInfoZipTimes(System.Byte[],System.Int32,System.Int16,System.Int64)
extern "C"  int32_t ZipEntry_ProcessExtraFieldInfoZipTimes_m283024898 (ZipEntry_t2226789352 * __this, ByteU5BU5D_t58506160* ___buffer, int32_t ___j, int16_t ___dataSize, int64_t ___posn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Ionic.Zip.ZipEntry::ProcessExtraFieldUnixTimes(System.Byte[],System.Int32,System.Int16,System.Int64)
extern "C"  int32_t ZipEntry_ProcessExtraFieldUnixTimes_m2659767707 (ZipEntry_t2226789352 * __this, ByteU5BU5D_t58506160* ___buffer, int32_t ___j, int16_t ___dataSize, int64_t ___posn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Ionic.Zip.ZipEntry::ProcessExtraFieldWindowsTimes(System.Byte[],System.Int32,System.Int16,System.Int64)
extern "C"  int32_t ZipEntry_ProcessExtraFieldWindowsTimes_m1144092946 (ZipEntry_t2226789352 * __this, ByteU5BU5D_t58506160* ___buffer, int32_t ___j, int16_t ___dataSize, int64_t ___posn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipEntry::WriteCentralDirectoryEntry(System.IO.Stream)
extern "C"  void ZipEntry_WriteCentralDirectoryEntry_m4027224965 (ZipEntry_t2226789352 * __this, Stream_t219029575 * ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Ionic.Zip.ZipEntry::ConstructExtraField(System.Boolean)
extern "C"  ByteU5BU5D_t58506160* ZipEntry_ConstructExtraField_m2817919965 (ZipEntry_t2226789352 * __this, bool ___forCentralDirectory, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Ionic.Zip.ZipEntry::NormalizeFileName()
extern "C"  String_t* ZipEntry_NormalizeFileName_m2888849952 (ZipEntry_t2226789352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Ionic.Zip.ZipEntry::GetEncodedFileNameBytes()
extern "C"  ByteU5BU5D_t58506160* ZipEntry_GetEncodedFileNameBytes_m3222751921 (ZipEntry_t2226789352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Ionic.Zip.ZipEntry::WantReadAgain()
extern "C"  bool ZipEntry_WantReadAgain_m809122517 (ZipEntry_t2226789352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipEntry::MaybeUnsetCompressionMethodForWriting(System.Int32)
extern "C"  void ZipEntry_MaybeUnsetCompressionMethodForWriting_m1823207193 (ZipEntry_t2226789352 * __this, int32_t ___cycle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipEntry::WriteHeader(System.IO.Stream,System.Int32)
extern "C"  void ZipEntry_WriteHeader_m1919208549 (ZipEntry_t2226789352 * __this, Stream_t219029575 * ___s, int32_t ___cycle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Ionic.Zip.ZipEntry::FigureCrc32()
extern "C"  int32_t ZipEntry_FigureCrc32_m1784778608 (ZipEntry_t2226789352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipEntry::PrepSourceStream()
extern "C"  void ZipEntry_PrepSourceStream_m1358444091 (ZipEntry_t2226789352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipEntry::CopyMetaData(Ionic.Zip.ZipEntry)
extern "C"  void ZipEntry_CopyMetaData_m3673492461 (ZipEntry_t2226789352 * __this, ZipEntry_t2226789352 * ___source, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipEntry::OnWriteBlock(System.Int64,System.Int64)
extern "C"  void ZipEntry_OnWriteBlock_m2011430374 (ZipEntry_t2226789352 * __this, int64_t ___bytesXferred, int64_t ___totalBytesToXfer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipEntry::_WriteEntryData(System.IO.Stream)
extern "C"  void ZipEntry__WriteEntryData_m2607133666 (ZipEntry_t2226789352 * __this, Stream_t219029575 * ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Ionic.Zip.ZipEntry::SetInputAndFigureFileLength(System.IO.Stream&)
extern "C"  int64_t ZipEntry_SetInputAndFigureFileLength_m1078939392 (ZipEntry_t2226789352 * __this, Stream_t219029575 ** ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipEntry::FinishOutputStream(System.IO.Stream,Ionic.Zip.CountingStream,System.IO.Stream,System.IO.Stream,Ionic.Crc.CrcCalculatorStream)
extern "C"  void ZipEntry_FinishOutputStream_m3717365880 (ZipEntry_t2226789352 * __this, Stream_t219029575 * ___s, CountingStream_t2437564394 * ___entryCounter, Stream_t219029575 * ___encryptor, Stream_t219029575 * ___compressor, CrcCalculatorStream_t87996942 * ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipEntry::PostProcessOutput(System.IO.Stream)
extern "C"  void ZipEntry_PostProcessOutput_m445706870 (ZipEntry_t2226789352 * __this, Stream_t219029575 * ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipEntry::SetZip64Flags()
extern "C"  void ZipEntry_SetZip64Flags_m2630060281 (ZipEntry_t2226789352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipEntry::PrepOutputStream(System.IO.Stream,System.Int64,Ionic.Zip.CountingStream&,System.IO.Stream&,System.IO.Stream&,Ionic.Crc.CrcCalculatorStream&)
extern "C"  void ZipEntry_PrepOutputStream_m3709567168 (ZipEntry_t2226789352 * __this, Stream_t219029575 * ___s, int64_t ___streamLength, CountingStream_t2437564394 ** ___outputCounter, Stream_t219029575 ** ___encryptor, Stream_t219029575 ** ___compressor, CrcCalculatorStream_t87996942 ** ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Ionic.Zip.ZipEntry::MaybeApplyCompression(System.IO.Stream,System.Int64)
extern "C"  Stream_t219029575 * ZipEntry_MaybeApplyCompression_m684094694 (ZipEntry_t2226789352 * __this, Stream_t219029575 * ___s, int64_t ___streamLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Ionic.Zip.ZipEntry::MaybeApplyEncryption(System.IO.Stream)
extern "C"  Stream_t219029575 * ZipEntry_MaybeApplyEncryption_m3018365095 (ZipEntry_t2226789352 * __this, Stream_t219029575 * ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipEntry::OnZipErrorWhileSaving(System.Exception)
extern "C"  void ZipEntry_OnZipErrorWhileSaving_m1266640388 (ZipEntry_t2226789352 * __this, Exception_t1967233988 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipEntry::Write(System.IO.Stream)
extern "C"  void ZipEntry_Write_m3805055493 (ZipEntry_t2226789352 * __this, Stream_t219029575 * ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipEntry::StoreRelativeOffset()
extern "C"  void ZipEntry_StoreRelativeOffset_m396336271 (ZipEntry_t2226789352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipEntry::NotifySaveComplete()
extern "C"  void ZipEntry_NotifySaveComplete_m786305394 (ZipEntry_t2226789352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipEntry::WriteSecurityMetadata(System.IO.Stream)
extern "C"  void ZipEntry_WriteSecurityMetadata_m4085890292 (ZipEntry_t2226789352 * __this, Stream_t219029575 * ___outstream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipEntry::CopyThroughOneEntry(System.IO.Stream)
extern "C"  void ZipEntry_CopyThroughOneEntry_m2252959682 (ZipEntry_t2226789352 * __this, Stream_t219029575 * ___outStream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipEntry::CopyThroughWithRecompute(System.IO.Stream)
extern "C"  void ZipEntry_CopyThroughWithRecompute_m4122967512 (ZipEntry_t2226789352 * __this, Stream_t219029575 * ___outstream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipEntry::CopyThroughWithNoChange(System.IO.Stream)
extern "C"  void ZipEntry_CopyThroughWithNoChange_m1723572749 (ZipEntry_t2226789352 * __this, Stream_t219029575 * ___outstream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipEntry::TraceWriteLine(System.String,System.Object[])
extern "C"  void ZipEntry_TraceWriteLine_m2103489901 (ZipEntry_t2226789352 * __this, String_t* ___format, ObjectU5BU5D_t11523773* ___varParams, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Ionic.Zip.ZipEntry::get_LastModified()
extern "C"  DateTime_t339033936  ZipEntry_get_LastModified_m577276884 (ZipEntry_t2226789352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipEntry::set_LastModified(System.DateTime)
extern "C"  void ZipEntry_set_LastModified_m3569424169 (ZipEntry_t2226789352 * __this, DateTime_t339033936  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Ionic.Zip.ZipEntry::get_BufferSize()
extern "C"  int32_t ZipEntry_get_BufferSize_m3034196971 (ZipEntry_t2226789352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Ionic.Zip.ZipEntry::get_ModifiedTime()
extern "C"  DateTime_t339033936  ZipEntry_get_ModifiedTime_m3631494091 (ZipEntry_t2226789352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipEntry::set_ModifiedTime(System.DateTime)
extern "C"  void ZipEntry_set_ModifiedTime_m2999951954 (ZipEntry_t2226789352 * __this, DateTime_t339033936  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Ionic.Zip.ZipEntry::get_AccessedTime()
extern "C"  DateTime_t339033936  ZipEntry_get_AccessedTime_m3943503493 (ZipEntry_t2226789352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipEntry::set_AccessedTime(System.DateTime)
extern "C"  void ZipEntry_set_AccessedTime_m3339826264 (ZipEntry_t2226789352 * __this, DateTime_t339033936  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Ionic.Zip.ZipEntry::get_CreationTime()
extern "C"  DateTime_t339033936  ZipEntry_get_CreationTime_m2913843041 (ZipEntry_t2226789352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipEntry::set_CreationTime(System.DateTime)
extern "C"  void ZipEntry_set_CreationTime_m1954004988 (ZipEntry_t2226789352 * __this, DateTime_t339033936  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipEntry::SetEntryTimes(System.DateTime,System.DateTime,System.DateTime)
extern "C"  void ZipEntry_SetEntryTimes_m2896255415 (ZipEntry_t2226789352 * __this, DateTime_t339033936  ___created, DateTime_t339033936  ___accessed, DateTime_t339033936  ___modified, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Ionic.Zip.ZipEntry::get_EmitTimesInWindowsFormatWhenSaving()
extern "C"  bool ZipEntry_get_EmitTimesInWindowsFormatWhenSaving_m258217702 (ZipEntry_t2226789352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipEntry::set_EmitTimesInWindowsFormatWhenSaving(System.Boolean)
extern "C"  void ZipEntry_set_EmitTimesInWindowsFormatWhenSaving_m2242982813 (ZipEntry_t2226789352 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Ionic.Zip.ZipEntry::get_EmitTimesInUnixFormatWhenSaving()
extern "C"  bool ZipEntry_get_EmitTimesInUnixFormatWhenSaving_m3669344477 (ZipEntry_t2226789352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipEntry::set_EmitTimesInUnixFormatWhenSaving(System.Boolean)
extern "C"  void ZipEntry_set_EmitTimesInUnixFormatWhenSaving_m2501842388 (ZipEntry_t2226789352 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Ionic.Zip.ZipEntryTimestamp Ionic.Zip.ZipEntry::get_Timestamp()
extern "C"  int32_t ZipEntry_get_Timestamp_m2897577877 (ZipEntry_t2226789352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.FileAttributes Ionic.Zip.ZipEntry::get_Attributes()
extern "C"  int32_t ZipEntry_get_Attributes_m2573338132 (ZipEntry_t2226789352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipEntry::set_Attributes(System.IO.FileAttributes)
extern "C"  void ZipEntry_set_Attributes_m2110340171 (ZipEntry_t2226789352 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Ionic.Zip.ZipEntry::get_LocalFileName()
extern "C"  String_t* ZipEntry_get_LocalFileName_m1625941525 (ZipEntry_t2226789352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Ionic.Zip.ZipEntry::get_FileName()
extern "C"  String_t* ZipEntry_get_FileName_m55394630 (ZipEntry_t2226789352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipEntry::set_FileName(System.String)
extern "C"  void ZipEntry_set_FileName_m2633810187 (ZipEntry_t2226789352 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Ionic.Zip.ZipEntry::get_InputStream()
extern "C"  Stream_t219029575 * ZipEntry_get_InputStream_m672675388 (ZipEntry_t2226789352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipEntry::set_InputStream(System.IO.Stream)
extern "C"  void ZipEntry_set_InputStream_m347108531 (ZipEntry_t2226789352 * __this, Stream_t219029575 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Ionic.Zip.ZipEntry::get_InputStreamWasJitProvided()
extern "C"  bool ZipEntry_get_InputStreamWasJitProvided_m3043342955 (ZipEntry_t2226789352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Ionic.Zip.ZipEntrySource Ionic.Zip.ZipEntry::get_Source()
extern "C"  int32_t ZipEntry_get_Source_m933922959 (ZipEntry_t2226789352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 Ionic.Zip.ZipEntry::get_VersionNeeded()
extern "C"  int16_t ZipEntry_get_VersionNeeded_m1740262091 (ZipEntry_t2226789352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Ionic.Zip.ZipEntry::get_Comment()
extern "C"  String_t* ZipEntry_get_Comment_m670597122 (ZipEntry_t2226789352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipEntry::set_Comment(System.String)
extern "C"  void ZipEntry_set_Comment_m194061009 (ZipEntry_t2226789352 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Boolean> Ionic.Zip.ZipEntry::get_RequiresZip64()
extern "C"  Nullable_1_t3097043249  ZipEntry_get_RequiresZip64_m1607329614 (ZipEntry_t2226789352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Boolean> Ionic.Zip.ZipEntry::get_OutputUsedZip64()
extern "C"  Nullable_1_t3097043249  ZipEntry_get_OutputUsedZip64_m2225622430 (ZipEntry_t2226789352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 Ionic.Zip.ZipEntry::get_BitField()
extern "C"  int16_t ZipEntry_get_BitField_m3797114161 (ZipEntry_t2226789352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Ionic.Zip.CompressionMethod Ionic.Zip.ZipEntry::get_CompressionMethod()
extern "C"  int32_t ZipEntry_get_CompressionMethod_m3166524104 (ZipEntry_t2226789352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipEntry::set_CompressionMethod(Ionic.Zip.CompressionMethod)
extern "C"  void ZipEntry_set_CompressionMethod_m887668171 (ZipEntry_t2226789352 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Ionic.Zlib.CompressionLevel Ionic.Zip.ZipEntry::get_CompressionLevel()
extern "C"  int32_t ZipEntry_get_CompressionLevel_m341322200 (ZipEntry_t2226789352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipEntry::set_CompressionLevel(Ionic.Zlib.CompressionLevel)
extern "C"  void ZipEntry_set_CompressionLevel_m3833094671 (ZipEntry_t2226789352 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Ionic.Zip.ZipEntry::get_CompressedSize()
extern "C"  int64_t ZipEntry_get_CompressedSize_m3773445229 (ZipEntry_t2226789352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Ionic.Zip.ZipEntry::get_UncompressedSize()
extern "C"  int64_t ZipEntry_get_UncompressedSize_m1618994822 (ZipEntry_t2226789352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double Ionic.Zip.ZipEntry::get_CompressionRatio()
extern "C"  double ZipEntry_get_CompressionRatio_m3227529252 (ZipEntry_t2226789352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Ionic.Zip.ZipEntry::get_Crc()
extern "C"  int32_t ZipEntry_get_Crc_m3927314220 (ZipEntry_t2226789352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Ionic.Zip.ZipEntry::get_IsDirectory()
extern "C"  bool ZipEntry_get_IsDirectory_m774603285 (ZipEntry_t2226789352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Ionic.Zip.ZipEntry::get_UsesEncryption()
extern "C"  bool ZipEntry_get_UsesEncryption_m873874079 (ZipEntry_t2226789352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Ionic.Zip.EncryptionAlgorithm Ionic.Zip.ZipEntry::get_Encryption()
extern "C"  int32_t ZipEntry_get_Encryption_m2829848063 (ZipEntry_t2226789352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipEntry::set_Encryption(Ionic.Zip.EncryptionAlgorithm)
extern "C"  void ZipEntry_set_Encryption_m232471116 (ZipEntry_t2226789352 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipEntry::set_Password(System.String)
extern "C"  void ZipEntry_set_Password_m3016414743 (ZipEntry_t2226789352 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Ionic.Zip.ZipEntry::get_Password()
extern "C"  String_t* ZipEntry_get_Password_m4001753274 (ZipEntry_t2226789352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Ionic.Zip.ZipEntry::get_IsChanged()
extern "C"  bool ZipEntry_get_IsChanged_m1399660124 (ZipEntry_t2226789352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Ionic.Zip.ExtractExistingFileAction Ionic.Zip.ZipEntry::get_ExtractExistingFile()
extern "C"  int32_t ZipEntry_get_ExtractExistingFile_m1692755040 (ZipEntry_t2226789352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipEntry::set_ExtractExistingFile(Ionic.Zip.ExtractExistingFileAction)
extern "C"  void ZipEntry_set_ExtractExistingFile_m2783457907 (ZipEntry_t2226789352 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Ionic.Zip.ZipErrorAction Ionic.Zip.ZipEntry::get_ZipErrorAction()
extern "C"  int32_t ZipEntry_get_ZipErrorAction_m2962438496 (ZipEntry_t2226789352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipEntry::set_ZipErrorAction(Ionic.Zip.ZipErrorAction)
extern "C"  void ZipEntry_set_ZipErrorAction_m1607821847 (ZipEntry_t2226789352 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Ionic.Zip.ZipEntry::get_IncludedInMostRecentSave()
extern "C"  bool ZipEntry_get_IncludedInMostRecentSave_m1332978668 (ZipEntry_t2226789352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Ionic.Zip.SetCompressionCallback Ionic.Zip.ZipEntry::get_SetCompression()
extern "C"  SetCompressionCallback_t2458683936 * ZipEntry_get_SetCompression_m1722518715 (ZipEntry_t2226789352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipEntry::set_SetCompression(Ionic.Zip.SetCompressionCallback)
extern "C"  void ZipEntry_set_SetCompression_m4217288306 (ZipEntry_t2226789352 * __this, SetCompressionCallback_t2458683936 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Ionic.Zip.ZipEntry::get_UseUnicodeAsNecessary()
extern "C"  bool ZipEntry_get_UseUnicodeAsNecessary_m140194169 (ZipEntry_t2226789352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipEntry::set_UseUnicodeAsNecessary(System.Boolean)
extern "C"  void ZipEntry_set_UseUnicodeAsNecessary_m359929200 (ZipEntry_t2226789352 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding Ionic.Zip.ZipEntry::get_ProvisionalAlternateEncoding()
extern "C"  Encoding_t180559927 * ZipEntry_get_ProvisionalAlternateEncoding_m452488977 (ZipEntry_t2226789352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipEntry::set_ProvisionalAlternateEncoding(System.Text.Encoding)
extern "C"  void ZipEntry_set_ProvisionalAlternateEncoding_m2430748488 (ZipEntry_t2226789352 * __this, Encoding_t180559927 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding Ionic.Zip.ZipEntry::get_AlternateEncoding()
extern "C"  Encoding_t180559927 * ZipEntry_get_AlternateEncoding_m2833323083 (ZipEntry_t2226789352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipEntry::set_AlternateEncoding(System.Text.Encoding)
extern "C"  void ZipEntry_set_AlternateEncoding_m4230288554 (ZipEntry_t2226789352 * __this, Encoding_t180559927 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Ionic.Zip.ZipOption Ionic.Zip.ZipEntry::get_AlternateEncodingUsage()
extern "C"  int32_t ZipEntry_get_AlternateEncodingUsage_m3630614246 (ZipEntry_t2226789352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipEntry::set_AlternateEncodingUsage(Ionic.Zip.ZipOption)
extern "C"  void ZipEntry_set_AlternateEncodingUsage_m607156337 (ZipEntry_t2226789352 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Ionic.Zip.ZipEntry::NameInArchive(System.String,System.String)
extern "C"  String_t* ZipEntry_NameInArchive_m1618076576 (Il2CppObject * __this /* static, unused */, String_t* ___filename, String_t* ___directoryPathInArchive, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Ionic.Zip.ZipEntry Ionic.Zip.ZipEntry::CreateFromNothing(System.String)
extern "C"  ZipEntry_t2226789352 * ZipEntry_CreateFromNothing_m999361183 (Il2CppObject * __this /* static, unused */, String_t* ___nameInArchive, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Ionic.Zip.ZipEntry Ionic.Zip.ZipEntry::CreateFromFile(System.String,System.String)
extern "C"  ZipEntry_t2226789352 * ZipEntry_CreateFromFile_m3208038102 (Il2CppObject * __this /* static, unused */, String_t* ___filename, String_t* ___nameInArchive, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Ionic.Zip.ZipEntry Ionic.Zip.ZipEntry::CreateForStream(System.String,System.IO.Stream)
extern "C"  ZipEntry_t2226789352 * ZipEntry_CreateForStream_m2896295684 (Il2CppObject * __this /* static, unused */, String_t* ___entryName, Stream_t219029575 * ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Ionic.Zip.ZipEntry Ionic.Zip.ZipEntry::CreateForWriter(System.String,Ionic.Zip.WriteDelegate)
extern "C"  ZipEntry_t2226789352 * ZipEntry_CreateForWriter_m1108306983 (Il2CppObject * __this /* static, unused */, String_t* ___entryName, WriteDelegate_t2087363675 * ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Ionic.Zip.ZipEntry Ionic.Zip.ZipEntry::CreateForJitStreamProvider(System.String,Ionic.Zip.OpenDelegate,Ionic.Zip.CloseDelegate)
extern "C"  ZipEntry_t2226789352 * ZipEntry_CreateForJitStreamProvider_m1432012195 (Il2CppObject * __this /* static, unused */, String_t* ___nameInArchive, OpenDelegate_t1492450310 * ___opener, CloseDelegate_t890700148 * ___closer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Ionic.Zip.ZipEntry Ionic.Zip.ZipEntry::CreateForZipOutputStream(System.String)
extern "C"  ZipEntry_t2226789352 * ZipEntry_CreateForZipOutputStream_m917961639 (Il2CppObject * __this /* static, unused */, String_t* ___nameInArchive, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Ionic.Zip.ZipEntry Ionic.Zip.ZipEntry::Create(System.String,Ionic.Zip.ZipEntrySource,System.Object,System.Object)
extern "C"  ZipEntry_t2226789352 * ZipEntry_Create_m1663384861 (Il2CppObject * __this /* static, unused */, String_t* ___nameInArchive, int32_t ___source, Il2CppObject * ___arg1, Il2CppObject * ___arg2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipEntry::MarkAsDirectory()
extern "C"  void ZipEntry_MarkAsDirectory_m177797021 (ZipEntry_t2226789352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Ionic.Zip.ZipEntry::get_IsText()
extern "C"  bool ZipEntry_get_IsText_m3800570023 (ZipEntry_t2226789352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipEntry::set_IsText(System.Boolean)
extern "C"  void ZipEntry_set_IsText_m902999966 (ZipEntry_t2226789352 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Ionic.Zip.ZipEntry::ToString()
extern "C"  String_t* ZipEntry_ToString_m2295119426 (ZipEntry_t2226789352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Ionic.Zip.ZipEntry::get_ArchiveStream()
extern "C"  Stream_t219029575 * ZipEntry_get_ArchiveStream_m2901186292 (ZipEntry_t2226789352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipEntry::SetFdpLoh()
extern "C"  void ZipEntry_SetFdpLoh_m2287504516 (ZipEntry_t2226789352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Ionic.Zip.ZipEntry::GetLengthOfCryptoHeaderBytes(Ionic.Zip.EncryptionAlgorithm)
extern "C"  int32_t ZipEntry_GetLengthOfCryptoHeaderBytes_m2164934260 (Il2CppObject * __this /* static, unused */, int32_t ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Ionic.Zip.ZipEntry::get_FileDataPosition()
extern "C"  int64_t ZipEntry_get_FileDataPosition_m2177712666 (ZipEntry_t2226789352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Ionic.Zip.ZipEntry::get_LengthOfHeader()
extern "C"  int32_t ZipEntry_get_LengthOfHeader_m2171123988 (ZipEntry_t2226789352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
