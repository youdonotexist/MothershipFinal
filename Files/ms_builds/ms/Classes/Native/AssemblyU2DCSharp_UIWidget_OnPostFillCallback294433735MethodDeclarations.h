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

// UIWidget/OnPostFillCallback
struct OnPostFillCallback_t294433735;
// System.Object
struct Il2CppObject;
// UIWidget
struct UIWidget_t769069560;
// BetterList`1<UnityEngine.Vector3>
struct BetterList_1_t727330505;
// BetterList`1<UnityEngine.Vector2>
struct BetterList_1_t727330504;
// BetterList`1<UnityEngine.Color32>
struct BetterList_1_t1339084923;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "AssemblyU2DCSharp_UIWidget769069560.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void UIWidget/OnPostFillCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void OnPostFillCallback__ctor_m2088632341 (OnPostFillCallback_t294433735 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget/OnPostFillCallback::Invoke(UIWidget,System.Int32,BetterList`1<UnityEngine.Vector3>,BetterList`1<UnityEngine.Vector2>,BetterList`1<UnityEngine.Color32>)
extern "C"  void OnPostFillCallback_Invoke_m320025295 (OnPostFillCallback_t294433735 * __this, UIWidget_t769069560 * ___widget, int32_t ___bufferOffset, BetterList_1_t727330505 * ___verts, BetterList_1_t727330504 * ___uvs, BetterList_1_t1339084923 * ___cols, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UIWidget/OnPostFillCallback::BeginInvoke(UIWidget,System.Int32,BetterList`1<UnityEngine.Vector3>,BetterList`1<UnityEngine.Vector2>,BetterList`1<UnityEngine.Color32>,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * OnPostFillCallback_BeginInvoke_m387558244 (OnPostFillCallback_t294433735 * __this, UIWidget_t769069560 * ___widget, int32_t ___bufferOffset, BetterList_1_t727330505 * ___verts, BetterList_1_t727330504 * ___uvs, BetterList_1_t1339084923 * ___cols, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget/OnPostFillCallback::EndInvoke(System.IAsyncResult)
extern "C"  void OnPostFillCallback_EndInvoke_m2996225189 (OnPostFillCallback_t294433735 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
