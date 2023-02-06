﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.IO.FileInfo
struct FileInfo_t1355938065;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2995724695;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2995724695.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCont986364934.h"

// System.Void System.IO.FileInfo::.ctor(System.String)
extern "C"  void FileInfo__ctor_m2163658659 (FileInfo_t1355938065 * __this, String_t* ___fileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileInfo::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void FileInfo__ctor_m2147459712 (FileInfo_t1355938065 * __this, SerializationInfo_t2995724695 * ___info, StreamingContext_t986364934  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileInfo::InternalRefresh()
extern "C"  void FileInfo_InternalRefresh_m3736798651 (FileInfo_t1355938065 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.FileInfo::get_Exists()
extern "C"  bool FileInfo_get_Exists_m54740940 (FileInfo_t1355938065 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.FileInfo::get_Name()
extern "C"  String_t* FileInfo_get_Name_m3553897244 (FileInfo_t1355938065 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.FileInfo::get_Length()
extern "C"  int64_t FileInfo_get_Length_m1498099825 (FileInfo_t1355938065 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.FileInfo::ToString()
extern "C"  String_t* FileInfo_ToString_m2915622324 (FileInfo_t1355938065 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
