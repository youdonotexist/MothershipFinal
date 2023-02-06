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

// Ionic.Zlib.DeflateManager/Config
struct Config_t2024042338;

#include "codegen/il2cpp-codegen.h"
#include "Ionic_Zlib_Ionic_Zlib_DeflateFlavor4208336886.h"
#include "Ionic_Zlib_Ionic_Zlib_CompressionLevel3940478795.h"

// System.Void Ionic.Zlib.DeflateManager/Config::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,Ionic.Zlib.DeflateFlavor)
extern "C"  void Config__ctor_m2372318810 (Config_t2024042338 * __this, int32_t ___goodLength, int32_t ___maxLazy, int32_t ___niceLength, int32_t ___maxChainLength, int32_t ___flavor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Ionic.Zlib.DeflateManager/Config Ionic.Zlib.DeflateManager/Config::Lookup(Ionic.Zlib.CompressionLevel)
extern "C"  Config_t2024042338 * Config_Lookup_m2131552340 (Il2CppObject * __this /* static, unused */, int32_t ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zlib.DeflateManager/Config::.cctor()
extern "C"  void Config__cctor_m3818996257 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
