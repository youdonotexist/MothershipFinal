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

// System.Security.Permissions.StrongNamePublicKeyBlob
struct StrongNamePublicKeyBlob_t2864573480;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Object837106420.h"

// System.Void System.Security.Permissions.StrongNamePublicKeyBlob::.ctor(System.Byte[])
extern "C"  void StrongNamePublicKeyBlob__ctor_m1989886509 (StrongNamePublicKeyBlob_t2864573480 * __this, ByteU5BU5D_t58506160* ___publicKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.StrongNamePublicKeyBlob System.Security.Permissions.StrongNamePublicKeyBlob::FromString(System.String)
extern "C"  StrongNamePublicKeyBlob_t2864573480 * StrongNamePublicKeyBlob_FromString_m2172821722 (Il2CppObject * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Security.Permissions.StrongNamePublicKeyBlob::CharToByte(System.Char)
extern "C"  uint8_t StrongNamePublicKeyBlob_CharToByte_m3020701960 (Il2CppObject * __this /* static, unused */, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.StrongNamePublicKeyBlob::Equals(System.Object)
extern "C"  bool StrongNamePublicKeyBlob_Equals_m167131279 (StrongNamePublicKeyBlob_t2864573480 * __this, Il2CppObject * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Permissions.StrongNamePublicKeyBlob::GetHashCode()
extern "C"  int32_t StrongNamePublicKeyBlob_GetHashCode_m1175711719 (StrongNamePublicKeyBlob_t2864573480 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Permissions.StrongNamePublicKeyBlob::ToString()
extern "C"  String_t* StrongNamePublicKeyBlob_ToString_m2295430737 (StrongNamePublicKeyBlob_t2864573480 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
