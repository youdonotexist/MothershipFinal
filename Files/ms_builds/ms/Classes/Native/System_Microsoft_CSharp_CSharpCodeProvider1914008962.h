﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.IDictionary`2<System.String,System.String>
struct IDictionary_2_t3781852593;

#include "System_System_CodeDom_Compiler_CodeDomProvider2210312563.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.CSharp.CSharpCodeProvider
struct  CSharpCodeProvider_t1914008962  : public CodeDomProvider_t2210312563
{
public:
	// System.Collections.Generic.IDictionary`2<System.String,System.String> Microsoft.CSharp.CSharpCodeProvider::providerOptions
	Il2CppObject* ___providerOptions_4;

public:
	inline static int32_t get_offset_of_providerOptions_4() { return static_cast<int32_t>(offsetof(CSharpCodeProvider_t1914008962, ___providerOptions_4)); }
	inline Il2CppObject* get_providerOptions_4() const { return ___providerOptions_4; }
	inline Il2CppObject** get_address_of_providerOptions_4() { return &___providerOptions_4; }
	inline void set_providerOptions_4(Il2CppObject* value)
	{
		___providerOptions_4 = value;
		Il2CppCodeGenWriteBarrier(&___providerOptions_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
