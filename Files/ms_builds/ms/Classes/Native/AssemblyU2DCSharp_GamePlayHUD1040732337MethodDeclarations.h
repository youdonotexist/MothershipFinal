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

// GamePlayHUD
struct GamePlayHUD_t1040732337;
// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_t2509538522;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_UnityEngine_Texture2D2509538522.h"

// System.Void GamePlayHUD::.ctor()
extern "C"  void GamePlayHUD__ctor_m944005594 (GamePlayHUD_t1040732337 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GamePlayHUD GamePlayHUD::Instance()
extern "C"  GamePlayHUD_t1040732337 * GamePlayHUD_Instance_m374270909 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GamePlayHUD::Awake()
extern "C"  void GamePlayHUD_Awake_m1181610813 (GamePlayHUD_t1040732337 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GamePlayHUD::Start()
extern "C"  void GamePlayHUD_Start_m4186110682 (GamePlayHUD_t1040732337 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GamePlayHUD::Update()
extern "C"  void GamePlayHUD_Update_m926264435 (GamePlayHUD_t1040732337 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GamePlayHUD::SetNewHero(System.String,System.Int32)
extern "C"  void GamePlayHUD_SetNewHero_m922683639 (GamePlayHUD_t1040732337 * __this, String_t* ___name, int32_t ___heroesLeft, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GamePlayHUD::SetHeroHealthCount(System.Single,System.Single,System.Boolean)
extern "C"  void GamePlayHUD_SetHeroHealthCount_m374608014 (GamePlayHUD_t1040732337 * __this, float ___val, float ___maxHealth, bool ___setup, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GamePlayHUD::SetMothershipHealth(System.Single,System.Single)
extern "C"  void GamePlayHUD_SetMothershipHealth_m1355317627 (GamePlayHUD_t1040732337 * __this, float ___currentHealth, float ___maxHealth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GamePlayHUD::UpdateSprite(System.String)
extern "C"  void GamePlayHUD_UpdateSprite_m3194207594 (GamePlayHUD_t1040732337 * __this, String_t* ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GamePlayHUD::AddToScore(System.Single)
extern "C"  void GamePlayHUD_AddToScore_m1416233163 (GamePlayHUD_t1040732337 * __this, float ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GamePlayHUD::ShowNewLowScoreMessage()
extern "C"  void GamePlayHUD_ShowNewLowScoreMessage_m2642384144 (GamePlayHUD_t1040732337 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GamePlayHUD::ClearPortraitTexture()
extern "C"  void GamePlayHUD_ClearPortraitTexture_m2118041693 (GamePlayHUD_t1040732337 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GamePlayHUD::SetPortraitTexture(System.String)
extern "C"  void GamePlayHUD_SetPortraitTexture_m3692102362 (GamePlayHUD_t1040732337 * __this, String_t* ___spriteName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GamePlayHUD::SetPortraitTexture(UnityEngine.Texture2D)
extern "C"  void GamePlayHUD_SetPortraitTexture_m4141772276 (GamePlayHUD_t1040732337 * __this, Texture2D_t2509538522 * ___texture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GamePlayHUD::ShowScrapStatus(System.Single)
extern "C"  Il2CppObject * GamePlayHUD_ShowScrapStatus_m1123523205 (GamePlayHUD_t1040732337 * __this, float ___duration, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GamePlayHUD::OnCollectScrap(System.Single)
extern "C"  void GamePlayHUD_OnCollectScrap_m4126557179 (GamePlayHUD_t1040732337 * __this, float ___amount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GamePlayHUD::OnDestroy()
extern "C"  void GamePlayHUD_OnDestroy_m1761458643 (GamePlayHUD_t1040732337 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
