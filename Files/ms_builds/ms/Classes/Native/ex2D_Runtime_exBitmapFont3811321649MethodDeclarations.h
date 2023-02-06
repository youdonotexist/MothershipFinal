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

// exBitmapFont
struct exBitmapFont_t3811321649;
// exBitmapFont/CharInfo
struct CharInfo_t1499870532;

#include "codegen/il2cpp-codegen.h"

// System.Void exBitmapFont::.ctor()
extern "C"  void exBitmapFont__ctor_m284243915 (exBitmapFont_t3811321649 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void exBitmapFont::Reset()
extern "C"  void exBitmapFont_Reset_m2225644152 (exBitmapFont_t3811321649 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void exBitmapFont::RebuildIdToCharInfoTable()
extern "C"  void exBitmapFont_RebuildIdToCharInfoTable_m3677732530 (exBitmapFont_t3811321649 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// exBitmapFont/CharInfo exBitmapFont::GetCharInfo(System.Int32)
extern "C"  CharInfo_t1499870532 * exBitmapFont_GetCharInfo_m1867016643 (exBitmapFont_t3811321649 * __this, int32_t ____id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
