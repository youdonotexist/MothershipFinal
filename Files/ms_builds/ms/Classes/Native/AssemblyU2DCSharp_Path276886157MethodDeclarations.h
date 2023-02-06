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

// Path2
struct Path2_t76886157;
// TimestampPoint
struct TimestampPoint_t2272609850;
// TimestampPoint[]
struct TimestampPointU5BU5D_t73910175;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t3227571696;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_TimestampPoint2272609850.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

// System.Void Path2::.ctor()
extern "C"  void Path2__ctor_m3433686910 (Path2_t76886157 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Path2::PointCount()
extern "C"  int32_t Path2_PointCount_m3605448471 (Path2_t76886157 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Path2::AddPoint(TimestampPoint)
extern "C"  void Path2_AddPoint_m476191035 (Path2_t76886157 * __this, TimestampPoint_t2272609850 * ___pt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Path2::isOverMax(System.Single)
extern "C"  bool Path2_isOverMax_m1922428565 (Path2_t76886157 * __this, float ___maxLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TimestampPoint[] Path2::GetTimestampPoints()
extern "C"  TimestampPointU5BU5D_t73910175* Path2_GetTimestampPoints_m2852414248 (Path2_t76886157 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] Path2::GetPoints()
extern "C"  Vector3U5BU5D_t3227571696* Path2_GetPoints_m3589504141 (Path2_t76886157 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] Path2::GetPointsReversed(UnityEngine.Vector3)
extern "C"  Vector3U5BU5D_t3227571696* Path2_GetPointsReversed_m289506698 (Path2_t76886157 * __this, Vector3_t3525329789  ___start, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TimestampPoint Path2::Begin()
extern "C"  TimestampPoint_t2272609850 * Path2_Begin_m3813454792 (Path2_t76886157 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TimestampPoint Path2::Next()
extern "C"  TimestampPoint_t2272609850 * Path2_Next_m51437334 (Path2_t76886157 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Path2::AtEnd()
extern "C"  bool Path2_AtEnd_m3240876536 (Path2_t76886157 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
