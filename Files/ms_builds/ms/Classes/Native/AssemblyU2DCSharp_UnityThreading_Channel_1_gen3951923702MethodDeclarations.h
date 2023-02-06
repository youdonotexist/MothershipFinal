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

// UnityThreading.Channel`1<System.Object>
struct Channel_1_t3951923702;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"

// System.Void UnityThreading.Channel`1<System.Object>::.ctor()
extern "C"  void Channel_1__ctor_m732235288_gshared (Channel_1_t3951923702 * __this, const MethodInfo* method);
#define Channel_1__ctor_m732235288(__this, method) ((  void (*) (Channel_1_t3951923702 *, const MethodInfo*))Channel_1__ctor_m732235288_gshared)(__this, method)
// System.Void UnityThreading.Channel`1<System.Object>::.ctor(System.Int32)
extern "C"  void Channel_1__ctor_m1629640553_gshared (Channel_1_t3951923702 * __this, int32_t ___bufferSize, const MethodInfo* method);
#define Channel_1__ctor_m1629640553(__this, ___bufferSize, method) ((  void (*) (Channel_1_t3951923702 *, int32_t, const MethodInfo*))Channel_1__ctor_m1629640553_gshared)(__this, ___bufferSize, method)
// System.Int32 UnityThreading.Channel`1<System.Object>::get_BufferSize()
extern "C"  int32_t Channel_1_get_BufferSize_m2552915592_gshared (Channel_1_t3951923702 * __this, const MethodInfo* method);
#define Channel_1_get_BufferSize_m2552915592(__this, method) ((  int32_t (*) (Channel_1_t3951923702 *, const MethodInfo*))Channel_1_get_BufferSize_m2552915592_gshared)(__this, method)
// System.Void UnityThreading.Channel`1<System.Object>::set_BufferSize(System.Int32)
extern "C"  void Channel_1_set_BufferSize_m1220510107_gshared (Channel_1_t3951923702 * __this, int32_t ___value, const MethodInfo* method);
#define Channel_1_set_BufferSize_m1220510107(__this, ___value, method) ((  void (*) (Channel_1_t3951923702 *, int32_t, const MethodInfo*))Channel_1_set_BufferSize_m1220510107_gshared)(__this, ___value, method)
// System.Void UnityThreading.Channel`1<System.Object>::Finalize()
extern "C"  void Channel_1_Finalize_m4280042314_gshared (Channel_1_t3951923702 * __this, const MethodInfo* method);
#define Channel_1_Finalize_m4280042314(__this, method) ((  void (*) (Channel_1_t3951923702 *, const MethodInfo*))Channel_1_Finalize_m4280042314_gshared)(__this, method)
// System.Void UnityThreading.Channel`1<System.Object>::Resize(System.Int32)
extern "C"  void Channel_1_Resize_m1795992177_gshared (Channel_1_t3951923702 * __this, int32_t ___newBufferSize, const MethodInfo* method);
#define Channel_1_Resize_m1795992177(__this, ___newBufferSize, method) ((  void (*) (Channel_1_t3951923702 *, int32_t, const MethodInfo*))Channel_1_Resize_m1795992177_gshared)(__this, ___newBufferSize, method)
// System.Boolean UnityThreading.Channel`1<System.Object>::Set(T)
extern "C"  bool Channel_1_Set_m2417988306_gshared (Channel_1_t3951923702 * __this, Il2CppObject * ___value, const MethodInfo* method);
#define Channel_1_Set_m2417988306(__this, ___value, method) ((  bool (*) (Channel_1_t3951923702 *, Il2CppObject *, const MethodInfo*))Channel_1_Set_m2417988306_gshared)(__this, ___value, method)
// System.Boolean UnityThreading.Channel`1<System.Object>::Set(T,System.Int32)
extern "C"  bool Channel_1_Set_m2387619653_gshared (Channel_1_t3951923702 * __this, Il2CppObject * ___value, int32_t ___timeoutInMilliseconds, const MethodInfo* method);
#define Channel_1_Set_m2387619653(__this, ___value, ___timeoutInMilliseconds, method) ((  bool (*) (Channel_1_t3951923702 *, Il2CppObject *, int32_t, const MethodInfo*))Channel_1_Set_m2387619653_gshared)(__this, ___value, ___timeoutInMilliseconds, method)
// T UnityThreading.Channel`1<System.Object>::Get()
extern "C"  Il2CppObject * Channel_1_Get_m70806411_gshared (Channel_1_t3951923702 * __this, const MethodInfo* method);
#define Channel_1_Get_m70806411(__this, method) ((  Il2CppObject * (*) (Channel_1_t3951923702 *, const MethodInfo*))Channel_1_Get_m70806411_gshared)(__this, method)
// T UnityThreading.Channel`1<System.Object>::Get(System.Int32,T)
extern "C"  Il2CppObject * Channel_1_Get_m1807324916_gshared (Channel_1_t3951923702 * __this, int32_t ___timeoutInMilliseconds, Il2CppObject * ___defaultValue, const MethodInfo* method);
#define Channel_1_Get_m1807324916(__this, ___timeoutInMilliseconds, ___defaultValue, method) ((  Il2CppObject * (*) (Channel_1_t3951923702 *, int32_t, Il2CppObject *, const MethodInfo*))Channel_1_Get_m1807324916_gshared)(__this, ___timeoutInMilliseconds, ___defaultValue, method)
// System.Void UnityThreading.Channel`1<System.Object>::Close()
extern "C"  void Channel_1_Close_m2443094830_gshared (Channel_1_t3951923702 * __this, const MethodInfo* method);
#define Channel_1_Close_m2443094830(__this, method) ((  void (*) (Channel_1_t3951923702 *, const MethodInfo*))Channel_1_Close_m2443094830_gshared)(__this, method)
// System.Void UnityThreading.Channel`1<System.Object>::Dispose()
extern "C"  void Channel_1_Dispose_m3496725589_gshared (Channel_1_t3951923702 * __this, const MethodInfo* method);
#define Channel_1_Dispose_m3496725589(__this, method) ((  void (*) (Channel_1_t3951923702 *, const MethodInfo*))Channel_1_Dispose_m3496725589_gshared)(__this, method)
