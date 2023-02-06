#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3499186955;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PostEncounterView
struct  PostEncounterView_t3799458200  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.GameObject[] PostEncounterView::miniPanels
	GameObjectU5BU5D_t3499186955* ___miniPanels_2;
	// System.Boolean PostEncounterView::animating
	bool ___animating_3;
	// System.Boolean PostEncounterView::showing
	bool ___showing_4;
	// System.Boolean PostEncounterView::visible
	bool ___visible_5;

public:
	inline static int32_t get_offset_of_miniPanels_2() { return static_cast<int32_t>(offsetof(PostEncounterView_t3799458200, ___miniPanels_2)); }
	inline GameObjectU5BU5D_t3499186955* get_miniPanels_2() const { return ___miniPanels_2; }
	inline GameObjectU5BU5D_t3499186955** get_address_of_miniPanels_2() { return &___miniPanels_2; }
	inline void set_miniPanels_2(GameObjectU5BU5D_t3499186955* value)
	{
		___miniPanels_2 = value;
		Il2CppCodeGenWriteBarrier(&___miniPanels_2, value);
	}

	inline static int32_t get_offset_of_animating_3() { return static_cast<int32_t>(offsetof(PostEncounterView_t3799458200, ___animating_3)); }
	inline bool get_animating_3() const { return ___animating_3; }
	inline bool* get_address_of_animating_3() { return &___animating_3; }
	inline void set_animating_3(bool value)
	{
		___animating_3 = value;
	}

	inline static int32_t get_offset_of_showing_4() { return static_cast<int32_t>(offsetof(PostEncounterView_t3799458200, ___showing_4)); }
	inline bool get_showing_4() const { return ___showing_4; }
	inline bool* get_address_of_showing_4() { return &___showing_4; }
	inline void set_showing_4(bool value)
	{
		___showing_4 = value;
	}

	inline static int32_t get_offset_of_visible_5() { return static_cast<int32_t>(offsetof(PostEncounterView_t3799458200, ___visible_5)); }
	inline bool get_visible_5() const { return ___visible_5; }
	inline bool* get_address_of_visible_5() { return &___visible_5; }
	inline void set_visible_5(bool value)
	{
		___visible_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
