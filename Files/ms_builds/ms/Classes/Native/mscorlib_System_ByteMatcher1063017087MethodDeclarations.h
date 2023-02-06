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

// System.ByteMatcher
struct ByteMatcher_t1063017087;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.Char[]
struct CharU5BU5D_t3416858730;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_TermInfoStrings951509341.h"

// System.Void System.ByteMatcher::.ctor()
extern "C"  void ByteMatcher__ctor_m1555670535 (ByteMatcher_t1063017087 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ByteMatcher::AddMapping(System.TermInfoStrings,System.Byte[])
extern "C"  void ByteMatcher_AddMapping_m2067637380 (ByteMatcher_t1063017087 * __this, int32_t ___key, ByteU5BU5D_t58506160* ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ByteMatcher::Sort()
extern "C"  void ByteMatcher_Sort_m4168527995 (ByteMatcher_t1063017087 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ByteMatcher::StartsWith(System.Int32)
extern "C"  bool ByteMatcher_StartsWith_m2105047975 (ByteMatcher_t1063017087 * __this, int32_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TermInfoStrings System.ByteMatcher::Match(System.Char[],System.Int32,System.Int32,System.Int32&)
extern "C"  int32_t ByteMatcher_Match_m2360789960 (ByteMatcher_t1063017087 * __this, CharU5BU5D_t3416858730* ___buffer, int32_t ___offset, int32_t ___length, int32_t* ___used, const MethodInfo* method) IL2CPP_METHOD_ATTR;
