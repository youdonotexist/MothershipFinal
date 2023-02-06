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

// System.Security.Permissions.IsolatedStoragePermission
struct IsolatedStoragePermission_t1657641320;
// System.Security.SecurityElement
struct SecurityElement_t2475331585;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Permissions_PermissionSta3569926873.h"
#include "mscorlib_System_Security_Permissions_IsolatedStora1913345735.h"
#include "mscorlib_System_Security_SecurityElement2475331585.h"

// System.Void System.Security.Permissions.IsolatedStoragePermission::.ctor(System.Security.Permissions.PermissionState)
extern "C"  void IsolatedStoragePermission__ctor_m2050851629 (IsolatedStoragePermission_t1657641320 * __this, int32_t ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.IsolatedStoragePermission::set_UserQuota(System.Int64)
extern "C"  void IsolatedStoragePermission_set_UserQuota_m2539342620 (IsolatedStoragePermission_t1657641320 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.IsolatedStoragePermission::set_UsageAllowed(System.Security.Permissions.IsolatedStorageContainment)
extern "C"  void IsolatedStoragePermission_set_UsageAllowed_m536824067 (IsolatedStoragePermission_t1657641320 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.IsolatedStoragePermission::IsUnrestricted()
extern "C"  bool IsolatedStoragePermission_IsUnrestricted_m1810176740 (IsolatedStoragePermission_t1657641320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Permissions.IsolatedStoragePermission::ToXml()
extern "C"  SecurityElement_t2475331585 * IsolatedStoragePermission_ToXml_m3622874652 (IsolatedStoragePermission_t1657641320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.IsolatedStoragePermission::FromXml(System.Security.SecurityElement)
extern "C"  void IsolatedStoragePermission_FromXml_m2799455102 (IsolatedStoragePermission_t1657641320 * __this, SecurityElement_t2475331585 * ___esd, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.IsolatedStoragePermission::IsEmpty()
extern "C"  bool IsolatedStoragePermission_IsEmpty_m450808511 (IsolatedStoragePermission_t1657641320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
