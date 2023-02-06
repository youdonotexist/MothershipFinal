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
// System.Delegate
struct Delegate_t3660574010;
// Messenger/BroadcastException
struct BroadcastException_t956763310;
// Callback
struct Callback_t4187391078;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Delegate3660574010.h"
#include "AssemblyU2DCSharp_Callback4187391077.h"

// System.Void Messenger::.cctor()
extern "C"  void Messenger__cctor_m3534842581 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Messenger::MarkAsPermanent(System.String)
extern "C"  void Messenger_MarkAsPermanent_m1013212317 (Il2CppObject * __this /* static, unused */, String_t* ___eventType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Messenger::Cleanup()
extern "C"  void Messenger_Cleanup_m2639811930 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Messenger::PrintEventTable()
extern "C"  void Messenger_PrintEventTable_m3351339607 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Messenger::OnListenerAdding(System.String,System.Delegate)
extern "C"  void Messenger_OnListenerAdding_m1024390442 (Il2CppObject * __this /* static, unused */, String_t* ___eventType, Delegate_t3660574010 * ___listenerBeingAdded, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Messenger::OnListenerRemoving(System.String,System.Delegate)
extern "C"  void Messenger_OnListenerRemoving_m472380426 (Il2CppObject * __this /* static, unused */, String_t* ___eventType, Delegate_t3660574010 * ___listenerBeingRemoved, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Messenger::OnListenerRemoved(System.String)
extern "C"  void Messenger_OnListenerRemoved_m3704999039 (Il2CppObject * __this /* static, unused */, String_t* ___eventType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Messenger::OnBroadcasting(System.String)
extern "C"  void Messenger_OnBroadcasting_m1174164182 (Il2CppObject * __this /* static, unused */, String_t* ___eventType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Messenger/BroadcastException Messenger::CreateBroadcastSignatureException(System.String)
extern "C"  BroadcastException_t956763310 * Messenger_CreateBroadcastSignatureException_m3592598845 (Il2CppObject * __this /* static, unused */, String_t* ___eventType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Messenger::AddListener(System.String,Callback)
extern "C"  void Messenger_AddListener_m487090474 (Il2CppObject * __this /* static, unused */, String_t* ___eventType, Callback_t4187391078 * ___handler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Messenger::RemoveListener(System.String,Callback)
extern "C"  void Messenger_RemoveListener_m2110109699 (Il2CppObject * __this /* static, unused */, String_t* ___eventType, Callback_t4187391078 * ___handler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Messenger::Broadcast(System.String)
extern "C"  void Messenger_Broadcast_m2211605867 (Il2CppObject * __this /* static, unused */, String_t* ___eventType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
