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

// System.ApplicationIdentity
struct ApplicationIdentity_t271056291;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2995724695;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2995724695.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCont986364934.h"

// System.Void System.ApplicationIdentity::.ctor(System.String)
extern "C"  void ApplicationIdentity__ctor_m548502143 (ApplicationIdentity_t271056291 * __this, String_t* ___applicationIdentityFullName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ApplicationIdentity::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void ApplicationIdentity_System_Runtime_Serialization_ISerializable_GetObjectData_m769720520 (ApplicationIdentity_t271056291 * __this, SerializationInfo_t2995724695 * ___info, StreamingContext_t986364934  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ApplicationIdentity::get_FullName()
extern "C"  String_t* ApplicationIdentity_get_FullName_m3786168167 (ApplicationIdentity_t271056291 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ApplicationIdentity::ToString()
extern "C"  String_t* ApplicationIdentity_ToString_m654104720 (ApplicationIdentity_t271056291 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
