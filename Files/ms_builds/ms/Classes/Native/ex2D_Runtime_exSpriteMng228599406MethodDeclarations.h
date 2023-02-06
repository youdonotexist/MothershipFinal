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

// exSpriteMng
struct exSpriteMng_t228599406;
// exPlane
struct exPlane_t2956252521;
// exClipping
struct exClipping_t464063125;

#include "codegen/il2cpp-codegen.h"
#include "ex2D_Runtime_exPlane2956252521.h"
#include "ex2D_Runtime_exClipping464063125.h"

// System.Void exSpriteMng::.ctor()
extern "C"  void exSpriteMng__ctor_m163028828 (exSpriteMng_t228599406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void exSpriteMng::OnPreRender()
extern "C"  void exSpriteMng_OnPreRender_m1359889972 (exSpriteMng_t228599406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void exSpriteMng::AddToCommitList(exPlane)
extern "C"  void exSpriteMng_AddToCommitList_m2577021502 (exSpriteMng_t228599406 * __this, exPlane_t2956252521 * ____plane, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void exSpriteMng::AddToClippingList(exClipping)
extern "C"  void exSpriteMng_AddToClippingList_m835931489 (exSpriteMng_t228599406 * __this, exClipping_t464063125 * ____clipping, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void exSpriteMng::RemoveFromClippingList(exClipping)
extern "C"  void exSpriteMng_RemoveFromClippingList_m186165473 (exSpriteMng_t228599406 * __this, exClipping_t464063125 * ____clipping, const MethodInfo* method) IL2CPP_METHOD_ATTR;
