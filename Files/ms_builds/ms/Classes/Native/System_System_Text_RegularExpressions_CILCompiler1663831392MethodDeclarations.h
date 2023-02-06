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

// System.Text.RegularExpressions.CILCompiler
struct CILCompiler_t1663831392;
// System.Text.RegularExpressions.IMachineFactory
struct IMachineFactory_t1224363367;
// System.Reflection.Emit.DynamicMethod
struct DynamicMethod_t2778460557;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Reflection.Emit.ILGenerator
struct ILGenerator_t3869071517;
// System.Text.RegularExpressions.CILCompiler/Frame
struct Frame_t68139341;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Reflection_MethodInfo3461221277.h"
#include "System_System_Text_RegularExpressions_OpFlags4096314113.h"
#include "System_System_Text_RegularExpressions_RxOp3726102754.h"
#include "mscorlib_System_Reflection_Emit_Label1734909569.h"
#include "mscorlib_System_Reflection_Emit_ILGenerator3869071517.h"
#include "mscorlib_System_Reflection_Emit_DynamicMethod2778460557.h"
#include "System_System_Text_RegularExpressions_CILCompiler_Fr68139341.h"

// System.Void System.Text.RegularExpressions.CILCompiler::.ctor()
extern "C"  void CILCompiler__ctor_m3441285636 (CILCompiler_t1663831392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.CILCompiler::.cctor()
extern "C"  void CILCompiler__cctor_m3118543401 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.IMachineFactory System.Text.RegularExpressions.CILCompiler::System.Text.RegularExpressions.ICompiler.GetMachineFactory()
extern "C"  Il2CppObject * CILCompiler_System_Text_RegularExpressions_ICompiler_GetMachineFactory_m3569021414 (CILCompiler_t1663831392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.DynamicMethod System.Text.RegularExpressions.CILCompiler::GetEvalMethod(System.Byte[],System.Int32)
extern "C"  DynamicMethod_t2778460557 * CILCompiler_GetEvalMethod_m3627932141 (CILCompiler_t1663831392 * __this, ByteU5BU5D_t58506160* ___program, int32_t ___pc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Text.RegularExpressions.CILCompiler::GetMethod(System.Type,System.String,System.Reflection.MethodInfo&)
extern "C"  MethodInfo_t * CILCompiler_GetMethod_m2713332449 (CILCompiler_t1663831392 * __this, Type_t * ___t, String_t* ___name, MethodInfo_t ** ___cached, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Text.RegularExpressions.CILCompiler::GetMethod(System.String,System.Reflection.MethodInfo&)
extern "C"  MethodInfo_t * CILCompiler_GetMethod_m1861577134 (CILCompiler_t1663831392 * __this, String_t* ___name, MethodInfo_t ** ___cached, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.CILCompiler::ReadInt(System.Byte[],System.Int32)
extern "C"  int32_t CILCompiler_ReadInt_m4197148889 (CILCompiler_t1663831392 * __this, ByteU5BU5D_t58506160* ___code, int32_t ___pc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.OpFlags System.Text.RegularExpressions.CILCompiler::MakeFlags(System.Boolean,System.Boolean,System.Boolean,System.Boolean)
extern "C"  uint16_t CILCompiler_MakeFlags_m1342304657 (Il2CppObject * __this /* static, unused */, bool ___negate, bool ___ignore, bool ___reverse, bool ___lazy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.CILCompiler::EmitGenericOp(System.Text.RegularExpressions.RxOp,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
extern "C"  void CILCompiler_EmitGenericOp_m469148823 (CILCompiler_t1663831392 * __this, uint8_t ___op, bool ___negate, bool ___ignore, bool ___reverse, bool ___lazy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.CILCompiler::EmitOp(System.Text.RegularExpressions.RxOp,System.Boolean,System.Boolean,System.Boolean)
extern "C"  void CILCompiler_EmitOp_m1484103379 (CILCompiler_t1663831392 * __this, uint8_t ___op, bool ___negate, bool ___ignore, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.CILCompiler::EmitOpIgnoreReverse(System.Text.RegularExpressions.RxOp,System.Boolean,System.Boolean)
extern "C"  void CILCompiler_EmitOpIgnoreReverse_m1639242080 (CILCompiler_t1663831392 * __this, uint8_t ___op, bool ___ignore, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.CILCompiler::EmitOpNegateReverse(System.Text.RegularExpressions.RxOp,System.Boolean,System.Boolean)
extern "C"  void CILCompiler_EmitOpNegateReverse_m1929266832 (CILCompiler_t1663831392 * __this, uint8_t ___op, bool ___negate, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.DynamicMethod System.Text.RegularExpressions.CILCompiler::CreateEvalMethod(System.Byte[],System.Int32)
extern "C"  DynamicMethod_t2778460557 * CILCompiler_CreateEvalMethod_m2204720733 (CILCompiler_t1663831392 * __this, ByteU5BU5D_t58506160* ___program, int32_t ___pc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.CILCompiler::ReadShort(System.Byte[],System.Int32)
extern "C"  int32_t CILCompiler_ReadShort_m1043275046 (CILCompiler_t1663831392 * __this, ByteU5BU5D_t58506160* ___program, int32_t ___pc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.Label System.Text.RegularExpressions.CILCompiler::CreateLabelForPC(System.Reflection.Emit.ILGenerator,System.Int32)
extern "C"  Label_t1734909569  CILCompiler_CreateLabelForPC_m1633407530 (CILCompiler_t1663831392 * __this, ILGenerator_t3869071517 * ___ilgen, int32_t ___pc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.CILCompiler::GetILOffset(System.Reflection.Emit.ILGenerator)
extern "C"  int32_t CILCompiler_GetILOffset_m4137769061 (CILCompiler_t1663831392 * __this, ILGenerator_t3869071517 * ___ilgen, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.DynamicMethod System.Text.RegularExpressions.CILCompiler::EmitEvalMethodBody(System.Reflection.Emit.DynamicMethod,System.Reflection.Emit.ILGenerator,System.Text.RegularExpressions.CILCompiler/Frame,System.Byte[],System.Int32,System.Int32,System.Boolean,System.Boolean,System.Int32&)
extern "C"  DynamicMethod_t2778460557 * CILCompiler_EmitEvalMethodBody_m2269696058 (CILCompiler_t1663831392 * __this, DynamicMethod_t2778460557 * ___m, ILGenerator_t3869071517 * ___ilgen, Frame_t68139341 * ___frame, ByteU5BU5D_t58506160* ___program, int32_t ___pc, int32_t ___end_pc, bool ___one_op, bool ___no_bump, int32_t* ___out_pc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
