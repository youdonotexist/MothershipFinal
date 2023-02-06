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

// DarkTonic.MasterAudio.GroupBus
struct GroupBus_t3345035600;

#include "codegen/il2cpp-codegen.h"

// System.Void DarkTonic.MasterAudio.GroupBus::.ctor()
extern "C"  void GroupBus__ctor_m3743609129 (GroupBus_t3345035600 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.GroupBus::AddActiveAudioSourceId(System.Int32)
extern "C"  void GroupBus_AddActiveAudioSourceId_m4030451025 (GroupBus_t3345035600 * __this, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.GroupBus::RemoveActiveAudioSourceId(System.Int32)
extern "C"  void GroupBus_RemoveActiveAudioSourceId_m4088042138 (GroupBus_t3345035600 * __this, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 DarkTonic.MasterAudio.GroupBus::get_ActiveVoices()
extern "C"  int32_t GroupBus_get_ActiveVoices_m2472840441 (GroupBus_t3345035600 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DarkTonic.MasterAudio.GroupBus::get_BusVoiceLimitReached()
extern "C"  bool GroupBus_get_BusVoiceLimitReached_m1487084865 (GroupBus_t3345035600 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
