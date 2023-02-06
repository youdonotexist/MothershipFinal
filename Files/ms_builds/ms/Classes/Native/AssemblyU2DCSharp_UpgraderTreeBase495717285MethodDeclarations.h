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

// UpgraderTreeBase
struct UpgraderTreeBase_t495717285;
// PortState
struct PortState_t3108340848;
// UpgraderCircle
struct UpgraderCircle_t998631014;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_PortState3108340848.h"

// System.Void UpgraderTreeBase::.ctor()
extern "C"  void UpgraderTreeBase__ctor_m3816514710 (UpgraderTreeBase_t495717285 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UpgraderTreeBase::Awake()
extern "C"  void UpgraderTreeBase_Awake_m4054119929 (UpgraderTreeBase_t495717285 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UpgraderTreeBase::SetSelected(System.Int32,System.Int32)
extern "C"  void UpgraderTreeBase_SetSelected_m943803125 (UpgraderTreeBase_t495717285 * __this, int32_t ___selectedTypeIndex, int32_t ___selectedLevelContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UpgraderTreeBase::SetState(PortState)
extern "C"  void UpgraderTreeBase_SetState_m2748558181 (UpgraderTreeBase_t495717285 * __this, PortState_t3108340848 * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UpgraderCircle UpgraderTreeBase::CircleForTypeAndLevel(System.Int32,System.Int32)
extern "C"  UpgraderCircle_t998631014 * UpgraderTreeBase_CircleForTypeAndLevel_m3153878473 (UpgraderTreeBase_t495717285 * __this, int32_t ___type, int32_t ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UpgraderTreeBase::OnShow()
extern "C"  void UpgraderTreeBase_OnShow_m4247371050 (UpgraderTreeBase_t495717285 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UpgraderTreeBase::OnHide()
extern "C"  void UpgraderTreeBase_OnHide_m3933028911 (UpgraderTreeBase_t495717285 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
