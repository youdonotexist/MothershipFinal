﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Object
struct Il2CppObject;
// Mono.Xml.Schema.XsdValidationState
struct XsdValidationState_t707140448;
// System.Collections.Stack
struct Stack_t1623036922;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Xml.Schema.XsdValidationContext
struct  XsdValidationContext_t2963160318  : public Il2CppObject
{
public:
	// System.Object Mono.Xml.Schema.XsdValidationContext::xsi_type
	Il2CppObject * ___xsi_type_0;
	// Mono.Xml.Schema.XsdValidationState Mono.Xml.Schema.XsdValidationContext::State
	XsdValidationState_t707140448 * ___State_1;
	// System.Collections.Stack Mono.Xml.Schema.XsdValidationContext::element_stack
	Stack_t1623036922 * ___element_stack_2;

public:
	inline static int32_t get_offset_of_xsi_type_0() { return static_cast<int32_t>(offsetof(XsdValidationContext_t2963160318, ___xsi_type_0)); }
	inline Il2CppObject * get_xsi_type_0() const { return ___xsi_type_0; }
	inline Il2CppObject ** get_address_of_xsi_type_0() { return &___xsi_type_0; }
	inline void set_xsi_type_0(Il2CppObject * value)
	{
		___xsi_type_0 = value;
		Il2CppCodeGenWriteBarrier(&___xsi_type_0, value);
	}

	inline static int32_t get_offset_of_State_1() { return static_cast<int32_t>(offsetof(XsdValidationContext_t2963160318, ___State_1)); }
	inline XsdValidationState_t707140448 * get_State_1() const { return ___State_1; }
	inline XsdValidationState_t707140448 ** get_address_of_State_1() { return &___State_1; }
	inline void set_State_1(XsdValidationState_t707140448 * value)
	{
		___State_1 = value;
		Il2CppCodeGenWriteBarrier(&___State_1, value);
	}

	inline static int32_t get_offset_of_element_stack_2() { return static_cast<int32_t>(offsetof(XsdValidationContext_t2963160318, ___element_stack_2)); }
	inline Stack_t1623036922 * get_element_stack_2() const { return ___element_stack_2; }
	inline Stack_t1623036922 ** get_address_of_element_stack_2() { return &___element_stack_2; }
	inline void set_element_stack_2(Stack_t1623036922 * value)
	{
		___element_stack_2 = value;
		Il2CppCodeGenWriteBarrier(&___element_stack_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
