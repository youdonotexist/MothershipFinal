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

// System.Collections.Generic.Dictionary`2<System.String,System.String[]>
struct Dictionary_2_t299600851;
// System.String[]
struct StringU5BU5D_t2956870243;
// System.String
struct String_t;
// UnityEngine.TextAsset
struct TextAsset_t2461560304;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// BetterList`1<System.String>
struct BetterList_1_t2465456914;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t2606186806;
// System.Object[]
struct ObjectU5BU5D_t11523773;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_UnityEngine_TextAsset2461560304.h"

// System.Void Localization::.cctor()
extern "C"  void Localization__cctor_m1191965675 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.String[]> Localization::get_dictionary()
extern "C"  Dictionary_2_t299600851 * Localization_get_dictionary_m2295583953 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Localization::set_dictionary(System.Collections.Generic.Dictionary`2<System.String,System.String[]>)
extern "C"  void Localization_set_dictionary_m2122357832 (Il2CppObject * __this /* static, unused */, Dictionary_2_t299600851 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] Localization::get_knownLanguages()
extern "C"  StringU5BU5D_t2956870243* Localization_get_knownLanguages_m431207172 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Localization::get_language()
extern "C"  String_t* Localization_get_language_m4046813542 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Localization::set_language(System.String)
extern "C"  void Localization_set_language_m411704107 (Il2CppObject * __this /* static, unused */, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Localization::LoadDictionary(System.String)
extern "C"  bool Localization_LoadDictionary_m3777629616 (Il2CppObject * __this /* static, unused */, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Localization::LoadAndSelect(System.String)
extern "C"  bool Localization_LoadAndSelect_m1822437257 (Il2CppObject * __this /* static, unused */, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Localization::Load(UnityEngine.TextAsset)
extern "C"  void Localization_Load_m4202658910 (Il2CppObject * __this /* static, unused */, TextAsset_t2461560304 * ___asset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Localization::Set(System.String,System.Byte[])
extern "C"  void Localization_Set_m3157847683 (Il2CppObject * __this /* static, unused */, String_t* ___languageName, ByteU5BU5D_t58506160* ___bytes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Localization::LoadCSV(UnityEngine.TextAsset)
extern "C"  bool Localization_LoadCSV_m1800126426 (Il2CppObject * __this /* static, unused */, TextAsset_t2461560304 * ___asset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Localization::LoadCSV(System.Byte[])
extern "C"  bool Localization_LoadCSV_m1405581277 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t58506160* ___bytes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Localization::LoadCSV(System.Byte[],UnityEngine.TextAsset)
extern "C"  bool Localization_LoadCSV_m3765620509 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t58506160* ___bytes, TextAsset_t2461560304 * ___asset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Localization::SelectLanguage(System.String)
extern "C"  bool Localization_SelectLanguage_m3438398552 (Il2CppObject * __this /* static, unused */, String_t* ___language, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Localization::AddCSV(BetterList`1<System.String>)
extern "C"  void Localization_AddCSV_m546998784 (Il2CppObject * __this /* static, unused */, BetterList_1_t2465456914 * ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Localization::Set(System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C"  void Localization_Set_m3679996727 (Il2CppObject * __this /* static, unused */, String_t* ___languageName, Dictionary_2_t2606186806 * ___dictionary, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Localization::Get(System.String)
extern "C"  String_t* Localization_Get_m2079644207 (Il2CppObject * __this /* static, unused */, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Localization::Format(System.String,System.Object[])
extern "C"  String_t* Localization_Format_m3071416850 (Il2CppObject * __this /* static, unused */, String_t* ___key, ObjectU5BU5D_t11523773* ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Localization::get_isActive()
extern "C"  bool Localization_get_isActive_m1111783919 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Localization::Localize(System.String)
extern "C"  String_t* Localization_Localize_m976395348 (Il2CppObject * __this /* static, unused */, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Localization::Exists(System.String)
extern "C"  bool Localization_Exists_m739235440 (Il2CppObject * __this /* static, unused */, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
