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

// Ionic.Zip.ZipErrorEventArgs
struct ZipErrorEventArgs_t267415751;
// System.String
struct String_t;
// Ionic.Zip.ZipEntry
struct ZipEntry_t2226789352;
// System.Exception
struct Exception_t1967233988;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_Ionic_Zip_ZipEntry2226789352.h"
#include "mscorlib_System_Exception1967233988.h"

// System.Void Ionic.Zip.ZipErrorEventArgs::.ctor()
extern "C"  void ZipErrorEventArgs__ctor_m3362038292 (ZipErrorEventArgs_t267415751 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Ionic.Zip.ZipErrorEventArgs Ionic.Zip.ZipErrorEventArgs::Saving(System.String,Ionic.Zip.ZipEntry,System.Exception)
extern "C"  ZipErrorEventArgs_t267415751 * ZipErrorEventArgs_Saving_m2717772782 (Il2CppObject * __this /* static, unused */, String_t* ___archiveName, ZipEntry_t2226789352 * ___entry, Exception_t1967233988 * ___exception, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception Ionic.Zip.ZipErrorEventArgs::get_Exception()
extern "C"  Exception_t1967233988 * ZipErrorEventArgs_get_Exception_m1551503941 (ZipErrorEventArgs_t267415751 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Ionic.Zip.ZipErrorEventArgs::get_FileName()
extern "C"  String_t* ZipErrorEventArgs_get_FileName_m3159008413 (ZipErrorEventArgs_t267415751 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
