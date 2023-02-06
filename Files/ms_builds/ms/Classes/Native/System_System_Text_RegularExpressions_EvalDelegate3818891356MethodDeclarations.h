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

// System.Text.RegularExpressions.EvalDelegate
struct EvalDelegate_t3818891356;
// System.Object
struct Il2CppObject;
// System.Text.RegularExpressions.RxInterpreter
struct RxInterpreter_t3404215855;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "System_System_Text_RegularExpressions_RxInterprete3404215855.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Text.RegularExpressions.EvalDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void EvalDelegate__ctor_m1348567526 (EvalDelegate_t3818891356 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.EvalDelegate::Invoke(System.Text.RegularExpressions.RxInterpreter,System.Int32,System.Int32&)
extern "C"  bool EvalDelegate_Invoke_m1810867881 (EvalDelegate_t3818891356 * __this, RxInterpreter_t3404215855 * ___interp, int32_t ___strpos, int32_t* ___strpos_result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool pinvoke_delegate_wrapper_EvalDelegate_t3818891356(Il2CppObject* delegate, RxInterpreter_t3404215855 * ___interp, int32_t ___strpos, int32_t* ___strpos_result);
// System.IAsyncResult System.Text.RegularExpressions.EvalDelegate::BeginInvoke(System.Text.RegularExpressions.RxInterpreter,System.Int32,System.Int32&,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * EvalDelegate_BeginInvoke_m3759056670 (EvalDelegate_t3818891356 * __this, RxInterpreter_t3404215855 * ___interp, int32_t ___strpos, int32_t* ___strpos_result, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.EvalDelegate::EndInvoke(System.Int32&,System.IAsyncResult)
extern "C"  bool EvalDelegate_EndInvoke_m1878541493 (EvalDelegate_t3818891356 * __this, int32_t* ___strpos_result, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
