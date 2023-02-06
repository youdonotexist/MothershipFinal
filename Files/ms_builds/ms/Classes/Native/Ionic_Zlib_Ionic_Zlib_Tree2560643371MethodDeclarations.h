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

// Ionic.Zlib.Tree
struct Tree_t2560643371;
// Ionic.Zlib.DeflateManager
struct DeflateManager_t3792001679;
// System.Int16[]
struct Int16U5BU5D_t3675865332;

#include "codegen/il2cpp-codegen.h"
#include "Ionic_Zlib_Ionic_Zlib_DeflateManager3792001679.h"

// System.Int32 Ionic.Zlib.Tree::DistanceCode(System.Int32)
extern "C"  int32_t Tree_DistanceCode_m3158712394 (Il2CppObject * __this /* static, unused */, int32_t ___dist, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zlib.Tree::gen_bitlen(Ionic.Zlib.DeflateManager)
extern "C"  void Tree_gen_bitlen_m3308635243 (Tree_t2560643371 * __this, DeflateManager_t3792001679 * ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zlib.Tree::build_tree(Ionic.Zlib.DeflateManager)
extern "C"  void Tree_build_tree_m4123204691 (Tree_t2560643371 * __this, DeflateManager_t3792001679 * ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zlib.Tree::gen_codes(System.Int16[],System.Int32,System.Int16[])
extern "C"  void Tree_gen_codes_m1392548227 (Il2CppObject * __this /* static, unused */, Int16U5BU5D_t3675865332* ___tree, int32_t ___max_code, Int16U5BU5D_t3675865332* ___bl_count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Ionic.Zlib.Tree::bi_reverse(System.Int32,System.Int32)
extern "C"  int32_t Tree_bi_reverse_m3104062213 (Il2CppObject * __this /* static, unused */, int32_t ___code, int32_t ___len, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zlib.Tree::.ctor()
extern "C"  void Tree__ctor_m411506925 (Tree_t2560643371 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zlib.Tree::.cctor()
extern "C"  void Tree__cctor_m3684683872 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
