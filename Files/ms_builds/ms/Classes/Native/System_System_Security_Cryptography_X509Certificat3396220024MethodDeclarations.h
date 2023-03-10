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

// System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension
struct X509EnhancedKeyUsageExtension_t3396220024;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t4287420181;
// System.Security.Cryptography.OidCollection
struct OidCollection_t1467909409;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Security_Cryptography_AsnEncodedData4287420181.h"
#include "System_System_Security_Cryptography_AsnDecodeStatu3002376501.h"

// System.Void System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension::.ctor(System.Security.Cryptography.AsnEncodedData,System.Boolean)
extern "C"  void X509EnhancedKeyUsageExtension__ctor_m1143045852 (X509EnhancedKeyUsageExtension_t3396220024 * __this, AsnEncodedData_t4287420181 * ___encodedEnhancedKeyUsages, bool ___critical, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.OidCollection System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension::get_EnhancedKeyUsages()
extern "C"  OidCollection_t1467909409 * X509EnhancedKeyUsageExtension_get_EnhancedKeyUsages_m337632124 (X509EnhancedKeyUsageExtension_t3396220024 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension::CopyFrom(System.Security.Cryptography.AsnEncodedData)
extern "C"  void X509EnhancedKeyUsageExtension_CopyFrom_m3559074914 (X509EnhancedKeyUsageExtension_t3396220024 * __this, AsnEncodedData_t4287420181 * ___asnEncodedData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnDecodeStatus System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension::Decode(System.Byte[])
extern "C"  int32_t X509EnhancedKeyUsageExtension_Decode_m3913247855 (X509EnhancedKeyUsageExtension_t3396220024 * __this, ByteU5BU5D_t58506160* ___extension, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension::ToString(System.Boolean)
extern "C"  String_t* X509EnhancedKeyUsageExtension_ToString_m554823682 (X509EnhancedKeyUsageExtension_t3396220024 * __this, bool ___multiLine, const MethodInfo* method) IL2CPP_METHOD_ATTR;
