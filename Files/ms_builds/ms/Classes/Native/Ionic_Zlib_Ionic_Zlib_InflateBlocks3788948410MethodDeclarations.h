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

// Ionic.Zlib.InflateBlocks
struct InflateBlocks_t3788948410;
// Ionic.Zlib.ZlibCodec
struct ZlibCodec_t3910383704;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "Ionic_Zlib_Ionic_Zlib_ZlibCodec3910383704.h"
#include "mscorlib_System_Object837106420.h"

// System.Void Ionic.Zlib.InflateBlocks::.ctor(Ionic.Zlib.ZlibCodec,System.Object,System.Int32)
extern "C"  void InflateBlocks__ctor_m2090776623 (InflateBlocks_t3788948410 * __this, ZlibCodec_t3910383704 * ___codec, Il2CppObject * ___checkfn, int32_t ___w, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Ionic.Zlib.InflateBlocks::Reset()
extern "C"  uint32_t InflateBlocks_Reset_m1563768608 (InflateBlocks_t3788948410 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Ionic.Zlib.InflateBlocks::Process(System.Int32)
extern "C"  int32_t InflateBlocks_Process_m1121624588 (InflateBlocks_t3788948410 * __this, int32_t ___r, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zlib.InflateBlocks::Free()
extern "C"  void InflateBlocks_Free_m2313825154 (InflateBlocks_t3788948410 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Ionic.Zlib.InflateBlocks::Flush(System.Int32)
extern "C"  int32_t InflateBlocks_Flush_m91249825 (InflateBlocks_t3788948410 * __this, int32_t ___r, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zlib.InflateBlocks::.cctor()
extern "C"  void InflateBlocks__cctor_m3741233663 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
