#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.MaterialPropertyBlock
struct MaterialPropertyBlock_t1598663166;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Color1588175760.h"
#include "UnityEngine_UnityEngine_MaterialPropertyBlock1598663166.h"
#include "mscorlib_System_String968488902.h"

// System.Void UnityEngine.MaterialPropertyBlock::.ctor()
extern "C"  void MaterialPropertyBlock__ctor_m2730424616 (MaterialPropertyBlock_t1598663166 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MaterialPropertyBlock::InitBlock()
extern "C"  void MaterialPropertyBlock_InitBlock_m863070691 (MaterialPropertyBlock_t1598663166 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MaterialPropertyBlock::DestroyBlock()
extern "C"  void MaterialPropertyBlock_DestroyBlock_m3380306959 (MaterialPropertyBlock_t1598663166 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MaterialPropertyBlock::Finalize()
extern "C"  void MaterialPropertyBlock_Finalize_m4091590202 (MaterialPropertyBlock_t1598663166 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MaterialPropertyBlock::SetFloat(System.Int32,System.Single)
extern "C"  void MaterialPropertyBlock_SetFloat_m1897010476 (MaterialPropertyBlock_t1598663166 * __this, int32_t ___nameID, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MaterialPropertyBlock::SetColor(System.Int32,UnityEngine.Color)
extern "C"  void MaterialPropertyBlock_SetColor_m1736386094 (MaterialPropertyBlock_t1598663166 * __this, int32_t ___nameID, Color_t1588175760  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MaterialPropertyBlock::INTERNAL_CALL_SetColor(UnityEngine.MaterialPropertyBlock,System.Int32,UnityEngine.Color&)
extern "C"  void MaterialPropertyBlock_INTERNAL_CALL_SetColor_m2507266801 (Il2CppObject * __this /* static, unused */, MaterialPropertyBlock_t1598663166 * ___self, int32_t ___nameID, Color_t1588175760 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MaterialPropertyBlock::AddFloat(System.String,System.Single)
extern "C"  void MaterialPropertyBlock_AddFloat_m1840876272 (MaterialPropertyBlock_t1598663166 * __this, String_t* ___name, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MaterialPropertyBlock::AddFloat(System.Int32,System.Single)
extern "C"  void MaterialPropertyBlock_AddFloat_m197860557 (MaterialPropertyBlock_t1598663166 * __this, int32_t ___nameID, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MaterialPropertyBlock::AddColor(System.String,UnityEngine.Color)
extern "C"  void MaterialPropertyBlock_AddColor_m3401701572 (MaterialPropertyBlock_t1598663166 * __this, String_t* ___name, Color_t1588175760  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MaterialPropertyBlock::AddColor(System.Int32,UnityEngine.Color)
extern "C"  void MaterialPropertyBlock_AddColor_m1765373263 (MaterialPropertyBlock_t1598663166 * __this, int32_t ___nameID, Color_t1588175760  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
