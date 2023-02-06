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

// Ionic.Zlib.InflateCodes
struct InflateCodes_t2875832300;
// System.Int32[]
struct Int32U5BU5D_t1809983122;
// Ionic.Zlib.InflateBlocks
struct InflateBlocks_t3788948410;
// Ionic.Zlib.ZlibCodec
struct ZlibCodec_t3910383704;

#include "codegen/il2cpp-codegen.h"
#include "Ionic_Zlib_Ionic_Zlib_InflateBlocks3788948410.h"
#include "Ionic_Zlib_Ionic_Zlib_ZlibCodec3910383704.h"

// System.Void Ionic.Zlib.InflateCodes::.ctor()
extern "C"  void InflateCodes__ctor_m1650053964 (InflateCodes_t2875832300 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zlib.InflateCodes::Init(System.Int32,System.Int32,System.Int32[],System.Int32,System.Int32[],System.Int32)
extern "C"  void InflateCodes_Init_m1612436258 (InflateCodes_t2875832300 * __this, int32_t ___bl, int32_t ___bd, Int32U5BU5D_t1809983122* ___tl, int32_t ___tl_index, Int32U5BU5D_t1809983122* ___td, int32_t ___td_index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Ionic.Zlib.InflateCodes::Process(Ionic.Zlib.InflateBlocks,System.Int32)
extern "C"  int32_t InflateCodes_Process_m3465886420 (InflateCodes_t2875832300 * __this, InflateBlocks_t3788948410 * ___blocks, int32_t ___r, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Ionic.Zlib.InflateCodes::InflateFast(System.Int32,System.Int32,System.Int32[],System.Int32,System.Int32[],System.Int32,Ionic.Zlib.InflateBlocks,Ionic.Zlib.ZlibCodec)
extern "C"  int32_t InflateCodes_InflateFast_m3530434687 (InflateCodes_t2875832300 * __this, int32_t ___bl, int32_t ___bd, Int32U5BU5D_t1809983122* ___tl, int32_t ___tl_index, Int32U5BU5D_t1809983122* ___td, int32_t ___td_index, InflateBlocks_t3788948410 * ___s, ZlibCodec_t3910383704 * ___z, const MethodInfo* method) IL2CPP_METHOD_ATTR;
