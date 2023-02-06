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

// MA_SampleICustomEventReceiver
struct MA_SampleICustomEventReceiver_t3676003844;
// System.String
struct String_t;
// System.Collections.Generic.IList`1<DarkTonic.MasterAudio.AudioEventGroup>
struct IList_1_t3287142052;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

// System.Void MA_SampleICustomEventReceiver::.ctor()
extern "C"  void MA_SampleICustomEventReceiver__ctor_m300922855 (MA_SampleICustomEventReceiver_t3676003844 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MA_SampleICustomEventReceiver::Awake()
extern "C"  void MA_SampleICustomEventReceiver_Awake_m538528074 (MA_SampleICustomEventReceiver_t3676003844 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MA_SampleICustomEventReceiver::Start()
extern "C"  void MA_SampleICustomEventReceiver_Start_m3543027943 (MA_SampleICustomEventReceiver_t3676003844 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MA_SampleICustomEventReceiver::OnEnable()
extern "C"  void MA_SampleICustomEventReceiver_OnEnable_m3267605055 (MA_SampleICustomEventReceiver_t3676003844 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MA_SampleICustomEventReceiver::OnDisable()
extern "C"  void MA_SampleICustomEventReceiver_OnDisable_m2952446158 (MA_SampleICustomEventReceiver_t3676003844 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MA_SampleICustomEventReceiver::CheckForIllegalCustomEvents()
extern "C"  void MA_SampleICustomEventReceiver_CheckForIllegalCustomEvents_m821183588 (MA_SampleICustomEventReceiver_t3676003844 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MA_SampleICustomEventReceiver::ReceiveEvent(System.String,UnityEngine.Vector3)
extern "C"  void MA_SampleICustomEventReceiver_ReceiveEvent_m1592279521 (MA_SampleICustomEventReceiver_t3676003844 * __this, String_t* ___customEventName, Vector3_t3525329789  ___originPoint, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MA_SampleICustomEventReceiver::SubscribesToEvent(System.String)
extern "C"  bool MA_SampleICustomEventReceiver_SubscribesToEvent_m3573421043 (MA_SampleICustomEventReceiver_t3676003844 * __this, String_t* ___customEventName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MA_SampleICustomEventReceiver::RegisterReceiver()
extern "C"  void MA_SampleICustomEventReceiver_RegisterReceiver_m2802321327 (MA_SampleICustomEventReceiver_t3676003844 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MA_SampleICustomEventReceiver::UnregisterReceiver()
extern "C"  void MA_SampleICustomEventReceiver_UnregisterReceiver_m3960181512 (MA_SampleICustomEventReceiver_t3676003844 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<DarkTonic.MasterAudio.AudioEventGroup> MA_SampleICustomEventReceiver::GetAllEvents()
extern "C"  Il2CppObject* MA_SampleICustomEventReceiver_GetAllEvents_m182097109 (MA_SampleICustomEventReceiver_t3676003844 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
