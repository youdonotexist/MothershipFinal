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

// System.Reflection.Assembly
struct Assembly_t1882292308;
// System.Security.IPermission
struct IPermission_t2562055037;
// System.Security.PermissionSet
struct PermissionSet_t2781735032;
// System.Security.Policy.Evidence
struct Evidence_t2439192402;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// System.Security.Policy.PolicyLevel
struct PolicyLevel_t1512127021;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.Reflection.MethodBase
struct MethodBase_t3461000640;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_Assembly1882292308.h"
#include "mscorlib_System_Security_PermissionSet2781735032.h"
#include "mscorlib_System_Security_Policy_Evidence2439192402.h"
#include "mscorlib_System_Security_Policy_PolicyLevel1512127021.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_Reflection_MethodBase3461000640.h"
#include "mscorlib_System_Security_RuntimeDeclSecurityActions286959936.h"

// System.Void System.Security.SecurityManager::.cctor()
extern "C"  void SecurityManager__cctor_m3992604439 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityManager::get_CheckExecutionRights()
extern "C"  bool SecurityManager_get_CheckExecutionRights_m435735708 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityManager::get_SecurityEnabled()
extern "C"  bool SecurityManager_get_SecurityEnabled_m2857115566 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityManager::IsGranted(System.Reflection.Assembly,System.Security.IPermission)
extern "C"  bool SecurityManager_IsGranted_m3390952480 (Il2CppObject * __this /* static, unused */, Assembly_t1882292308 * ___a, Il2CppObject * ___perm, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.SecurityManager::CheckPermissionSet(System.Reflection.Assembly,System.Security.PermissionSet,System.Boolean)
extern "C"  Il2CppObject * SecurityManager_CheckPermissionSet_m570850096 (Il2CppObject * __this /* static, unused */, Assembly_t1882292308 * ___a, PermissionSet_t2781735032 * ___ps, bool ___noncas, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.SecurityManager::ResolvePolicy(System.Security.Policy.Evidence)
extern "C"  PermissionSet_t2781735032 * SecurityManager_ResolvePolicy_m2327773485 (Il2CppObject * __this /* static, unused */, Evidence_t2439192402 * ___evidence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.SecurityManager::ResolvePolicy(System.Security.Policy.Evidence,System.Security.PermissionSet,System.Security.PermissionSet,System.Security.PermissionSet,System.Security.PermissionSet&)
extern "C"  PermissionSet_t2781735032 * SecurityManager_ResolvePolicy_m524737311 (Il2CppObject * __this /* static, unused */, Evidence_t2439192402 * ___evidence, PermissionSet_t2781735032 * ___reqdPset, PermissionSet_t2781735032 * ___optPset, PermissionSet_t2781735032 * ___denyPset, PermissionSet_t2781735032 ** ___denied, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Security.SecurityManager::get_Hierarchy()
extern "C"  Il2CppObject * SecurityManager_get_Hierarchy_m1281665942 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityManager::InitializePolicyHierarchy()
extern "C"  void SecurityManager_InitializePolicyHierarchy_m2179572647 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityManager::ResolvePolicyLevel(System.Security.PermissionSet&,System.Security.Policy.PolicyLevel,System.Security.Policy.Evidence)
extern "C"  bool SecurityManager_ResolvePolicyLevel_m1396758681 (Il2CppObject * __this /* static, unused */, PermissionSet_t2781735032 ** ___ps, PolicyLevel_t1512127021 * ___pl, Evidence_t2439192402 * ___evidence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityManager::ResolveIdentityPermissions(System.Security.PermissionSet,System.Security.Policy.Evidence)
extern "C"  void SecurityManager_ResolveIdentityPermissions_m1190675822 (Il2CppObject * __this /* static, unused */, PermissionSet_t2781735032 * ___ps, Evidence_t2439192402 * ___evidence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.PolicyLevel System.Security.SecurityManager::get_ResolvingPolicyLevel()
extern "C"  PolicyLevel_t1512127021 * SecurityManager_get_ResolvingPolicyLevel_m2992460474 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityManager::set_ResolvingPolicyLevel(System.Security.Policy.PolicyLevel)
extern "C"  void SecurityManager_set_ResolvingPolicyLevel_m3245737967 (Il2CppObject * __this /* static, unused */, PolicyLevel_t1512127021 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.SecurityManager::Decode(System.IntPtr,System.Int32)
extern "C"  PermissionSet_t2781735032 * SecurityManager_Decode_m1966008144 (Il2CppObject * __this /* static, unused */, IntPtr_t ___permissions, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.SecurityManager::Decode(System.Byte[])
extern "C"  PermissionSet_t2781735032 * SecurityManager_Decode_m958562396 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t58506160* ___encodedPermissions, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityManager::GetLinkDemandSecurity(System.Reflection.MethodBase,System.Security.RuntimeDeclSecurityActions*,System.Security.RuntimeDeclSecurityActions*)
extern "C"  bool SecurityManager_GetLinkDemandSecurity_m888694131 (Il2CppObject * __this /* static, unused */, MethodBase_t3461000640 * ___method, RuntimeDeclSecurityActions_t286959936 * ___cdecl, RuntimeDeclSecurityActions_t286959936 * ___mdecl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityManager::ReflectedLinkDemandInvoke(System.Reflection.MethodBase)
extern "C"  void SecurityManager_ReflectedLinkDemandInvoke_m361815255 (Il2CppObject * __this /* static, unused */, MethodBase_t3461000640 * ___mb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityManager::ReflectedLinkDemandQuery(System.Reflection.MethodBase)
extern "C"  bool SecurityManager_ReflectedLinkDemandQuery_m2178382589 (Il2CppObject * __this /* static, unused */, MethodBase_t3461000640 * ___mb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityManager::LinkDemand(System.Reflection.Assembly,System.Security.RuntimeDeclSecurityActions*,System.Security.RuntimeDeclSecurityActions*)
extern "C"  bool SecurityManager_LinkDemand_m1921264063 (Il2CppObject * __this /* static, unused */, Assembly_t1882292308 * ___a, RuntimeDeclSecurityActions_t286959936 * ___klass, RuntimeDeclSecurityActions_t286959936 * ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
