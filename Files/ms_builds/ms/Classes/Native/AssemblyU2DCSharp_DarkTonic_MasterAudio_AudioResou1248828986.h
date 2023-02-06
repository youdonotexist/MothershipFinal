#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Action
struct Action_t437523947;
// UnityEngine.ResourceRequest
struct ResourceRequest_t2256525006;
// UnityEngine.AudioClip
struct AudioClip_t3714538611;
// System.Collections.Generic.List`1<UnityEngine.AudioSource>
struct List_1_t130540727;
// System.Object
struct Il2CppObject;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DarkTonic.MasterAudio.AudioResourceOptimizer/<PopulateSourcesWithResourceClipAsync>c__Iterator3
struct  U3CPopulateSourcesWithResourceClipAsyncU3Ec__Iterator3_t1248828986  : public Il2CppObject
{
public:
	// System.String DarkTonic.MasterAudio.AudioResourceOptimizer/<PopulateSourcesWithResourceClipAsync>c__Iterator3::clipName
	String_t* ___clipName_0;
	// System.Action DarkTonic.MasterAudio.AudioResourceOptimizer/<PopulateSourcesWithResourceClipAsync>c__Iterator3::successAction
	Action_t437523947 * ___successAction_1;
	// UnityEngine.ResourceRequest DarkTonic.MasterAudio.AudioResourceOptimizer/<PopulateSourcesWithResourceClipAsync>c__Iterator3::<asyncRes>__0
	ResourceRequest_t2256525006 * ___U3CasyncResU3E__0_2;
	// UnityEngine.AudioClip DarkTonic.MasterAudio.AudioResourceOptimizer/<PopulateSourcesWithResourceClipAsync>c__Iterator3::<resAudioClip>__1
	AudioClip_t3714538611 * ___U3CresAudioClipU3E__1_3;
	// System.Action DarkTonic.MasterAudio.AudioResourceOptimizer/<PopulateSourcesWithResourceClipAsync>c__Iterator3::failureAction
	Action_t437523947 * ___failureAction_4;
	// System.Collections.Generic.List`1<UnityEngine.AudioSource> DarkTonic.MasterAudio.AudioResourceOptimizer/<PopulateSourcesWithResourceClipAsync>c__Iterator3::<sources>__2
	List_1_t130540727 * ___U3CsourcesU3E__2_5;
	// System.Int32 DarkTonic.MasterAudio.AudioResourceOptimizer/<PopulateSourcesWithResourceClipAsync>c__Iterator3::<i>__3
	int32_t ___U3CiU3E__3_6;
	// System.Int32 DarkTonic.MasterAudio.AudioResourceOptimizer/<PopulateSourcesWithResourceClipAsync>c__Iterator3::$PC
	int32_t ___U24PC_7;
	// System.Object DarkTonic.MasterAudio.AudioResourceOptimizer/<PopulateSourcesWithResourceClipAsync>c__Iterator3::$current
	Il2CppObject * ___U24current_8;
	// System.String DarkTonic.MasterAudio.AudioResourceOptimizer/<PopulateSourcesWithResourceClipAsync>c__Iterator3::<$>clipName
	String_t* ___U3CU24U3EclipName_9;
	// System.Action DarkTonic.MasterAudio.AudioResourceOptimizer/<PopulateSourcesWithResourceClipAsync>c__Iterator3::<$>successAction
	Action_t437523947 * ___U3CU24U3EsuccessAction_10;
	// System.Action DarkTonic.MasterAudio.AudioResourceOptimizer/<PopulateSourcesWithResourceClipAsync>c__Iterator3::<$>failureAction
	Action_t437523947 * ___U3CU24U3EfailureAction_11;

public:
	inline static int32_t get_offset_of_clipName_0() { return static_cast<int32_t>(offsetof(U3CPopulateSourcesWithResourceClipAsyncU3Ec__Iterator3_t1248828986, ___clipName_0)); }
	inline String_t* get_clipName_0() const { return ___clipName_0; }
	inline String_t** get_address_of_clipName_0() { return &___clipName_0; }
	inline void set_clipName_0(String_t* value)
	{
		___clipName_0 = value;
		Il2CppCodeGenWriteBarrier(&___clipName_0, value);
	}

	inline static int32_t get_offset_of_successAction_1() { return static_cast<int32_t>(offsetof(U3CPopulateSourcesWithResourceClipAsyncU3Ec__Iterator3_t1248828986, ___successAction_1)); }
	inline Action_t437523947 * get_successAction_1() const { return ___successAction_1; }
	inline Action_t437523947 ** get_address_of_successAction_1() { return &___successAction_1; }
	inline void set_successAction_1(Action_t437523947 * value)
	{
		___successAction_1 = value;
		Il2CppCodeGenWriteBarrier(&___successAction_1, value);
	}

	inline static int32_t get_offset_of_U3CasyncResU3E__0_2() { return static_cast<int32_t>(offsetof(U3CPopulateSourcesWithResourceClipAsyncU3Ec__Iterator3_t1248828986, ___U3CasyncResU3E__0_2)); }
	inline ResourceRequest_t2256525006 * get_U3CasyncResU3E__0_2() const { return ___U3CasyncResU3E__0_2; }
	inline ResourceRequest_t2256525006 ** get_address_of_U3CasyncResU3E__0_2() { return &___U3CasyncResU3E__0_2; }
	inline void set_U3CasyncResU3E__0_2(ResourceRequest_t2256525006 * value)
	{
		___U3CasyncResU3E__0_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CasyncResU3E__0_2, value);
	}

	inline static int32_t get_offset_of_U3CresAudioClipU3E__1_3() { return static_cast<int32_t>(offsetof(U3CPopulateSourcesWithResourceClipAsyncU3Ec__Iterator3_t1248828986, ___U3CresAudioClipU3E__1_3)); }
	inline AudioClip_t3714538611 * get_U3CresAudioClipU3E__1_3() const { return ___U3CresAudioClipU3E__1_3; }
	inline AudioClip_t3714538611 ** get_address_of_U3CresAudioClipU3E__1_3() { return &___U3CresAudioClipU3E__1_3; }
	inline void set_U3CresAudioClipU3E__1_3(AudioClip_t3714538611 * value)
	{
		___U3CresAudioClipU3E__1_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CresAudioClipU3E__1_3, value);
	}

	inline static int32_t get_offset_of_failureAction_4() { return static_cast<int32_t>(offsetof(U3CPopulateSourcesWithResourceClipAsyncU3Ec__Iterator3_t1248828986, ___failureAction_4)); }
	inline Action_t437523947 * get_failureAction_4() const { return ___failureAction_4; }
	inline Action_t437523947 ** get_address_of_failureAction_4() { return &___failureAction_4; }
	inline void set_failureAction_4(Action_t437523947 * value)
	{
		___failureAction_4 = value;
		Il2CppCodeGenWriteBarrier(&___failureAction_4, value);
	}

	inline static int32_t get_offset_of_U3CsourcesU3E__2_5() { return static_cast<int32_t>(offsetof(U3CPopulateSourcesWithResourceClipAsyncU3Ec__Iterator3_t1248828986, ___U3CsourcesU3E__2_5)); }
	inline List_1_t130540727 * get_U3CsourcesU3E__2_5() const { return ___U3CsourcesU3E__2_5; }
	inline List_1_t130540727 ** get_address_of_U3CsourcesU3E__2_5() { return &___U3CsourcesU3E__2_5; }
	inline void set_U3CsourcesU3E__2_5(List_1_t130540727 * value)
	{
		___U3CsourcesU3E__2_5 = value;
		Il2CppCodeGenWriteBarrier(&___U3CsourcesU3E__2_5, value);
	}

	inline static int32_t get_offset_of_U3CiU3E__3_6() { return static_cast<int32_t>(offsetof(U3CPopulateSourcesWithResourceClipAsyncU3Ec__Iterator3_t1248828986, ___U3CiU3E__3_6)); }
	inline int32_t get_U3CiU3E__3_6() const { return ___U3CiU3E__3_6; }
	inline int32_t* get_address_of_U3CiU3E__3_6() { return &___U3CiU3E__3_6; }
	inline void set_U3CiU3E__3_6(int32_t value)
	{
		___U3CiU3E__3_6 = value;
	}

	inline static int32_t get_offset_of_U24PC_7() { return static_cast<int32_t>(offsetof(U3CPopulateSourcesWithResourceClipAsyncU3Ec__Iterator3_t1248828986, ___U24PC_7)); }
	inline int32_t get_U24PC_7() const { return ___U24PC_7; }
	inline int32_t* get_address_of_U24PC_7() { return &___U24PC_7; }
	inline void set_U24PC_7(int32_t value)
	{
		___U24PC_7 = value;
	}

	inline static int32_t get_offset_of_U24current_8() { return static_cast<int32_t>(offsetof(U3CPopulateSourcesWithResourceClipAsyncU3Ec__Iterator3_t1248828986, ___U24current_8)); }
	inline Il2CppObject * get_U24current_8() const { return ___U24current_8; }
	inline Il2CppObject ** get_address_of_U24current_8() { return &___U24current_8; }
	inline void set_U24current_8(Il2CppObject * value)
	{
		___U24current_8 = value;
		Il2CppCodeGenWriteBarrier(&___U24current_8, value);
	}

	inline static int32_t get_offset_of_U3CU24U3EclipName_9() { return static_cast<int32_t>(offsetof(U3CPopulateSourcesWithResourceClipAsyncU3Ec__Iterator3_t1248828986, ___U3CU24U3EclipName_9)); }
	inline String_t* get_U3CU24U3EclipName_9() const { return ___U3CU24U3EclipName_9; }
	inline String_t** get_address_of_U3CU24U3EclipName_9() { return &___U3CU24U3EclipName_9; }
	inline void set_U3CU24U3EclipName_9(String_t* value)
	{
		___U3CU24U3EclipName_9 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU24U3EclipName_9, value);
	}

	inline static int32_t get_offset_of_U3CU24U3EsuccessAction_10() { return static_cast<int32_t>(offsetof(U3CPopulateSourcesWithResourceClipAsyncU3Ec__Iterator3_t1248828986, ___U3CU24U3EsuccessAction_10)); }
	inline Action_t437523947 * get_U3CU24U3EsuccessAction_10() const { return ___U3CU24U3EsuccessAction_10; }
	inline Action_t437523947 ** get_address_of_U3CU24U3EsuccessAction_10() { return &___U3CU24U3EsuccessAction_10; }
	inline void set_U3CU24U3EsuccessAction_10(Action_t437523947 * value)
	{
		___U3CU24U3EsuccessAction_10 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU24U3EsuccessAction_10, value);
	}

	inline static int32_t get_offset_of_U3CU24U3EfailureAction_11() { return static_cast<int32_t>(offsetof(U3CPopulateSourcesWithResourceClipAsyncU3Ec__Iterator3_t1248828986, ___U3CU24U3EfailureAction_11)); }
	inline Action_t437523947 * get_U3CU24U3EfailureAction_11() const { return ___U3CU24U3EfailureAction_11; }
	inline Action_t437523947 ** get_address_of_U3CU24U3EfailureAction_11() { return &___U3CU24U3EfailureAction_11; }
	inline void set_U3CU24U3EfailureAction_11(Action_t437523947 * value)
	{
		___U3CU24U3EfailureAction_11 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU24U3EfailureAction_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
