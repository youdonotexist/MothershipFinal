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

// RepairView
struct RepairView_t4125236210;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"

// System.Void RepairView::.ctor()
extern "C"  void RepairView__ctor_m3498364137 (RepairView_t4125236210 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RepairView::Awake()
extern "C"  void RepairView_Awake_m3735969356 (RepairView_t4125236210 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RepairView::OnEnable()
extern "C"  void RepairView_OnEnable_m161179133 (RepairView_t4125236210 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RepairView::OnDisable()
extern "C"  void RepairView_OnDisable_m1142523088 (RepairView_t4125236210 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RepairView::Update()
extern "C"  void RepairView_Update_m2801967940 (RepairView_t4125236210 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RepairView::OnWillAppear()
extern "C"  void RepairView_OnWillAppear_m2660413185 (RepairView_t4125236210 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RepairView::RepairMothership()
extern "C"  void RepairView_RepairMothership_m3252008999 (RepairView_t4125236210 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RepairView::SetMothershipHealth(System.Single,System.Single)
extern "C"  void RepairView_SetMothershipHealth_m3165295436 (RepairView_t4125236210 * __this, float ___currentHealth, float ___maxHealth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RepairView::UpdateScrapMetal(System.Single)
extern "C"  void RepairView_UpdateScrapMetal_m3982277649 (RepairView_t4125236210 * __this, float ___metal, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RepairView::OnUpgraderMessage(System.String)
extern "C"  void RepairView_OnUpgraderMessage_m106886569 (RepairView_t4125236210 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator RepairView::UpgraderMessage(System.String)
extern "C"  Il2CppObject * RepairView_UpgraderMessage_m2590701234 (RepairView_t4125236210 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RepairView::SetNextSprite(System.String)
extern "C"  void RepairView_SetNextSprite_m2825941377 (RepairView_t4125236210 * __this, String_t* ___spriteName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
