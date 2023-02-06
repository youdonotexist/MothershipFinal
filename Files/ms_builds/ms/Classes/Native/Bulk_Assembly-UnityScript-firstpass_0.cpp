#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

// DragRigidbody
struct DragRigidbody_t2531437401;
// UnityEngine.Rigidbody
struct Rigidbody_t1972007546;
// System.Object
struct Il2CppObject;
// UnityEngine.SpringJoint
struct SpringJoint_t2446926506;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// UnityEngine.Camera
struct Camera_t3533968274;
// DragRigidbody/$DragObject$3
struct U24DragObjectU243_t605040550;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2320212868;
// DragRigidbody/$DragObject$3/$
struct U24_t36;
// MouseOrbit
struct MouseOrbit_t2986430149;
// SmoothFollow
struct SmoothFollow_t651130655;
// SmoothLookAt
struct SmoothLookAt_t822992544;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array2840145358.h"
#include "AssemblyU2DUnityScriptU2Dfirstpass_U3CModuleU3E86524790.h"
#include "AssemblyU2DUnityScriptU2Dfirstpass_U3CModuleU3E86524790MethodDeclarations.h"
#include "AssemblyU2DUnityScriptU2Dfirstpass_DragRigidbody2531437401.h"
#include "AssemblyU2DUnityScriptU2Dfirstpass_DragRigidbody2531437401MethodDeclarations.h"
#include "mscorlib_System_Void2779279689.h"
#include "UnityEngine_UnityEngine_MonoBehaviour3012272455MethodDeclarations.h"
#include "mscorlib_System_Single958209021.h"
#include "UnityEngine_UnityEngine_Input1593691127MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Camera3533968274MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Physics2601443956MethodDeclarations.h"
#include "UnityEngine_UnityEngine_RaycastHit46221527MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Object3878351788MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Rigidbody1972007546MethodDeclarations.h"
#include "UnityEngine_UnityEngine_GameObject4012695102MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Component2126946602MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Transform284553113MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Vector33525329789MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Joint1594637495MethodDeclarations.h"
#include "UnityEngine_UnityEngine_SpringJoint2446926506MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Camera3533968274.h"
#include "UnityEngine_UnityEngine_RaycastHit46221527.h"
#include "UnityEngine_UnityEngine_GameObject4012695102.h"
#include "UnityEngine_UnityEngine_Rigidbody1972007546.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "mscorlib_System_Boolean211005341.h"
#include "mscorlib_System_Int322847414787.h"
#include "UnityEngine_UnityEngine_Ray1522967639.h"
#include "UnityEngine_UnityEngine_Object3878351788.h"
#include "UnityEngine_UnityEngine_SpringJoint2446926506.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_UnityEngine_Transform284553113.h"
#include "UnityEngine_UnityEngine_Coroutine2246592261.h"
#include "mscorlib_System_Object837106420.h"
#include "AssemblyU2DUnityScriptU2Dfirstpass_DragRigidbody_U2605040550MethodDeclarations.h"
#include "AssemblyU2DUnityScriptU2Dfirstpass_DragRigidbody_U2605040550.h"
#include "UnityEngine_UnityEngine_Component2126946602.h"
#include "Boo_Lang_Boo_Lang_GenericGenerator_1_gen1905578860MethodDeclarations.h"
#include "AssemblyU2DUnityScriptU2Dfirstpass_DragRigidbody_U24DragOb36MethodDeclarations.h"
#include "AssemblyU2DUnityScriptU2Dfirstpass_DragRigidbody_U24DragOb36.h"
#include "Boo_Lang_Boo_Lang_GenericGeneratorEnumerator_1_gen602172848MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Ray1522967639MethodDeclarations.h"
#include "Boo_Lang_Boo_Lang_GenericGeneratorEnumerator_1_gen602172848.h"
#include "AssemblyU2DUnityScriptU2Dfirstpass_MouseOrbit2986430149.h"
#include "AssemblyU2DUnityScriptU2Dfirstpass_MouseOrbit2986430149MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Quaternion1891715979MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Quaternion1891715979.h"
#include "UnityEngine_UnityEngine_Mathf1597001355MethodDeclarations.h"
#include "AssemblyU2DUnityScriptU2Dfirstpass_SmoothFollow651130655.h"
#include "AssemblyU2DUnityScriptU2Dfirstpass_SmoothFollow651130655MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Time1525492538MethodDeclarations.h"
#include "AssemblyU2DUnityScriptU2Dfirstpass_SmoothLookAt822992544.h"
#include "AssemblyU2DUnityScriptU2Dfirstpass_SmoothLookAt822992544MethodDeclarations.h"

// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
extern "C"  Il2CppObject * GameObject_AddComponent_TisIl2CppObject_m337943659_gshared (GameObject_t4012695102 * __this, const MethodInfo* method);
#define GameObject_AddComponent_TisIl2CppObject_m337943659(__this, method) ((  Il2CppObject * (*) (GameObject_t4012695102 *, const MethodInfo*))GameObject_AddComponent_TisIl2CppObject_m337943659_gshared)(__this, method)
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.Rigidbody>()
#define GameObject_AddComponent_TisRigidbody_t1972007546_m107677727(__this, method) ((  Rigidbody_t1972007546 * (*) (GameObject_t4012695102 *, const MethodInfo*))GameObject_AddComponent_TisIl2CppObject_m337943659_gshared)(__this, method)
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.SpringJoint>()
#define GameObject_AddComponent_TisSpringJoint_t2446926506_m1843786415(__this, method) ((  SpringJoint_t2446926506 * (*) (GameObject_t4012695102 *, const MethodInfo*))GameObject_AddComponent_TisIl2CppObject_m337943659_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C"  Il2CppObject * Component_GetComponent_TisIl2CppObject_m267839954_gshared (Component_t2126946602 * __this, const MethodInfo* method);
#define Component_GetComponent_TisIl2CppObject_m267839954(__this, method) ((  Il2CppObject * (*) (Component_t2126946602 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m267839954_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Camera>()
#define Component_GetComponent_TisCamera_t3533968274_m3804104198(__this, method) ((  Camera_t3533968274 * (*) (Component_t2126946602 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m267839954_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
#define Component_GetComponent_TisRigidbody_t1972007546_m354583034(__this, method) ((  Rigidbody_t1972007546 * (*) (Component_t2126946602 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m267839954_gshared)(__this, method)
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DragRigidbody::.ctor()
extern "C"  void DragRigidbody__ctor_m1875031657 (DragRigidbody_t2531437401 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		__this->set_spring_2((50.0f));
		__this->set_damper_3((5.0f));
		__this->set_drag_4((10.0f));
		__this->set_angularDrag_5((5.0f));
		__this->set_distance_6((0.2f));
		return;
	}
}
// System.Void DragRigidbody::Update()
extern TypeInfo* Input_t1593691127_il2cpp_TypeInfo_var;
extern TypeInfo* RaycastHit_t46221527_il2cpp_TypeInfo_var;
extern TypeInfo* GameObject_t4012695102_il2cpp_TypeInfo_var;
extern TypeInfo* Rigidbody_t1972007546_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t958209021_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_AddComponent_TisRigidbody_t1972007546_m107677727_MethodInfo_var;
extern const MethodInfo* GameObject_AddComponent_TisSpringJoint_t2446926506_m1843786415_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral3254981293;
extern Il2CppCodeGenString* _stringLiteral458547635;
extern const uint32_t DragRigidbody_Update_m4018268612_MetadataUsageId;
extern "C"  void DragRigidbody_Update_m4018268612 (DragRigidbody_t2531437401 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (DragRigidbody_Update_m4018268612_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	Camera_t3533968274 * V_0 = NULL;
	RaycastHit_t46221527  V_1;
	memset(&V_1, 0, sizeof(V_1));
	GameObject_t4012695102 * V_2 = NULL;
	Rigidbody_t1972007546 * V_3 = NULL;
	Vector3_t3525329789  V_4;
	memset(&V_4, 0, sizeof(V_4));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1593691127_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetMouseButtonDown_m2031691843(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		goto IL_0183;
	}

IL_0010:
	{
		Camera_t3533968274 * L_1 = VirtFuncInvoker0< Camera_t3533968274 * >::Invoke(6 /* UnityEngine.Camera DragRigidbody::FindCamera() */, __this);
		V_0 = L_1;
		Initobj (RaycastHit_t46221527_il2cpp_TypeInfo_var, (&V_1));
		Camera_t3533968274 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1593691127_il2cpp_TypeInfo_var);
		Vector3_t3525329789  L_3 = Input_get_mousePosition_m4020233228(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		Ray_t1522967639  L_4 = Camera_ScreenPointToRay_m1733083890(L_2, L_3, /*hidden argument*/NULL);
		bool L_5 = Physics_Raycast_m1235528076(NULL /*static, unused*/, L_4, (&V_1), (((float)((float)((int32_t)100)))), /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_003e;
		}
	}
	{
		goto IL_0183;
	}

IL_003e:
	{
		Rigidbody_t1972007546 * L_6 = RaycastHit_get_rigidbody_m4137883432((&V_1), /*hidden argument*/NULL);
		bool L_7 = Object_op_Implicit_m2106766291(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0060;
		}
	}
	{
		Rigidbody_t1972007546 * L_8 = RaycastHit_get_rigidbody_m4137883432((&V_1), /*hidden argument*/NULL);
		NullCheck(L_8);
		bool L_9 = Rigidbody_get_isKinematic_m3963857442(L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0065;
		}
	}

IL_0060:
	{
		goto IL_0183;
	}

IL_0065:
	{
		SpringJoint_t2446926506 * L_10 = __this->get_springJoint_8();
		bool L_11 = Object_op_Implicit_m2106766291(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		if (L_11)
		{
			goto IL_009f;
		}
	}
	{
		GameObject_t4012695102 * L_12 = (GameObject_t4012695102 *)il2cpp_codegen_object_new(GameObject_t4012695102_il2cpp_TypeInfo_var);
		GameObject__ctor_m3920833606(L_12, _stringLiteral3254981293, /*hidden argument*/NULL);
		V_2 = L_12;
		GameObject_t4012695102 * L_13 = V_2;
		NullCheck(L_13);
		Rigidbody_t1972007546 * L_14 = GameObject_AddComponent_TisRigidbody_t1972007546_m107677727(L_13, /*hidden argument*/GameObject_AddComponent_TisRigidbody_t1972007546_m107677727_MethodInfo_var);
		V_3 = ((Rigidbody_t1972007546 *)IsInstSealed(L_14, Rigidbody_t1972007546_il2cpp_TypeInfo_var));
		GameObject_t4012695102 * L_15 = V_2;
		NullCheck(L_15);
		SpringJoint_t2446926506 * L_16 = GameObject_AddComponent_TisSpringJoint_t2446926506_m1843786415(L_15, /*hidden argument*/GameObject_AddComponent_TisSpringJoint_t2446926506_m1843786415_MethodInfo_var);
		__this->set_springJoint_8(L_16);
		Rigidbody_t1972007546 * L_17 = V_3;
		NullCheck(L_17);
		Rigidbody_set_isKinematic_m294703295(L_17, (bool)1, /*hidden argument*/NULL);
	}

IL_009f:
	{
		SpringJoint_t2446926506 * L_18 = __this->get_springJoint_8();
		NullCheck(L_18);
		Transform_t284553113 * L_19 = Component_get_transform_m4257140443(L_18, /*hidden argument*/NULL);
		Vector3_t3525329789  L_20 = RaycastHit_get_point_m4165497838((&V_1), /*hidden argument*/NULL);
		NullCheck(L_19);
		Transform_set_position_m3111394108(L_19, L_20, /*hidden argument*/NULL);
		bool L_21 = __this->get_attachToCenterOfMass_7();
		if (!L_21)
		{
			goto IL_0116;
		}
	}
	{
		Transform_t284553113 * L_22 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Rigidbody_t1972007546 * L_23 = RaycastHit_get_rigidbody_m4137883432((&V_1), /*hidden argument*/NULL);
		NullCheck(L_23);
		Vector3_t3525329789  L_24 = Rigidbody_get_centerOfMass_m3434430695(L_23, /*hidden argument*/NULL);
		NullCheck(L_22);
		Vector3_t3525329789  L_25 = Transform_TransformDirection_m83001769(L_22, L_24, /*hidden argument*/NULL);
		Rigidbody_t1972007546 * L_26 = RaycastHit_get_rigidbody_m4137883432((&V_1), /*hidden argument*/NULL);
		NullCheck(L_26);
		Transform_t284553113 * L_27 = Component_get_transform_m4257140443(L_26, /*hidden argument*/NULL);
		NullCheck(L_27);
		Vector3_t3525329789  L_28 = Transform_get_position_m2211398607(L_27, /*hidden argument*/NULL);
		Vector3_t3525329789  L_29 = Vector3_op_Addition_m695438225(NULL /*static, unused*/, L_25, L_28, /*hidden argument*/NULL);
		V_4 = L_29;
		SpringJoint_t2446926506 * L_30 = __this->get_springJoint_8();
		NullCheck(L_30);
		Transform_t284553113 * L_31 = Component_get_transform_m4257140443(L_30, /*hidden argument*/NULL);
		Vector3_t3525329789  L_32 = V_4;
		NullCheck(L_31);
		Vector3_t3525329789  L_33 = Transform_InverseTransformPoint_m1626812000(L_31, L_32, /*hidden argument*/NULL);
		V_4 = L_33;
		SpringJoint_t2446926506 * L_34 = __this->get_springJoint_8();
		Vector3_t3525329789  L_35 = V_4;
		NullCheck(L_34);
		Joint_set_anchor_m1010170386(L_34, L_35, /*hidden argument*/NULL);
		goto IL_0126;
	}

IL_0116:
	{
		SpringJoint_t2446926506 * L_36 = __this->get_springJoint_8();
		Vector3_t3525329789  L_37 = Vector3_get_zero_m2017759730(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_36);
		Joint_set_anchor_m1010170386(L_36, L_37, /*hidden argument*/NULL);
	}

IL_0126:
	{
		SpringJoint_t2446926506 * L_38 = __this->get_springJoint_8();
		float L_39 = __this->get_spring_2();
		NullCheck(L_38);
		SpringJoint_set_spring_m3720718841(L_38, L_39, /*hidden argument*/NULL);
		SpringJoint_t2446926506 * L_40 = __this->get_springJoint_8();
		float L_41 = __this->get_damper_3();
		NullCheck(L_40);
		SpringJoint_set_damper_m3309877369(L_40, L_41, /*hidden argument*/NULL);
		SpringJoint_t2446926506 * L_42 = __this->get_springJoint_8();
		float L_43 = __this->get_distance_6();
		NullCheck(L_42);
		SpringJoint_set_maxDistance_m68119509(L_42, L_43, /*hidden argument*/NULL);
		SpringJoint_t2446926506 * L_44 = __this->get_springJoint_8();
		Rigidbody_t1972007546 * L_45 = RaycastHit_get_rigidbody_m4137883432((&V_1), /*hidden argument*/NULL);
		NullCheck(L_44);
		Joint_set_connectedBody_m2794572257(L_44, L_45, /*hidden argument*/NULL);
		float L_46 = RaycastHit_get_distance_m800944203((&V_1), /*hidden argument*/NULL);
		float L_47 = L_46;
		Il2CppObject * L_48 = Box(Single_t958209021_il2cpp_TypeInfo_var, &L_47);
		MonoBehaviour_StartCoroutine_m2964903975(__this, _stringLiteral458547635, L_48, /*hidden argument*/NULL);
	}

IL_0183:
	{
		return;
	}
}
// System.Collections.IEnumerator DragRigidbody::DragObject(System.Single)
extern TypeInfo* U24DragObjectU243_t605040550_il2cpp_TypeInfo_var;
extern const uint32_t DragRigidbody_DragObject_m3675163991_MetadataUsageId;
extern "C"  Il2CppObject * DragRigidbody_DragObject_m3675163991 (DragRigidbody_t2531437401 * __this, float ___distance, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (DragRigidbody_DragObject_m3675163991_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = ___distance;
		U24DragObjectU243_t605040550 * L_1 = (U24DragObjectU243_t605040550 *)il2cpp_codegen_object_new(U24DragObjectU243_t605040550_il2cpp_TypeInfo_var);
		U24DragObjectU243__ctor_m3458398188(L_1, L_0, __this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Il2CppObject* L_2 = U24DragObjectU243_GetEnumerator_m616109296(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.Camera DragRigidbody::FindCamera()
extern const MethodInfo* Component_GetComponent_TisCamera_t3533968274_m3804104198_MethodInfo_var;
extern const uint32_t DragRigidbody_FindCamera_m2906847494_MetadataUsageId;
extern "C"  Camera_t3533968274 * DragRigidbody_FindCamera_m2906847494 (DragRigidbody_t2531437401 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (DragRigidbody_FindCamera_m2906847494_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	Camera_t3533968274 * G_B3_0 = NULL;
	{
		Camera_t3533968274 * L_0 = Component_GetComponent_TisCamera_t3533968274_m3804104198(__this, /*hidden argument*/Component_GetComponent_TisCamera_t3533968274_m3804104198_MethodInfo_var);
		bool L_1 = Object_op_Implicit_m2106766291(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		Camera_t3533968274 * L_2 = Component_GetComponent_TisCamera_t3533968274_m3804104198(__this, /*hidden argument*/Component_GetComponent_TisCamera_t3533968274_m3804104198_MethodInfo_var);
		G_B3_0 = L_2;
		goto IL_0025;
	}

IL_001b:
	{
		Camera_t3533968274 * L_3 = Camera_get_main_m671815697(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B3_0 = L_3;
		goto IL_0025;
	}

IL_0025:
	{
		return G_B3_0;
	}
}
// System.Void DragRigidbody::Main()
extern "C"  void DragRigidbody_Main_m2192736564 (DragRigidbody_t2531437401 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void DragRigidbody/$DragObject$3::.ctor(System.Single,DragRigidbody)
extern const MethodInfo* GenericGenerator_1__ctor_m3362830377_MethodInfo_var;
extern const uint32_t U24DragObjectU243__ctor_m3458398188_MetadataUsageId;
extern "C"  void U24DragObjectU243__ctor_m3458398188 (U24DragObjectU243_t605040550 * __this, float ___distance, DragRigidbody_t2531437401 * ___self_, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (U24DragObjectU243__ctor_m3458398188_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		GenericGenerator_1__ctor_m3362830377(__this, /*hidden argument*/GenericGenerator_1__ctor_m3362830377_MethodInfo_var);
		float L_0 = ___distance;
		__this->set_U24distanceU2410_0(L_0);
		DragRigidbody_t2531437401 * L_1 = ___self_;
		__this->set_U24self_U2411_1(L_1);
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Object> DragRigidbody/$DragObject$3::GetEnumerator()
extern TypeInfo* U24_t36_il2cpp_TypeInfo_var;
extern const uint32_t U24DragObjectU243_GetEnumerator_m616109296_MetadataUsageId;
extern "C"  Il2CppObject* U24DragObjectU243_GetEnumerator_m616109296 (U24DragObjectU243_t605040550 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (U24DragObjectU243_GetEnumerator_m616109296_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = __this->get_U24distanceU2410_0();
		DragRigidbody_t2531437401 * L_1 = __this->get_U24self_U2411_1();
		U24_t36 * L_2 = (U24_t36 *)il2cpp_codegen_object_new(U24_t36_il2cpp_TypeInfo_var);
		U24__ctor_m1670115073(L_2, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void DragRigidbody/$DragObject$3/$::.ctor(System.Single,DragRigidbody)
extern const MethodInfo* GenericGeneratorEnumerator_1__ctor_m1767157197_MethodInfo_var;
extern const uint32_t U24__ctor_m1670115073_MetadataUsageId;
extern "C"  void U24__ctor_m1670115073 (U24_t36 * __this, float ___distance, DragRigidbody_t2531437401 * ___self_, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (U24__ctor_m1670115073_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		GenericGeneratorEnumerator_1__ctor_m1767157197(__this, /*hidden argument*/GenericGeneratorEnumerator_1__ctor_m1767157197_MethodInfo_var);
		float L_0 = ___distance;
		__this->set_U24distanceU248_6(L_0);
		DragRigidbody_t2531437401 * L_1 = ___self_;
		__this->set_U24self_U249_7(L_1);
		return;
	}
}
// System.Boolean DragRigidbody/$DragObject$3/$::MoveNext()
extern TypeInfo* Input_t1593691127_il2cpp_TypeInfo_var;
extern const MethodInfo* GenericGeneratorEnumerator_1_YieldDefault_m2922167810_MethodInfo_var;
extern const uint32_t U24_MoveNext_m3138209381_MetadataUsageId;
extern "C"  bool U24_MoveNext_m3138209381 (U24_t36 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (U24_MoveNext_m3138209381_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B8_0 = 0;
	{
		int32_t L_0 = ((GenericGeneratorEnumerator_1_t602172848 *)__this)->get__state_1();
		if (L_0 == 0)
		{
			goto IL_0017;
		}
		if (L_0 == 1)
		{
			goto IL_015f;
		}
		if (L_0 == 2)
		{
			goto IL_00eb;
		}
	}

IL_0017:
	{
		DragRigidbody_t2531437401 * L_1 = __this->get_U24self_U249_7();
		NullCheck(L_1);
		SpringJoint_t2446926506 * L_2 = L_1->get_springJoint_8();
		NullCheck(L_2);
		Rigidbody_t1972007546 * L_3 = Joint_get_connectedBody_m3483565964(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		float L_4 = Rigidbody_get_drag_m3710595753(L_3, /*hidden argument*/NULL);
		__this->set_U24oldDragU244_2(L_4);
		DragRigidbody_t2531437401 * L_5 = __this->get_U24self_U249_7();
		NullCheck(L_5);
		SpringJoint_t2446926506 * L_6 = L_5->get_springJoint_8();
		NullCheck(L_6);
		Rigidbody_t1972007546 * L_7 = Joint_get_connectedBody_m3483565964(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		float L_8 = Rigidbody_get_angularDrag_m2925737411(L_7, /*hidden argument*/NULL);
		__this->set_U24oldAngularDragU245_3(L_8);
		DragRigidbody_t2531437401 * L_9 = __this->get_U24self_U249_7();
		NullCheck(L_9);
		SpringJoint_t2446926506 * L_10 = L_9->get_springJoint_8();
		NullCheck(L_10);
		Rigidbody_t1972007546 * L_11 = Joint_get_connectedBody_m3483565964(L_10, /*hidden argument*/NULL);
		DragRigidbody_t2531437401 * L_12 = __this->get_U24self_U249_7();
		NullCheck(L_12);
		float L_13 = L_12->get_drag_4();
		NullCheck(L_11);
		Rigidbody_set_drag_m4061586082(L_11, L_13, /*hidden argument*/NULL);
		DragRigidbody_t2531437401 * L_14 = __this->get_U24self_U249_7();
		NullCheck(L_14);
		SpringJoint_t2446926506 * L_15 = L_14->get_springJoint_8();
		NullCheck(L_15);
		Rigidbody_t1972007546 * L_16 = Joint_get_connectedBody_m3483565964(L_15, /*hidden argument*/NULL);
		DragRigidbody_t2531437401 * L_17 = __this->get_U24self_U249_7();
		NullCheck(L_17);
		float L_18 = L_17->get_angularDrag_5();
		NullCheck(L_16);
		Rigidbody_set_angularDrag_m2909317064(L_16, L_18, /*hidden argument*/NULL);
		DragRigidbody_t2531437401 * L_19 = __this->get_U24self_U249_7();
		NullCheck(L_19);
		Camera_t3533968274 * L_20 = VirtFuncInvoker0< Camera_t3533968274 * >::Invoke(6 /* UnityEngine.Camera DragRigidbody::FindCamera() */, L_19);
		__this->set_U24mainCameraU246_4(L_20);
		goto IL_00eb;
	}

IL_00a3:
	{
		Camera_t3533968274 * L_21 = __this->get_U24mainCameraU246_4();
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1593691127_il2cpp_TypeInfo_var);
		Vector3_t3525329789  L_22 = Input_get_mousePosition_m4020233228(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_21);
		Ray_t1522967639  L_23 = Camera_ScreenPointToRay_m1733083890(L_21, L_22, /*hidden argument*/NULL);
		__this->set_U24rayU247_5(L_23);
		DragRigidbody_t2531437401 * L_24 = __this->get_U24self_U249_7();
		NullCheck(L_24);
		SpringJoint_t2446926506 * L_25 = L_24->get_springJoint_8();
		NullCheck(L_25);
		Transform_t284553113 * L_26 = Component_get_transform_m4257140443(L_25, /*hidden argument*/NULL);
		Ray_t1522967639 * L_27 = __this->get_address_of_U24rayU247_5();
		float L_28 = __this->get_U24distanceU248_6();
		Vector3_t3525329789  L_29 = Ray_GetPoint_m1171104822(L_27, L_28, /*hidden argument*/NULL);
		NullCheck(L_26);
		Transform_set_position_m3111394108(L_26, L_29, /*hidden argument*/NULL);
		bool L_30 = GenericGeneratorEnumerator_1_YieldDefault_m2922167810(__this, 2, /*hidden argument*/GenericGeneratorEnumerator_1_YieldDefault_m2922167810_MethodInfo_var);
		G_B8_0 = ((int32_t)(L_30));
		goto IL_0160;
	}

IL_00eb:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1593691127_il2cpp_TypeInfo_var);
		bool L_31 = Input_GetMouseButton_m4080958081(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		if (L_31)
		{
			goto IL_00a3;
		}
	}
	{
		DragRigidbody_t2531437401 * L_32 = __this->get_U24self_U249_7();
		NullCheck(L_32);
		SpringJoint_t2446926506 * L_33 = L_32->get_springJoint_8();
		NullCheck(L_33);
		Rigidbody_t1972007546 * L_34 = Joint_get_connectedBody_m3483565964(L_33, /*hidden argument*/NULL);
		bool L_35 = Object_op_Implicit_m2106766291(NULL /*static, unused*/, L_34, /*hidden argument*/NULL);
		if (!L_35)
		{
			goto IL_0157;
		}
	}
	{
		DragRigidbody_t2531437401 * L_36 = __this->get_U24self_U249_7();
		NullCheck(L_36);
		SpringJoint_t2446926506 * L_37 = L_36->get_springJoint_8();
		NullCheck(L_37);
		Rigidbody_t1972007546 * L_38 = Joint_get_connectedBody_m3483565964(L_37, /*hidden argument*/NULL);
		float L_39 = __this->get_U24oldDragU244_2();
		NullCheck(L_38);
		Rigidbody_set_drag_m4061586082(L_38, L_39, /*hidden argument*/NULL);
		DragRigidbody_t2531437401 * L_40 = __this->get_U24self_U249_7();
		NullCheck(L_40);
		SpringJoint_t2446926506 * L_41 = L_40->get_springJoint_8();
		NullCheck(L_41);
		Rigidbody_t1972007546 * L_42 = Joint_get_connectedBody_m3483565964(L_41, /*hidden argument*/NULL);
		float L_43 = __this->get_U24oldAngularDragU245_3();
		NullCheck(L_42);
		Rigidbody_set_angularDrag_m2909317064(L_42, L_43, /*hidden argument*/NULL);
		DragRigidbody_t2531437401 * L_44 = __this->get_U24self_U249_7();
		NullCheck(L_44);
		SpringJoint_t2446926506 * L_45 = L_44->get_springJoint_8();
		NullCheck(L_45);
		Joint_set_connectedBody_m2794572257(L_45, (Rigidbody_t1972007546 *)NULL, /*hidden argument*/NULL);
	}

IL_0157:
	{
		GenericGeneratorEnumerator_1_YieldDefault_m2922167810(__this, 1, /*hidden argument*/GenericGeneratorEnumerator_1_YieldDefault_m2922167810_MethodInfo_var);
	}

IL_015f:
	{
		G_B8_0 = 0;
	}

IL_0160:
	{
		return (bool)G_B8_0;
	}
}
// System.Void MouseOrbit::.ctor()
extern "C"  void MouseOrbit__ctor_m2913930911 (MouseOrbit_t2986430149 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		__this->set_distance_3((10.0f));
		__this->set_xSpeed_4((250.0f));
		__this->set_ySpeed_5((120.0f));
		__this->set_yMinLimit_6(((int32_t)-20));
		__this->set_yMaxLimit_7(((int32_t)80));
		return;
	}
}
// System.Void MouseOrbit::Start()
extern const MethodInfo* Component_GetComponent_TisRigidbody_t1972007546_m354583034_MethodInfo_var;
extern const uint32_t MouseOrbit_Start_m1861068703_MetadataUsageId;
extern "C"  void MouseOrbit_Start_m1861068703 (MouseOrbit_t2986430149 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (MouseOrbit_Start_m1861068703_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t3525329789  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Transform_t284553113 * L_0 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t3525329789  L_1 = Transform_get_eulerAngles_m1058084741(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		float L_2 = (&V_0)->get_y_2();
		__this->set_x_8(L_2);
		float L_3 = (&V_0)->get_x_1();
		__this->set_y_9(L_3);
		Rigidbody_t1972007546 * L_4 = Component_GetComponent_TisRigidbody_t1972007546_m354583034(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_t1972007546_m354583034_MethodInfo_var);
		bool L_5 = Object_op_Implicit_m2106766291(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0042;
		}
	}
	{
		Rigidbody_t1972007546 * L_6 = Component_GetComponent_TisRigidbody_t1972007546_m354583034(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_t1972007546_m354583034_MethodInfo_var);
		NullCheck(L_6);
		Rigidbody_set_freezeRotation_m3989473889(L_6, (bool)1, /*hidden argument*/NULL);
	}

IL_0042:
	{
		return;
	}
}
// System.Void MouseOrbit::LateUpdate()
extern TypeInfo* Input_t1593691127_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2907718525;
extern Il2CppCodeGenString* _stringLiteral2907718526;
extern const uint32_t MouseOrbit_LateUpdate_m4088497940_MetadataUsageId;
extern "C"  void MouseOrbit_LateUpdate_m4088497940 (MouseOrbit_t2986430149 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (MouseOrbit_LateUpdate_m4088497940_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	Quaternion_t1891715979  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3525329789  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		Transform_t284553113 * L_0 = __this->get_target_2();
		bool L_1 = Object_op_Implicit_m2106766291(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_00ca;
		}
	}
	{
		float L_2 = __this->get_x_8();
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1593691127_il2cpp_TypeInfo_var);
		float L_3 = Input_GetAxis_m2027668530(NULL /*static, unused*/, _stringLiteral2907718525, /*hidden argument*/NULL);
		float L_4 = __this->get_xSpeed_4();
		__this->set_x_8(((float)((float)L_2+(float)((float)((float)((float)((float)L_3*(float)L_4))*(float)(0.02f))))));
		float L_5 = __this->get_y_9();
		float L_6 = Input_GetAxis_m2027668530(NULL /*static, unused*/, _stringLiteral2907718526, /*hidden argument*/NULL);
		float L_7 = __this->get_ySpeed_5();
		__this->set_y_9(((float)((float)L_5-(float)((float)((float)((float)((float)L_6*(float)L_7))*(float)(0.02f))))));
		float L_8 = __this->get_y_9();
		int32_t L_9 = __this->get_yMinLimit_6();
		int32_t L_10 = __this->get_yMaxLimit_7();
		float L_11 = MouseOrbit_ClampAngle_m512396460(NULL /*static, unused*/, L_8, (((float)((float)L_9))), (((float)((float)L_10))), /*hidden argument*/NULL);
		__this->set_y_9(L_11);
		float L_12 = __this->get_y_9();
		float L_13 = __this->get_x_8();
		Quaternion_t1891715979  L_14 = Quaternion_Euler_m1204688217(NULL /*static, unused*/, L_12, L_13, (((float)((float)0))), /*hidden argument*/NULL);
		V_0 = L_14;
		Quaternion_t1891715979  L_15 = V_0;
		float L_16 = __this->get_distance_3();
		Vector3_t3525329789  L_17;
		memset(&L_17, 0, sizeof(L_17));
		Vector3__ctor_m2926210380(&L_17, (((float)((float)0))), (((float)((float)0))), ((-L_16)), /*hidden argument*/NULL);
		Vector3_t3525329789  L_18 = Quaternion_op_Multiply_m3771288979(NULL /*static, unused*/, L_15, L_17, /*hidden argument*/NULL);
		Transform_t284553113 * L_19 = __this->get_target_2();
		NullCheck(L_19);
		Vector3_t3525329789  L_20 = Transform_get_position_m2211398607(L_19, /*hidden argument*/NULL);
		Vector3_t3525329789  L_21 = Vector3_op_Addition_m695438225(NULL /*static, unused*/, L_18, L_20, /*hidden argument*/NULL);
		V_1 = L_21;
		Transform_t284553113 * L_22 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Quaternion_t1891715979  L_23 = V_0;
		NullCheck(L_22);
		Transform_set_rotation_m1525803229(L_22, L_23, /*hidden argument*/NULL);
		Transform_t284553113 * L_24 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Vector3_t3525329789  L_25 = V_1;
		NullCheck(L_24);
		Transform_set_position_m3111394108(L_24, L_25, /*hidden argument*/NULL);
	}

IL_00ca:
	{
		return;
	}
}
// System.Single MouseOrbit::ClampAngle(System.Single,System.Single,System.Single)
extern TypeInfo* Mathf_t1597001355_il2cpp_TypeInfo_var;
extern const uint32_t MouseOrbit_ClampAngle_m512396460_MetadataUsageId;
extern "C"  float MouseOrbit_ClampAngle_m512396460 (Il2CppObject * __this /* static, unused */, float ___angle, float ___min, float ___max, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (MouseOrbit_ClampAngle_m512396460_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = ___angle;
		if ((((float)L_0) >= ((float)(((float)((float)((int32_t)-360)))))))
		{
			goto IL_001a;
		}
	}
	{
		float L_1 = ___angle;
		___angle = ((float)((float)L_1+(float)(((float)((float)((int32_t)360))))));
	}

IL_001a:
	{
		float L_2 = ___angle;
		if ((((float)L_2) <= ((float)(((float)((float)((int32_t)360)))))))
		{
			goto IL_0034;
		}
	}
	{
		float L_3 = ___angle;
		___angle = ((float)((float)L_3-(float)(((float)((float)((int32_t)360))))));
	}

IL_0034:
	{
		float L_4 = ___angle;
		float L_5 = ___min;
		float L_6 = ___max;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t1597001355_il2cpp_TypeInfo_var);
		float L_7 = Mathf_Clamp_m3872743893(NULL /*static, unused*/, L_4, L_5, L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// System.Void MouseOrbit::Main()
extern "C"  void MouseOrbit_Main_m979323454 (MouseOrbit_t2986430149 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void SmoothFollow::.ctor()
extern "C"  void SmoothFollow__ctor_m3116031813 (SmoothFollow_t651130655 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		__this->set_distance_3((10.0f));
		__this->set_height_4((5.0f));
		__this->set_heightDamping_5((2.0f));
		__this->set_rotationDamping_6((3.0f));
		return;
	}
}
// System.Void SmoothFollow::LateUpdate()
extern TypeInfo* Mathf_t1597001355_il2cpp_TypeInfo_var;
extern const uint32_t SmoothFollow_LateUpdate_m3251383854_MetadataUsageId;
extern "C"  void SmoothFollow_LateUpdate_m3251383854 (SmoothFollow_t651130655 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (SmoothFollow_LateUpdate_m3251383854_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	Quaternion_t1891715979  V_4;
	memset(&V_4, 0, sizeof(V_4));
	float V_5 = 0.0f;
	Vector3_t3525329789  V_6;
	memset(&V_6, 0, sizeof(V_6));
	Vector3_t3525329789  V_7;
	memset(&V_7, 0, sizeof(V_7));
	Vector3_t3525329789  V_8;
	memset(&V_8, 0, sizeof(V_8));
	Vector3_t3525329789  V_9;
	memset(&V_9, 0, sizeof(V_9));
	Vector3_t3525329789  V_10;
	memset(&V_10, 0, sizeof(V_10));
	float V_11 = 0.0f;
	Vector3_t3525329789  V_12;
	memset(&V_12, 0, sizeof(V_12));
	{
		Transform_t284553113 * L_0 = __this->get_target_2();
		bool L_1 = Object_op_Implicit_m2106766291(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		goto IL_0133;
	}

IL_0015:
	{
		Transform_t284553113 * L_2 = __this->get_target_2();
		NullCheck(L_2);
		Vector3_t3525329789  L_3 = Transform_get_eulerAngles_m1058084741(L_2, /*hidden argument*/NULL);
		V_7 = L_3;
		float L_4 = (&V_7)->get_y_2();
		V_0 = L_4;
		Transform_t284553113 * L_5 = __this->get_target_2();
		NullCheck(L_5);
		Vector3_t3525329789  L_6 = Transform_get_position_m2211398607(L_5, /*hidden argument*/NULL);
		V_8 = L_6;
		float L_7 = (&V_8)->get_y_2();
		float L_8 = __this->get_height_4();
		V_1 = ((float)((float)L_7+(float)L_8));
		Transform_t284553113 * L_9 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		Vector3_t3525329789  L_10 = Transform_get_eulerAngles_m1058084741(L_9, /*hidden argument*/NULL);
		V_9 = L_10;
		float L_11 = (&V_9)->get_y_2();
		V_2 = L_11;
		Transform_t284553113 * L_12 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		Vector3_t3525329789  L_13 = Transform_get_position_m2211398607(L_12, /*hidden argument*/NULL);
		V_10 = L_13;
		float L_14 = (&V_10)->get_y_2();
		V_3 = L_14;
		float L_15 = V_2;
		float L_16 = V_0;
		float L_17 = __this->get_rotationDamping_6();
		float L_18 = Time_get_deltaTime_m2741110510(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t1597001355_il2cpp_TypeInfo_var);
		float L_19 = Mathf_LerpAngle_m1852538964(NULL /*static, unused*/, L_15, L_16, ((float)((float)L_17*(float)L_18)), /*hidden argument*/NULL);
		V_2 = L_19;
		float L_20 = V_3;
		float L_21 = V_1;
		float L_22 = __this->get_heightDamping_5();
		float L_23 = Time_get_deltaTime_m2741110510(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_24 = Mathf_Lerp_m3257777633(NULL /*static, unused*/, L_20, L_21, ((float)((float)L_22*(float)L_23)), /*hidden argument*/NULL);
		V_3 = L_24;
		float L_25 = V_2;
		Quaternion_t1891715979  L_26 = Quaternion_Euler_m1204688217(NULL /*static, unused*/, (((float)((float)0))), L_25, (((float)((float)0))), /*hidden argument*/NULL);
		V_4 = L_26;
		Transform_t284553113 * L_27 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Transform_t284553113 * L_28 = __this->get_target_2();
		NullCheck(L_28);
		Vector3_t3525329789  L_29 = Transform_get_position_m2211398607(L_28, /*hidden argument*/NULL);
		NullCheck(L_27);
		Transform_set_position_m3111394108(L_27, L_29, /*hidden argument*/NULL);
		Transform_t284553113 * L_30 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Transform_t284553113 * L_31 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		NullCheck(L_31);
		Vector3_t3525329789  L_32 = Transform_get_position_m2211398607(L_31, /*hidden argument*/NULL);
		Quaternion_t1891715979  L_33 = V_4;
		Vector3_t3525329789  L_34 = Vector3_get_forward_m1039372701(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3525329789  L_35 = Quaternion_op_Multiply_m3771288979(NULL /*static, unused*/, L_33, L_34, /*hidden argument*/NULL);
		float L_36 = __this->get_distance_3();
		Vector3_t3525329789  L_37 = Vector3_op_Multiply_m973638459(NULL /*static, unused*/, L_35, L_36, /*hidden argument*/NULL);
		Vector3_t3525329789  L_38 = Vector3_op_Subtraction_m2842958165(NULL /*static, unused*/, L_32, L_37, /*hidden argument*/NULL);
		NullCheck(L_30);
		Transform_set_position_m3111394108(L_30, L_38, /*hidden argument*/NULL);
		float L_39 = V_3;
		float L_40 = L_39;
		V_5 = L_40;
		Transform_t284553113 * L_41 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		NullCheck(L_41);
		Vector3_t3525329789  L_42 = Transform_get_position_m2211398607(L_41, /*hidden argument*/NULL);
		Vector3_t3525329789  L_43 = L_42;
		V_6 = L_43;
		float L_44 = V_5;
		float L_45 = L_44;
		V_11 = L_45;
		(&V_6)->set_y_2(L_45);
		float L_46 = V_11;
		Transform_t284553113 * L_47 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Vector3_t3525329789  L_48 = V_6;
		Vector3_t3525329789  L_49 = L_48;
		V_12 = L_49;
		NullCheck(L_47);
		Transform_set_position_m3111394108(L_47, L_49, /*hidden argument*/NULL);
		Vector3_t3525329789  L_50 = V_12;
		Transform_t284553113 * L_51 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Transform_t284553113 * L_52 = __this->get_target_2();
		NullCheck(L_51);
		Transform_LookAt_m2663225588(L_51, L_52, /*hidden argument*/NULL);
	}

IL_0133:
	{
		return;
	}
}
// System.Void SmoothFollow::Main()
extern "C"  void SmoothFollow_Main_m3202600152 (SmoothFollow_t651130655 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void SmoothLookAt::.ctor()
extern "C"  void SmoothLookAt__ctor_m4207040740 (SmoothLookAt_t822992544 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		__this->set_damping_3((6.0f));
		__this->set_smooth_4((bool)1);
		return;
	}
}
// System.Void SmoothLookAt::LateUpdate()
extern "C"  void SmoothLookAt_LateUpdate_m2530926575 (SmoothLookAt_t822992544 * __this, const MethodInfo* method)
{
	Quaternion_t1891715979  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Transform_t284553113 * L_0 = __this->get_target_2();
		bool L_1 = Object_op_Implicit_m2106766291(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_007a;
		}
	}
	{
		bool L_2 = __this->get_smooth_4();
		if (!L_2)
		{
			goto IL_0069;
		}
	}
	{
		Transform_t284553113 * L_3 = __this->get_target_2();
		NullCheck(L_3);
		Vector3_t3525329789  L_4 = Transform_get_position_m2211398607(L_3, /*hidden argument*/NULL);
		Transform_t284553113 * L_5 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_t3525329789  L_6 = Transform_get_position_m2211398607(L_5, /*hidden argument*/NULL);
		Vector3_t3525329789  L_7 = Vector3_op_Subtraction_m2842958165(NULL /*static, unused*/, L_4, L_6, /*hidden argument*/NULL);
		Quaternion_t1891715979  L_8 = Quaternion_LookRotation_m1257501645(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		Transform_t284553113 * L_9 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Transform_t284553113 * L_10 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		Quaternion_t1891715979  L_11 = Transform_get_rotation_m11483428(L_10, /*hidden argument*/NULL);
		Quaternion_t1891715979  L_12 = V_0;
		float L_13 = Time_get_deltaTime_m2741110510(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_14 = __this->get_damping_3();
		Quaternion_t1891715979  L_15 = Quaternion_Slerp_m844700366(NULL /*static, unused*/, L_11, L_12, ((float)((float)L_13*(float)L_14)), /*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_set_rotation_m1525803229(L_9, L_15, /*hidden argument*/NULL);
		goto IL_007a;
	}

IL_0069:
	{
		Transform_t284553113 * L_16 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Transform_t284553113 * L_17 = __this->get_target_2();
		NullCheck(L_16);
		Transform_LookAt_m2663225588(L_16, L_17, /*hidden argument*/NULL);
	}

IL_007a:
	{
		return;
	}
}
// System.Void SmoothLookAt::Start()
extern const MethodInfo* Component_GetComponent_TisRigidbody_t1972007546_m354583034_MethodInfo_var;
extern const uint32_t SmoothLookAt_Start_m3154178532_MetadataUsageId;
extern "C"  void SmoothLookAt_Start_m3154178532 (SmoothLookAt_t822992544 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (SmoothLookAt_Start_m3154178532_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Rigidbody_t1972007546 * L_0 = Component_GetComponent_TisRigidbody_t1972007546_m354583034(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_t1972007546_m354583034_MethodInfo_var);
		bool L_1 = Object_op_Implicit_m2106766291(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		Rigidbody_t1972007546 * L_2 = Component_GetComponent_TisRigidbody_t1972007546_m354583034(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_t1972007546_m354583034_MethodInfo_var);
		NullCheck(L_2);
		Rigidbody_set_freezeRotation_m3989473889(L_2, (bool)1, /*hidden argument*/NULL);
	}

IL_001c:
	{
		return;
	}
}
// System.Void SmoothLookAt::Main()
extern "C"  void SmoothLookAt_Main_m3930530649 (SmoothLookAt_t822992544 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
