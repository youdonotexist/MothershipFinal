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

// Mono.Security.PKCS7/SignerInfo
struct SignerInfo_t1026195224;
// Mono.Security.ASN1
struct ASN1_t1254135646;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.Collections.ArrayList
struct ArrayList_t2121638921;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_Mono_Security_ASN11254135646.h"
#include "mscorlib_System_String968488902.h"

// System.Void Mono.Security.PKCS7/SignerInfo::.ctor()
extern "C"  void SignerInfo__ctor_m2985306612 (SignerInfo_t1026195224 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/SignerInfo::.ctor(Mono.Security.ASN1)
extern "C"  void SignerInfo__ctor_m2190093500 (SignerInfo_t1026195224 * __this, ASN1_t1254135646 * ___asn1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.PKCS7/SignerInfo::get_IssuerName()
extern "C"  String_t* SignerInfo_get_IssuerName_m88375840 (SignerInfo_t1026195224 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.PKCS7/SignerInfo::get_SerialNumber()
extern "C"  ByteU5BU5D_t58506160* SignerInfo_get_SerialNumber_m2383759264 (SignerInfo_t1026195224 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList Mono.Security.PKCS7/SignerInfo::get_AuthenticatedAttributes()
extern "C"  ArrayList_t2121638921 * SignerInfo_get_AuthenticatedAttributes_m1095387203 (SignerInfo_t1026195224 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.PKCS7/SignerInfo::get_HashName()
extern "C"  String_t* SignerInfo_get_HashName_m457445237 (SignerInfo_t1026195224 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/SignerInfo::set_HashName(System.String)
extern "C"  void SignerInfo_set_HashName_m2690147452 (SignerInfo_t1026195224 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.PKCS7/SignerInfo::get_Signature()
extern "C"  ByteU5BU5D_t58506160* SignerInfo_get_Signature_m1212704631 (SignerInfo_t1026195224 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList Mono.Security.PKCS7/SignerInfo::get_UnauthenticatedAttributes()
extern "C"  ArrayList_t2121638921 * SignerInfo_get_UnauthenticatedAttributes_m3393822922 (SignerInfo_t1026195224 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Mono.Security.PKCS7/SignerInfo::get_Version()
extern "C"  uint8_t SignerInfo_get_Version_m590360565 (SignerInfo_t1026195224 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
