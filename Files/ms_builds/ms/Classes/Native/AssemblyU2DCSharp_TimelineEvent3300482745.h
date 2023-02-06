#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Vectrosity.VectorLine
struct VectorLine_t3065371647;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t2606186806;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// UnityEngine.Transform
struct Transform_t284553113;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TimelineEvent
struct  TimelineEvent_t3300482745  : public MonoBehaviour_t3012272455
{
public:
	// Vectrosity.VectorLine TimelineEvent::branchLine
	VectorLine_t3065371647 * ___branchLine_2;
	// System.Int32 TimelineEvent::direction
	int32_t ___direction_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> TimelineEvent::timelineEvent
	Dictionary_2_t2606186806 * ___timelineEvent_4;
	// UnityEngine.GameObject TimelineEvent::displayPrefab
	GameObject_t4012695102 * ___displayPrefab_5;
	// UnityEngine.GameObject TimelineEvent::displayPlaceholderPrefab
	GameObject_t4012695102 * ___displayPlaceholderPrefab_6;
	// UnityEngine.Transform TimelineEvent::parentTimeline
	Transform_t284553113 * ___parentTimeline_7;
	// UnityEngine.Transform TimelineEvent::gridTransform
	Transform_t284553113 * ___gridTransform_8;

public:
	inline static int32_t get_offset_of_branchLine_2() { return static_cast<int32_t>(offsetof(TimelineEvent_t3300482745, ___branchLine_2)); }
	inline VectorLine_t3065371647 * get_branchLine_2() const { return ___branchLine_2; }
	inline VectorLine_t3065371647 ** get_address_of_branchLine_2() { return &___branchLine_2; }
	inline void set_branchLine_2(VectorLine_t3065371647 * value)
	{
		___branchLine_2 = value;
		Il2CppCodeGenWriteBarrier(&___branchLine_2, value);
	}

	inline static int32_t get_offset_of_direction_3() { return static_cast<int32_t>(offsetof(TimelineEvent_t3300482745, ___direction_3)); }
	inline int32_t get_direction_3() const { return ___direction_3; }
	inline int32_t* get_address_of_direction_3() { return &___direction_3; }
	inline void set_direction_3(int32_t value)
	{
		___direction_3 = value;
	}

	inline static int32_t get_offset_of_timelineEvent_4() { return static_cast<int32_t>(offsetof(TimelineEvent_t3300482745, ___timelineEvent_4)); }
	inline Dictionary_2_t2606186806 * get_timelineEvent_4() const { return ___timelineEvent_4; }
	inline Dictionary_2_t2606186806 ** get_address_of_timelineEvent_4() { return &___timelineEvent_4; }
	inline void set_timelineEvent_4(Dictionary_2_t2606186806 * value)
	{
		___timelineEvent_4 = value;
		Il2CppCodeGenWriteBarrier(&___timelineEvent_4, value);
	}

	inline static int32_t get_offset_of_displayPrefab_5() { return static_cast<int32_t>(offsetof(TimelineEvent_t3300482745, ___displayPrefab_5)); }
	inline GameObject_t4012695102 * get_displayPrefab_5() const { return ___displayPrefab_5; }
	inline GameObject_t4012695102 ** get_address_of_displayPrefab_5() { return &___displayPrefab_5; }
	inline void set_displayPrefab_5(GameObject_t4012695102 * value)
	{
		___displayPrefab_5 = value;
		Il2CppCodeGenWriteBarrier(&___displayPrefab_5, value);
	}

	inline static int32_t get_offset_of_displayPlaceholderPrefab_6() { return static_cast<int32_t>(offsetof(TimelineEvent_t3300482745, ___displayPlaceholderPrefab_6)); }
	inline GameObject_t4012695102 * get_displayPlaceholderPrefab_6() const { return ___displayPlaceholderPrefab_6; }
	inline GameObject_t4012695102 ** get_address_of_displayPlaceholderPrefab_6() { return &___displayPlaceholderPrefab_6; }
	inline void set_displayPlaceholderPrefab_6(GameObject_t4012695102 * value)
	{
		___displayPlaceholderPrefab_6 = value;
		Il2CppCodeGenWriteBarrier(&___displayPlaceholderPrefab_6, value);
	}

	inline static int32_t get_offset_of_parentTimeline_7() { return static_cast<int32_t>(offsetof(TimelineEvent_t3300482745, ___parentTimeline_7)); }
	inline Transform_t284553113 * get_parentTimeline_7() const { return ___parentTimeline_7; }
	inline Transform_t284553113 ** get_address_of_parentTimeline_7() { return &___parentTimeline_7; }
	inline void set_parentTimeline_7(Transform_t284553113 * value)
	{
		___parentTimeline_7 = value;
		Il2CppCodeGenWriteBarrier(&___parentTimeline_7, value);
	}

	inline static int32_t get_offset_of_gridTransform_8() { return static_cast<int32_t>(offsetof(TimelineEvent_t3300482745, ___gridTransform_8)); }
	inline Transform_t284553113 * get_gridTransform_8() const { return ___gridTransform_8; }
	inline Transform_t284553113 ** get_address_of_gridTransform_8() { return &___gridTransform_8; }
	inline void set_gridTransform_8(Transform_t284553113 * value)
	{
		___gridTransform_8 = value;
		Il2CppCodeGenWriteBarrier(&___gridTransform_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
