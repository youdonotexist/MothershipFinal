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

// System.Security.Policy.GacInstalled
struct GacInstalled_t4113943468;
// System.Security.IPermission
struct IPermission_t2562055037;
// System.Security.Policy.Evidence
struct Evidence_t2439192402;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Policy_Evidence2439192402.h"
#include "mscorlib_System_Object837106420.h"

// System.Void System.Security.Policy.GacInstalled::.ctor()
extern "C"  void GacInstalled__ctor_m467431830 (GacInstalled_t4113943468 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Policy.GacInstalled::CreateIdentityPermission(System.Security.Policy.Evidence)
extern "C"  Il2CppObject * GacInstalled_CreateIdentityPermission_m1169412449 (GacInstalled_t4113943468 * __this, Evidence_t2439192402 * ___evidence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.GacInstalled::Equals(System.Object)
extern "C"  bool GacInstalled_Equals_m3408881033 (GacInstalled_t4113943468 * __this, Il2CppObject * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Policy.GacInstalled::GetHashCode()
extern "C"  int32_t GacInstalled_GetHashCode_m1051929313 (GacInstalled_t4113943468 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Policy.GacInstalled::ToString()
extern "C"  String_t* GacInstalled_ToString_m1114539927 (GacInstalled_t4113943468 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
