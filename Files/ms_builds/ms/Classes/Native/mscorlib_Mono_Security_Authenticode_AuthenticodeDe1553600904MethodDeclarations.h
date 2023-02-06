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

// Mono.Security.Authenticode.AuthenticodeDeformatter
struct AuthenticodeDeformatter_t1553600904;
// System.String
struct String_t;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t273828612;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// Mono.Security.PKCS7/SignedData
struct SignedData_t1013104902;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t24372250;
// Mono.Security.PKCS7/SignerInfo
struct SignerInfo_t1026195224;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_Mono_Security_X509_X509Certificate273828612.h"
#include "mscorlib_Mono_Security_PKCS7_SignedData1013104902.h"
#include "mscorlib_System_Security_Cryptography_HashAlgorithm24372250.h"
#include "mscorlib_Mono_Security_PKCS7_SignerInfo1026195224.h"

// System.Void Mono.Security.Authenticode.AuthenticodeDeformatter::.ctor()
extern "C"  void AuthenticodeDeformatter__ctor_m2813546644 (AuthenticodeDeformatter_t1553600904 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Authenticode.AuthenticodeDeformatter::.ctor(System.String)
extern "C"  void AuthenticodeDeformatter__ctor_m1825103598 (AuthenticodeDeformatter_t1553600904 * __this, String_t* ___fileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Authenticode.AuthenticodeDeformatter::set_FileName(System.String)
extern "C"  void AuthenticodeDeformatter_set_FileName_m995910638 (AuthenticodeDeformatter_t1553600904 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Certificate Mono.Security.Authenticode.AuthenticodeDeformatter::get_SigningCertificate()
extern "C"  X509Certificate_t273828612 * AuthenticodeDeformatter_get_SigningCertificate_m1080501994 (AuthenticodeDeformatter_t1553600904 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Authenticode.AuthenticodeDeformatter::CheckSignature(System.String)
extern "C"  bool AuthenticodeDeformatter_CheckSignature_m273272896 (AuthenticodeDeformatter_t1553600904 * __this, String_t* ___fileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Authenticode.AuthenticodeDeformatter::CompareIssuerSerial(System.String,System.Byte[],Mono.Security.X509.X509Certificate)
extern "C"  bool AuthenticodeDeformatter_CompareIssuerSerial_m1845840631 (AuthenticodeDeformatter_t1553600904 * __this, String_t* ___issuer, ByteU5BU5D_t58506160* ___serial, X509Certificate_t273828612 * ___x509, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Authenticode.AuthenticodeDeformatter::VerifySignature(Mono.Security.PKCS7/SignedData,System.Byte[],System.Security.Cryptography.HashAlgorithm)
extern "C"  bool AuthenticodeDeformatter_VerifySignature_m1923757650 (AuthenticodeDeformatter_t1553600904 * __this, SignedData_t1013104902 * ___sd, ByteU5BU5D_t58506160* ___calculatedMessageDigest, HashAlgorithm_t24372250 * ___ha, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Authenticode.AuthenticodeDeformatter::VerifyCounterSignature(Mono.Security.PKCS7/SignerInfo,System.Byte[])
extern "C"  bool AuthenticodeDeformatter_VerifyCounterSignature_m3609487276 (AuthenticodeDeformatter_t1553600904 * __this, SignerInfo_t1026195224 * ___cs, ByteU5BU5D_t58506160* ___signature, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Authenticode.AuthenticodeDeformatter::Reset()
extern "C"  void AuthenticodeDeformatter_Reset_m459979585 (AuthenticodeDeformatter_t1553600904 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
