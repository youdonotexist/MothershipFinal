#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Runtime.Serialization.SerializationCallbacks
struct SerializationCallbacks_t2501037015;
// System.Object
struct Il2CppObject;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.SerializationObjectManager/<RegisterObject>c__AnonStorey2
struct  U3CRegisterObjectU3Ec__AnonStorey2_t3276063851  : public Il2CppObject
{
public:
	// System.Runtime.Serialization.SerializationCallbacks System.Runtime.Serialization.SerializationObjectManager/<RegisterObject>c__AnonStorey2::sc
	SerializationCallbacks_t2501037015 * ___sc_0;
	// System.Object System.Runtime.Serialization.SerializationObjectManager/<RegisterObject>c__AnonStorey2::obj
	Il2CppObject * ___obj_1;

public:
	inline static int32_t get_offset_of_sc_0() { return static_cast<int32_t>(offsetof(U3CRegisterObjectU3Ec__AnonStorey2_t3276063851, ___sc_0)); }
	inline SerializationCallbacks_t2501037015 * get_sc_0() const { return ___sc_0; }
	inline SerializationCallbacks_t2501037015 ** get_address_of_sc_0() { return &___sc_0; }
	inline void set_sc_0(SerializationCallbacks_t2501037015 * value)
	{
		___sc_0 = value;
		Il2CppCodeGenWriteBarrier(&___sc_0, value);
	}

	inline static int32_t get_offset_of_obj_1() { return static_cast<int32_t>(offsetof(U3CRegisterObjectU3Ec__AnonStorey2_t3276063851, ___obj_1)); }
	inline Il2CppObject * get_obj_1() const { return ___obj_1; }
	inline Il2CppObject ** get_address_of_obj_1() { return &___obj_1; }
	inline void set_obj_1(Il2CppObject * value)
	{
		___obj_1 = value;
		Il2CppCodeGenWriteBarrier(&___obj_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
