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

// UIRect/AnchorPoint
struct AnchorPoint_t109622203;
// UnityEngine.Transform
struct Transform_t284553113;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t3227571696;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Transform284553113.h"

// System.Void UIRect/AnchorPoint::.ctor()
extern "C"  void AnchorPoint__ctor_m3207692887 (AnchorPoint_t109622203 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRect/AnchorPoint::.ctor(System.Single)
extern "C"  void AnchorPoint__ctor_m1586775220 (AnchorPoint_t109622203 * __this, float ___relative, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRect/AnchorPoint::Set(System.Single,System.Single)
extern "C"  void AnchorPoint_Set_m4146472601 (AnchorPoint_t109622203 * __this, float ___relative, float ___absolute, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRect/AnchorPoint::Set(UnityEngine.Transform,System.Single,System.Single)
extern "C"  void AnchorPoint_Set_m3508746064 (AnchorPoint_t109622203 * __this, Transform_t284553113 * ___target, float ___relative, float ___absolute, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRect/AnchorPoint::SetToNearest(System.Single,System.Single,System.Single)
extern "C"  void AnchorPoint_SetToNearest_m2110339335 (AnchorPoint_t109622203 * __this, float ___abs0, float ___abs1, float ___abs2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRect/AnchorPoint::SetToNearest(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
extern "C"  void AnchorPoint_SetToNearest_m4145844918 (AnchorPoint_t109622203 * __this, float ___rel0, float ___rel1, float ___rel2, float ___abs0, float ___abs1, float ___abs2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRect/AnchorPoint::SetHorizontal(UnityEngine.Transform,System.Single)
extern "C"  void AnchorPoint_SetHorizontal_m2786298215 (AnchorPoint_t109622203 * __this, Transform_t284553113 * ___parent, float ___localPos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRect/AnchorPoint::SetVertical(UnityEngine.Transform,System.Single)
extern "C"  void AnchorPoint_SetVertical_m4045095893 (AnchorPoint_t109622203 * __this, Transform_t284553113 * ___parent, float ___localPos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] UIRect/AnchorPoint::GetSides(UnityEngine.Transform)
extern "C"  Vector3U5BU5D_t3227571696* AnchorPoint_GetSides_m1119345522 (AnchorPoint_t109622203 * __this, Transform_t284553113 * ___relativeTo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
