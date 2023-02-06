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

// ResourceManager
struct ResourceManager_t473206687;
// System.String
struct String_t;
// exAtlas
struct exAtlas_t2942648216;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"

// System.Void ResourceManager::.ctor()
extern "C"  void ResourceManager__ctor_m4030814892 (ResourceManager_t473206687 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ResourceManager::.cctor()
extern "C"  void ResourceManager__cctor_m4214081153 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ResourceManager::LoadAtlases()
extern "C"  void ResourceManager_LoadAtlases_m882828029 (ResourceManager_t473206687 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ResourceManager::UnloadAtlases()
extern "C"  void ResourceManager_UnloadAtlases_m281228996 (ResourceManager_t473206687 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ResourceManager::QualityForEncounterType(System.String)
extern "C"  String_t* ResourceManager_QualityForEncounterType_m2025796594 (Il2CppObject * __this /* static, unused */, String_t* ___encounterType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ResourceManager::GetQualityString()
extern "C"  String_t* ResourceManager_GetQualityString_m3970417999 (ResourceManager_t473206687 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// exAtlas ResourceManager::AtlasForType(System.String)
extern "C"  exAtlas_t2942648216 * ResourceManager_AtlasForType_m4182020173 (ResourceManager_t473206687 * __this, String_t* ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// exAtlas ResourceManager::loadNesAtlas()
extern "C"  exAtlas_t2942648216 * ResourceManager_loadNesAtlas_m1083327538 (ResourceManager_t473206687 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// exAtlas ResourceManager::loadMsAtlas()
extern "C"  exAtlas_t2942648216 * ResourceManager_loadMsAtlas_m3408310116 (ResourceManager_t473206687 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// exAtlas ResourceManager::loadSnesAtlas()
extern "C"  exAtlas_t2942648216 * ResourceManager_loadSnesAtlas_m56381409 (ResourceManager_t473206687 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// exAtlas ResourceManager::loadPsAtlas()
extern "C"  exAtlas_t2942648216 * ResourceManager_loadPsAtlas_m2280914023 (ResourceManager_t473206687 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
