#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// BetterList`1<UIScrollView>
struct BetterList_1_t3610447890;
// UIProgressBar
struct UIProgressBar_t168062834;
// UIScrollView/OnDragNotification
struct OnDragNotification_t4185738334;
// UnityEngine.Transform
struct Transform_t284553113;
// UIPanel
struct UIPanel_t295209936;
// UICenterOnChild
struct UICenterOnChild_t854454836;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "AssemblyU2DCSharp_UIScrollView_Movement4255933647.h"
#include "AssemblyU2DCSharp_UIScrollView_DragEffect175831045.h"
#include "AssemblyU2DCSharp_UIScrollView_ShowCondition3591302782.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"
#include "AssemblyU2DCSharp_UIWidget_Pivot77126690.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_Plane1600081545.h"
#include "UnityEngine_UnityEngine_Bounds3518514978.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIScrollView
struct  UIScrollView_t2113479878  : public MonoBehaviour_t3012272455
{
public:
	// UIScrollView/Movement UIScrollView::movement
	int32_t ___movement_3;
	// UIScrollView/DragEffect UIScrollView::dragEffect
	int32_t ___dragEffect_4;
	// System.Boolean UIScrollView::restrictWithinPanel
	bool ___restrictWithinPanel_5;
	// System.Boolean UIScrollView::disableDragIfFits
	bool ___disableDragIfFits_6;
	// System.Boolean UIScrollView::smoothDragStart
	bool ___smoothDragStart_7;
	// System.Boolean UIScrollView::iOSDragEmulation
	bool ___iOSDragEmulation_8;
	// System.Single UIScrollView::scrollWheelFactor
	float ___scrollWheelFactor_9;
	// System.Single UIScrollView::momentumAmount
	float ___momentumAmount_10;
	// UIProgressBar UIScrollView::horizontalScrollBar
	UIProgressBar_t168062834 * ___horizontalScrollBar_11;
	// UIProgressBar UIScrollView::verticalScrollBar
	UIProgressBar_t168062834 * ___verticalScrollBar_12;
	// UIScrollView/ShowCondition UIScrollView::showScrollBars
	int32_t ___showScrollBars_13;
	// UnityEngine.Vector2 UIScrollView::customMovement
	Vector2_t3525329788  ___customMovement_14;
	// UIWidget/Pivot UIScrollView::contentPivot
	int32_t ___contentPivot_15;
	// UIScrollView/OnDragNotification UIScrollView::onDragStarted
	OnDragNotification_t4185738334 * ___onDragStarted_16;
	// UIScrollView/OnDragNotification UIScrollView::onDragFinished
	OnDragNotification_t4185738334 * ___onDragFinished_17;
	// UIScrollView/OnDragNotification UIScrollView::onMomentumMove
	OnDragNotification_t4185738334 * ___onMomentumMove_18;
	// UIScrollView/OnDragNotification UIScrollView::onStoppedMoving
	OnDragNotification_t4185738334 * ___onStoppedMoving_19;
	// UnityEngine.Vector3 UIScrollView::scale
	Vector3_t3525329789  ___scale_20;
	// UnityEngine.Vector2 UIScrollView::relativePositionOnReset
	Vector2_t3525329788  ___relativePositionOnReset_21;
	// UnityEngine.Transform UIScrollView::mTrans
	Transform_t284553113 * ___mTrans_22;
	// UIPanel UIScrollView::mPanel
	UIPanel_t295209936 * ___mPanel_23;
	// UnityEngine.Plane UIScrollView::mPlane
	Plane_t1600081545  ___mPlane_24;
	// UnityEngine.Vector3 UIScrollView::mLastPos
	Vector3_t3525329789  ___mLastPos_25;
	// System.Boolean UIScrollView::mPressed
	bool ___mPressed_26;
	// UnityEngine.Vector3 UIScrollView::mMomentum
	Vector3_t3525329789  ___mMomentum_27;
	// System.Single UIScrollView::mScroll
	float ___mScroll_28;
	// UnityEngine.Bounds UIScrollView::mBounds
	Bounds_t3518514978  ___mBounds_29;
	// System.Boolean UIScrollView::mCalculatedBounds
	bool ___mCalculatedBounds_30;
	// System.Boolean UIScrollView::mShouldMove
	bool ___mShouldMove_31;
	// System.Boolean UIScrollView::mIgnoreCallbacks
	bool ___mIgnoreCallbacks_32;
	// System.Int32 UIScrollView::mDragID
	int32_t ___mDragID_33;
	// UnityEngine.Vector2 UIScrollView::mDragStartOffset
	Vector2_t3525329788  ___mDragStartOffset_34;
	// System.Boolean UIScrollView::mDragStarted
	bool ___mDragStarted_35;
	// UICenterOnChild UIScrollView::centerOnChild
	UICenterOnChild_t854454836 * ___centerOnChild_36;

public:
	inline static int32_t get_offset_of_movement_3() { return static_cast<int32_t>(offsetof(UIScrollView_t2113479878, ___movement_3)); }
	inline int32_t get_movement_3() const { return ___movement_3; }
	inline int32_t* get_address_of_movement_3() { return &___movement_3; }
	inline void set_movement_3(int32_t value)
	{
		___movement_3 = value;
	}

	inline static int32_t get_offset_of_dragEffect_4() { return static_cast<int32_t>(offsetof(UIScrollView_t2113479878, ___dragEffect_4)); }
	inline int32_t get_dragEffect_4() const { return ___dragEffect_4; }
	inline int32_t* get_address_of_dragEffect_4() { return &___dragEffect_4; }
	inline void set_dragEffect_4(int32_t value)
	{
		___dragEffect_4 = value;
	}

	inline static int32_t get_offset_of_restrictWithinPanel_5() { return static_cast<int32_t>(offsetof(UIScrollView_t2113479878, ___restrictWithinPanel_5)); }
	inline bool get_restrictWithinPanel_5() const { return ___restrictWithinPanel_5; }
	inline bool* get_address_of_restrictWithinPanel_5() { return &___restrictWithinPanel_5; }
	inline void set_restrictWithinPanel_5(bool value)
	{
		___restrictWithinPanel_5 = value;
	}

	inline static int32_t get_offset_of_disableDragIfFits_6() { return static_cast<int32_t>(offsetof(UIScrollView_t2113479878, ___disableDragIfFits_6)); }
	inline bool get_disableDragIfFits_6() const { return ___disableDragIfFits_6; }
	inline bool* get_address_of_disableDragIfFits_6() { return &___disableDragIfFits_6; }
	inline void set_disableDragIfFits_6(bool value)
	{
		___disableDragIfFits_6 = value;
	}

	inline static int32_t get_offset_of_smoothDragStart_7() { return static_cast<int32_t>(offsetof(UIScrollView_t2113479878, ___smoothDragStart_7)); }
	inline bool get_smoothDragStart_7() const { return ___smoothDragStart_7; }
	inline bool* get_address_of_smoothDragStart_7() { return &___smoothDragStart_7; }
	inline void set_smoothDragStart_7(bool value)
	{
		___smoothDragStart_7 = value;
	}

	inline static int32_t get_offset_of_iOSDragEmulation_8() { return static_cast<int32_t>(offsetof(UIScrollView_t2113479878, ___iOSDragEmulation_8)); }
	inline bool get_iOSDragEmulation_8() const { return ___iOSDragEmulation_8; }
	inline bool* get_address_of_iOSDragEmulation_8() { return &___iOSDragEmulation_8; }
	inline void set_iOSDragEmulation_8(bool value)
	{
		___iOSDragEmulation_8 = value;
	}

	inline static int32_t get_offset_of_scrollWheelFactor_9() { return static_cast<int32_t>(offsetof(UIScrollView_t2113479878, ___scrollWheelFactor_9)); }
	inline float get_scrollWheelFactor_9() const { return ___scrollWheelFactor_9; }
	inline float* get_address_of_scrollWheelFactor_9() { return &___scrollWheelFactor_9; }
	inline void set_scrollWheelFactor_9(float value)
	{
		___scrollWheelFactor_9 = value;
	}

	inline static int32_t get_offset_of_momentumAmount_10() { return static_cast<int32_t>(offsetof(UIScrollView_t2113479878, ___momentumAmount_10)); }
	inline float get_momentumAmount_10() const { return ___momentumAmount_10; }
	inline float* get_address_of_momentumAmount_10() { return &___momentumAmount_10; }
	inline void set_momentumAmount_10(float value)
	{
		___momentumAmount_10 = value;
	}

	inline static int32_t get_offset_of_horizontalScrollBar_11() { return static_cast<int32_t>(offsetof(UIScrollView_t2113479878, ___horizontalScrollBar_11)); }
	inline UIProgressBar_t168062834 * get_horizontalScrollBar_11() const { return ___horizontalScrollBar_11; }
	inline UIProgressBar_t168062834 ** get_address_of_horizontalScrollBar_11() { return &___horizontalScrollBar_11; }
	inline void set_horizontalScrollBar_11(UIProgressBar_t168062834 * value)
	{
		___horizontalScrollBar_11 = value;
		Il2CppCodeGenWriteBarrier(&___horizontalScrollBar_11, value);
	}

	inline static int32_t get_offset_of_verticalScrollBar_12() { return static_cast<int32_t>(offsetof(UIScrollView_t2113479878, ___verticalScrollBar_12)); }
	inline UIProgressBar_t168062834 * get_verticalScrollBar_12() const { return ___verticalScrollBar_12; }
	inline UIProgressBar_t168062834 ** get_address_of_verticalScrollBar_12() { return &___verticalScrollBar_12; }
	inline void set_verticalScrollBar_12(UIProgressBar_t168062834 * value)
	{
		___verticalScrollBar_12 = value;
		Il2CppCodeGenWriteBarrier(&___verticalScrollBar_12, value);
	}

	inline static int32_t get_offset_of_showScrollBars_13() { return static_cast<int32_t>(offsetof(UIScrollView_t2113479878, ___showScrollBars_13)); }
	inline int32_t get_showScrollBars_13() const { return ___showScrollBars_13; }
	inline int32_t* get_address_of_showScrollBars_13() { return &___showScrollBars_13; }
	inline void set_showScrollBars_13(int32_t value)
	{
		___showScrollBars_13 = value;
	}

	inline static int32_t get_offset_of_customMovement_14() { return static_cast<int32_t>(offsetof(UIScrollView_t2113479878, ___customMovement_14)); }
	inline Vector2_t3525329788  get_customMovement_14() const { return ___customMovement_14; }
	inline Vector2_t3525329788 * get_address_of_customMovement_14() { return &___customMovement_14; }
	inline void set_customMovement_14(Vector2_t3525329788  value)
	{
		___customMovement_14 = value;
	}

	inline static int32_t get_offset_of_contentPivot_15() { return static_cast<int32_t>(offsetof(UIScrollView_t2113479878, ___contentPivot_15)); }
	inline int32_t get_contentPivot_15() const { return ___contentPivot_15; }
	inline int32_t* get_address_of_contentPivot_15() { return &___contentPivot_15; }
	inline void set_contentPivot_15(int32_t value)
	{
		___contentPivot_15 = value;
	}

	inline static int32_t get_offset_of_onDragStarted_16() { return static_cast<int32_t>(offsetof(UIScrollView_t2113479878, ___onDragStarted_16)); }
	inline OnDragNotification_t4185738334 * get_onDragStarted_16() const { return ___onDragStarted_16; }
	inline OnDragNotification_t4185738334 ** get_address_of_onDragStarted_16() { return &___onDragStarted_16; }
	inline void set_onDragStarted_16(OnDragNotification_t4185738334 * value)
	{
		___onDragStarted_16 = value;
		Il2CppCodeGenWriteBarrier(&___onDragStarted_16, value);
	}

	inline static int32_t get_offset_of_onDragFinished_17() { return static_cast<int32_t>(offsetof(UIScrollView_t2113479878, ___onDragFinished_17)); }
	inline OnDragNotification_t4185738334 * get_onDragFinished_17() const { return ___onDragFinished_17; }
	inline OnDragNotification_t4185738334 ** get_address_of_onDragFinished_17() { return &___onDragFinished_17; }
	inline void set_onDragFinished_17(OnDragNotification_t4185738334 * value)
	{
		___onDragFinished_17 = value;
		Il2CppCodeGenWriteBarrier(&___onDragFinished_17, value);
	}

	inline static int32_t get_offset_of_onMomentumMove_18() { return static_cast<int32_t>(offsetof(UIScrollView_t2113479878, ___onMomentumMove_18)); }
	inline OnDragNotification_t4185738334 * get_onMomentumMove_18() const { return ___onMomentumMove_18; }
	inline OnDragNotification_t4185738334 ** get_address_of_onMomentumMove_18() { return &___onMomentumMove_18; }
	inline void set_onMomentumMove_18(OnDragNotification_t4185738334 * value)
	{
		___onMomentumMove_18 = value;
		Il2CppCodeGenWriteBarrier(&___onMomentumMove_18, value);
	}

	inline static int32_t get_offset_of_onStoppedMoving_19() { return static_cast<int32_t>(offsetof(UIScrollView_t2113479878, ___onStoppedMoving_19)); }
	inline OnDragNotification_t4185738334 * get_onStoppedMoving_19() const { return ___onStoppedMoving_19; }
	inline OnDragNotification_t4185738334 ** get_address_of_onStoppedMoving_19() { return &___onStoppedMoving_19; }
	inline void set_onStoppedMoving_19(OnDragNotification_t4185738334 * value)
	{
		___onStoppedMoving_19 = value;
		Il2CppCodeGenWriteBarrier(&___onStoppedMoving_19, value);
	}

	inline static int32_t get_offset_of_scale_20() { return static_cast<int32_t>(offsetof(UIScrollView_t2113479878, ___scale_20)); }
	inline Vector3_t3525329789  get_scale_20() const { return ___scale_20; }
	inline Vector3_t3525329789 * get_address_of_scale_20() { return &___scale_20; }
	inline void set_scale_20(Vector3_t3525329789  value)
	{
		___scale_20 = value;
	}

	inline static int32_t get_offset_of_relativePositionOnReset_21() { return static_cast<int32_t>(offsetof(UIScrollView_t2113479878, ___relativePositionOnReset_21)); }
	inline Vector2_t3525329788  get_relativePositionOnReset_21() const { return ___relativePositionOnReset_21; }
	inline Vector2_t3525329788 * get_address_of_relativePositionOnReset_21() { return &___relativePositionOnReset_21; }
	inline void set_relativePositionOnReset_21(Vector2_t3525329788  value)
	{
		___relativePositionOnReset_21 = value;
	}

	inline static int32_t get_offset_of_mTrans_22() { return static_cast<int32_t>(offsetof(UIScrollView_t2113479878, ___mTrans_22)); }
	inline Transform_t284553113 * get_mTrans_22() const { return ___mTrans_22; }
	inline Transform_t284553113 ** get_address_of_mTrans_22() { return &___mTrans_22; }
	inline void set_mTrans_22(Transform_t284553113 * value)
	{
		___mTrans_22 = value;
		Il2CppCodeGenWriteBarrier(&___mTrans_22, value);
	}

	inline static int32_t get_offset_of_mPanel_23() { return static_cast<int32_t>(offsetof(UIScrollView_t2113479878, ___mPanel_23)); }
	inline UIPanel_t295209936 * get_mPanel_23() const { return ___mPanel_23; }
	inline UIPanel_t295209936 ** get_address_of_mPanel_23() { return &___mPanel_23; }
	inline void set_mPanel_23(UIPanel_t295209936 * value)
	{
		___mPanel_23 = value;
		Il2CppCodeGenWriteBarrier(&___mPanel_23, value);
	}

	inline static int32_t get_offset_of_mPlane_24() { return static_cast<int32_t>(offsetof(UIScrollView_t2113479878, ___mPlane_24)); }
	inline Plane_t1600081545  get_mPlane_24() const { return ___mPlane_24; }
	inline Plane_t1600081545 * get_address_of_mPlane_24() { return &___mPlane_24; }
	inline void set_mPlane_24(Plane_t1600081545  value)
	{
		___mPlane_24 = value;
	}

	inline static int32_t get_offset_of_mLastPos_25() { return static_cast<int32_t>(offsetof(UIScrollView_t2113479878, ___mLastPos_25)); }
	inline Vector3_t3525329789  get_mLastPos_25() const { return ___mLastPos_25; }
	inline Vector3_t3525329789 * get_address_of_mLastPos_25() { return &___mLastPos_25; }
	inline void set_mLastPos_25(Vector3_t3525329789  value)
	{
		___mLastPos_25 = value;
	}

	inline static int32_t get_offset_of_mPressed_26() { return static_cast<int32_t>(offsetof(UIScrollView_t2113479878, ___mPressed_26)); }
	inline bool get_mPressed_26() const { return ___mPressed_26; }
	inline bool* get_address_of_mPressed_26() { return &___mPressed_26; }
	inline void set_mPressed_26(bool value)
	{
		___mPressed_26 = value;
	}

	inline static int32_t get_offset_of_mMomentum_27() { return static_cast<int32_t>(offsetof(UIScrollView_t2113479878, ___mMomentum_27)); }
	inline Vector3_t3525329789  get_mMomentum_27() const { return ___mMomentum_27; }
	inline Vector3_t3525329789 * get_address_of_mMomentum_27() { return &___mMomentum_27; }
	inline void set_mMomentum_27(Vector3_t3525329789  value)
	{
		___mMomentum_27 = value;
	}

	inline static int32_t get_offset_of_mScroll_28() { return static_cast<int32_t>(offsetof(UIScrollView_t2113479878, ___mScroll_28)); }
	inline float get_mScroll_28() const { return ___mScroll_28; }
	inline float* get_address_of_mScroll_28() { return &___mScroll_28; }
	inline void set_mScroll_28(float value)
	{
		___mScroll_28 = value;
	}

	inline static int32_t get_offset_of_mBounds_29() { return static_cast<int32_t>(offsetof(UIScrollView_t2113479878, ___mBounds_29)); }
	inline Bounds_t3518514978  get_mBounds_29() const { return ___mBounds_29; }
	inline Bounds_t3518514978 * get_address_of_mBounds_29() { return &___mBounds_29; }
	inline void set_mBounds_29(Bounds_t3518514978  value)
	{
		___mBounds_29 = value;
	}

	inline static int32_t get_offset_of_mCalculatedBounds_30() { return static_cast<int32_t>(offsetof(UIScrollView_t2113479878, ___mCalculatedBounds_30)); }
	inline bool get_mCalculatedBounds_30() const { return ___mCalculatedBounds_30; }
	inline bool* get_address_of_mCalculatedBounds_30() { return &___mCalculatedBounds_30; }
	inline void set_mCalculatedBounds_30(bool value)
	{
		___mCalculatedBounds_30 = value;
	}

	inline static int32_t get_offset_of_mShouldMove_31() { return static_cast<int32_t>(offsetof(UIScrollView_t2113479878, ___mShouldMove_31)); }
	inline bool get_mShouldMove_31() const { return ___mShouldMove_31; }
	inline bool* get_address_of_mShouldMove_31() { return &___mShouldMove_31; }
	inline void set_mShouldMove_31(bool value)
	{
		___mShouldMove_31 = value;
	}

	inline static int32_t get_offset_of_mIgnoreCallbacks_32() { return static_cast<int32_t>(offsetof(UIScrollView_t2113479878, ___mIgnoreCallbacks_32)); }
	inline bool get_mIgnoreCallbacks_32() const { return ___mIgnoreCallbacks_32; }
	inline bool* get_address_of_mIgnoreCallbacks_32() { return &___mIgnoreCallbacks_32; }
	inline void set_mIgnoreCallbacks_32(bool value)
	{
		___mIgnoreCallbacks_32 = value;
	}

	inline static int32_t get_offset_of_mDragID_33() { return static_cast<int32_t>(offsetof(UIScrollView_t2113479878, ___mDragID_33)); }
	inline int32_t get_mDragID_33() const { return ___mDragID_33; }
	inline int32_t* get_address_of_mDragID_33() { return &___mDragID_33; }
	inline void set_mDragID_33(int32_t value)
	{
		___mDragID_33 = value;
	}

	inline static int32_t get_offset_of_mDragStartOffset_34() { return static_cast<int32_t>(offsetof(UIScrollView_t2113479878, ___mDragStartOffset_34)); }
	inline Vector2_t3525329788  get_mDragStartOffset_34() const { return ___mDragStartOffset_34; }
	inline Vector2_t3525329788 * get_address_of_mDragStartOffset_34() { return &___mDragStartOffset_34; }
	inline void set_mDragStartOffset_34(Vector2_t3525329788  value)
	{
		___mDragStartOffset_34 = value;
	}

	inline static int32_t get_offset_of_mDragStarted_35() { return static_cast<int32_t>(offsetof(UIScrollView_t2113479878, ___mDragStarted_35)); }
	inline bool get_mDragStarted_35() const { return ___mDragStarted_35; }
	inline bool* get_address_of_mDragStarted_35() { return &___mDragStarted_35; }
	inline void set_mDragStarted_35(bool value)
	{
		___mDragStarted_35 = value;
	}

	inline static int32_t get_offset_of_centerOnChild_36() { return static_cast<int32_t>(offsetof(UIScrollView_t2113479878, ___centerOnChild_36)); }
	inline UICenterOnChild_t854454836 * get_centerOnChild_36() const { return ___centerOnChild_36; }
	inline UICenterOnChild_t854454836 ** get_address_of_centerOnChild_36() { return &___centerOnChild_36; }
	inline void set_centerOnChild_36(UICenterOnChild_t854454836 * value)
	{
		___centerOnChild_36 = value;
		Il2CppCodeGenWriteBarrier(&___centerOnChild_36, value);
	}
};

struct UIScrollView_t2113479878_StaticFields
{
public:
	// BetterList`1<UIScrollView> UIScrollView::list
	BetterList_1_t3610447890 * ___list_2;

public:
	inline static int32_t get_offset_of_list_2() { return static_cast<int32_t>(offsetof(UIScrollView_t2113479878_StaticFields, ___list_2)); }
	inline BetterList_1_t3610447890 * get_list_2() const { return ___list_2; }
	inline BetterList_1_t3610447890 ** get_address_of_list_2() { return &___list_2; }
	inline void set_list_2(BetterList_1_t3610447890 * value)
	{
		___list_2 = value;
		Il2CppCodeGenWriteBarrier(&___list_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
