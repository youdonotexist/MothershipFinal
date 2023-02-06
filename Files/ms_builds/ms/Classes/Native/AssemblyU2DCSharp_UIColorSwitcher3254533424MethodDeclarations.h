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

// UIColorSwitcher
struct UIColorSwitcher_t3254533424;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_UnityEngine_Color1588175760.h"

// System.Void UIColorSwitcher::.ctor()
extern "C"  void UIColorSwitcher__ctor_m3647299643 (UIColorSwitcher_t3254533424 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIColorSwitcher::Awake()
extern "C"  void UIColorSwitcher_Awake_m3884904862 (UIColorSwitcher_t3254533424 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIColorSwitcher::SwitchColor(System.String)
extern "C"  void UIColorSwitcher_SwitchColor_m3276766170 (UIColorSwitcher_t3254533424 * __this, String_t* ___qualityType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UIColorSwitcher::ColorForBattleType(System.String)
extern "C"  Color_t1588175760  UIColorSwitcher_ColorForBattleType_m1440001128 (UIColorSwitcher_t3254533424 * __this, String_t* ___battleType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UIColorSwitcher::ColorForType(System.String)
extern "C"  Color_t1588175760  UIColorSwitcher_ColorForType_m3646859008 (UIColorSwitcher_t3254533424 * __this, String_t* ___qualityType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
