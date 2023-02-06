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

// StoryManager
struct StoryManager_t2533029144;
// System.String
struct String_t;
// System.Action
struct Action_t437523947;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// System.String[]
struct StringU5BU5D_t2956870243;
// System.Int32[]
struct Int32U5BU5D_t1809983122;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "System_Core_System_Action437523947.h"
#include "AssemblyU2DCSharp_StoryManager_StoryMessage2652693874.h"

// System.Void StoryManager::.ctor()
extern "C"  void StoryManager__ctor_m1513306243 (StoryManager_t2533029144 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// StoryManager StoryManager::Instance()
extern "C"  StoryManager_t2533029144 * StoryManager_Instance_m1351032027 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StoryManager::ReturnToMenu()
extern "C"  void StoryManager_ReturnToMenu_m1418663339 (StoryManager_t2533029144 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StoryManager::LoadMainMenu()
extern "C"  void StoryManager_LoadMainMenu_m1603727007 (StoryManager_t2533029144 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StoryManager::Awake()
extern "C"  void StoryManager_Awake_m1750911462 (StoryManager_t2533029144 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StoryManager::Start()
extern "C"  void StoryManager_Start_m460444035 (StoryManager_t2533029144 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StoryManager::SetReadyToContinue(System.Boolean)
extern "C"  void StoryManager_SetReadyToContinue_m1165535131 (StoryManager_t2533029144 * __this, bool ___cont, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StoryManager::OnContinueTapped()
extern "C"  void StoryManager_OnContinueTapped_m4269125043 (StoryManager_t2533029144 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StoryManager::SetStoryTeller(System.String)
extern "C"  void StoryManager_SetStoryTeller_m218919024 (StoryManager_t2533029144 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StoryManager::SetHeroMessage(System.String,System.Boolean,System.Action)
extern "C"  void StoryManager_SetHeroMessage_m3928552254 (StoryManager_t2533029144 * __this, String_t* ___message, bool ___typewriter, Action_t437523947 * ___finishAction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StoryManager::SetForwardMessage(System.String,System.Boolean,System.Boolean)
extern "C"  void StoryManager_SetForwardMessage_m2751209885 (StoryManager_t2533029144 * __this, String_t* ___message, bool ___typewriter, bool ___repeat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StoryManager::SetTutorialStory(System.String,System.Boolean,System.Action)
extern "C"  void StoryManager_SetTutorialStory_m3501337160 (StoryManager_t2533029144 * __this, String_t* ___message, bool ___typewriter, Action_t437523947 * ___action, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StoryManager::SetStorytellerSprite(System.String)
extern "C"  void StoryManager_SetStorytellerSprite_m345455563 (StoryManager_t2533029144 * __this, String_t* ___spriteName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator StoryManager::TypewriterRepeat(StoryManager/StoryMessage)
extern "C"  Il2CppObject * StoryManager_TypewriterRepeat_m2918769816 (StoryManager_t2533029144 * __this, StoryMessage_t2652693874  ___messageStruct, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] StoryManager::extractTags(System.String)
extern "C"  StringU5BU5D_t2956870243* StoryManager_extractTags_m2296523432 (StoryManager_t2533029144 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator StoryManager::TypewriterMulti(StoryManager/StoryMessage,System.Action)
extern "C"  Il2CppObject * StoryManager_TypewriterMulti_m994096955 (StoryManager_t2533029144 * __this, StoryMessage_t2652693874  ___messageStruct, Action_t437523947 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator StoryManager::TypewriterSingle(StoryManager/StoryMessage)
extern "C"  Il2CppObject * StoryManager_TypewriterSingle_m3460876747 (StoryManager_t2533029144 * __this, StoryMessage_t2652693874  ___messageStruct, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator StoryManager::FadeOutStory(System.Boolean,System.Single,System.Action)
extern "C"  Il2CppObject * StoryManager_FadeOutStory_m843733407 (StoryManager_t2533029144 * __this, bool ___show, float ___duration, Action_t437523947 * ___action, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator StoryManager::WaitForInput()
extern "C"  Il2CppObject * StoryManager_WaitForInput_m840330815 (StoryManager_t2533029144 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean StoryManager::pauseIndex(System.Int32[],System.Int32)
extern "C"  bool StoryManager_pauseIndex_m796538615 (StoryManager_t2533029144 * __this, Int32U5BU5D_t1809983122* ___idxs, int32_t ___idx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
