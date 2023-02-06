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

// System.IO.DirectoryInfo
struct DirectoryInfo_t3421965634;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t2956870243;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_DateTime339033936.h"
#include "mscorlib_System_IO_FileAttributes2606923962.h"

// System.IO.DirectoryInfo System.IO.Directory::CreateDirectory(System.String)
extern "C"  DirectoryInfo_t3421965634 * Directory_CreateDirectory_m677877474 (Il2CppObject * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.DirectoryInfo System.IO.Directory::CreateDirectoriesInternal(System.String)
extern "C"  DirectoryInfo_t3421965634 * Directory_CreateDirectoriesInternal_m1545778887 (Il2CppObject * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Directory::Delete(System.String)
extern "C"  void Directory_Delete_m1796764451 (Il2CppObject * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Directory::RecursiveDelete(System.String)
extern "C"  void Directory_RecursiveDelete_m184278935 (Il2CppObject * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Directory::Delete(System.String,System.Boolean)
extern "C"  void Directory_Delete_m1791284730 (Il2CppObject * __this /* static, unused */, String_t* ___path, bool ___recursive, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.Directory::Exists(System.String)
extern "C"  bool Directory_Exists_m4117375188 (Il2CppObject * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.Directory::GetCurrentDirectory()
extern "C"  String_t* Directory_GetCurrentDirectory_m3403080603 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.IO.Directory::GetDirectories(System.String)
extern "C"  StringU5BU5D_t2956870243* Directory_GetDirectories_m888334714 (Il2CppObject * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.IO.Directory::GetDirectories(System.String,System.String)
extern "C"  StringU5BU5D_t2956870243* Directory_GetDirectories_m1009841206 (Il2CppObject * __this /* static, unused */, String_t* ___path, String_t* ___searchPattern, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.IO.Directory::GetFiles(System.String)
extern "C"  StringU5BU5D_t2956870243* Directory_GetFiles_m3665304654 (Il2CppObject * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.IO.Directory::GetFiles(System.String,System.String)
extern "C"  StringU5BU5D_t2956870243* Directory_GetFiles_m2573902858 (Il2CppObject * __this /* static, unused */, String_t* ___path, String_t* ___searchPattern, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Directory::SetCreationTime(System.String,System.DateTime)
extern "C"  void Directory_SetCreationTime_m3302862104 (Il2CppObject * __this /* static, unused */, String_t* ___path, DateTime_t339033936  ___creationTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Directory::SetCreationTimeUtc(System.String,System.DateTime)
extern "C"  void Directory_SetCreationTimeUtc_m2967699434 (Il2CppObject * __this /* static, unused */, String_t* ___path, DateTime_t339033936  ___creationTimeUtc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Directory::SetLastAccessTime(System.String,System.DateTime)
extern "C"  void Directory_SetLastAccessTime_m523898429 (Il2CppObject * __this /* static, unused */, String_t* ___path, DateTime_t339033936  ___lastAccessTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Directory::SetLastAccessTimeUtc(System.String,System.DateTime)
extern "C"  void Directory_SetLastAccessTimeUtc_m355487909 (Il2CppObject * __this /* static, unused */, String_t* ___path, DateTime_t339033936  ___lastAccessTimeUtc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Directory::SetLastWriteTime(System.String,System.DateTime)
extern "C"  void Directory_SetLastWriteTime_m399950412 (Il2CppObject * __this /* static, unused */, String_t* ___path, DateTime_t339033936  ___lastWriteTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Directory::SetLastWriteTimeUtc(System.String,System.DateTime)
extern "C"  void Directory_SetLastWriteTimeUtc_m1491988022 (Il2CppObject * __this /* static, unused */, String_t* ___path, DateTime_t339033936  ___lastWriteTimeUtc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Directory::CheckPathExceptions(System.String)
extern "C"  void Directory_CheckPathExceptions_m3281597667 (Il2CppObject * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.IO.Directory::GetFileSystemEntries(System.String,System.String,System.IO.FileAttributes,System.IO.FileAttributes)
extern "C"  StringU5BU5D_t2956870243* Directory_GetFileSystemEntries_m3873165372 (Il2CppObject * __this /* static, unused */, String_t* ___path, String_t* ___searchPattern, int32_t ___mask, int32_t ___attrs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
