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

// System.Security.HostSecurityManager
struct HostSecurityManager_t2919517674;
// System.Security.Policy.Evidence
struct Evidence_t2439192402;
// System.Reflection.Assembly
struct Assembly_t1882292308;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_HostSecurityManagerOptions373777918.h"
#include "mscorlib_System_Reflection_Assembly1882292308.h"
#include "mscorlib_System_Security_Policy_Evidence2439192402.h"

// System.Void System.Security.HostSecurityManager::.ctor()
extern "C"  void HostSecurityManager__ctor_m3629435166 (HostSecurityManager_t2919517674 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.HostSecurityManagerOptions System.Security.HostSecurityManager::get_Flags()
extern "C"  int32_t HostSecurityManager_get_Flags_m3049980733 (HostSecurityManager_t2919517674 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.Evidence System.Security.HostSecurityManager::ProvideAssemblyEvidence(System.Reflection.Assembly,System.Security.Policy.Evidence)
extern "C"  Evidence_t2439192402 * HostSecurityManager_ProvideAssemblyEvidence_m3937790759 (HostSecurityManager_t2919517674 * __this, Assembly_t1882292308 * ___loadedAssembly, Evidence_t2439192402 * ___inputEvidence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
