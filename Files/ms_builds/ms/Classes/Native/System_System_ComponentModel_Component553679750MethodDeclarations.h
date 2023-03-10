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

// System.ComponentModel.Component
struct Component_t553679750;
// System.EventHandler
struct EventHandler_t247020293;
// System.ComponentModel.ISite
struct ISite_t19613145;
// System.ComponentModel.EventHandlerList
struct EventHandlerList_t120044247;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_EventHandler247020293.h"

// System.Void System.ComponentModel.Component::.ctor()
extern "C"  void Component__ctor_m953686032 (Component_t553679750 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.Component::add_Disposed(System.EventHandler)
extern "C"  void Component_add_Disposed_m4046465868 (Component_t553679750 * __this, EventHandler_t247020293 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.Component::remove_Disposed(System.EventHandler)
extern "C"  void Component_remove_Disposed_m1869009077 (Component_t553679750 * __this, EventHandler_t247020293 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.ISite System.ComponentModel.Component::get_Site()
extern "C"  Il2CppObject * Component_get_Site_m577153182 (Component_t553679750 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.EventHandlerList System.ComponentModel.Component::get_Events()
extern "C"  EventHandlerList_t120044247 * Component_get_Events_m1559028808 (Component_t553679750 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.Component::Finalize()
extern "C"  void Component_Finalize_m154422866 (Component_t553679750 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.Component::Dispose()
extern "C"  void Component_Dispose_m1562525773 (Component_t553679750 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.Component::Dispose(System.Boolean)
extern "C"  void Component_Dispose_m2643979012 (Component_t553679750 * __this, bool ___release_all, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.Component::ToString()
extern "C"  String_t* Component_ToString_m91155165 (Component_t553679750 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
