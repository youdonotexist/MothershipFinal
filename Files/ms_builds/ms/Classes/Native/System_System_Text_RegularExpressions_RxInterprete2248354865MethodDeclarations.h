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

// System.Text.RegularExpressions.RxInterpreterFactory
struct RxInterpreterFactory_t2248354865;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.Text.RegularExpressions.EvalDelegate
struct EvalDelegate_t3818891356;
// System.Text.RegularExpressions.IMachine
struct IMachine_t294675897;
// System.Collections.IDictionary
struct IDictionary_t1654916945;
// System.String[]
struct StringU5BU5D_t2956870243;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Text_RegularExpressions_EvalDelegate3818891356.h"

// System.Void System.Text.RegularExpressions.RxInterpreterFactory::.ctor(System.Byte[],System.Text.RegularExpressions.EvalDelegate)
extern "C"  void RxInterpreterFactory__ctor_m4184249152 (RxInterpreterFactory_t2248354865 * __this, ByteU5BU5D_t58506160* ___program, EvalDelegate_t3818891356 * ___eval_del, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.IMachine System.Text.RegularExpressions.RxInterpreterFactory::NewInstance()
extern "C"  Il2CppObject * RxInterpreterFactory_NewInstance_m774969858 (RxInterpreterFactory_t2248354865 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.RxInterpreterFactory::get_GroupCount()
extern "C"  int32_t RxInterpreterFactory_get_GroupCount_m2211164358 (RxInterpreterFactory_t2248354865 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.RxInterpreterFactory::get_Gap()
extern "C"  int32_t RxInterpreterFactory_get_Gap_m3459092994 (RxInterpreterFactory_t2248354865 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxInterpreterFactory::set_Gap(System.Int32)
extern "C"  void RxInterpreterFactory_set_Gap_m3740629551 (RxInterpreterFactory_t2248354865 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionary System.Text.RegularExpressions.RxInterpreterFactory::get_Mapping()
extern "C"  Il2CppObject * RxInterpreterFactory_get_Mapping_m1004615138 (RxInterpreterFactory_t2248354865 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxInterpreterFactory::set_Mapping(System.Collections.IDictionary)
extern "C"  void RxInterpreterFactory_set_Mapping_m3398113871 (RxInterpreterFactory_t2248354865 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Text.RegularExpressions.RxInterpreterFactory::get_NamesMapping()
extern "C"  StringU5BU5D_t2956870243* RxInterpreterFactory_get_NamesMapping_m419886827 (RxInterpreterFactory_t2248354865 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxInterpreterFactory::set_NamesMapping(System.String[])
extern "C"  void RxInterpreterFactory_set_NamesMapping_m3855838560 (RxInterpreterFactory_t2248354865 * __this, StringU5BU5D_t2956870243* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
