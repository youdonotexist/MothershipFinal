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

// System.Security.Policy.StrongName
struct StrongName_t3441834685;
// System.Security.Permissions.StrongNamePublicKeyBlob
struct StrongNamePublicKeyBlob_t2864573480;
// System.String
struct String_t;
// System.Version
struct Version_t497901645;
// System.Security.IPermission
struct IPermission_t2562055037;
// System.Security.Policy.Evidence
struct Evidence_t2439192402;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Permissions_StrongNamePub2864573480.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Version497901645.h"
#include "mscorlib_System_Security_Policy_Evidence2439192402.h"
#include "mscorlib_System_Object837106420.h"

// System.Void System.Security.Policy.StrongName::.ctor(System.Security.Permissions.StrongNamePublicKeyBlob,System.String,System.Version)
extern "C"  void StrongName__ctor_m552959324 (StrongName_t3441834685 * __this, StrongNamePublicKeyBlob_t2864573480 * ___blob, String_t* ___name, Version_t497901645 * ___version, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Policy.StrongName::get_Name()
extern "C"  String_t* StrongName_get_Name_m2625731792 (StrongName_t3441834685 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.StrongNamePublicKeyBlob System.Security.Policy.StrongName::get_PublicKey()
extern "C"  StrongNamePublicKeyBlob_t2864573480 * StrongName_get_PublicKey_m99431051 (StrongName_t3441834685 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Version System.Security.Policy.StrongName::get_Version()
extern "C"  Version_t497901645 * StrongName_get_Version_m1418835908 (StrongName_t3441834685 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Policy.StrongName::CreateIdentityPermission(System.Security.Policy.Evidence)
extern "C"  Il2CppObject * StrongName_CreateIdentityPermission_m3899981616 (StrongName_t3441834685 * __this, Evidence_t2439192402 * ___evidence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.StrongName::Equals(System.Object)
extern "C"  bool StrongName_Equals_m3416747224 (StrongName_t3441834685 * __this, Il2CppObject * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Policy.StrongName::GetHashCode()
extern "C"  int32_t StrongName_GetHashCode_m1084673968 (StrongName_t3441834685 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Policy.StrongName::ToString()
extern "C"  String_t* StrongName_ToString_m1987456872 (StrongName_t3441834685 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
