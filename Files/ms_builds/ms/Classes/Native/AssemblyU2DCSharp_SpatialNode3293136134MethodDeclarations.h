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

// SpatialNode
struct SpatialNode_t3293136134;
// SpatialNode[]
struct SpatialNodeU5BU5D_t1480054819;
// UnityEngine.Object
struct Object_t3878351788;
struct Object_t3878351788_marshaled_pinvoke;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_SpatialNode_SpatialNodeZone1151199698.h"
#include "UnityEngine_UnityEngine_Object3878351788.h"

// System.Void SpatialNode::.ctor()
extern "C"  void SpatialNode__ctor_m3594026277 (SpatialNode_t3293136134 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpatialNode::Awake()
extern "C"  void SpatialNode_Awake_m3831631496 (SpatialNode_t3293136134 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SpatialNode/SpatialNodeZone SpatialNode::GetZone()
extern "C"  int32_t SpatialNode_GetZone_m2309495247 (SpatialNode_t3293136134 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SpatialNode[] SpatialNode::ForwardNodes()
extern "C"  SpatialNodeU5BU5D_t1480054819* SpatialNode_ForwardNodes_m821170080 (SpatialNode_t3293136134 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SpatialNode[] SpatialNode::BackwardNodes()
extern "C"  SpatialNodeU5BU5D_t1480054819* SpatialNode_BackwardNodes_m2997037500 (SpatialNode_t3293136134 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SpatialNode SpatialNode::ForwardNode()
extern "C"  SpatialNode_t3293136134 * SpatialNode_ForwardNode_m541120119 (SpatialNode_t3293136134 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpatialNode::OnDrawGizmos()
extern "C"  void SpatialNode_OnDrawGizmos_m424046683 (SpatialNode_t3293136134 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpatialNode::SetObject(UnityEngine.Object)
extern "C"  void SpatialNode_SetObject_m2666835470 (SpatialNode_t3293136134 * __this, Object_t3878351788 * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
