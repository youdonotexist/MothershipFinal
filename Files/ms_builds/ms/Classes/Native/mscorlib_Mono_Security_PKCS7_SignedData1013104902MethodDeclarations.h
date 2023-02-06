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

// Mono.Security.PKCS7/SignedData
struct SignedData_t1013104902;
// Mono.Security.ASN1
struct ASN1_t1254135646;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t3336811650;
// Mono.Security.PKCS7/ContentInfo
struct ContentInfo_t1278398631;
// System.String
struct String_t;
// Mono.Security.PKCS7/SignerInfo
struct SignerInfo_t1026195224;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_Mono_Security_ASN11254135646.h"
#include "mscorlib_System_String968488902.h"

// System.Void Mono.Security.PKCS7/SignedData::.ctor(Mono.Security.ASN1)
extern "C"  void SignedData__ctor_m3045467662 (SignedData_t1013104902 * __this, ASN1_t1254135646 * ___asn1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509CertificateCollection Mono.Security.PKCS7/SignedData::get_Certificates()
extern "C"  X509CertificateCollection_t3336811650 * SignedData_get_Certificates_m2588762020 (SignedData_t1013104902 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.PKCS7/ContentInfo Mono.Security.PKCS7/SignedData::get_ContentInfo()
extern "C"  ContentInfo_t1278398631 * SignedData_get_ContentInfo_m1754582864 (SignedData_t1013104902 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/SignedData::set_HashName(System.String)
extern "C"  void SignedData_set_HashName_m70996302 (SignedData_t1013104902 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.PKCS7/SignerInfo Mono.Security.PKCS7/SignedData::get_SignerInfo()
extern "C"  SignerInfo_t1026195224 * SignedData_get_SignerInfo_m440356364 (SignedData_t1013104902 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.PKCS7/SignedData::OidToName(System.String)
extern "C"  String_t* SignedData_OidToName_m1635943665 (SignedData_t1013104902 * __this, String_t* ___oid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
