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

// System.IO.Stream
struct Stream_t219029575;
// System.Collections.Generic.ICollection`1<Ionic.Zip.ZipEntry>
struct ICollection_1_t2692620738;
// System.String
struct String_t;
// Ionic.Zip.ZipContainer
struct ZipContainer_t2405009527;
// System.Text.Encoding
struct Encoding_t180559927;
// System.Byte[]
struct ByteU5BU5D_t58506160;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream219029575.h"
#include "AssemblyU2DCSharp_Ionic_Zip_Zip64Option669838539.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_Ionic_Zip_ZipContainer2405009527.h"

// System.Boolean Ionic.Zip.ZipOutput::WriteCentralDirectoryStructure(System.IO.Stream,System.Collections.Generic.ICollection`1<Ionic.Zip.ZipEntry>,System.UInt32,Ionic.Zip.Zip64Option,System.String,Ionic.Zip.ZipContainer)
extern "C"  bool ZipOutput_WriteCentralDirectoryStructure_m2528035912 (Il2CppObject * __this /* static, unused */, Stream_t219029575 * ___s, Il2CppObject* ___entries, uint32_t ___numSegments, int32_t ___zip64, String_t* ___comment, ZipContainer_t2405009527 * ___container, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding Ionic.Zip.ZipOutput::GetEncoding(Ionic.Zip.ZipContainer,System.String)
extern "C"  Encoding_t180559927 * ZipOutput_GetEncoding_m1089621268 (Il2CppObject * __this /* static, unused */, ZipContainer_t2405009527 * ___container, String_t* ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Ionic.Zip.ZipOutput::GenCentralDirectoryFooter(System.Int64,System.Int64,Ionic.Zip.Zip64Option,System.Int32,System.String,Ionic.Zip.ZipContainer)
extern "C"  ByteU5BU5D_t58506160* ZipOutput_GenCentralDirectoryFooter_m2533925060 (Il2CppObject * __this /* static, unused */, int64_t ___StartOfCentralDirectory, int64_t ___EndOfCentralDirectory, int32_t ___zip64, int32_t ___entryCount, String_t* ___comment, ZipContainer_t2405009527 * ___container, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Ionic.Zip.ZipOutput::GenZip64EndOfCentralDirectory(System.Int64,System.Int64,System.Int32,System.UInt32)
extern "C"  ByteU5BU5D_t58506160* ZipOutput_GenZip64EndOfCentralDirectory_m3246707594 (Il2CppObject * __this /* static, unused */, int64_t ___StartOfCentralDirectory, int64_t ___EndOfCentralDirectory, int32_t ___entryCount, uint32_t ___numSegments, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Ionic.Zip.ZipOutput::CountEntries(System.Collections.Generic.ICollection`1<Ionic.Zip.ZipEntry>)
extern "C"  int32_t ZipOutput_CountEntries_m3063799028 (Il2CppObject * __this /* static, unused */, Il2CppObject* ____entries, const MethodInfo* method) IL2CPP_METHOD_ATTR;
