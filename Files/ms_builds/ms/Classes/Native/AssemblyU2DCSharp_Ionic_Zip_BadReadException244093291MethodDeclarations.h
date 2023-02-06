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

// Ionic.Zip.BadReadException
struct BadReadException_t244093291;
// System.String
struct String_t;
// System.Exception
struct Exception_t1967233988;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2995724695;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Exception1967233988.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2995724695.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCont986364934.h"

// System.Void Ionic.Zip.BadReadException::.ctor()
extern "C"  void BadReadException__ctor_m1466875150 (BadReadException_t244093291 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.BadReadException::.ctor(System.String)
extern "C"  void BadReadException__ctor_m2578385076 (BadReadException_t244093291 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.BadReadException::.ctor(System.String,System.Exception)
extern "C"  void BadReadException__ctor_m4069047042 (BadReadException_t244093291 * __this, String_t* ___message, Exception_t1967233988 * ___innerException, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.BadReadException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void BadReadException__ctor_m2401242447 (BadReadException_t244093291 * __this, SerializationInfo_t2995724695 * ___info, StreamingContext_t986364934  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
