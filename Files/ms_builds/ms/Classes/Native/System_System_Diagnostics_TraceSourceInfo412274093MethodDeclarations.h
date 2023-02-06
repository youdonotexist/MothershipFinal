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

// System.Diagnostics.TraceSourceInfo
struct TraceSourceInfo_t412274093;
// System.String
struct String_t;
// System.Diagnostics.TraceImplSettings
struct TraceImplSettings_t2187380583;
// System.Diagnostics.TraceListenerCollection
struct TraceListenerCollection_t4109843382;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "System_System_Diagnostics_SourceLevels131882185.h"
#include "System_System_Diagnostics_TraceImplSettings2187380583.h"

// System.Void System.Diagnostics.TraceSourceInfo::.ctor(System.String,System.Diagnostics.SourceLevels,System.Diagnostics.TraceImplSettings)
extern "C"  void TraceSourceInfo__ctor_m886015755 (TraceSourceInfo_t412274093 * __this, String_t* ___name, int32_t ___levels, TraceImplSettings_t2187380583 * ___settings, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Diagnostics.TraceSourceInfo::get_Name()
extern "C"  String_t* TraceSourceInfo_get_Name_m3892202316 (TraceSourceInfo_t412274093 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Diagnostics.TraceListenerCollection System.Diagnostics.TraceSourceInfo::get_Listeners()
extern "C"  TraceListenerCollection_t4109843382 * TraceSourceInfo_get_Listeners_m3279267578 (TraceSourceInfo_t412274093 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
