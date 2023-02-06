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

// Ionic.Zip.ExtractProgressEventArgs
struct ExtractProgressEventArgs_t76578432;
// System.String
struct String_t;
// Ionic.Zip.ZipEntry
struct ZipEntry_t2226789352;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_Ionic_Zip_ZipEntry2226789352.h"
#include "AssemblyU2DCSharp_Ionic_Zip_ZipProgressEventType713156157.h"

// System.Void Ionic.Zip.ExtractProgressEventArgs::.ctor(System.String,System.Boolean,System.Int32,System.Int32,Ionic.Zip.ZipEntry,System.String)
extern "C"  void ExtractProgressEventArgs__ctor_m3168179940 (ExtractProgressEventArgs_t76578432 * __this, String_t* ___archiveName, bool ___before, int32_t ___entriesTotal, int32_t ___entriesExtracted, ZipEntry_t2226789352 * ___entry, String_t* ___extractLocation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ExtractProgressEventArgs::.ctor(System.String,Ionic.Zip.ZipProgressEventType)
extern "C"  void ExtractProgressEventArgs__ctor_m855767294 (ExtractProgressEventArgs_t76578432 * __this, String_t* ___archiveName, int32_t ___flavor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ExtractProgressEventArgs::.ctor()
extern "C"  void ExtractProgressEventArgs__ctor_m2700462233 (ExtractProgressEventArgs_t76578432 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Ionic.Zip.ExtractProgressEventArgs Ionic.Zip.ExtractProgressEventArgs::BeforeExtractEntry(System.String,Ionic.Zip.ZipEntry,System.String)
extern "C"  ExtractProgressEventArgs_t76578432 * ExtractProgressEventArgs_BeforeExtractEntry_m3592023020 (Il2CppObject * __this /* static, unused */, String_t* ___archiveName, ZipEntry_t2226789352 * ___entry, String_t* ___extractLocation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Ionic.Zip.ExtractProgressEventArgs Ionic.Zip.ExtractProgressEventArgs::ExtractExisting(System.String,Ionic.Zip.ZipEntry,System.String)
extern "C"  ExtractProgressEventArgs_t76578432 * ExtractProgressEventArgs_ExtractExisting_m3941197342 (Il2CppObject * __this /* static, unused */, String_t* ___archiveName, ZipEntry_t2226789352 * ___entry, String_t* ___extractLocation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Ionic.Zip.ExtractProgressEventArgs Ionic.Zip.ExtractProgressEventArgs::AfterExtractEntry(System.String,Ionic.Zip.ZipEntry,System.String)
extern "C"  ExtractProgressEventArgs_t76578432 * ExtractProgressEventArgs_AfterExtractEntry_m3200566431 (Il2CppObject * __this /* static, unused */, String_t* ___archiveName, ZipEntry_t2226789352 * ___entry, String_t* ___extractLocation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Ionic.Zip.ExtractProgressEventArgs Ionic.Zip.ExtractProgressEventArgs::ExtractAllStarted(System.String,System.String)
extern "C"  ExtractProgressEventArgs_t76578432 * ExtractProgressEventArgs_ExtractAllStarted_m1184183041 (Il2CppObject * __this /* static, unused */, String_t* ___archiveName, String_t* ___extractLocation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Ionic.Zip.ExtractProgressEventArgs Ionic.Zip.ExtractProgressEventArgs::ExtractAllCompleted(System.String,System.String)
extern "C"  ExtractProgressEventArgs_t76578432 * ExtractProgressEventArgs_ExtractAllCompleted_m2643438647 (Il2CppObject * __this /* static, unused */, String_t* ___archiveName, String_t* ___extractLocation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Ionic.Zip.ExtractProgressEventArgs Ionic.Zip.ExtractProgressEventArgs::ByteUpdate(System.String,Ionic.Zip.ZipEntry,System.Int64,System.Int64)
extern "C"  ExtractProgressEventArgs_t76578432 * ExtractProgressEventArgs_ByteUpdate_m1486642833 (Il2CppObject * __this /* static, unused */, String_t* ___archiveName, ZipEntry_t2226789352 * ___entry, int64_t ___bytesWritten, int64_t ___totalBytes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Ionic.Zip.ExtractProgressEventArgs::get_EntriesExtracted()
extern "C"  int32_t ExtractProgressEventArgs_get_EntriesExtracted_m544511954 (ExtractProgressEventArgs_t76578432 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Ionic.Zip.ExtractProgressEventArgs::get_ExtractLocation()
extern "C"  String_t* ExtractProgressEventArgs_get_ExtractLocation_m1376204705 (ExtractProgressEventArgs_t76578432 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
