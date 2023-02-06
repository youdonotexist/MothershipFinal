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

// System.Security.Policy.Publisher
struct Publisher_t1147985591;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t3432067208;
// System.Security.IPermission
struct IPermission_t2562055037;
// System.Security.Policy.Evidence
struct Evidence_t2439192402;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Cryptography_X509Certific3432067208.h"
#include "mscorlib_System_Security_Policy_Evidence2439192402.h"
#include "mscorlib_System_Object837106420.h"

// System.Void System.Security.Policy.Publisher::.ctor(System.Security.Cryptography.X509Certificates.X509Certificate)
extern "C"  void Publisher__ctor_m1303687159 (Publisher_t1147985591 * __this, X509Certificate_t3432067208 * ___cert, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate System.Security.Policy.Publisher::get_Certificate()
extern "C"  X509Certificate_t3432067208 * Publisher_get_Certificate_m1285922804 (Publisher_t1147985591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Policy.Publisher::CreateIdentityPermission(System.Security.Policy.Evidence)
extern "C"  Il2CppObject * Publisher_CreateIdentityPermission_m3510048666 (Publisher_t1147985591 * __this, Evidence_t2439192402 * ___evidence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.Publisher::Equals(System.Object)
extern "C"  bool Publisher_Equals_m559419218 (Publisher_t1147985591 * __this, Il2CppObject * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Policy.Publisher::GetHashCode()
extern "C"  int32_t Publisher_GetHashCode_m1451310774 (Publisher_t1147985591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Policy.Publisher::ToString()
extern "C"  String_t* Publisher_ToString_m449021904 (Publisher_t1147985591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
