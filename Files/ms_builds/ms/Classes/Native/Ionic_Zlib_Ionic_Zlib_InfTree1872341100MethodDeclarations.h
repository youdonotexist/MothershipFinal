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

// Ionic.Zlib.InfTree
struct InfTree_t1872341100;
// System.Int32[]
struct Int32U5BU5D_t1809983122;
// Ionic.Zlib.ZlibCodec
struct ZlibCodec_t3910383704;
// System.Int32[][]
struct Int32U5BU5DU5BU5D_t158556903;

#include "codegen/il2cpp-codegen.h"
#include "Ionic_Zlib_Ionic_Zlib_ZlibCodec3910383704.h"

// System.Int32 Ionic.Zlib.InfTree::huft_build(System.Int32[],System.Int32,System.Int32,System.Int32,System.Int32[],System.Int32[],System.Int32[],System.Int32[],System.Int32[],System.Int32[],System.Int32[])
extern "C"  int32_t InfTree_huft_build_m125101343 (InfTree_t1872341100 * __this, Int32U5BU5D_t1809983122* ___b, int32_t ___bindex, int32_t ___n, int32_t ___s, Int32U5BU5D_t1809983122* ___d, Int32U5BU5D_t1809983122* ___e, Int32U5BU5D_t1809983122* ___t, Int32U5BU5D_t1809983122* ___m, Int32U5BU5D_t1809983122* ___hp, Int32U5BU5D_t1809983122* ___hn, Int32U5BU5D_t1809983122* ___v, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Ionic.Zlib.InfTree::inflate_trees_bits(System.Int32[],System.Int32[],System.Int32[],System.Int32[],Ionic.Zlib.ZlibCodec)
extern "C"  int32_t InfTree_inflate_trees_bits_m278568828 (InfTree_t1872341100 * __this, Int32U5BU5D_t1809983122* ___c, Int32U5BU5D_t1809983122* ___bb, Int32U5BU5D_t1809983122* ___tb, Int32U5BU5D_t1809983122* ___hp, ZlibCodec_t3910383704 * ___z, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Ionic.Zlib.InfTree::inflate_trees_dynamic(System.Int32,System.Int32,System.Int32[],System.Int32[],System.Int32[],System.Int32[],System.Int32[],System.Int32[],Ionic.Zlib.ZlibCodec)
extern "C"  int32_t InfTree_inflate_trees_dynamic_m389862531 (InfTree_t1872341100 * __this, int32_t ___nl, int32_t ___nd, Int32U5BU5D_t1809983122* ___c, Int32U5BU5D_t1809983122* ___bl, Int32U5BU5D_t1809983122* ___bd, Int32U5BU5D_t1809983122* ___tl, Int32U5BU5D_t1809983122* ___td, Int32U5BU5D_t1809983122* ___hp, ZlibCodec_t3910383704 * ___z, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Ionic.Zlib.InfTree::inflate_trees_fixed(System.Int32[],System.Int32[],System.Int32[][],System.Int32[][],Ionic.Zlib.ZlibCodec)
extern "C"  int32_t InfTree_inflate_trees_fixed_m3480992248 (Il2CppObject * __this /* static, unused */, Int32U5BU5D_t1809983122* ___bl, Int32U5BU5D_t1809983122* ___bd, Int32U5BU5DU5BU5D_t158556903* ___tl, Int32U5BU5DU5BU5D_t158556903* ___td, ZlibCodec_t3910383704 * ___z, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zlib.InfTree::initWorkArea(System.Int32)
extern "C"  void InfTree_initWorkArea_m2941547239 (InfTree_t1872341100 * __this, int32_t ___vsize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zlib.InfTree::.ctor()
extern "C"  void InfTree__ctor_m2772180220 (InfTree_t1872341100 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zlib.InfTree::.cctor()
extern "C"  void InfTree__cctor_m3851111985 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
