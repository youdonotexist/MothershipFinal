#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<System.Object>
struct List_1_t1634065389;
// System.Object
struct Il2CppObject;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t2399218676;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityThreading.Channel`1<System.Object>
struct  Channel_1_t3951923702  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<T> UnityThreading.Channel`1::buffer
	List_1_t1634065389 * ___buffer_0;
	// System.Object UnityThreading.Channel`1::setSyncRoot
	Il2CppObject * ___setSyncRoot_1;
	// System.Object UnityThreading.Channel`1::getSyncRoot
	Il2CppObject * ___getSyncRoot_2;
	// System.Object UnityThreading.Channel`1::disposeRoot
	Il2CppObject * ___disposeRoot_3;
	// System.Threading.ManualResetEvent UnityThreading.Channel`1::setEvent
	ManualResetEvent_t2399218676 * ___setEvent_4;
	// System.Threading.ManualResetEvent UnityThreading.Channel`1::getEvent
	ManualResetEvent_t2399218676 * ___getEvent_5;
	// System.Threading.ManualResetEvent UnityThreading.Channel`1::exitEvent
	ManualResetEvent_t2399218676 * ___exitEvent_6;
	// System.Boolean UnityThreading.Channel`1::disposed
	bool ___disposed_7;
	// System.Int32 UnityThreading.Channel`1::<BufferSize>k__BackingField
	int32_t ___U3CBufferSizeU3Ek__BackingField_8;

public:
	inline static int32_t get_offset_of_buffer_0() { return static_cast<int32_t>(offsetof(Channel_1_t3951923702, ___buffer_0)); }
	inline List_1_t1634065389 * get_buffer_0() const { return ___buffer_0; }
	inline List_1_t1634065389 ** get_address_of_buffer_0() { return &___buffer_0; }
	inline void set_buffer_0(List_1_t1634065389 * value)
	{
		___buffer_0 = value;
		Il2CppCodeGenWriteBarrier(&___buffer_0, value);
	}

	inline static int32_t get_offset_of_setSyncRoot_1() { return static_cast<int32_t>(offsetof(Channel_1_t3951923702, ___setSyncRoot_1)); }
	inline Il2CppObject * get_setSyncRoot_1() const { return ___setSyncRoot_1; }
	inline Il2CppObject ** get_address_of_setSyncRoot_1() { return &___setSyncRoot_1; }
	inline void set_setSyncRoot_1(Il2CppObject * value)
	{
		___setSyncRoot_1 = value;
		Il2CppCodeGenWriteBarrier(&___setSyncRoot_1, value);
	}

	inline static int32_t get_offset_of_getSyncRoot_2() { return static_cast<int32_t>(offsetof(Channel_1_t3951923702, ___getSyncRoot_2)); }
	inline Il2CppObject * get_getSyncRoot_2() const { return ___getSyncRoot_2; }
	inline Il2CppObject ** get_address_of_getSyncRoot_2() { return &___getSyncRoot_2; }
	inline void set_getSyncRoot_2(Il2CppObject * value)
	{
		___getSyncRoot_2 = value;
		Il2CppCodeGenWriteBarrier(&___getSyncRoot_2, value);
	}

	inline static int32_t get_offset_of_disposeRoot_3() { return static_cast<int32_t>(offsetof(Channel_1_t3951923702, ___disposeRoot_3)); }
	inline Il2CppObject * get_disposeRoot_3() const { return ___disposeRoot_3; }
	inline Il2CppObject ** get_address_of_disposeRoot_3() { return &___disposeRoot_3; }
	inline void set_disposeRoot_3(Il2CppObject * value)
	{
		___disposeRoot_3 = value;
		Il2CppCodeGenWriteBarrier(&___disposeRoot_3, value);
	}

	inline static int32_t get_offset_of_setEvent_4() { return static_cast<int32_t>(offsetof(Channel_1_t3951923702, ___setEvent_4)); }
	inline ManualResetEvent_t2399218676 * get_setEvent_4() const { return ___setEvent_4; }
	inline ManualResetEvent_t2399218676 ** get_address_of_setEvent_4() { return &___setEvent_4; }
	inline void set_setEvent_4(ManualResetEvent_t2399218676 * value)
	{
		___setEvent_4 = value;
		Il2CppCodeGenWriteBarrier(&___setEvent_4, value);
	}

	inline static int32_t get_offset_of_getEvent_5() { return static_cast<int32_t>(offsetof(Channel_1_t3951923702, ___getEvent_5)); }
	inline ManualResetEvent_t2399218676 * get_getEvent_5() const { return ___getEvent_5; }
	inline ManualResetEvent_t2399218676 ** get_address_of_getEvent_5() { return &___getEvent_5; }
	inline void set_getEvent_5(ManualResetEvent_t2399218676 * value)
	{
		___getEvent_5 = value;
		Il2CppCodeGenWriteBarrier(&___getEvent_5, value);
	}

	inline static int32_t get_offset_of_exitEvent_6() { return static_cast<int32_t>(offsetof(Channel_1_t3951923702, ___exitEvent_6)); }
	inline ManualResetEvent_t2399218676 * get_exitEvent_6() const { return ___exitEvent_6; }
	inline ManualResetEvent_t2399218676 ** get_address_of_exitEvent_6() { return &___exitEvent_6; }
	inline void set_exitEvent_6(ManualResetEvent_t2399218676 * value)
	{
		___exitEvent_6 = value;
		Il2CppCodeGenWriteBarrier(&___exitEvent_6, value);
	}

	inline static int32_t get_offset_of_disposed_7() { return static_cast<int32_t>(offsetof(Channel_1_t3951923702, ___disposed_7)); }
	inline bool get_disposed_7() const { return ___disposed_7; }
	inline bool* get_address_of_disposed_7() { return &___disposed_7; }
	inline void set_disposed_7(bool value)
	{
		___disposed_7 = value;
	}

	inline static int32_t get_offset_of_U3CBufferSizeU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(Channel_1_t3951923702, ___U3CBufferSizeU3Ek__BackingField_8)); }
	inline int32_t get_U3CBufferSizeU3Ek__BackingField_8() const { return ___U3CBufferSizeU3Ek__BackingField_8; }
	inline int32_t* get_address_of_U3CBufferSizeU3Ek__BackingField_8() { return &___U3CBufferSizeU3Ek__BackingField_8; }
	inline void set_U3CBufferSizeU3Ek__BackingField_8(int32_t value)
	{
		___U3CBufferSizeU3Ek__BackingField_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
