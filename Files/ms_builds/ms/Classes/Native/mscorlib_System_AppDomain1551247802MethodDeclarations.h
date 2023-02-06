﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.AppDomain
struct AppDomain_t1551247802;
// System.UnhandledExceptionEventHandler
struct UnhandledExceptionEventHandler_t4230172209;
// System.AppDomainSetup
struct AppDomainSetup_t516720365;
// System.String
struct String_t;
// System.Reflection.Emit.AssemblyBuilder
struct AssemblyBuilder_t3642540642;
// System.Reflection.AssemblyName
struct AssemblyName_t3481926655;
// System.Security.Policy.Evidence
struct Evidence_t2439192402;
// System.Security.PermissionSet
struct PermissionSet_t2781735032;
// System.Object
struct Il2CppObject;
// System.Reflection.Assembly
struct Assembly_t1882292308;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.Runtime.Remoting.Contexts.Context
struct Context_t305277133;
// System.AppDomainManager
struct AppDomainManager_t3127677277;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_UnhandledExceptionEventHandler4230172209.h"
#include "mscorlib_System_Reflection_AssemblyName3481926655.h"
#include "mscorlib_System_Reflection_Emit_AssemblyBuilderAcc4255369254.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Security_Policy_Evidence2439192402.h"
#include "mscorlib_System_Security_PermissionSet2781735032.h"
#include "mscorlib_System_Runtime_Remoting_Contexts_Context305277133.h"
#include "mscorlib_System_Object837106420.h"

// System.Void System.AppDomain::add_UnhandledException(System.UnhandledExceptionEventHandler)
extern "C"  void AppDomain_add_UnhandledException_m1729490677 (AppDomain_t1551247802 * __this, UnhandledExceptionEventHandler_t4230172209 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.AppDomain::remove_UnhandledException(System.UnhandledExceptionEventHandler)
extern "C"  void AppDomain_remove_UnhandledException_m1873750054 (AppDomain_t1551247802 * __this, UnhandledExceptionEventHandler_t4230172209 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.AppDomainSetup System.AppDomain::getSetup()
extern "C"  AppDomainSetup_t516720365 * AppDomain_getSetup_m671330587 (AppDomain_t1551247802 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.AppDomainSetup System.AppDomain::get_SetupInformation()
extern "C"  AppDomainSetup_t516720365 * AppDomain_get_SetupInformation_m4007885804 (AppDomain_t1551247802 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.AppDomain::getFriendlyName()
extern "C"  String_t* AppDomain_getFriendlyName_m290133299 (AppDomain_t1551247802 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.AppDomain::get_FriendlyName()
extern "C"  String_t* AppDomain_get_FriendlyName_m3047476058 (AppDomain_t1551247802 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.AppDomain System.AppDomain::getCurDomain()
extern "C"  AppDomain_t1551247802 * AppDomain_getCurDomain_m2514231979 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.AppDomain System.AppDomain::get_CurrentDomain()
extern "C"  AppDomain_t1551247802 * AppDomain_get_CurrentDomain_m3448347417 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.AssemblyBuilder System.AppDomain::DefineDynamicAssembly(System.Reflection.AssemblyName,System.Reflection.Emit.AssemblyBuilderAccess)
extern "C"  AssemblyBuilder_t3642540642 * AppDomain_DefineDynamicAssembly_m1692477586 (AppDomain_t1551247802 * __this, AssemblyName_t3481926655 * ___name, int32_t ___access, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.AssemblyBuilder System.AppDomain::DefineDynamicAssembly(System.Reflection.AssemblyName,System.Reflection.Emit.AssemblyBuilderAccess,System.String,System.Security.Policy.Evidence,System.Security.PermissionSet,System.Security.PermissionSet,System.Security.PermissionSet,System.Boolean)
extern "C"  AssemblyBuilder_t3642540642 * AppDomain_DefineDynamicAssembly_m2722476527 (AppDomain_t1551247802 * __this, AssemblyName_t3481926655 * ___name, int32_t ___access, String_t* ___dir, Evidence_t2439192402 * ___evidence, PermissionSet_t2781735032 * ___requiredPermissions, PermissionSet_t2781735032 * ___optionalPermissions, PermissionSet_t2781735032 * ___refusedPermissions, bool ___isSynchronized, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.AssemblyBuilder System.AppDomain::DefineInternalDynamicAssembly(System.Reflection.AssemblyName,System.Reflection.Emit.AssemblyBuilderAccess)
extern "C"  AssemblyBuilder_t3642540642 * AppDomain_DefineInternalDynamicAssembly_m2942189295 (AppDomain_t1551247802 * __this, AssemblyName_t3481926655 * ___name, int32_t ___access, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.AppDomain::InitializeLifetimeService()
extern "C"  Il2CppObject * AppDomain_InitializeLifetimeService_m3976192241 (AppDomain_t1551247802 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.AppDomain::LoadAssembly(System.String,System.Security.Policy.Evidence,System.Boolean)
extern "C"  Assembly_t1882292308 * AppDomain_LoadAssembly_m4215712056 (AppDomain_t1551247802 * __this, String_t* ___assemblyRef, Evidence_t2439192402 * ___securityEvidence, bool ___refOnly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.AppDomain::Load(System.String)
extern "C"  Assembly_t1882292308 * AppDomain_Load_m3534527363 (AppDomain_t1551247802 * __this, String_t* ___assemblyString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.AppDomain::Load(System.String,System.Security.Policy.Evidence,System.Boolean)
extern "C"  Assembly_t1882292308 * AppDomain_Load_m2577869746 (AppDomain_t1551247802 * __this, String_t* ___assemblyString, Evidence_t2439192402 * ___assemblySecurity, bool ___refonly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.AppDomain::LoadAssemblyRaw(System.Byte[],System.Byte[],System.Security.Policy.Evidence,System.Boolean)
extern "C"  Assembly_t1882292308 * AppDomain_LoadAssemblyRaw_m3216522734 (AppDomain_t1551247802 * __this, ByteU5BU5D_t58506160* ___rawAssembly, ByteU5BU5D_t58506160* ___rawSymbolStore, Evidence_t2439192402 * ___securityEvidence, bool ___refonly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.AppDomain::Load(System.Byte[],System.Byte[],System.Security.Policy.Evidence)
extern "C"  Assembly_t1882292308 * AppDomain_Load_m549870773 (AppDomain_t1551247802 * __this, ByteU5BU5D_t58506160* ___rawAssembly, ByteU5BU5D_t58506160* ___rawSymbolStore, Evidence_t2439192402 * ___securityEvidence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.AppDomain::Load(System.Byte[],System.Byte[],System.Security.Policy.Evidence,System.Boolean)
extern "C"  Assembly_t1882292308 * AppDomain_Load_m1838700072 (AppDomain_t1551247802 * __this, ByteU5BU5D_t58506160* ___rawAssembly, ByteU5BU5D_t58506160* ___rawSymbolStore, Evidence_t2439192402 * ___securityEvidence, bool ___refonly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Contexts.Context System.AppDomain::InternalSetContext(System.Runtime.Remoting.Contexts.Context)
extern "C"  Context_t305277133 * AppDomain_InternalSetContext_m3131801719 (Il2CppObject * __this /* static, unused */, Context_t305277133 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Contexts.Context System.AppDomain::InternalGetContext()
extern "C"  Context_t305277133 * AppDomain_InternalGetContext_m41184350 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Contexts.Context System.AppDomain::InternalGetDefaultContext()
extern "C"  Context_t305277133 * AppDomain_InternalGetDefaultContext_m3839071361 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.AppDomain::InternalGetProcessGuid(System.String)
extern "C"  String_t* AppDomain_InternalGetProcessGuid_m3162302728 (Il2CppObject * __this /* static, unused */, String_t* ___newguid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.AppDomain::GetProcessGuid()
extern "C"  String_t* AppDomain_GetProcessGuid_m3698396509 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.AppDomain::ToString()
extern "C"  String_t* AppDomain_ToString_m1440401511 (AppDomain_t1551247802 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.AppDomain::ValidateAssemblyName(System.String)
extern "C"  void AppDomain_ValidateAssemblyName_m997596227 (Il2CppObject * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.AppDomain::DoTypeResolve(System.Object)
extern "C"  Assembly_t1882292308 * AppDomain_DoTypeResolve_m2539304708 (AppDomain_t1551247802 * __this, Il2CppObject * ___name_or_tb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.AppDomainManager System.AppDomain::get_DomainManager()
extern "C"  AppDomainManager_t3127677277 * AppDomain_get_DomainManager_m3503506942 (AppDomain_t1551247802 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
