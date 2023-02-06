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

// PID
struct PID_t79211;

#include "codegen/il2cpp-codegen.h"

// System.Void PID::.ctor()
extern "C"  void PID__ctor_m3160249952 (PID_t79211 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PID::OnGUI()
extern "C"  void PID_OnGUI_m2655648602 (PID_t79211 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single PID::GetOutput(System.Single,System.Single)
extern "C"  float PID_GetOutput_m562018479 (PID_t79211 * __this, float ___currentError, float ___deltaTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
