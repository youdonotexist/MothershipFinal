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

// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Nullable_1_gen3844246929.h"
#include "mscorlib_System_Nullable_1_gen3097043249.h"

// System.Void DarkTonic.MasterAudio.PersistentAudioSettings::SetBusVolume(System.String,System.Single)
extern "C"  void PersistentAudioSettings_SetBusVolume_m3911872197 (Il2CppObject * __this /* static, unused */, String_t* ___busName, float ___vol, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String DarkTonic.MasterAudio.PersistentAudioSettings::get_BusesUpdatedKeys()
extern "C"  String_t* PersistentAudioSettings_get_BusesUpdatedKeys_m1613848625 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.PersistentAudioSettings::set_BusesUpdatedKeys(System.String)
extern "C"  void PersistentAudioSettings_set_BusesUpdatedKeys_m1179571226 (Il2CppObject * __this /* static, unused */, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String DarkTonic.MasterAudio.PersistentAudioSettings::MakeBusKey(System.String)
extern "C"  String_t* PersistentAudioSettings_MakeBusKey_m3775741006 (Il2CppObject * __this /* static, unused */, String_t* ___busName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Single> DarkTonic.MasterAudio.PersistentAudioSettings::GetBusVolume(System.String)
extern "C"  Nullable_1_t3844246929  PersistentAudioSettings_GetBusVolume_m1125359567 (Il2CppObject * __this /* static, unused */, String_t* ___busName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String DarkTonic.MasterAudio.PersistentAudioSettings::GetGroupKey(System.String)
extern "C"  String_t* PersistentAudioSettings_GetGroupKey_m3039611825 (Il2CppObject * __this /* static, unused */, String_t* ___groupName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String DarkTonic.MasterAudio.PersistentAudioSettings::get_GroupsUpdatedKeys()
extern "C"  String_t* PersistentAudioSettings_get_GroupsUpdatedKeys_m2216880333 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.PersistentAudioSettings::set_GroupsUpdatedKeys(System.String)
extern "C"  void PersistentAudioSettings_set_GroupsUpdatedKeys_m3544376012 (Il2CppObject * __this /* static, unused */, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.PersistentAudioSettings::SetGroupVolume(System.String,System.Single)
extern "C"  void PersistentAudioSettings_SetGroupVolume_m1934836774 (Il2CppObject * __this /* static, unused */, String_t* ___grpName, float ___vol, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Single> DarkTonic.MasterAudio.PersistentAudioSettings::GetGroupVolume(System.String)
extern "C"  Nullable_1_t3844246929  PersistentAudioSettings_GetGroupVolume_m3104817968 (Il2CppObject * __this /* static, unused */, String_t* ___grpName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Boolean> DarkTonic.MasterAudio.PersistentAudioSettings::get_MixerMuted()
extern "C"  Nullable_1_t3097043249  PersistentAudioSettings_get_MixerMuted_m1341521900 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.PersistentAudioSettings::set_MixerMuted(System.Nullable`1<System.Boolean>)
extern "C"  void PersistentAudioSettings_set_MixerMuted_m3544429439 (Il2CppObject * __this /* static, unused */, Nullable_1_t3097043249  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Single> DarkTonic.MasterAudio.PersistentAudioSettings::get_MixerVolume()
extern "C"  Nullable_1_t3844246929  PersistentAudioSettings_get_MixerVolume_m2916001229 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.PersistentAudioSettings::set_MixerVolume(System.Nullable`1<System.Single>)
extern "C"  void PersistentAudioSettings_set_MixerVolume_m4208436252 (Il2CppObject * __this /* static, unused */, Nullable_1_t3844246929  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Boolean> DarkTonic.MasterAudio.PersistentAudioSettings::get_MusicMuted()
extern "C"  Nullable_1_t3097043249  PersistentAudioSettings_get_MusicMuted_m3223275088 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.PersistentAudioSettings::set_MusicMuted(System.Nullable`1<System.Boolean>)
extern "C"  void PersistentAudioSettings_set_MusicMuted_m1547946395 (Il2CppObject * __this /* static, unused */, Nullable_1_t3097043249  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Single> DarkTonic.MasterAudio.PersistentAudioSettings::get_MusicVolume()
extern "C"  Nullable_1_t3844246929  PersistentAudioSettings_get_MusicVolume_m1120807913 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.PersistentAudioSettings::set_MusicVolume(System.Nullable`1<System.Single>)
extern "C"  void PersistentAudioSettings_set_MusicVolume_m2211953208 (Il2CppObject * __this /* static, unused */, Nullable_1_t3844246929  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.PersistentAudioSettings::RestoreMasterSettings()
extern "C"  void PersistentAudioSettings_RestoreMasterSettings_m3015577931 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
