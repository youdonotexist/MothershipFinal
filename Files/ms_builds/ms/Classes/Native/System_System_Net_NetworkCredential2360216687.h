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

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkCredential
struct  NetworkCredential_t2360216687  : public Il2CppObject
{
public:
	// System.String System.Net.NetworkCredential::userName
	String_t* ___userName_0;
	// System.String System.Net.NetworkCredential::password
	String_t* ___password_1;
	// System.String System.Net.NetworkCredential::domain
	String_t* ___domain_2;

public:
	inline static int32_t get_offset_of_userName_0() { return static_cast<int32_t>(offsetof(NetworkCredential_t2360216687, ___userName_0)); }
	inline String_t* get_userName_0() const { return ___userName_0; }
	inline String_t** get_address_of_userName_0() { return &___userName_0; }
	inline void set_userName_0(String_t* value)
	{
		___userName_0 = value;
		Il2CppCodeGenWriteBarrier(&___userName_0, value);
	}

	inline static int32_t get_offset_of_password_1() { return static_cast<int32_t>(offsetof(NetworkCredential_t2360216687, ___password_1)); }
	inline String_t* get_password_1() const { return ___password_1; }
	inline String_t** get_address_of_password_1() { return &___password_1; }
	inline void set_password_1(String_t* value)
	{
		___password_1 = value;
		Il2CppCodeGenWriteBarrier(&___password_1, value);
	}

	inline static int32_t get_offset_of_domain_2() { return static_cast<int32_t>(offsetof(NetworkCredential_t2360216687, ___domain_2)); }
	inline String_t* get_domain_2() const { return ___domain_2; }
	inline String_t** get_address_of_domain_2() { return &___domain_2; }
	inline void set_domain_2(String_t* value)
	{
		___domain_2 = value;
		Il2CppCodeGenWriteBarrier(&___domain_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
