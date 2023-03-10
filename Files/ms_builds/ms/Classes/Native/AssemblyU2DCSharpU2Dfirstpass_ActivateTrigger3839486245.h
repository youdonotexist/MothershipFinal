#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Object
struct Object_t3878351788;
struct Object_t3878351788_marshaled_pinvoke;
// UnityEngine.GameObject
struct GameObject_t4012695102;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "AssemblyU2DCSharpU2Dfirstpass_ActivateTrigger_Mode2403779.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ActivateTrigger
struct  ActivateTrigger_t3839486245  : public MonoBehaviour_t3012272455
{
public:
	// ActivateTrigger/Mode ActivateTrigger::action
	int32_t ___action_2;
	// UnityEngine.Object ActivateTrigger::target
	Object_t3878351788 * ___target_3;
	// UnityEngine.GameObject ActivateTrigger::source
	GameObject_t4012695102 * ___source_4;
	// System.Int32 ActivateTrigger::triggerCount
	int32_t ___triggerCount_5;
	// System.Boolean ActivateTrigger::repeatTrigger
	bool ___repeatTrigger_6;

public:
	inline static int32_t get_offset_of_action_2() { return static_cast<int32_t>(offsetof(ActivateTrigger_t3839486245, ___action_2)); }
	inline int32_t get_action_2() const { return ___action_2; }
	inline int32_t* get_address_of_action_2() { return &___action_2; }
	inline void set_action_2(int32_t value)
	{
		___action_2 = value;
	}

	inline static int32_t get_offset_of_target_3() { return static_cast<int32_t>(offsetof(ActivateTrigger_t3839486245, ___target_3)); }
	inline Object_t3878351788 * get_target_3() const { return ___target_3; }
	inline Object_t3878351788 ** get_address_of_target_3() { return &___target_3; }
	inline void set_target_3(Object_t3878351788 * value)
	{
		___target_3 = value;
		Il2CppCodeGenWriteBarrier(&___target_3, value);
	}

	inline static int32_t get_offset_of_source_4() { return static_cast<int32_t>(offsetof(ActivateTrigger_t3839486245, ___source_4)); }
	inline GameObject_t4012695102 * get_source_4() const { return ___source_4; }
	inline GameObject_t4012695102 ** get_address_of_source_4() { return &___source_4; }
	inline void set_source_4(GameObject_t4012695102 * value)
	{
		___source_4 = value;
		Il2CppCodeGenWriteBarrier(&___source_4, value);
	}

	inline static int32_t get_offset_of_triggerCount_5() { return static_cast<int32_t>(offsetof(ActivateTrigger_t3839486245, ___triggerCount_5)); }
	inline int32_t get_triggerCount_5() const { return ___triggerCount_5; }
	inline int32_t* get_address_of_triggerCount_5() { return &___triggerCount_5; }
	inline void set_triggerCount_5(int32_t value)
	{
		___triggerCount_5 = value;
	}

	inline static int32_t get_offset_of_repeatTrigger_6() { return static_cast<int32_t>(offsetof(ActivateTrigger_t3839486245, ___repeatTrigger_6)); }
	inline bool get_repeatTrigger_6() const { return ___repeatTrigger_6; }
	inline bool* get_address_of_repeatTrigger_6() { return &___repeatTrigger_6; }
	inline void set_repeatTrigger_6(bool value)
	{
		___repeatTrigger_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
