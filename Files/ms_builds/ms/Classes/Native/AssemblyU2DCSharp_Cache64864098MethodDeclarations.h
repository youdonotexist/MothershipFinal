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

// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"

// System.Void Cache::.cctor()
extern "C"  void Cache__cctor_m4002323588 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cache::Init()
extern "C"  void Cache_Init_m1542793451 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cache::Save(System.String,System.String)
extern "C"  void Cache_Save_m896609958 (Il2CppObject * __this /* static, unused */, String_t* ___key, String_t* ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Cache::Load(System.String)
extern "C"  String_t* Cache_Load_m2074102212 (Il2CppObject * __this /* static, unused */, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
