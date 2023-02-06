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

// HeroConfig
struct HeroConfig_t3731208188;
// System.String[]
struct StringU5BU5D_t2956870243;
// System.Collections.IDictionary
struct IDictionary_t1654916945;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"

// System.Void HeroConfig::.ctor(System.String[],System.Collections.IDictionary,System.String)
extern "C"  void HeroConfig__ctor_m3441169530 (HeroConfig_t3731208188 * __this, StringU5BU5D_t2956870243* ___rules, Il2CppObject * ___attributes, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String HeroConfig::GetHeroId()
extern "C"  String_t* HeroConfig_GetHeroId_m179484837 (HeroConfig_t3731208188 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 HeroConfig::getInt(System.String)
extern "C"  int32_t HeroConfig_getInt_m2208464086 (HeroConfig_t3731208188 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single HeroConfig::getFloat(System.String)
extern "C"  float HeroConfig_getFloat_m1282446923 (HeroConfig_t3731208188 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String HeroConfig::getString(System.String)
extern "C"  String_t* HeroConfig_getString_m2296657281 (HeroConfig_t3731208188 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean HeroConfig::getBool(System.String)
extern "C"  bool HeroConfig_getBool_m1237667353 (HeroConfig_t3731208188 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
