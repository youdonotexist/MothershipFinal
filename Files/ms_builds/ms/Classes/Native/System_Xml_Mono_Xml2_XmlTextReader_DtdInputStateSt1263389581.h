#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Stack
struct Stack_t1623036922;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Xml2.XmlTextReader/DtdInputStateStack
struct  DtdInputStateStack_t1263389581  : public Il2CppObject
{
public:
	// System.Collections.Stack Mono.Xml2.XmlTextReader/DtdInputStateStack::intern
	Stack_t1623036922 * ___intern_0;

public:
	inline static int32_t get_offset_of_intern_0() { return static_cast<int32_t>(offsetof(DtdInputStateStack_t1263389581, ___intern_0)); }
	inline Stack_t1623036922 * get_intern_0() const { return ___intern_0; }
	inline Stack_t1623036922 ** get_address_of_intern_0() { return &___intern_0; }
	inline void set_intern_0(Stack_t1623036922 * value)
	{
		___intern_0 = value;
		Il2CppCodeGenWriteBarrier(&___intern_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
