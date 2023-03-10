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

// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t3336811650;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t273828612;
// Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator
struct X509CertificateEnumerator_t3569011381;
// System.Byte[]
struct ByteU5BU5D_t58506160;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_Mono_Security_X509_X509Certificate273828612.h"
#include "mscorlib_Mono_Security_X509_X509CertificateCollect3336811650.h"

// System.Void Mono.Security.X509.X509CertificateCollection::.ctor()
extern "C"  void X509CertificateCollection__ctor_m2939490888 (X509CertificateCollection_t3336811650 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Mono.Security.X509.X509CertificateCollection::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * X509CertificateCollection_System_Collections_IEnumerable_GetEnumerator_m2090803959 (X509CertificateCollection_t3336811650 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Certificate Mono.Security.X509.X509CertificateCollection::get_Item(System.Int32)
extern "C"  X509Certificate_t273828612 * X509CertificateCollection_get_Item_m1700022920 (X509CertificateCollection_t3336811650 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.X509.X509CertificateCollection::Add(Mono.Security.X509.X509Certificate)
extern "C"  int32_t X509CertificateCollection_Add_m3333619839 (X509CertificateCollection_t3336811650 * __this, X509Certificate_t273828612 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509CertificateCollection::AddRange(Mono.Security.X509.X509CertificateCollection)
extern "C"  void X509CertificateCollection_AddRange_m778474926 (X509CertificateCollection_t3336811650 * __this, X509CertificateCollection_t3336811650 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509CertificateCollection::Contains(Mono.Security.X509.X509Certificate)
extern "C"  bool X509CertificateCollection_Contains_m396891249 (X509CertificateCollection_t3336811650 * __this, X509Certificate_t273828612 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator Mono.Security.X509.X509CertificateCollection::GetEnumerator()
extern "C"  X509CertificateEnumerator_t3569011381 * X509CertificateCollection_GetEnumerator_m2493839045 (X509CertificateCollection_t3336811650 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.X509.X509CertificateCollection::GetHashCode()
extern "C"  int32_t X509CertificateCollection_GetHashCode_m2385527643 (X509CertificateCollection_t3336811650 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.X509.X509CertificateCollection::IndexOf(Mono.Security.X509.X509Certificate)
extern "C"  int32_t X509CertificateCollection_IndexOf_m3308850599 (X509CertificateCollection_t3336811650 * __this, X509Certificate_t273828612 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509CertificateCollection::Compare(System.Byte[],System.Byte[])
extern "C"  bool X509CertificateCollection_Compare_m1563703011 (X509CertificateCollection_t3336811650 * __this, ByteU5BU5D_t58506160* ___array1, ByteU5BU5D_t58506160* ___array2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
