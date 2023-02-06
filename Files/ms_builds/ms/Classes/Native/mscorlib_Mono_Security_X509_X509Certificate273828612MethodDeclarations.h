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

// Mono.Security.X509.X509Certificate
struct X509Certificate_t273828612;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.Security.Cryptography.DSA
struct DSA_t1557551819;
// Mono.Security.X509.X509ExtensionCollection
struct X509ExtensionCollection_t3528692650;
// System.String
struct String_t;
// System.Security.Cryptography.RSA
struct RSA_t1557565273;
// Mono.Security.ASN1
struct ASN1_t1254135646;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2995724695;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime339033936.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Security_Cryptography_RSA1557565273.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2995724695.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCont986364934.h"

// System.Void Mono.Security.X509.X509Certificate::.ctor(System.Byte[])
extern "C"  void X509Certificate__ctor_m3212421763 (X509Certificate_t273828612 * __this, ByteU5BU5D_t58506160* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Certificate::.cctor()
extern "C"  void X509Certificate__cctor_m988953959 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Certificate::Parse(System.Byte[])
extern "C"  void X509Certificate_Parse_m750702354 (X509Certificate_t273828612 * __this, ByteU5BU5D_t58506160* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::GetUnsignedBigInteger(System.Byte[])
extern "C"  ByteU5BU5D_t58506160* X509Certificate_GetUnsignedBigInteger_m2414881990 (X509Certificate_t273828612 * __this, ByteU5BU5D_t58506160* ___integer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA Mono.Security.X509.X509Certificate::get_DSA()
extern "C"  DSA_t1557551819 * X509Certificate_get_DSA_m3669842785 (X509Certificate_t273828612 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Certificate::get_Extensions()
extern "C"  X509ExtensionCollection_t3528692650 * X509Certificate_get_Extensions_m2832741396 (X509Certificate_t273828612 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::get_Hash()
extern "C"  ByteU5BU5D_t58506160* X509Certificate_get_Hash_m476899519 (X509Certificate_t273828612 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Certificate::get_IssuerName()
extern "C"  String_t* X509Certificate_get_IssuerName_m3431933902 (X509Certificate_t273828612 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::get_KeyAlgorithmParameters()
extern "C"  ByteU5BU5D_t58506160* X509Certificate_get_KeyAlgorithmParameters_m1145471883 (X509Certificate_t273828612 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::get_PublicKey()
extern "C"  ByteU5BU5D_t58506160* X509Certificate_get_PublicKey_m1256992391 (X509Certificate_t273828612 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.X509.X509Certificate::get_RSA()
extern "C"  RSA_t1557565273 * X509Certificate_get_RSA_m3574141053 (X509Certificate_t273828612 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::get_RawData()
extern "C"  ByteU5BU5D_t58506160* X509Certificate_get_RawData_m1241414723 (X509Certificate_t273828612 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::get_SerialNumber()
extern "C"  ByteU5BU5D_t58506160* X509Certificate_get_SerialNumber_m1434934862 (X509Certificate_t273828612 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::get_Signature()
extern "C"  ByteU5BU5D_t58506160* X509Certificate_get_Signature_m3278339977 (X509Certificate_t273828612 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Certificate::get_SubjectName()
extern "C"  String_t* X509Certificate_get_SubjectName_m1718232911 (X509Certificate_t273828612 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Mono.Security.X509.X509Certificate::get_ValidFrom()
extern "C"  DateTime_t339033936  X509Certificate_get_ValidFrom_m1301607688 (X509Certificate_t273828612 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Mono.Security.X509.X509Certificate::get_ValidUntil()
extern "C"  DateTime_t339033936  X509Certificate_get_ValidUntil_m2012833186 (X509Certificate_t273828612 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.X509.X509Certificate::get_Version()
extern "C"  int32_t X509Certificate_get_Version_m4104571511 (X509Certificate_t273828612 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Certificate::get_IsCurrent()
extern "C"  bool X509Certificate_get_IsCurrent_m3261040808 (X509Certificate_t273828612 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Certificate::WasCurrent(System.DateTime)
extern "C"  bool X509Certificate_WasCurrent_m2237620008 (X509Certificate_t273828612 * __this, DateTime_t339033936  ___instant, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Certificate::GetHashNameFromOID(System.String)
extern "C"  String_t* X509Certificate_GetHashNameFromOID_m509983312 (X509Certificate_t273828612 * __this, String_t* ___oid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Certificate::VerifySignature(System.Security.Cryptography.RSA)
extern "C"  bool X509Certificate_VerifySignature_m501347476 (X509Certificate_t273828612 * __this, RSA_t1557565273 * ___rsa, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Certificate::get_IsSelfSigned()
extern "C"  bool X509Certificate_get_IsSelfSigned_m2192901467 (X509Certificate_t273828612 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.X509.X509Certificate::GetIssuerName()
extern "C"  ASN1_t1254135646 * X509Certificate_GetIssuerName_m3616837067 (X509Certificate_t273828612 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.X509.X509Certificate::GetSubjectName()
extern "C"  ASN1_t1254135646 * X509Certificate_GetSubjectName_m3155263730 (X509Certificate_t273828612 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Certificate::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void X509Certificate_GetObjectData_m3977767844 (X509Certificate_t273828612 * __this, SerializationInfo_t2995724695 * ___info, StreamingContext_t986364934  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::PEM(System.String,System.Byte[])
extern "C"  ByteU5BU5D_t58506160* X509Certificate_PEM_m3139059379 (Il2CppObject * __this /* static, unused */, String_t* ___type, ByteU5BU5D_t58506160* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
