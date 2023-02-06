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

// EncounterItem
struct EncounterItem_t688699078;
// System.String
struct String_t;
// System.Collections.IList
struct IList_t1612618265;
// System.Collections.Hashtable
struct Hashtable_t3875263730;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Collections_Hashtable3875263730.h"

// System.Void EncounterItem::.ctor()
extern "C"  void EncounterItem__ctor_m1382541669 (EncounterItem_t688699078 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EncounterItem::Awake()
extern "C"  void EncounterItem_Awake_m1620146888 (EncounterItem_t688699078 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EncounterItem::Start()
extern "C"  void EncounterItem_Start_m329679461 (EncounterItem_t688699078 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EncounterItem::PrepareForReuse()
extern "C"  void EncounterItem_PrepareForReuse_m1941405909 (EncounterItem_t688699078 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EncounterItem::UpdateData(System.String,System.String,System.String,System.String,System.Collections.IList,System.Collections.Hashtable)
extern "C"  void EncounterItem_UpdateData_m1737497611 (EncounterItem_t688699078 * __this, String_t* ___encounterId, String_t* ___name, String_t* ___type, String_t* ___backstory, Il2CppObject * ___heroes, Hashtable_t3875263730 * ___saveData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EncounterItem::LoadHighScore(System.String)
extern "C"  void EncounterItem_LoadHighScore_m3934858837 (EncounterItem_t688699078 * __this, String_t* ___encounterId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single EncounterItem::CR(System.Single)
extern "C"  float EncounterItem_CR_m973245929 (EncounterItem_t688699078 * __this, float ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EncounterItem::UpdateForType(System.String)
extern "C"  void EncounterItem_UpdateForType_m1218099589 (EncounterItem_t688699078 * __this, String_t* ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EncounterItem::OnCoverClick()
extern "C"  void EncounterItem_OnCoverClick_m2831903887 (EncounterItem_t688699078 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EncounterItem::OnClick()
extern "C"  void EncounterItem_OnClick_m3321854636 (EncounterItem_t688699078 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EncounterItem::ShowAdditionalPanel()
extern "C"  void EncounterItem_ShowAdditionalPanel_m4021923939 (EncounterItem_t688699078 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EncounterItem::HideAdditionalPanel()
extern "C"  void EncounterItem_HideAdditionalPanel_m2754928830 (EncounterItem_t688699078 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator EncounterItem::AdditionalTransition(System.Boolean)
extern "C"  Il2CppObject * EncounterItem_AdditionalTransition_m1592153098 (EncounterItem_t688699078 * __this, bool ___show, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator EncounterItem::Flip(System.Boolean)
extern "C"  Il2CppObject * EncounterItem_Flip_m941048219 (EncounterItem_t688699078 * __this, bool ___front, const MethodInfo* method) IL2CPP_METHOD_ATTR;
