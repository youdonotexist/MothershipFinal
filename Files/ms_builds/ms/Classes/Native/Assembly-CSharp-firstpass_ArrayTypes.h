#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


// Vectrosity.VectorLine
struct VectorLine_t3065371647;
// Vectrosity.CapInfo
struct CapInfo_t3269659528;
// Vectrosity.VectorPoints
struct VectorPoints_t1645843502;
// RefInt
struct RefInt_t2443978364;

#include "mscorlib_System_Array2840145358.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Vectrosity_VectorLin3065371647.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Vectrosity_CapInfo3269659528.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Vectrosity_VectorPoi1645843502.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Vectrosity_Vector3Pa3261854258.h"
#include "AssemblyU2DCSharpU2Dfirstpass_RefInt2443978364.h"
#include "AssemblyU2DCSharpU2Dfirstpass_MeshCombineUtility_Me744826306.h"

#pragma once
// Vectrosity.VectorLine[]
struct VectorLineU5BU5D_t500207910  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) VectorLine_t3065371647 * m_Items[1];

public:
	inline VectorLine_t3065371647 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline VectorLine_t3065371647 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, VectorLine_t3065371647 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Vectrosity.CapInfo[]
struct CapInfoU5BU5D_t2287398233  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) CapInfo_t3269659528 * m_Items[1];

public:
	inline CapInfo_t3269659528 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline CapInfo_t3269659528 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, CapInfo_t3269659528 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Vectrosity.VectorPoints[]
struct VectorPointsU5BU5D_t3633504091  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) VectorPoints_t1645843502 * m_Items[1];

public:
	inline VectorPoints_t1645843502 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline VectorPoints_t1645843502 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, VectorPoints_t1645843502 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Vectrosity.Vector3Pair[]
struct Vector3PairU5BU5D_t2658129095  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) Vector3Pair_t3261854258  m_Items[1];

public:
	inline Vector3Pair_t3261854258  GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline Vector3Pair_t3261854258 * GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, Vector3Pair_t3261854258  value)
	{
		m_Items[index] = value;
	}
};
// RefInt[]
struct RefIntU5BU5D_t3015140373  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) RefInt_t2443978364 * m_Items[1];

public:
	inline RefInt_t2443978364 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline RefInt_t2443978364 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, RefInt_t2443978364 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// MeshCombineUtility/MeshInstance[]
struct MeshInstanceU5BU5D_t333451511  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) MeshInstance_t744826306  m_Items[1];

public:
	inline MeshInstance_t744826306  GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline MeshInstance_t744826306 * GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, MeshInstance_t744826306  value)
	{
		m_Items[index] = value;
	}
};
