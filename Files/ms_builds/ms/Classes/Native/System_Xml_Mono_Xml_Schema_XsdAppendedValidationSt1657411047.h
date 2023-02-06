#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Mono.Xml.Schema.XsdValidationState
struct XsdValidationState_t707140448;

#include "System_Xml_Mono_Xml_Schema_XsdValidationState707140448.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Xml.Schema.XsdAppendedValidationState
struct  XsdAppendedValidationState_t1657411047  : public XsdValidationState_t707140448
{
public:
	// Mono.Xml.Schema.XsdValidationState Mono.Xml.Schema.XsdAppendedValidationState::head
	XsdValidationState_t707140448 * ___head_3;
	// Mono.Xml.Schema.XsdValidationState Mono.Xml.Schema.XsdAppendedValidationState::rest
	XsdValidationState_t707140448 * ___rest_4;

public:
	inline static int32_t get_offset_of_head_3() { return static_cast<int32_t>(offsetof(XsdAppendedValidationState_t1657411047, ___head_3)); }
	inline XsdValidationState_t707140448 * get_head_3() const { return ___head_3; }
	inline XsdValidationState_t707140448 ** get_address_of_head_3() { return &___head_3; }
	inline void set_head_3(XsdValidationState_t707140448 * value)
	{
		___head_3 = value;
		Il2CppCodeGenWriteBarrier(&___head_3, value);
	}

	inline static int32_t get_offset_of_rest_4() { return static_cast<int32_t>(offsetof(XsdAppendedValidationState_t1657411047, ___rest_4)); }
	inline XsdValidationState_t707140448 * get_rest_4() const { return ___rest_4; }
	inline XsdValidationState_t707140448 ** get_address_of_rest_4() { return &___rest_4; }
	inline void set_rest_4(XsdValidationState_t707140448 * value)
	{
		___rest_4 = value;
		Il2CppCodeGenWriteBarrier(&___rest_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
