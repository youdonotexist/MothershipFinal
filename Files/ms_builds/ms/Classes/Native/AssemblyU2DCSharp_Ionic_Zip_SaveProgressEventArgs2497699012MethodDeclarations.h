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

// Ionic.Zip.SaveProgressEventArgs
struct SaveProgressEventArgs_t2497699012;
// System.String
struct String_t;
// Ionic.Zip.ZipEntry
struct ZipEntry_t2226789352;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_Ionic_Zip_ZipEntry2226789352.h"
#include "AssemblyU2DCSharp_Ionic_Zip_ZipProgressEventType713156157.h"

// System.Void Ionic.Zip.SaveProgressEventArgs::.ctor(System.String,System.Boolean,System.Int32,System.Int32,Ionic.Zip.ZipEntry)
extern "C"  void SaveProgressEventArgs__ctor_m2636453066 (SaveProgressEventArgs_t2497699012 * __this, String_t* ___archiveName, bool ___before, int32_t ___entriesTotal, int32_t ___entriesSaved, ZipEntry_t2226789352 * ___entry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.SaveProgressEventArgs::.ctor()
extern "C"  void SaveProgressEventArgs__ctor_m3544074807 (SaveProgressEventArgs_t2497699012 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.SaveProgressEventArgs::.ctor(System.String,Ionic.Zip.ZipProgressEventType)
extern "C"  void SaveProgressEventArgs__ctor_m2323973532 (SaveProgressEventArgs_t2497699012 * __this, String_t* ___archiveName, int32_t ___flavor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Ionic.Zip.SaveProgressEventArgs Ionic.Zip.SaveProgressEventArgs::ByteUpdate(System.String,Ionic.Zip.ZipEntry,System.Int64,System.Int64)
extern "C"  SaveProgressEventArgs_t2497699012 * SaveProgressEventArgs_ByteUpdate_m2372253881 (Il2CppObject * __this /* static, unused */, String_t* ___archiveName, ZipEntry_t2226789352 * ___entry, int64_t ___bytesXferred, int64_t ___totalBytes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Ionic.Zip.SaveProgressEventArgs Ionic.Zip.SaveProgressEventArgs::Started(System.String)
extern "C"  SaveProgressEventArgs_t2497699012 * SaveProgressEventArgs_Started_m1463567981 (Il2CppObject * __this /* static, unused */, String_t* ___archiveName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Ionic.Zip.SaveProgressEventArgs Ionic.Zip.SaveProgressEventArgs::Completed(System.String)
extern "C"  SaveProgressEventArgs_t2497699012 * SaveProgressEventArgs_Completed_m86465571 (Il2CppObject * __this /* static, unused */, String_t* ___archiveName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Ionic.Zip.SaveProgressEventArgs::get_EntriesSaved()
extern "C"  int32_t SaveProgressEventArgs_get_EntriesSaved_m425901951 (SaveProgressEventArgs_t2497699012 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
