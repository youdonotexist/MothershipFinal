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

// Ionic.Zlib.InflateManager
struct InflateManager_t2918548787;
// Ionic.Zlib.ZlibCodec
struct ZlibCodec_t3910383704;

#include "codegen/il2cpp-codegen.h"
#include "Ionic_Zlib_Ionic_Zlib_ZlibCodec3910383704.h"
#include "Ionic_Zlib_Ionic_Zlib_FlushType3984958891.h"

// System.Boolean Ionic.Zlib.InflateManager::get_HandleRfc1950HeaderBytes()
extern "C"  bool InflateManager_get_HandleRfc1950HeaderBytes_m649540662 (InflateManager_t2918548787 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zlib.InflateManager::.ctor(System.Boolean)
extern "C"  void InflateManager__ctor_m1901825180 (InflateManager_t2918548787 * __this, bool ___expectRfc1950HeaderBytes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Ionic.Zlib.InflateManager::Reset()
extern "C"  int32_t InflateManager_Reset_m4089079250 (InflateManager_t2918548787 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Ionic.Zlib.InflateManager::End()
extern "C"  int32_t InflateManager_End_m756745950 (InflateManager_t2918548787 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Ionic.Zlib.InflateManager::Initialize(Ionic.Zlib.ZlibCodec,System.Int32)
extern "C"  int32_t InflateManager_Initialize_m161870780 (InflateManager_t2918548787 * __this, ZlibCodec_t3910383704 * ___codec, int32_t ___w, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Ionic.Zlib.InflateManager::Inflate(Ionic.Zlib.FlushType)
extern "C"  int32_t InflateManager_Inflate_m2131100675 (InflateManager_t2918548787 * __this, int32_t ___flush, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zlib.InflateManager::.cctor()
extern "C"  void InflateManager__cctor_m1785150568 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
