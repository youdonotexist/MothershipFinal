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

// UISwitcher
struct UISwitcher_t1655398805;
// System.String
struct String_t;
// UIFont
struct UIFont_t2503090435;
// UIAtlas
struct UIAtlas_t281921111;
// UILabel
struct UILabel_t291504320;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_UILabel291504320.h"

// System.Void UISwitcher::.ctor()
extern "C"  void UISwitcher__ctor_m203173542 (UISwitcher_t1655398805 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISwitcher::Awake()
extern "C"  void UISwitcher_Awake_m440778761 (UISwitcher_t1655398805 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISwitcher::SetUp(System.String)
extern "C"  void UISwitcher_SetUp_m3374671233 (UISwitcher_t1655398805 * __this, String_t* ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UISwitcher::ExtractType()
extern "C"  String_t* UISwitcher_ExtractType_m2351457628 (UISwitcher_t1655398805 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIFont UISwitcher::GetCurrentFont(System.String)
extern "C"  UIFont_t2503090435 * UISwitcher_GetCurrentFont_m2908129176 (UISwitcher_t1655398805 * __this, String_t* ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIAtlas UISwitcher::AtlasForType(System.String)
extern "C"  UIAtlas_t281921111 * UISwitcher_AtlasForType_m164814384 (UISwitcher_t1655398805 * __this, String_t* ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIAtlas UISwitcher::loadNesAtlas()
extern "C"  UIAtlas_t281921111 * UISwitcher_loadNesAtlas_m361505135 (UISwitcher_t1655398805 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIAtlas UISwitcher::loadMsAtlas()
extern "C"  UIAtlas_t281921111 * UISwitcher_loadMsAtlas_m4077762183 (UISwitcher_t1655398805 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIAtlas UISwitcher::loadSnesAtlas()
extern "C"  UIAtlas_t281921111 * UISwitcher_loadSnesAtlas_m3449690692 (UISwitcher_t1655398805 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISwitcher::UpdateUiLabel(UILabel)
extern "C"  void UISwitcher_UpdateUiLabel_m1866582167 (UISwitcher_t1655398805 * __this, UILabel_t291504320 * ___label, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISwitcher::OnDestroy()
extern "C"  void UISwitcher_OnDestroy_m3209314463 (UISwitcher_t1655398805 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
