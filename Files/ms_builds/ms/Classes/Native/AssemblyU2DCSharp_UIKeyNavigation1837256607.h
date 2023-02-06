#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// BetterList`1<UIKeyNavigation>
struct BetterList_1_t3334224619;
// UnityEngine.GameObject
struct GameObject_t4012695102;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "AssemblyU2DCSharp_UIKeyNavigation_Constraint1803088381.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIKeyNavigation
struct  UIKeyNavigation_t1837256607  : public MonoBehaviour_t3012272455
{
public:
	// UIKeyNavigation/Constraint UIKeyNavigation::constraint
	int32_t ___constraint_3;
	// UnityEngine.GameObject UIKeyNavigation::onUp
	GameObject_t4012695102 * ___onUp_4;
	// UnityEngine.GameObject UIKeyNavigation::onDown
	GameObject_t4012695102 * ___onDown_5;
	// UnityEngine.GameObject UIKeyNavigation::onLeft
	GameObject_t4012695102 * ___onLeft_6;
	// UnityEngine.GameObject UIKeyNavigation::onRight
	GameObject_t4012695102 * ___onRight_7;
	// UnityEngine.GameObject UIKeyNavigation::onClick
	GameObject_t4012695102 * ___onClick_8;
	// System.Boolean UIKeyNavigation::startsSelected
	bool ___startsSelected_9;

public:
	inline static int32_t get_offset_of_constraint_3() { return static_cast<int32_t>(offsetof(UIKeyNavigation_t1837256607, ___constraint_3)); }
	inline int32_t get_constraint_3() const { return ___constraint_3; }
	inline int32_t* get_address_of_constraint_3() { return &___constraint_3; }
	inline void set_constraint_3(int32_t value)
	{
		___constraint_3 = value;
	}

	inline static int32_t get_offset_of_onUp_4() { return static_cast<int32_t>(offsetof(UIKeyNavigation_t1837256607, ___onUp_4)); }
	inline GameObject_t4012695102 * get_onUp_4() const { return ___onUp_4; }
	inline GameObject_t4012695102 ** get_address_of_onUp_4() { return &___onUp_4; }
	inline void set_onUp_4(GameObject_t4012695102 * value)
	{
		___onUp_4 = value;
		Il2CppCodeGenWriteBarrier(&___onUp_4, value);
	}

	inline static int32_t get_offset_of_onDown_5() { return static_cast<int32_t>(offsetof(UIKeyNavigation_t1837256607, ___onDown_5)); }
	inline GameObject_t4012695102 * get_onDown_5() const { return ___onDown_5; }
	inline GameObject_t4012695102 ** get_address_of_onDown_5() { return &___onDown_5; }
	inline void set_onDown_5(GameObject_t4012695102 * value)
	{
		___onDown_5 = value;
		Il2CppCodeGenWriteBarrier(&___onDown_5, value);
	}

	inline static int32_t get_offset_of_onLeft_6() { return static_cast<int32_t>(offsetof(UIKeyNavigation_t1837256607, ___onLeft_6)); }
	inline GameObject_t4012695102 * get_onLeft_6() const { return ___onLeft_6; }
	inline GameObject_t4012695102 ** get_address_of_onLeft_6() { return &___onLeft_6; }
	inline void set_onLeft_6(GameObject_t4012695102 * value)
	{
		___onLeft_6 = value;
		Il2CppCodeGenWriteBarrier(&___onLeft_6, value);
	}

	inline static int32_t get_offset_of_onRight_7() { return static_cast<int32_t>(offsetof(UIKeyNavigation_t1837256607, ___onRight_7)); }
	inline GameObject_t4012695102 * get_onRight_7() const { return ___onRight_7; }
	inline GameObject_t4012695102 ** get_address_of_onRight_7() { return &___onRight_7; }
	inline void set_onRight_7(GameObject_t4012695102 * value)
	{
		___onRight_7 = value;
		Il2CppCodeGenWriteBarrier(&___onRight_7, value);
	}

	inline static int32_t get_offset_of_onClick_8() { return static_cast<int32_t>(offsetof(UIKeyNavigation_t1837256607, ___onClick_8)); }
	inline GameObject_t4012695102 * get_onClick_8() const { return ___onClick_8; }
	inline GameObject_t4012695102 ** get_address_of_onClick_8() { return &___onClick_8; }
	inline void set_onClick_8(GameObject_t4012695102 * value)
	{
		___onClick_8 = value;
		Il2CppCodeGenWriteBarrier(&___onClick_8, value);
	}

	inline static int32_t get_offset_of_startsSelected_9() { return static_cast<int32_t>(offsetof(UIKeyNavigation_t1837256607, ___startsSelected_9)); }
	inline bool get_startsSelected_9() const { return ___startsSelected_9; }
	inline bool* get_address_of_startsSelected_9() { return &___startsSelected_9; }
	inline void set_startsSelected_9(bool value)
	{
		___startsSelected_9 = value;
	}
};

struct UIKeyNavigation_t1837256607_StaticFields
{
public:
	// BetterList`1<UIKeyNavigation> UIKeyNavigation::list
	BetterList_1_t3334224619 * ___list_2;

public:
	inline static int32_t get_offset_of_list_2() { return static_cast<int32_t>(offsetof(UIKeyNavigation_t1837256607_StaticFields, ___list_2)); }
	inline BetterList_1_t3334224619 * get_list_2() const { return ___list_2; }
	inline BetterList_1_t3334224619 ** get_address_of_list_2() { return &___list_2; }
	inline void set_list_2(BetterList_1_t3334224619 * value)
	{
		___list_2 = value;
		Il2CppCodeGenWriteBarrier(&___list_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
