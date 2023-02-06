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

// exLayer
struct exLayer_t2952253534;
// System.Collections.Generic.List`1<exLayer>
struct List_1_t3749212503;

#include "codegen/il2cpp-codegen.h"
#include "ex2D_Runtime_exLayer2952253534.h"
#include "ex2D_Runtime_exLayer_Type2622298.h"

// System.Void exLayer::.ctor()
extern "C"  void exLayer__ctor_m3045850860 (exLayer_t2952253534 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void exLayer::set_parent(exLayer)
extern "C"  void exLayer_set_parent_m1167657493 (exLayer_t2952253534 * __this, exLayer_t2952253534 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// exLayer exLayer::get_parent()
extern "C"  exLayer_t2952253534 * exLayer_get_parent_m4263333782 (exLayer_t2952253534 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<exLayer> exLayer::get_children()
extern "C"  List_1_t3749212503 * exLayer_get_children_m2315751455 (exLayer_t2952253534 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void exLayer::set_type(exLayer/Type)
extern "C"  void exLayer_set_type_m424255076 (exLayer_t2952253534 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// exLayer/Type exLayer::get_type()
extern "C"  int32_t exLayer_get_type_m1063753127 (exLayer_t2952253534 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void exLayer::set_range(System.Int32)
extern "C"  void exLayer_set_range_m74163483 (exLayer_t2952253534 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 exLayer::get_range()
extern "C"  int32_t exLayer_get_range_m1329263470 (exLayer_t2952253534 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void exLayer::Awake()
extern "C"  void exLayer_Awake_m3283456079 (exLayer_t2952253534 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void exLayer::OnDestroy()
extern "C"  void exLayer_OnDestroy_m2418834917 (exLayer_t2952253534 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void exLayer::InsertAt(System.Int32,exLayer)
extern "C"  void exLayer_InsertAt_m3720920579 (exLayer_t2952253534 * __this, int32_t ____index, exLayer_t2952253534 * ____layer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void exLayer::ForceSetParent(exLayer)
extern "C"  void exLayer_ForceSetParent_m865584347 (exLayer_t2952253534 * __this, exLayer_t2952253534 * ____parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void exLayer::Dirty()
extern "C"  void exLayer_Dirty_m1266178908 (exLayer_t2952253534 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
