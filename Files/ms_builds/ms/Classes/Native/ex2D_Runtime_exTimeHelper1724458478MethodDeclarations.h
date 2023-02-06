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

#include "codegen/il2cpp-codegen.h"

// System.Int32 exTimeHelper::GetMinutes(System.Single)
extern "C"  int32_t exTimeHelper_GetMinutes_m3978748892 (Il2CppObject * __this /* static, unused */, float ____seconds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String exTimeHelper::ToString_Minutes(System.Single)
extern "C"  String_t* exTimeHelper_ToString_Minutes_m4178317862 (Il2CppObject * __this /* static, unused */, float ____seconds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String exTimeHelper::ToString_Seconds(System.Single)
extern "C"  String_t* exTimeHelper_ToString_Seconds_m1002631302 (Il2CppObject * __this /* static, unused */, float ____seconds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String exTimeHelper::ToString_Frames(System.Single,System.Single)
extern "C"  String_t* exTimeHelper_ToString_Frames_m145604110 (Il2CppObject * __this /* static, unused */, float ____seconds, float ____sampleRate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
