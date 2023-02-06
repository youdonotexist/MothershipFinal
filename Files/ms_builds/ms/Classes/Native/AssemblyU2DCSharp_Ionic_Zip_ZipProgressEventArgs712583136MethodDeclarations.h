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

// Ionic.Zip.ZipProgressEventArgs
struct ZipProgressEventArgs_t712583136;
// System.String
struct String_t;
// Ionic.Zip.ZipEntry
struct ZipEntry_t2226789352;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_Ionic_Zip_ZipProgressEventType713156157.h"
#include "AssemblyU2DCSharp_Ionic_Zip_ZipEntry2226789352.h"

// System.Void Ionic.Zip.ZipProgressEventArgs::.ctor()
extern "C"  void ZipProgressEventArgs__ctor_m569688761 (ZipProgressEventArgs_t712583136 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipProgressEventArgs::.ctor(System.String,Ionic.Zip.ZipProgressEventType)
extern "C"  void ZipProgressEventArgs__ctor_m17449758 (ZipProgressEventArgs_t712583136 * __this, String_t* ___archiveName, int32_t ___flavor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Ionic.Zip.ZipProgressEventArgs::get_EntriesTotal()
extern "C"  int32_t ZipProgressEventArgs_get_EntriesTotal_m1185916566 (ZipProgressEventArgs_t712583136 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipProgressEventArgs::set_EntriesTotal(System.Int32)
extern "C"  void ZipProgressEventArgs_set_EntriesTotal_m1067800781 (ZipProgressEventArgs_t712583136 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Ionic.Zip.ZipEntry Ionic.Zip.ZipProgressEventArgs::get_CurrentEntry()
extern "C"  ZipEntry_t2226789352 * ZipProgressEventArgs_get_CurrentEntry_m3039801344 (ZipProgressEventArgs_t712583136 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipProgressEventArgs::set_CurrentEntry(Ionic.Zip.ZipEntry)
extern "C"  void ZipProgressEventArgs_set_CurrentEntry_m1767914423 (ZipProgressEventArgs_t712583136 * __this, ZipEntry_t2226789352 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Ionic.Zip.ZipProgressEventArgs::get_Cancel()
extern "C"  bool ZipProgressEventArgs_get_Cancel_m3201299298 (ZipProgressEventArgs_t712583136 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipProgressEventArgs::set_Cancel(System.Boolean)
extern "C"  void ZipProgressEventArgs_set_Cancel_m3428816153 (ZipProgressEventArgs_t712583136 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Ionic.Zip.ZipProgressEventType Ionic.Zip.ZipProgressEventArgs::get_EventType()
extern "C"  int32_t ZipProgressEventArgs_get_EventType_m3072941636 (ZipProgressEventArgs_t712583136 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipProgressEventArgs::set_EventType(Ionic.Zip.ZipProgressEventType)
extern "C"  void ZipProgressEventArgs_set_EventType_m130224143 (ZipProgressEventArgs_t712583136 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Ionic.Zip.ZipProgressEventArgs::get_ArchiveName()
extern "C"  String_t* ZipProgressEventArgs_get_ArchiveName_m3753495192 (ZipProgressEventArgs_t712583136 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipProgressEventArgs::set_ArchiveName(System.String)
extern "C"  void ZipProgressEventArgs_set_ArchiveName_m576489467 (ZipProgressEventArgs_t712583136 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Ionic.Zip.ZipProgressEventArgs::get_BytesTransferred()
extern "C"  int64_t ZipProgressEventArgs_get_BytesTransferred_m2721227742 (ZipProgressEventArgs_t712583136 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipProgressEventArgs::set_BytesTransferred(System.Int64)
extern "C"  void ZipProgressEventArgs_set_BytesTransferred_m2263395157 (ZipProgressEventArgs_t712583136 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Ionic.Zip.ZipProgressEventArgs::get_TotalBytesToTransfer()
extern "C"  int64_t ZipProgressEventArgs_get_TotalBytesToTransfer_m1938225520 (ZipProgressEventArgs_t712583136 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ZipProgressEventArgs::set_TotalBytesToTransfer(System.Int64)
extern "C"  void ZipProgressEventArgs_set_TotalBytesToTransfer_m3186285415 (ZipProgressEventArgs_t712583136 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
