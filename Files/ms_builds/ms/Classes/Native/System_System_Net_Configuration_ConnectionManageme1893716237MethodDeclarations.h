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

// System.Net.Configuration.ConnectionManagementData
struct ConnectionManagementData_t1893716237;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_String968488902.h"

// System.Void System.Net.Configuration.ConnectionManagementData::.ctor(System.Object)
extern "C"  void ConnectionManagementData__ctor_m3402608605 (ConnectionManagementData_t1893716237 * __this, Il2CppObject * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.ConnectionManagementData::Add(System.String,System.Int32)
extern "C"  void ConnectionManagementData_Add_m935003947 (ConnectionManagementData_t1893716237 * __this, String_t* ___address, int32_t ___nconns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Net.Configuration.ConnectionManagementData::GetMaxConnections(System.String)
extern "C"  uint32_t ConnectionManagementData_GetMaxConnections_m3353130379 (ConnectionManagementData_t1893716237 * __this, String_t* ___hostOrIP, const MethodInfo* method) IL2CPP_METHOD_ATTR;
