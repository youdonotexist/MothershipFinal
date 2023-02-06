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

// Ionic.Zip.ReadProgressEventArgs
struct ReadProgressEventArgs_t2202163659;
// System.String
struct String_t;
// Ionic.Zip.ZipEntry
struct ZipEntry_t2226789352;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_Ionic_Zip_ZipProgressEventType713156157.h"
#include "AssemblyU2DCSharp_Ionic_Zip_ZipEntry2226789352.h"

// System.Void Ionic.Zip.ReadProgressEventArgs::.ctor()
extern "C"  void ReadProgressEventArgs__ctor_m2103084304 (ReadProgressEventArgs_t2202163659 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ReadProgressEventArgs::.ctor(System.String,Ionic.Zip.ZipProgressEventType)
extern "C"  void ReadProgressEventArgs__ctor_m4176944885 (ReadProgressEventArgs_t2202163659 * __this, String_t* ___archiveName, int32_t ___flavor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Ionic.Zip.ReadProgressEventArgs Ionic.Zip.ReadProgressEventArgs::Before(System.String,System.Int32)
extern "C"  ReadProgressEventArgs_t2202163659 * ReadProgressEventArgs_Before_m398691024 (Il2CppObject * __this /* static, unused */, String_t* ___archiveName, int32_t ___entriesTotal, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Ionic.Zip.ReadProgressEventArgs Ionic.Zip.ReadProgressEventArgs::After(System.String,Ionic.Zip.ZipEntry,System.Int32)
extern "C"  ReadProgressEventArgs_t2202163659 * ReadProgressEventArgs_After_m1246904827 (Il2CppObject * __this /* static, unused */, String_t* ___archiveName, ZipEntry_t2226789352 * ___entry, int32_t ___entriesTotal, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Ionic.Zip.ReadProgressEventArgs Ionic.Zip.ReadProgressEventArgs::Started(System.String)
extern "C"  ReadProgressEventArgs_t2202163659 * ReadProgressEventArgs_Started_m2724043387 (Il2CppObject * __this /* static, unused */, String_t* ___archiveName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Ionic.Zip.ReadProgressEventArgs Ionic.Zip.ReadProgressEventArgs::ByteUpdate(System.String,Ionic.Zip.ZipEntry,System.Int64,System.Int64)
extern "C"  ReadProgressEventArgs_t2202163659 * ReadProgressEventArgs_ByteUpdate_m3533011143 (Il2CppObject * __this /* static, unused */, String_t* ___archiveName, ZipEntry_t2226789352 * ___entry, int64_t ___bytesXferred, int64_t ___totalBytes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Ionic.Zip.ReadProgressEventArgs Ionic.Zip.ReadProgressEventArgs::Completed(System.String)
extern "C"  ReadProgressEventArgs_t2202163659 * ReadProgressEventArgs_Completed_m222553265 (Il2CppObject * __this /* static, unused */, String_t* ___archiveName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
