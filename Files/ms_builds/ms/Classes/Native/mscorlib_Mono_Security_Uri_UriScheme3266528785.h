#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "mscorlib_System_ValueType4014882752.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Uri/UriScheme
struct  UriScheme_t3266528785 
{
public:
	// System.String Mono.Security.Uri/UriScheme::scheme
	String_t* ___scheme_0;
	// System.String Mono.Security.Uri/UriScheme::delimiter
	String_t* ___delimiter_1;
	// System.Int32 Mono.Security.Uri/UriScheme::defaultPort
	int32_t ___defaultPort_2;

public:
	inline static int32_t get_offset_of_scheme_0() { return static_cast<int32_t>(offsetof(UriScheme_t3266528785, ___scheme_0)); }
	inline String_t* get_scheme_0() const { return ___scheme_0; }
	inline String_t** get_address_of_scheme_0() { return &___scheme_0; }
	inline void set_scheme_0(String_t* value)
	{
		___scheme_0 = value;
		Il2CppCodeGenWriteBarrier(&___scheme_0, value);
	}

	inline static int32_t get_offset_of_delimiter_1() { return static_cast<int32_t>(offsetof(UriScheme_t3266528785, ___delimiter_1)); }
	inline String_t* get_delimiter_1() const { return ___delimiter_1; }
	inline String_t** get_address_of_delimiter_1() { return &___delimiter_1; }
	inline void set_delimiter_1(String_t* value)
	{
		___delimiter_1 = value;
		Il2CppCodeGenWriteBarrier(&___delimiter_1, value);
	}

	inline static int32_t get_offset_of_defaultPort_2() { return static_cast<int32_t>(offsetof(UriScheme_t3266528785, ___defaultPort_2)); }
	inline int32_t get_defaultPort_2() const { return ___defaultPort_2; }
	inline int32_t* get_address_of_defaultPort_2() { return &___defaultPort_2; }
	inline void set_defaultPort_2(int32_t value)
	{
		___defaultPort_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: Mono.Security.Uri/UriScheme
struct UriScheme_t3266528785_marshaled_pinvoke
{
	char* ___scheme_0;
	char* ___delimiter_1;
	int32_t ___defaultPort_2;
};
// Native definition for marshalling of: Mono.Security.Uri/UriScheme
struct UriScheme_t3266528785_marshaled_com
{
	uint16_t* ___scheme_0;
	uint16_t* ___delimiter_1;
	int32_t ___defaultPort_2;
};
