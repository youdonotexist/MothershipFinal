#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.ComponentModel.EventHandlerList
struct EventHandlerList_t120044247;
// System.ComponentModel.ISite
struct ISite_t19613145;
// System.Object
struct Il2CppObject;

#include "mscorlib_System_MarshalByRefObject2055500882.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Component
struct  Component_t553679750  : public MarshalByRefObject_t2055500882
{
public:
	// System.ComponentModel.EventHandlerList System.ComponentModel.Component::event_handlers
	EventHandlerList_t120044247 * ___event_handlers_1;
	// System.ComponentModel.ISite System.ComponentModel.Component::mySite
	Il2CppObject * ___mySite_2;
	// System.Object System.ComponentModel.Component::disposedEvent
	Il2CppObject * ___disposedEvent_3;

public:
	inline static int32_t get_offset_of_event_handlers_1() { return static_cast<int32_t>(offsetof(Component_t553679750, ___event_handlers_1)); }
	inline EventHandlerList_t120044247 * get_event_handlers_1() const { return ___event_handlers_1; }
	inline EventHandlerList_t120044247 ** get_address_of_event_handlers_1() { return &___event_handlers_1; }
	inline void set_event_handlers_1(EventHandlerList_t120044247 * value)
	{
		___event_handlers_1 = value;
		Il2CppCodeGenWriteBarrier(&___event_handlers_1, value);
	}

	inline static int32_t get_offset_of_mySite_2() { return static_cast<int32_t>(offsetof(Component_t553679750, ___mySite_2)); }
	inline Il2CppObject * get_mySite_2() const { return ___mySite_2; }
	inline Il2CppObject ** get_address_of_mySite_2() { return &___mySite_2; }
	inline void set_mySite_2(Il2CppObject * value)
	{
		___mySite_2 = value;
		Il2CppCodeGenWriteBarrier(&___mySite_2, value);
	}

	inline static int32_t get_offset_of_disposedEvent_3() { return static_cast<int32_t>(offsetof(Component_t553679750, ___disposedEvent_3)); }
	inline Il2CppObject * get_disposedEvent_3() const { return ___disposedEvent_3; }
	inline Il2CppObject ** get_address_of_disposedEvent_3() { return &___disposedEvent_3; }
	inline void set_disposedEvent_3(Il2CppObject * value)
	{
		___disposedEvent_3 = value;
		Il2CppCodeGenWriteBarrier(&___disposedEvent_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
