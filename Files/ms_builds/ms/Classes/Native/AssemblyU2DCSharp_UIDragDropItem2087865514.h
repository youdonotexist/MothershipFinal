#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t284553113;
// UnityEngine.Collider
struct Collider_t955670625;
// UnityEngine.Collider2D
struct Collider2D_t1890038195;
// UIButton
struct UIButton_t179429094;
// UIRoot
struct UIRoot_t2503447958;
// UIGrid
struct UIGrid_t2503122938;
// UITable
struct UITable_t298892698;
// UIDragScrollView
struct UIDragScrollView_t123487002;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "AssemblyU2DCSharp_UIDragDropItem_Restriction106806188.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIDragDropItem
struct  UIDragDropItem_t2087865514  : public MonoBehaviour_t3012272455
{
public:
	// UIDragDropItem/Restriction UIDragDropItem::restriction
	int32_t ___restriction_2;
	// System.Boolean UIDragDropItem::cloneOnDrag
	bool ___cloneOnDrag_3;
	// System.Single UIDragDropItem::pressAndHoldDelay
	float ___pressAndHoldDelay_4;
	// UnityEngine.Transform UIDragDropItem::mTrans
	Transform_t284553113 * ___mTrans_5;
	// UnityEngine.Transform UIDragDropItem::mParent
	Transform_t284553113 * ___mParent_6;
	// UnityEngine.Collider UIDragDropItem::mCollider
	Collider_t955670625 * ___mCollider_7;
	// UnityEngine.Collider2D UIDragDropItem::mCollider2D
	Collider2D_t1890038195 * ___mCollider2D_8;
	// UIButton UIDragDropItem::mButton
	UIButton_t179429094 * ___mButton_9;
	// UIRoot UIDragDropItem::mRoot
	UIRoot_t2503447958 * ___mRoot_10;
	// UIGrid UIDragDropItem::mGrid
	UIGrid_t2503122938 * ___mGrid_11;
	// UITable UIDragDropItem::mTable
	UITable_t298892698 * ___mTable_12;
	// System.Int32 UIDragDropItem::mTouchID
	int32_t ___mTouchID_13;
	// System.Single UIDragDropItem::mDragStartTime
	float ___mDragStartTime_14;
	// UIDragScrollView UIDragDropItem::mDragScrollView
	UIDragScrollView_t123487002 * ___mDragScrollView_15;
	// System.Boolean UIDragDropItem::mPressed
	bool ___mPressed_16;
	// System.Boolean UIDragDropItem::mDragging
	bool ___mDragging_17;

public:
	inline static int32_t get_offset_of_restriction_2() { return static_cast<int32_t>(offsetof(UIDragDropItem_t2087865514, ___restriction_2)); }
	inline int32_t get_restriction_2() const { return ___restriction_2; }
	inline int32_t* get_address_of_restriction_2() { return &___restriction_2; }
	inline void set_restriction_2(int32_t value)
	{
		___restriction_2 = value;
	}

	inline static int32_t get_offset_of_cloneOnDrag_3() { return static_cast<int32_t>(offsetof(UIDragDropItem_t2087865514, ___cloneOnDrag_3)); }
	inline bool get_cloneOnDrag_3() const { return ___cloneOnDrag_3; }
	inline bool* get_address_of_cloneOnDrag_3() { return &___cloneOnDrag_3; }
	inline void set_cloneOnDrag_3(bool value)
	{
		___cloneOnDrag_3 = value;
	}

	inline static int32_t get_offset_of_pressAndHoldDelay_4() { return static_cast<int32_t>(offsetof(UIDragDropItem_t2087865514, ___pressAndHoldDelay_4)); }
	inline float get_pressAndHoldDelay_4() const { return ___pressAndHoldDelay_4; }
	inline float* get_address_of_pressAndHoldDelay_4() { return &___pressAndHoldDelay_4; }
	inline void set_pressAndHoldDelay_4(float value)
	{
		___pressAndHoldDelay_4 = value;
	}

	inline static int32_t get_offset_of_mTrans_5() { return static_cast<int32_t>(offsetof(UIDragDropItem_t2087865514, ___mTrans_5)); }
	inline Transform_t284553113 * get_mTrans_5() const { return ___mTrans_5; }
	inline Transform_t284553113 ** get_address_of_mTrans_5() { return &___mTrans_5; }
	inline void set_mTrans_5(Transform_t284553113 * value)
	{
		___mTrans_5 = value;
		Il2CppCodeGenWriteBarrier(&___mTrans_5, value);
	}

	inline static int32_t get_offset_of_mParent_6() { return static_cast<int32_t>(offsetof(UIDragDropItem_t2087865514, ___mParent_6)); }
	inline Transform_t284553113 * get_mParent_6() const { return ___mParent_6; }
	inline Transform_t284553113 ** get_address_of_mParent_6() { return &___mParent_6; }
	inline void set_mParent_6(Transform_t284553113 * value)
	{
		___mParent_6 = value;
		Il2CppCodeGenWriteBarrier(&___mParent_6, value);
	}

	inline static int32_t get_offset_of_mCollider_7() { return static_cast<int32_t>(offsetof(UIDragDropItem_t2087865514, ___mCollider_7)); }
	inline Collider_t955670625 * get_mCollider_7() const { return ___mCollider_7; }
	inline Collider_t955670625 ** get_address_of_mCollider_7() { return &___mCollider_7; }
	inline void set_mCollider_7(Collider_t955670625 * value)
	{
		___mCollider_7 = value;
		Il2CppCodeGenWriteBarrier(&___mCollider_7, value);
	}

	inline static int32_t get_offset_of_mCollider2D_8() { return static_cast<int32_t>(offsetof(UIDragDropItem_t2087865514, ___mCollider2D_8)); }
	inline Collider2D_t1890038195 * get_mCollider2D_8() const { return ___mCollider2D_8; }
	inline Collider2D_t1890038195 ** get_address_of_mCollider2D_8() { return &___mCollider2D_8; }
	inline void set_mCollider2D_8(Collider2D_t1890038195 * value)
	{
		___mCollider2D_8 = value;
		Il2CppCodeGenWriteBarrier(&___mCollider2D_8, value);
	}

	inline static int32_t get_offset_of_mButton_9() { return static_cast<int32_t>(offsetof(UIDragDropItem_t2087865514, ___mButton_9)); }
	inline UIButton_t179429094 * get_mButton_9() const { return ___mButton_9; }
	inline UIButton_t179429094 ** get_address_of_mButton_9() { return &___mButton_9; }
	inline void set_mButton_9(UIButton_t179429094 * value)
	{
		___mButton_9 = value;
		Il2CppCodeGenWriteBarrier(&___mButton_9, value);
	}

	inline static int32_t get_offset_of_mRoot_10() { return static_cast<int32_t>(offsetof(UIDragDropItem_t2087865514, ___mRoot_10)); }
	inline UIRoot_t2503447958 * get_mRoot_10() const { return ___mRoot_10; }
	inline UIRoot_t2503447958 ** get_address_of_mRoot_10() { return &___mRoot_10; }
	inline void set_mRoot_10(UIRoot_t2503447958 * value)
	{
		___mRoot_10 = value;
		Il2CppCodeGenWriteBarrier(&___mRoot_10, value);
	}

	inline static int32_t get_offset_of_mGrid_11() { return static_cast<int32_t>(offsetof(UIDragDropItem_t2087865514, ___mGrid_11)); }
	inline UIGrid_t2503122938 * get_mGrid_11() const { return ___mGrid_11; }
	inline UIGrid_t2503122938 ** get_address_of_mGrid_11() { return &___mGrid_11; }
	inline void set_mGrid_11(UIGrid_t2503122938 * value)
	{
		___mGrid_11 = value;
		Il2CppCodeGenWriteBarrier(&___mGrid_11, value);
	}

	inline static int32_t get_offset_of_mTable_12() { return static_cast<int32_t>(offsetof(UIDragDropItem_t2087865514, ___mTable_12)); }
	inline UITable_t298892698 * get_mTable_12() const { return ___mTable_12; }
	inline UITable_t298892698 ** get_address_of_mTable_12() { return &___mTable_12; }
	inline void set_mTable_12(UITable_t298892698 * value)
	{
		___mTable_12 = value;
		Il2CppCodeGenWriteBarrier(&___mTable_12, value);
	}

	inline static int32_t get_offset_of_mTouchID_13() { return static_cast<int32_t>(offsetof(UIDragDropItem_t2087865514, ___mTouchID_13)); }
	inline int32_t get_mTouchID_13() const { return ___mTouchID_13; }
	inline int32_t* get_address_of_mTouchID_13() { return &___mTouchID_13; }
	inline void set_mTouchID_13(int32_t value)
	{
		___mTouchID_13 = value;
	}

	inline static int32_t get_offset_of_mDragStartTime_14() { return static_cast<int32_t>(offsetof(UIDragDropItem_t2087865514, ___mDragStartTime_14)); }
	inline float get_mDragStartTime_14() const { return ___mDragStartTime_14; }
	inline float* get_address_of_mDragStartTime_14() { return &___mDragStartTime_14; }
	inline void set_mDragStartTime_14(float value)
	{
		___mDragStartTime_14 = value;
	}

	inline static int32_t get_offset_of_mDragScrollView_15() { return static_cast<int32_t>(offsetof(UIDragDropItem_t2087865514, ___mDragScrollView_15)); }
	inline UIDragScrollView_t123487002 * get_mDragScrollView_15() const { return ___mDragScrollView_15; }
	inline UIDragScrollView_t123487002 ** get_address_of_mDragScrollView_15() { return &___mDragScrollView_15; }
	inline void set_mDragScrollView_15(UIDragScrollView_t123487002 * value)
	{
		___mDragScrollView_15 = value;
		Il2CppCodeGenWriteBarrier(&___mDragScrollView_15, value);
	}

	inline static int32_t get_offset_of_mPressed_16() { return static_cast<int32_t>(offsetof(UIDragDropItem_t2087865514, ___mPressed_16)); }
	inline bool get_mPressed_16() const { return ___mPressed_16; }
	inline bool* get_address_of_mPressed_16() { return &___mPressed_16; }
	inline void set_mPressed_16(bool value)
	{
		___mPressed_16 = value;
	}

	inline static int32_t get_offset_of_mDragging_17() { return static_cast<int32_t>(offsetof(UIDragDropItem_t2087865514, ___mDragging_17)); }
	inline bool get_mDragging_17() const { return ___mDragging_17; }
	inline bool* get_address_of_mDragging_17() { return &___mDragging_17; }
	inline void set_mDragging_17(bool value)
	{
		___mDragging_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
