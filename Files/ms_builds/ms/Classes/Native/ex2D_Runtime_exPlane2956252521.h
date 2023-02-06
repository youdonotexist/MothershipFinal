#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Camera
struct Camera_t3533968274;
// exClipping
struct exClipping_t464063125;
// exCollisionHelper
struct exCollisionHelper_t3326075981;
// UnityEngine.MeshFilter
struct MeshFilter_t4177078322;
// exSpriteMng
struct exSpriteMng_t228599406;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "ex2D_Runtime_exPlane_Anchor1965534933.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"
#include "UnityEngine_UnityEngine_Rect1525428817.h"
#include "ex2D_Runtime_exPlane_UpdateFlags1071088414.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// exPlane
struct  exPlane_t2956252521  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Camera exPlane::camera_
	Camera_t3533968274 * ___camera__2;
	// exPlane/Anchor exPlane::anchor_
	int32_t ___anchor__3;
	// UnityEngine.Vector2 exPlane::offset_
	Vector2_t3525329788  ___offset__4;
	// exClipping exPlane::clippingPlane
	exClipping_t464063125 * ___clippingPlane_5;
	// UnityEngine.Rect exPlane::boundingRect_
	Rect_t1525428817  ___boundingRect__6;
	// exCollisionHelper exPlane::collisionHelper_
	exCollisionHelper_t3326075981 * ___collisionHelper__7;
	// UnityEngine.MeshFilter exPlane::meshFilter_
	MeshFilter_t4177078322 * ___meshFilter__8;
	// exPlane/UpdateFlags exPlane::updateFlags_
	int32_t ___updateFlags__9;
	// exSpriteMng exPlane::spriteMng_
	exSpriteMng_t228599406 * ___spriteMng__10;
	// System.Boolean exPlane::inCommitList
	bool ___inCommitList_11;

public:
	inline static int32_t get_offset_of_camera__2() { return static_cast<int32_t>(offsetof(exPlane_t2956252521, ___camera__2)); }
	inline Camera_t3533968274 * get_camera__2() const { return ___camera__2; }
	inline Camera_t3533968274 ** get_address_of_camera__2() { return &___camera__2; }
	inline void set_camera__2(Camera_t3533968274 * value)
	{
		___camera__2 = value;
		Il2CppCodeGenWriteBarrier(&___camera__2, value);
	}

	inline static int32_t get_offset_of_anchor__3() { return static_cast<int32_t>(offsetof(exPlane_t2956252521, ___anchor__3)); }
	inline int32_t get_anchor__3() const { return ___anchor__3; }
	inline int32_t* get_address_of_anchor__3() { return &___anchor__3; }
	inline void set_anchor__3(int32_t value)
	{
		___anchor__3 = value;
	}

	inline static int32_t get_offset_of_offset__4() { return static_cast<int32_t>(offsetof(exPlane_t2956252521, ___offset__4)); }
	inline Vector2_t3525329788  get_offset__4() const { return ___offset__4; }
	inline Vector2_t3525329788 * get_address_of_offset__4() { return &___offset__4; }
	inline void set_offset__4(Vector2_t3525329788  value)
	{
		___offset__4 = value;
	}

	inline static int32_t get_offset_of_clippingPlane_5() { return static_cast<int32_t>(offsetof(exPlane_t2956252521, ___clippingPlane_5)); }
	inline exClipping_t464063125 * get_clippingPlane_5() const { return ___clippingPlane_5; }
	inline exClipping_t464063125 ** get_address_of_clippingPlane_5() { return &___clippingPlane_5; }
	inline void set_clippingPlane_5(exClipping_t464063125 * value)
	{
		___clippingPlane_5 = value;
		Il2CppCodeGenWriteBarrier(&___clippingPlane_5, value);
	}

	inline static int32_t get_offset_of_boundingRect__6() { return static_cast<int32_t>(offsetof(exPlane_t2956252521, ___boundingRect__6)); }
	inline Rect_t1525428817  get_boundingRect__6() const { return ___boundingRect__6; }
	inline Rect_t1525428817 * get_address_of_boundingRect__6() { return &___boundingRect__6; }
	inline void set_boundingRect__6(Rect_t1525428817  value)
	{
		___boundingRect__6 = value;
	}

	inline static int32_t get_offset_of_collisionHelper__7() { return static_cast<int32_t>(offsetof(exPlane_t2956252521, ___collisionHelper__7)); }
	inline exCollisionHelper_t3326075981 * get_collisionHelper__7() const { return ___collisionHelper__7; }
	inline exCollisionHelper_t3326075981 ** get_address_of_collisionHelper__7() { return &___collisionHelper__7; }
	inline void set_collisionHelper__7(exCollisionHelper_t3326075981 * value)
	{
		___collisionHelper__7 = value;
		Il2CppCodeGenWriteBarrier(&___collisionHelper__7, value);
	}

	inline static int32_t get_offset_of_meshFilter__8() { return static_cast<int32_t>(offsetof(exPlane_t2956252521, ___meshFilter__8)); }
	inline MeshFilter_t4177078322 * get_meshFilter__8() const { return ___meshFilter__8; }
	inline MeshFilter_t4177078322 ** get_address_of_meshFilter__8() { return &___meshFilter__8; }
	inline void set_meshFilter__8(MeshFilter_t4177078322 * value)
	{
		___meshFilter__8 = value;
		Il2CppCodeGenWriteBarrier(&___meshFilter__8, value);
	}

	inline static int32_t get_offset_of_updateFlags__9() { return static_cast<int32_t>(offsetof(exPlane_t2956252521, ___updateFlags__9)); }
	inline int32_t get_updateFlags__9() const { return ___updateFlags__9; }
	inline int32_t* get_address_of_updateFlags__9() { return &___updateFlags__9; }
	inline void set_updateFlags__9(int32_t value)
	{
		___updateFlags__9 = value;
	}

	inline static int32_t get_offset_of_spriteMng__10() { return static_cast<int32_t>(offsetof(exPlane_t2956252521, ___spriteMng__10)); }
	inline exSpriteMng_t228599406 * get_spriteMng__10() const { return ___spriteMng__10; }
	inline exSpriteMng_t228599406 ** get_address_of_spriteMng__10() { return &___spriteMng__10; }
	inline void set_spriteMng__10(exSpriteMng_t228599406 * value)
	{
		___spriteMng__10 = value;
		Il2CppCodeGenWriteBarrier(&___spriteMng__10, value);
	}

	inline static int32_t get_offset_of_inCommitList_11() { return static_cast<int32_t>(offsetof(exPlane_t2956252521, ___inCommitList_11)); }
	inline bool get_inCommitList_11() const { return ___inCommitList_11; }
	inline bool* get_address_of_inCommitList_11() { return &___inCommitList_11; }
	inline void set_inCommitList_11(bool value)
	{
		___inCommitList_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
