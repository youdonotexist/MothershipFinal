﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.CodeDom.Compiler.CodeGenerator
struct CodeGenerator_t1314328499;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.CodeDom.Compiler.CodeGenerator/Visitor
struct  Visitor_t2131414094  : public Il2CppObject
{
public:
	// System.CodeDom.Compiler.CodeGenerator System.CodeDom.Compiler.CodeGenerator/Visitor::g
	CodeGenerator_t1314328499 * ___g_0;

public:
	inline static int32_t get_offset_of_g_0() { return static_cast<int32_t>(offsetof(Visitor_t2131414094, ___g_0)); }
	inline CodeGenerator_t1314328499 * get_g_0() const { return ___g_0; }
	inline CodeGenerator_t1314328499 ** get_address_of_g_0() { return &___g_0; }
	inline void set_g_0(CodeGenerator_t1314328499 * value)
	{
		___g_0 = value;
		Il2CppCodeGenWriteBarrier(&___g_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
