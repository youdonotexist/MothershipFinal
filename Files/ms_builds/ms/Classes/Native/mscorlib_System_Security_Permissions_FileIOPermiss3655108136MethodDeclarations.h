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

// System.Security.Permissions.FileIOPermission
struct FileIOPermission_t3655108136;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t2956870243;
// System.Security.IPermission
struct IPermission_t2562055037;
// System.Security.SecurityElement
struct SecurityElement_t2475331585;
// System.Object
struct Il2CppObject;
// System.Collections.IList
struct IList_t1612618265;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Permissions_PermissionSta3569926873.h"
#include "mscorlib_System_Security_Permissions_FileIOPermissi416300780.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Security_SecurityElement2475331585.h"
#include "mscorlib_System_Object837106420.h"

// System.Void System.Security.Permissions.FileIOPermission::.ctor(System.Security.Permissions.PermissionState)
extern "C"  void FileIOPermission__ctor_m830644225 (FileIOPermission_t3655108136 * __this, int32_t ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.FileIOPermission::.ctor(System.Security.Permissions.FileIOPermissionAccess,System.String)
extern "C"  void FileIOPermission__ctor_m1088009430 (FileIOPermission_t3655108136 * __this, int32_t ___access, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.FileIOPermission::.cctor()
extern "C"  void FileIOPermission__cctor_m1707637157 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.FileIOPermission::CreateLists()
extern "C"  void FileIOPermission_CreateLists_m447831583 (FileIOPermission_t3655108136 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.FileIOPermissionAccess System.Security.Permissions.FileIOPermission::get_AllFiles()
extern "C"  int32_t FileIOPermission_get_AllFiles_m2322636088 (FileIOPermission_t3655108136 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.FileIOPermission::set_AllFiles(System.Security.Permissions.FileIOPermissionAccess)
extern "C"  void FileIOPermission_set_AllFiles_m3197326689 (FileIOPermission_t3655108136 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.FileIOPermissionAccess System.Security.Permissions.FileIOPermission::get_AllLocalFiles()
extern "C"  int32_t FileIOPermission_get_AllLocalFiles_m1459791949 (FileIOPermission_t3655108136 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.FileIOPermission::set_AllLocalFiles(System.Security.Permissions.FileIOPermissionAccess)
extern "C"  void FileIOPermission_set_AllLocalFiles_m3429268840 (FileIOPermission_t3655108136 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.FileIOPermission::AddPathList(System.Security.Permissions.FileIOPermissionAccess,System.String)
extern "C"  void FileIOPermission_AddPathList_m1394867032 (FileIOPermission_t3655108136 * __this, int32_t ___access, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.FileIOPermission::AddPathList(System.Security.Permissions.FileIOPermissionAccess,System.String[])
extern "C"  void FileIOPermission_AddPathList_m437472374 (FileIOPermission_t3655108136 * __this, int32_t ___access, StringU5BU5D_t2956870243* ___pathList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.FileIOPermission::AddPathInternal(System.Security.Permissions.FileIOPermissionAccess,System.String)
extern "C"  void FileIOPermission_AddPathInternal_m1259855927 (FileIOPermission_t3655108136 * __this, int32_t ___access, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.FileIOPermission::Copy()
extern "C"  Il2CppObject * FileIOPermission_Copy_m2091746171 (FileIOPermission_t3655108136 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.FileIOPermission::FromXml(System.Security.SecurityElement)
extern "C"  void FileIOPermission_FromXml_m1310957906 (FileIOPermission_t3655108136 * __this, SecurityElement_t2475331585 * ___esd, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Security.Permissions.FileIOPermission::GetPathList(System.Security.Permissions.FileIOPermissionAccess)
extern "C"  StringU5BU5D_t2956870243* FileIOPermission_GetPathList_m3191984944 (FileIOPermission_t3655108136 * __this, int32_t ___access, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.FileIOPermission::Intersect(System.Security.IPermission)
extern "C"  Il2CppObject * FileIOPermission_Intersect_m2339962190 (FileIOPermission_t3655108136 * __this, Il2CppObject * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.FileIOPermission::IsSubsetOf(System.Security.IPermission)
extern "C"  bool FileIOPermission_IsSubsetOf_m518824744 (FileIOPermission_t3655108136 * __this, Il2CppObject * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.FileIOPermission::IsUnrestricted()
extern "C"  bool FileIOPermission_IsUnrestricted_m1725344124 (FileIOPermission_t3655108136 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Permissions.FileIOPermission::ToXml()
extern "C"  SecurityElement_t2475331585 * FileIOPermission_ToXml_m2554711292 (FileIOPermission_t3655108136 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.FileIOPermission::Union(System.Security.IPermission)
extern "C"  Il2CppObject * FileIOPermission_Union_m2007405598 (FileIOPermission_t3655108136 * __this, Il2CppObject * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.FileIOPermission::Equals(System.Object)
extern "C"  bool FileIOPermission_Equals_m4081596599 (FileIOPermission_t3655108136 * __this, Il2CppObject * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Permissions.FileIOPermission::GetHashCode()
extern "C"  int32_t FileIOPermission_GetHashCode_m392254491 (FileIOPermission_t3655108136 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.FileIOPermission::IsEmpty()
extern "C"  bool FileIOPermission_IsEmpty_m1312683815 (FileIOPermission_t3655108136 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.FileIOPermission System.Security.Permissions.FileIOPermission::Cast(System.Security.IPermission)
extern "C"  FileIOPermission_t3655108136 * FileIOPermission_Cast_m3614412045 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.FileIOPermission::ThrowInvalidFlag(System.Security.Permissions.FileIOPermissionAccess,System.Boolean)
extern "C"  void FileIOPermission_ThrowInvalidFlag_m1283114642 (Il2CppObject * __this /* static, unused */, int32_t ___access, bool ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.FileIOPermission::ThrowIfInvalidPath(System.String)
extern "C"  void FileIOPermission_ThrowIfInvalidPath_m3996373325 (Il2CppObject * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.FileIOPermission::ThrowIfInvalidPath(System.String[])
extern "C"  void FileIOPermission_ThrowIfInvalidPath_m814053675 (Il2CppObject * __this /* static, unused */, StringU5BU5D_t2956870243* ___paths, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.FileIOPermission::KeyIsSubsetOf(System.Collections.IList,System.Collections.IList)
extern "C"  bool FileIOPermission_KeyIsSubsetOf_m341461728 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___local, Il2CppObject * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.FileIOPermission::UnionKeys(System.Collections.IList,System.String[])
extern "C"  void FileIOPermission_UnionKeys_m4134892436 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___list, StringU5BU5D_t2956870243* ___paths, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.FileIOPermission::IntersectKeys(System.Collections.IList,System.Collections.IList,System.Collections.IList)
extern "C"  void FileIOPermission_IntersectKeys_m2972839018 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___local, Il2CppObject * ___target, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
