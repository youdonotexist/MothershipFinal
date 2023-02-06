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

// BundleManager
struct BundleManager_t2258923691;
// UIAtlas
struct UIAtlas_t281921111;
// System.String
struct String_t;
// System.Collections.IList
struct IList_t1612618265;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"

// System.Void BundleManager::.ctor()
extern "C"  void BundleManager__ctor_m3877798176 (BundleManager_t2258923691 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BundleManager::.cctor()
extern "C"  void BundleManager__cctor_m3765530253 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIAtlas BundleManager::PortraitAtlas()
extern "C"  UIAtlas_t281921111 * BundleManager_PortraitAtlas_m2266889098 (BundleManager_t2258923691 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BundleManager::LoadBundle()
extern "C"  void BundleManager_LoadBundle_m3783285996 (BundleManager_t2258923691 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BundleManager::DoBundleStuffs()
extern "C"  void BundleManager_DoBundleStuffs_m1169433008 (BundleManager_t2258923691 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BundleManager::UnzipFinished(System.String,System.Int32)
extern "C"  void BundleManager_UnzipFinished_m4279947341 (BundleManager_t2258923691 * __this, String_t* ___rootPath, int32_t ___bundleVersion, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IList BundleManager::GetBattles(System.Boolean)
extern "C"  Il2CppObject * BundleManager_GetBattles_m1800191218 (BundleManager_t2258923691 * __this, bool ___story, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IList BundleManager::GetUpgrades(System.Boolean)
extern "C"  Il2CppObject * BundleManager_GetUpgrades_m2013792496 (BundleManager_t2258923691 * __this, bool ___minion, const MethodInfo* method) IL2CPP_METHOD_ATTR;
