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
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2995724695;
// System.IO.FileInfo[]
struct FileInfoU5BU5D_t433509260;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2995724695.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCont986364934.h"

// System.Void System.IO.DirectoryInfo::.ctor(System.String)
extern "C"  void DirectoryInfo__ctor_m4029233824 (DirectoryInfo_t3421965634 * __this, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.DirectoryInfo::.ctor(System.String,System.Boolean)
extern "C"  void DirectoryInfo__ctor_m2875622621 (DirectoryInfo_t3421965634 * __this, String_t* ___path, bool ___simpleOriginalPath, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.DirectoryInfo::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void DirectoryInfo__ctor_m944219619 (DirectoryInfo_t3421965634 * __this, SerializationInfo_t2995724695 * ___info, StreamingContext_t986364934  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.DirectoryInfo::Initialize()
extern "C"  void DirectoryInfo_Initialize_m287338546 (DirectoryInfo_t3421965634 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.DirectoryInfo::get_Exists()
extern "C"  bool DirectoryInfo_get_Exists_m1761829637 (DirectoryInfo_t3421965634 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.DirectoryInfo::get_Name()
extern "C"  String_t* DirectoryInfo_get_Name_m3299775219 (DirectoryInfo_t3421965634 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.DirectoryInfo System.IO.DirectoryInfo::get_Parent()
extern "C"  DirectoryInfo_t3421965634 * DirectoryInfo_get_Parent_m1129672180 (DirectoryInfo_t3421965634 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.DirectoryInfo::Create()
extern "C"  void DirectoryInfo_Create_m153588510 (DirectoryInfo_t3421965634 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.FileInfo[] System.IO.DirectoryInfo::GetFiles()
extern "C"  FileInfoU5BU5D_t433509260* DirectoryInfo_GetFiles_m3669397613 (DirectoryInfo_t3421965634 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.FileInfo[] System.IO.DirectoryInfo::GetFiles(System.String)
extern "C"  FileInfoU5BU5D_t433509260* DirectoryInfo_GetFiles_m2151933877 (DirectoryInfo_t3421965634 * __this, String_t* ___searchPattern, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.DirectoryInfo::ToString()
extern "C"  String_t* DirectoryInfo_ToString_m2661500299 (DirectoryInfo_t3421965634 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
