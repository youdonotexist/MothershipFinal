#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// MessengerHelper
struct MessengerHelper_t628528257;
// System.Collections.Generic.Dictionary`2<System.String,System.Delegate>
struct Dictionary_2_t1003304618;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1765447871;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Messenger
struct  Messenger_t567859955  : public Il2CppObject
{
public:

public:
};

struct Messenger_t567859955_StaticFields
{
public:
	// MessengerHelper Messenger::messengerHelper
	MessengerHelper_t628528257 * ___messengerHelper_0;
	// System.Collections.Generic.Dictionary`2<System.String,System.Delegate> Messenger::eventTable
	Dictionary_2_t1003304618 * ___eventTable_1;
	// System.Collections.Generic.List`1<System.String> Messenger::permanentMessages
	List_1_t1765447871 * ___permanentMessages_2;

public:
	inline static int32_t get_offset_of_messengerHelper_0() { return static_cast<int32_t>(offsetof(Messenger_t567859955_StaticFields, ___messengerHelper_0)); }
	inline MessengerHelper_t628528257 * get_messengerHelper_0() const { return ___messengerHelper_0; }
	inline MessengerHelper_t628528257 ** get_address_of_messengerHelper_0() { return &___messengerHelper_0; }
	inline void set_messengerHelper_0(MessengerHelper_t628528257 * value)
	{
		___messengerHelper_0 = value;
		Il2CppCodeGenWriteBarrier(&___messengerHelper_0, value);
	}

	inline static int32_t get_offset_of_eventTable_1() { return static_cast<int32_t>(offsetof(Messenger_t567859955_StaticFields, ___eventTable_1)); }
	inline Dictionary_2_t1003304618 * get_eventTable_1() const { return ___eventTable_1; }
	inline Dictionary_2_t1003304618 ** get_address_of_eventTable_1() { return &___eventTable_1; }
	inline void set_eventTable_1(Dictionary_2_t1003304618 * value)
	{
		___eventTable_1 = value;
		Il2CppCodeGenWriteBarrier(&___eventTable_1, value);
	}

	inline static int32_t get_offset_of_permanentMessages_2() { return static_cast<int32_t>(offsetof(Messenger_t567859955_StaticFields, ___permanentMessages_2)); }
	inline List_1_t1765447871 * get_permanentMessages_2() const { return ___permanentMessages_2; }
	inline List_1_t1765447871 ** get_address_of_permanentMessages_2() { return &___permanentMessages_2; }
	inline void set_permanentMessages_2(List_1_t1765447871 * value)
	{
		___permanentMessages_2 = value;
		Il2CppCodeGenWriteBarrier(&___permanentMessages_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
