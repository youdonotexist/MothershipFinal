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

// Ionic.Zip.ZipContainer
struct ZipContainer_t2405009527;
// System.Object
struct Il2CppObject;
// Ionic.Zip.ZipFile
struct ZipFile_t3698100756;
// Ionic.Zip.ZipOutputStream
struct ZipOutputStream_t544682873;
// System.String
struct String_t;
// Ionic.Zlib.ParallelDeflateOutputStream
struct ParallelDeflateOutputStream_t1234751346;
// System.Text.Encoding
struct Encoding_t180559927;
// System.IO.Stream
struct Stream_t219029575;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "AssemblyU2DCSharp_Ionic_Zip_Zip64Option669838539.h"
#include "Ionic_Zlib_Ionic_Zlib_ParallelDeflateOutputStream1234751346.h"
#include "Ionic_Zlib_Ionic_Zlib_CompressionStrategy2328611910.h"
#include "AssemblyU2DCSharp_Ionic_Zip_ZipOption4149672141.h"

// System.Void Ionic.Zip.ZipContainer::.ctor(System.Object)
extern "C"  void ZipContainer__ctor_m2692524498 (ZipContainer_t2405009527 * __this, Il2CppObject * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Ionic.Zip.ZipFile Ionic.Zip.ZipContainer::get_ZipFile()
extern "C"  ZipFile_t3698100756 * ZipContainer_get_ZipFile_m3596660485 (ZipContainer_t2405009527 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Ionic.Zip.ZipOutputStream Ionic.Zip.ZipContainer::get_ZipOutputStream()
extern "C"  ZipOutputStream_t544682873 * ZipContainer_get_ZipOutputStream_m3204911311 (ZipContainer_t2405009527 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Ionic.Zip.ZipContainer::get_Name()
extern "C"  String_t* ZipContainer_get_Name_m3874977721 (ZipContainer_t2405009527 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Ionic.Zip.ZipContainer::get_Password()
extern "C"  String_t* ZipContainer_get_Password_m4058166601 (ZipContainer_t2405009527 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Ionic.Zip.Zip64Option Ionic.Zip.ZipContainer::get_Zip64()
extern "C"  int32_t ZipContainer_get_Zip64_m2167677662 (ZipContainer_t2405009527 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Ionic.Zip.ZipContainer::get_BufferSize()
extern "C"  int32_t ZipContainer_get_BufferSize_m2900550458 (ZipContainer_t2405009527 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Ionic.Zlib.ParallelDeflateOutputStream Ionic.Zip.ZipContainer::get_ParallelDeflater()
extern "C"  ParallelDeflateOutputStream_t1234751346 * ZipContainer_get_ParallelDeflater_m4034845288 (ZipContainer_t2405009527 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipContainer::set_ParallelDeflater(Ionic.Zlib.ParallelDeflateOutputStream)
extern "C"  void ZipContainer_set_ParallelDeflater_m4192025375 (ZipContainer_t2405009527 * __this, ParallelDeflateOutputStream_t1234751346 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Ionic.Zip.ZipContainer::get_ParallelDeflateThreshold()
extern "C"  int64_t ZipContainer_get_ParallelDeflateThreshold_m100652225 (ZipContainer_t2405009527 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Ionic.Zip.ZipContainer::get_ParallelDeflateMaxBufferPairs()
extern "C"  int32_t ZipContainer_get_ParallelDeflateMaxBufferPairs_m1690136418 (ZipContainer_t2405009527 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Ionic.Zip.ZipContainer::get_CodecBufferSize()
extern "C"  int32_t ZipContainer_get_CodecBufferSize_m3743748416 (ZipContainer_t2405009527 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Ionic.Zlib.CompressionStrategy Ionic.Zip.ZipContainer::get_Strategy()
extern "C"  int32_t ZipContainer_get_Strategy_m1448523129 (ZipContainer_t2405009527 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Ionic.Zip.Zip64Option Ionic.Zip.ZipContainer::get_UseZip64WhenSaving()
extern "C"  int32_t ZipContainer_get_UseZip64WhenSaving_m1804379151 (ZipContainer_t2405009527 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding Ionic.Zip.ZipContainer::get_AlternateEncoding()
extern "C"  Encoding_t180559927 * ZipContainer_get_AlternateEncoding_m603398940 (ZipContainer_t2405009527 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding Ionic.Zip.ZipContainer::get_DefaultEncoding()
extern "C"  Encoding_t180559927 * ZipContainer_get_DefaultEncoding_m3188780963 (ZipContainer_t2405009527 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Ionic.Zip.ZipOption Ionic.Zip.ZipContainer::get_AlternateEncodingUsage()
extern "C"  int32_t ZipContainer_get_AlternateEncodingUsage_m2775174069 (ZipContainer_t2405009527 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Ionic.Zip.ZipContainer::get_ReadStream()
extern "C"  Stream_t219029575 * ZipContainer_get_ReadStream_m881504917 (ZipContainer_t2405009527 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
