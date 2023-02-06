#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// CI.RequestState
struct RequestState_t3083088548;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CI.Request
struct  Request_t91964849  : public Il2CppObject
{
public:
	// CI.RequestState CI.Request::requestState
	RequestState_t3083088548 * ___requestState_1;

public:
	inline static int32_t get_offset_of_requestState_1() { return static_cast<int32_t>(offsetof(Request_t91964849, ___requestState_1)); }
	inline RequestState_t3083088548 * get_requestState_1() const { return ___requestState_1; }
	inline RequestState_t3083088548 ** get_address_of_requestState_1() { return &___requestState_1; }
	inline void set_requestState_1(RequestState_t3083088548 * value)
	{
		___requestState_1 = value;
		Il2CppCodeGenWriteBarrier(&___requestState_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
