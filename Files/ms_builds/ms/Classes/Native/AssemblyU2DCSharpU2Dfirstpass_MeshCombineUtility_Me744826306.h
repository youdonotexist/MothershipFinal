#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Mesh
struct Mesh_t1525280346;

#include "mscorlib_System_ValueType4014882752.h"
#include "UnityEngine_UnityEngine_Matrix4x4277289660.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MeshCombineUtility/MeshInstance
struct  MeshInstance_t744826306 
{
public:
	// UnityEngine.Mesh MeshCombineUtility/MeshInstance::mesh
	Mesh_t1525280346 * ___mesh_0;
	// System.Int32 MeshCombineUtility/MeshInstance::subMeshIndex
	int32_t ___subMeshIndex_1;
	// UnityEngine.Matrix4x4 MeshCombineUtility/MeshInstance::transform
	Matrix4x4_t277289660  ___transform_2;

public:
	inline static int32_t get_offset_of_mesh_0() { return static_cast<int32_t>(offsetof(MeshInstance_t744826306, ___mesh_0)); }
	inline Mesh_t1525280346 * get_mesh_0() const { return ___mesh_0; }
	inline Mesh_t1525280346 ** get_address_of_mesh_0() { return &___mesh_0; }
	inline void set_mesh_0(Mesh_t1525280346 * value)
	{
		___mesh_0 = value;
		Il2CppCodeGenWriteBarrier(&___mesh_0, value);
	}

	inline static int32_t get_offset_of_subMeshIndex_1() { return static_cast<int32_t>(offsetof(MeshInstance_t744826306, ___subMeshIndex_1)); }
	inline int32_t get_subMeshIndex_1() const { return ___subMeshIndex_1; }
	inline int32_t* get_address_of_subMeshIndex_1() { return &___subMeshIndex_1; }
	inline void set_subMeshIndex_1(int32_t value)
	{
		___subMeshIndex_1 = value;
	}

	inline static int32_t get_offset_of_transform_2() { return static_cast<int32_t>(offsetof(MeshInstance_t744826306, ___transform_2)); }
	inline Matrix4x4_t277289660  get_transform_2() const { return ___transform_2; }
	inline Matrix4x4_t277289660 * get_address_of_transform_2() { return &___transform_2; }
	inline void set_transform_2(Matrix4x4_t277289660  value)
	{
		___transform_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
