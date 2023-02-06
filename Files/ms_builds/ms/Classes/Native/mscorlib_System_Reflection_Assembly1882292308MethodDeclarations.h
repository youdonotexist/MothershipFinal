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
// System.String
struct String_t;
// System.Security.Policy.Evidence
struct Evidence_t2439192402;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2995724695;
// System.Type
struct Type_t;
// System.Object[]
struct ObjectU5BU5D_t11523773;
// System.Reflection.Module
struct Module_t206139610;
// System.IO.Stream
struct Stream_t219029575;
// System.Type[]
struct TypeU5BU5D_t3431720054;
// System.Reflection.AssemblyName
struct AssemblyName_t3481926655;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.Reflection.Module[]
struct ModuleU5BU5D_t153190015;
// System.Reflection.ManifestResourceInfo
struct ManifestResourceInfo_t2025696281;
// System.Security.PermissionSet
struct PermissionSet_t2781735032;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2995724695.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCont986364934.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Reflection_Module206139610.h"
#include "mscorlib_System_Reflection_Assembly1882292308.h"
#include "mscorlib_System_Reflection_AssemblyName3481926655.h"
#include "mscorlib_System_Security_Policy_Evidence2439192402.h"
#include "mscorlib_System_Reflection_ManifestResourceInfo2025696281.h"

// System.Void System.Reflection.Assembly::.ctor()
extern "C"  void Assembly__ctor_m3527373192 (Assembly_t1882292308 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Assembly::get_code_base(System.Boolean)
extern "C"  String_t* Assembly_get_code_base_m1814794868 (Assembly_t1882292308 * __this, bool ___escaped, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Assembly::get_fullname()
extern "C"  String_t* Assembly_get_fullname_m3799996258 (Assembly_t1882292308 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Assembly::get_location()
extern "C"  String_t* Assembly_get_location_m1081941693 (Assembly_t1882292308 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Assembly::GetCodeBase(System.Boolean)
extern "C"  String_t* Assembly_GetCodeBase_m526881390 (Assembly_t1882292308 * __this, bool ___escaped, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Assembly::get_EscapedCodeBase()
extern "C"  String_t* Assembly_get_EscapedCodeBase_m397382395 (Assembly_t1882292308 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Assembly::get_FullName()
extern "C"  String_t* Assembly_get_FullName_m582360994 (Assembly_t1882292308 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.Evidence System.Reflection.Assembly::UnprotectedGetEvidence()
extern "C"  Evidence_t2439192402 * Assembly_UnprotectedGetEvidence_m2918796323 (Assembly_t1882292308 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Assembly::get_global_assembly_cache()
extern "C"  bool Assembly_get_global_assembly_cache_m2169352672 (Assembly_t1882292308 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Assembly::get_GlobalAssemblyCache()
extern "C"  bool Assembly_get_GlobalAssemblyCache_m4215475604 (Assembly_t1882292308 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Assembly::set_FromByteArray(System.Boolean)
extern "C"  void Assembly_set_FromByteArray_m2821596839 (Assembly_t1882292308 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Assembly::get_Location()
extern "C"  String_t* Assembly_get_Location_m3075406557 (Assembly_t1882292308 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Assembly::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Assembly_GetObjectData_m1567311142 (Assembly_t1882292308 * __this, SerializationInfo_t2995724695 * ___info, StreamingContext_t986364934  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Assembly::IsDefined(System.Type,System.Boolean)
extern "C"  bool Assembly_IsDefined_m3899547079 (Assembly_t1882292308 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Assembly::GetCustomAttributes(System.Type,System.Boolean)
extern "C"  ObjectU5BU5D_t11523773* Assembly_GetCustomAttributes_m4037441461 (Assembly_t1882292308 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Reflection.Assembly::GetManifestResourceInternal(System.String,System.Int32&,System.Reflection.Module&)
extern "C"  IntPtr_t Assembly_GetManifestResourceInternal_m3306015724 (Assembly_t1882292308 * __this, String_t* ___name, int32_t* ___size, Module_t206139610 ** ___module, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Reflection.Assembly::GetManifestResourceStream(System.String)
extern "C"  Stream_t219029575 * Assembly_GetManifestResourceStream_m1092317163 (Assembly_t1882292308 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Assembly::GetTypes(System.Boolean)
extern "C"  TypeU5BU5D_t3431720054* Assembly_GetTypes_m2225080238 (Assembly_t1882292308 * __this, bool ___exportedOnly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Assembly::GetTypes()
extern "C"  TypeU5BU5D_t3431720054* Assembly_GetTypes_m1658023543 (Assembly_t1882292308 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Assembly::GetType(System.String,System.Boolean)
extern "C"  Type_t * Assembly_GetType_m910605431 (Assembly_t1882292308 * __this, String_t* ___name, bool ___throwOnError, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Assembly::GetType(System.String)
extern "C"  Type_t * Assembly_GetType_m60293702 (Assembly_t1882292308 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Assembly::InternalGetType(System.Reflection.Module,System.String,System.Boolean,System.Boolean)
extern "C"  Type_t * Assembly_InternalGetType_m2843289707 (Assembly_t1882292308 * __this, Module_t206139610 * ___module, String_t* ___name, bool ___throwOnError, bool ___ignoreCase, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Assembly::GetType(System.String,System.Boolean,System.Boolean)
extern "C"  Type_t * Assembly_GetType_m3120052774 (Assembly_t1882292308 * __this, String_t* ___name, bool ___throwOnError, bool ___ignoreCase, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Assembly::FillName(System.Reflection.Assembly,System.Reflection.AssemblyName)
extern "C"  void Assembly_FillName_m3921630801 (Il2CppObject * __this /* static, unused */, Assembly_t1882292308 * ___ass, AssemblyName_t3481926655 * ___aname, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.AssemblyName System.Reflection.Assembly::GetName(System.Boolean)
extern "C"  AssemblyName_t3481926655 * Assembly_GetName_m186567048 (Assembly_t1882292308 * __this, bool ___copiedName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.AssemblyName System.Reflection.Assembly::GetName()
extern "C"  AssemblyName_t3481926655 * Assembly_GetName_m253695441 (Assembly_t1882292308 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.AssemblyName System.Reflection.Assembly::UnprotectedGetName()
extern "C"  AssemblyName_t3481926655 * Assembly_UnprotectedGetName_m1786225822 (Assembly_t1882292308 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Assembly::ToString()
extern "C"  String_t* Assembly_ToString_m395441739 (Assembly_t1882292308 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Reflection.Assembly::GetEntryAssembly()
extern "C"  Assembly_t1882292308 * Assembly_GetEntryAssembly_m1802837791 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Reflection.Assembly::Load(System.String)
extern "C"  Assembly_t1882292308 * Assembly_Load_m4081902495 (Il2CppObject * __this /* static, unused */, String_t* ___assemblyString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Reflection.Assembly::Load(System.Byte[],System.Byte[],System.Security.Policy.Evidence)
extern "C"  Assembly_t1882292308 * Assembly_Load_m1568986065 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t58506160* ___rawAssembly, ByteU5BU5D_t58506160* ___rawSymbolStore, Evidence_t2439192402 * ___securityEvidence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Reflection.Assembly::LoadWithPartialName(System.String)
extern "C"  Assembly_t1882292308 * Assembly_LoadWithPartialName_m3055769661 (Il2CppObject * __this /* static, unused */, String_t* ___partialName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Reflection.Assembly::load_with_partial_name(System.String,System.Security.Policy.Evidence)
extern "C"  Assembly_t1882292308 * Assembly_load_with_partial_name_m4063128548 (Il2CppObject * __this /* static, unused */, String_t* ___name, Evidence_t2439192402 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Reflection.Assembly::LoadWithPartialName(System.String,System.Security.Policy.Evidence)
extern "C"  Assembly_t1882292308 * Assembly_LoadWithPartialName_m2365700389 (Il2CppObject * __this /* static, unused */, String_t* ___partialName, Evidence_t2439192402 * ___securityEvidence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Reflection.Assembly::LoadWithPartialName(System.String,System.Security.Policy.Evidence,System.Boolean)
extern "C"  Assembly_t1882292308 * Assembly_LoadWithPartialName_m3213527992 (Il2CppObject * __this /* static, unused */, String_t* ___partialName, Evidence_t2439192402 * ___securityEvidence, bool ___oldBehavior, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Assembly::GetModule(System.String)
extern "C"  Module_t206139610 * Assembly_GetModule_m2523306005 (Assembly_t1882292308 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module[] System.Reflection.Assembly::GetModulesInternal()
extern "C"  ModuleU5BU5D_t153190015* Assembly_GetModulesInternal_m1897302435 (Assembly_t1882292308 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module[] System.Reflection.Assembly::GetModules(System.Boolean)
extern "C"  ModuleU5BU5D_t153190015* Assembly_GetModules_m3104205309 (Assembly_t1882292308 * __this, bool ___getResourceModules, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Reflection.Assembly::GetExecutingAssembly()
extern "C"  Assembly_t1882292308 * Assembly_GetExecutingAssembly_m1876278943 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Assembly::GetManifestResourceInfoInternal(System.String,System.Reflection.ManifestResourceInfo)
extern "C"  bool Assembly_GetManifestResourceInfoInternal_m4158727575 (Assembly_t1882292308 * __this, String_t* ___name, ManifestResourceInfo_t2025696281 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ManifestResourceInfo System.Reflection.Assembly::GetManifestResourceInfo(System.String)
extern "C"  ManifestResourceInfo_t2025696281 * Assembly_GetManifestResourceInfo_m1868752215 (Assembly_t1882292308 * __this, String_t* ___resourceName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Assembly::GetManifestModule()
extern "C"  Module_t206139610 * Assembly_GetManifestModule_m2455050076 (Assembly_t1882292308 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Assembly::GetManifestModuleInternal()
extern "C"  Module_t206139610 * Assembly_GetManifestModuleInternal_m158430201 (Assembly_t1882292308 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Assembly::Resolve()
extern "C"  void Assembly_Resolve_m3027548242 (Assembly_t1882292308 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Reflection.Assembly::get_GrantedPermissionSet()
extern "C"  PermissionSet_t2781735032 * Assembly_get_GrantedPermissionSet_m1585174220 (Assembly_t1882292308 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Reflection.Assembly::get_DeniedPermissionSet()
extern "C"  PermissionSet_t2781735032 * Assembly_get_DeniedPermissionSet_m2020267558 (Assembly_t1882292308 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Assembly::LoadPermissions(System.Reflection.Assembly,System.IntPtr&,System.Int32&,System.IntPtr&,System.Int32&,System.IntPtr&,System.Int32&)
extern "C"  bool Assembly_LoadPermissions_m1995382459 (Il2CppObject * __this /* static, unused */, Assembly_t1882292308 * ___a, IntPtr_t* ___minimum, int32_t* ___minLength, IntPtr_t* ___optional, int32_t* ___optLength, IntPtr_t* ___refused, int32_t* ___refLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Assembly::LoadAssemblyPermissions()
extern "C"  void Assembly_LoadAssemblyPermissions_m2269079902 (Assembly_t1882292308 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
