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

// System.Security.Policy.PermissionRequestEvidence
struct PermissionRequestEvidence_t458042610;
// System.Security.PermissionSet
struct PermissionSet_t2781735032;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_PermissionSet2781735032.h"

// System.Void System.Security.Policy.PermissionRequestEvidence::.ctor(System.Security.PermissionSet,System.Security.PermissionSet,System.Security.PermissionSet)
extern "C"  void PermissionRequestEvidence__ctor_m3322826710 (PermissionRequestEvidence_t458042610 * __this, PermissionSet_t2781735032 * ___request, PermissionSet_t2781735032 * ___optional, PermissionSet_t2781735032 * ___denied, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Policy.PermissionRequestEvidence::ToString()
extern "C"  String_t* PermissionRequestEvidence_ToString_m2765236107 (PermissionRequestEvidence_t458042610 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
