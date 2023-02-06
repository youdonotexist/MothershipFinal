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

// SpriteSwitcher
struct SpriteSwitcher_t1110467814;
// System.String
struct String_t;
// exSpriteAnimClip[]
struct exSpriteAnimClipU5BU5D_t2972410756;
// UnityEngine.Color32[]
struct Color32U5BU5D_t1677970742;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"

// System.Void SpriteSwitcher::.ctor()
extern "C"  void SpriteSwitcher__ctor_m3289483893 (SpriteSwitcher_t1110467814 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpriteSwitcher::Awake()
extern "C"  void SpriteSwitcher_Awake_m3527089112 (SpriteSwitcher_t1110467814 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpriteSwitcher::SetUp()
extern "C"  void SpriteSwitcher_SetUp_m1823863536 (SpriteSwitcher_t1110467814 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpriteSwitcher::OnEnable()
extern "C"  void SpriteSwitcher_OnEnable_m817442033 (SpriteSwitcher_t1110467814 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpriteSwitcher::OnSpriteQualityChange(System.String)
extern "C"  void SpriteSwitcher_OnSpriteQualityChange_m230589572 (SpriteSwitcher_t1110467814 * __this, String_t* ___qualityType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpriteSwitcher::OnSpriteQualityChange(System.String,System.String)
extern "C"  void SpriteSwitcher_OnSpriteQualityChange_m2980279744 (SpriteSwitcher_t1110467814 * __this, String_t* ___qualityType, String_t* ___appender, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpriteSwitcher::OnDisable()
extern "C"  void SpriteSwitcher_OnDisable_m11836508 (SpriteSwitcher_t1110467814 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpriteSwitcher::AddAnimations(exSpriteAnimClip[])
extern "C"  void SpriteSwitcher_AddAnimations_m74643400 (SpriteSwitcher_t1110467814 * __this, exSpriteAnimClipU5BU5D_t2972410756* ___anims, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SpriteSwitcher::SpriteNameForQuality(System.String)
extern "C"  String_t* SpriteSwitcher_SpriteNameForQuality_m3330192490 (SpriteSwitcher_t1110467814 * __this, String_t* ___quality, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SpriteSwitcher::GetSpriteIndexForQuality(System.String)
extern "C"  int32_t SpriteSwitcher_GetSpriteIndexForQuality_m2314418584 (SpriteSwitcher_t1110467814 * __this, String_t* ___quality, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpriteSwitcher::SetColorsForType(System.String,UnityEngine.Color32[])
extern "C"  void SpriteSwitcher_SetColorsForType_m1221179585 (SpriteSwitcher_t1110467814 * __this, String_t* ___type, Color32U5BU5D_t1677970742* ___colors, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SpriteSwitcher::FallbackForType(System.String)
extern "C"  String_t* SpriteSwitcher_FallbackForType_m1750157617 (SpriteSwitcher_t1110467814 * __this, String_t* ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
