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

// System.Net.FtpStatus
struct FtpStatus_t955148094;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_FtpStatusCode1094090571.h"
#include "mscorlib_System_String968488902.h"

// System.Void System.Net.FtpStatus::.ctor(System.Net.FtpStatusCode,System.String)
extern "C"  void FtpStatus__ctor_m258616099 (FtpStatus_t955148094 * __this, int32_t ___statusCode, String_t* ___statusDescription, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.FtpStatusCode System.Net.FtpStatus::get_StatusCode()
extern "C"  int32_t FtpStatus_get_StatusCode_m806266466 (FtpStatus_t955148094 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.FtpStatus::get_StatusDescription()
extern "C"  String_t* FtpStatus_get_StatusDescription_m575693492 (FtpStatus_t955148094 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
