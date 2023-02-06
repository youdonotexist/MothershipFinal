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

// Ionic.Zip.AddProgressEventArgs
struct AddProgressEventArgs_t1350612576;
// System.String
struct String_t;
// Ionic.Zip.ZipEntry
struct ZipEntry_t2226789352;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_Ionic_Zip_ZipProgressEventType713156157.h"
#include "AssemblyU2DCSharp_Ionic_Zip_ZipEntry2226789352.h"

// System.Void Ionic.Zip.AddProgressEventArgs::.ctor()
extern "C"  void AddProgressEventArgs__ctor_m3041231929 (AddProgressEventArgs_t1350612576 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.AddProgressEventArgs::.ctor(System.String,Ionic.Zip.ZipProgressEventType)
extern "C"  void AddProgressEventArgs__ctor_m1600046238 (AddProgressEventArgs_t1350612576 * __this, String_t* ___archiveName, int32_t ___flavor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Ionic.Zip.AddProgressEventArgs Ionic.Zip.AddProgressEventArgs::AfterEntry(System.String,Ionic.Zip.ZipEntry,System.Int32)
extern "C"  AddProgressEventArgs_t1350612576 * AddProgressEventArgs_AfterEntry_m596097793 (Il2CppObject * __this /* static, unused */, String_t* ___archiveName, ZipEntry_t2226789352 * ___entry, int32_t ___entriesTotal, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Ionic.Zip.AddProgressEventArgs Ionic.Zip.AddProgressEventArgs::Started(System.String)
extern "C"  AddProgressEventArgs_t1350612576 * AddProgressEventArgs_Started_m3416802373 (Il2CppObject * __this /* static, unused */, String_t* ___archiveName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Ionic.Zip.AddProgressEventArgs Ionic.Zip.AddProgressEventArgs::Completed(System.String)
extern "C"  AddProgressEventArgs_t1350612576 * AddProgressEventArgs_Completed_m244007931 (Il2CppObject * __this /* static, unused */, String_t* ___archiveName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
