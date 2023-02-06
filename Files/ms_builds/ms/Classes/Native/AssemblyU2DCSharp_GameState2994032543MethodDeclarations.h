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

// GameState
struct GameState_t2994032543;

#include "codegen/il2cpp-codegen.h"

// System.Void GameState::.ctor()
extern "C"  void GameState__ctor_m567011500 (GameState_t2994032543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GameState GameState::get_Instance()
extern "C"  GameState_t2994032543 * GameState_get_Instance_m978424802 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GameState::DidWin()
extern "C"  bool GameState_DidWin_m1167305153 (GameState_t2994032543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GameState::DidLose()
extern "C"  bool GameState_DidLose_m1517549426 (GameState_t2994032543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GameState::IsPaused()
extern "C"  bool GameState_IsPaused_m3350188636 (GameState_t2994032543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GameState::DidQuitApplication()
extern "C"  bool GameState_DidQuitApplication_m2364220966 (GameState_t2994032543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameState::OnApplicationQuit()
extern "C"  void GameState_OnApplicationQuit_m3024139306 (GameState_t2994032543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameState::SetOnWin()
extern "C"  void GameState_SetOnWin_m3327770387 (GameState_t2994032543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameState::SetOnLose()
extern "C"  void GameState_SetOnLose_m4067462240 (GameState_t2994032543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameState::SetPaused(System.Boolean)
extern "C"  void GameState_SetPaused_m3270245745 (GameState_t2994032543 * __this, bool ___paused, const MethodInfo* method) IL2CPP_METHOD_ATTR;
