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

// Ionic.Zip.ComHelper
struct ComHelper_t1765073510;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"

// System.Void Ionic.Zip.ComHelper::.ctor()
extern "C"  void ComHelper__ctor_m315982933 (ComHelper_t1765073510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Ionic.Zip.ComHelper::IsZipFile(System.String)
extern "C"  bool ComHelper_IsZipFile_m1629907752 (ComHelper_t1765073510 * __this, String_t* ___filename, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Ionic.Zip.ComHelper::IsZipFileWithExtract(System.String)
extern "C"  bool ComHelper_IsZipFileWithExtract_m3823723423 (ComHelper_t1765073510 * __this, String_t* ___filename, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Ionic.Zip.ComHelper::CheckZip(System.String)
extern "C"  bool ComHelper_CheckZip_m2788247214 (ComHelper_t1765073510 * __this, String_t* ___filename, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Ionic.Zip.ComHelper::CheckZipPassword(System.String,System.String)
extern "C"  bool ComHelper_CheckZipPassword_m2694940815 (ComHelper_t1765073510 * __this, String_t* ___filename, String_t* ___password, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.ComHelper::FixZipDirectory(System.String)
extern "C"  void ComHelper_FixZipDirectory_m3046291406 (ComHelper_t1765073510 * __this, String_t* ___filename, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Ionic.Zip.ComHelper::GetZipLibraryVersion()
extern "C"  String_t* ComHelper_GetZipLibraryVersion_m4292531892 (ComHelper_t1765073510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
