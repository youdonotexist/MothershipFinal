﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Net.Configuration.WebRequestModuleElementCollection
struct WebRequestModuleElementCollection_t4072233557;
// System.Net.Configuration.WebRequestModuleElement
struct WebRequestModuleElement_t586153431;
// System.String
struct String_t;
// System.Configuration.ConfigurationElement
struct ConfigurationElement_t3905177107;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_Configuration_WebRequestModuleEle586153431.h"
#include "mscorlib_System_String968488902.h"
#include "System_Configuration_System_Configuration_Configur3905177107.h"

// System.Void System.Net.Configuration.WebRequestModuleElementCollection::.ctor()
extern "C"  void WebRequestModuleElementCollection__ctor_m2031835889 (WebRequestModuleElementCollection_t4072233557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Configuration.WebRequestModuleElement System.Net.Configuration.WebRequestModuleElementCollection::get_Item(System.Int32)
extern "C"  WebRequestModuleElement_t586153431 * WebRequestModuleElementCollection_get_Item_m3810817938 (WebRequestModuleElementCollection_t4072233557 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.WebRequestModuleElementCollection::set_Item(System.Int32,System.Net.Configuration.WebRequestModuleElement)
extern "C"  void WebRequestModuleElementCollection_set_Item_m938747269 (WebRequestModuleElementCollection_t4072233557 * __this, int32_t ___index, WebRequestModuleElement_t586153431 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Configuration.WebRequestModuleElement System.Net.Configuration.WebRequestModuleElementCollection::get_Item(System.String)
extern "C"  WebRequestModuleElement_t586153431 * WebRequestModuleElementCollection_get_Item_m2627937505 (WebRequestModuleElementCollection_t4072233557 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.WebRequestModuleElementCollection::set_Item(System.String,System.Net.Configuration.WebRequestModuleElement)
extern "C"  void WebRequestModuleElementCollection_set_Item_m2129855962 (WebRequestModuleElementCollection_t4072233557 * __this, String_t* ___name, WebRequestModuleElement_t586153431 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.WebRequestModuleElementCollection::Add(System.Net.Configuration.WebRequestModuleElement)
extern "C"  void WebRequestModuleElementCollection_Add_m840230723 (WebRequestModuleElementCollection_t4072233557 * __this, WebRequestModuleElement_t586153431 * ___element, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.WebRequestModuleElementCollection::Clear()
extern "C"  void WebRequestModuleElementCollection_Clear_m3732936476 (WebRequestModuleElementCollection_t4072233557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationElement System.Net.Configuration.WebRequestModuleElementCollection::CreateNewElement()
extern "C"  ConfigurationElement_t3905177107 * WebRequestModuleElementCollection_CreateNewElement_m3292604001 (WebRequestModuleElementCollection_t4072233557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Net.Configuration.WebRequestModuleElementCollection::GetElementKey(System.Configuration.ConfigurationElement)
extern "C"  Il2CppObject * WebRequestModuleElementCollection_GetElementKey_m3327949410 (WebRequestModuleElementCollection_t4072233557 * __this, ConfigurationElement_t3905177107 * ___element, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Configuration.WebRequestModuleElementCollection::IndexOf(System.Net.Configuration.WebRequestModuleElement)
extern "C"  int32_t WebRequestModuleElementCollection_IndexOf_m3502500283 (WebRequestModuleElementCollection_t4072233557 * __this, WebRequestModuleElement_t586153431 * ___element, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.WebRequestModuleElementCollection::Remove(System.Net.Configuration.WebRequestModuleElement)
extern "C"  void WebRequestModuleElementCollection_Remove_m379596938 (WebRequestModuleElementCollection_t4072233557 * __this, WebRequestModuleElement_t586153431 * ___element, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.WebRequestModuleElementCollection::Remove(System.String)
extern "C"  void WebRequestModuleElementCollection_Remove_m1230454059 (WebRequestModuleElementCollection_t4072233557 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.WebRequestModuleElementCollection::RemoveAt(System.Int32)
extern "C"  void WebRequestModuleElementCollection_RemoveAt_m3665179547 (WebRequestModuleElementCollection_t4072233557 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
