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

// System.Diagnostics.Process
struct Process_t209016206;
// System.Diagnostics.DataReceivedEventHandler
struct DataReceivedEventHandler_t1372593658;
// System.String
struct String_t;
// System.Diagnostics.ProcessStartInfo
struct ProcessStartInfo_t170085856;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "System_System_Diagnostics_DataReceivedEventHandler1372593658.h"
#include "System_System_Diagnostics_ProcessStartInfo170085856.h"
#include "System_System_Diagnostics_Process_ProcInfo3353625924.h"
#include "System_System_Diagnostics_Process209016206.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Object837106420.h"

// System.Void System.Diagnostics.Process::.ctor(System.IntPtr,System.Int32)
extern "C"  void Process__ctor_m2232447697 (Process_t209016206 * __this, IntPtr_t ___handle, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Process::.ctor()
extern "C"  void Process__ctor_m1340569422 (Process_t209016206 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Process::add_ErrorDataReceived(System.Diagnostics.DataReceivedEventHandler)
extern "C"  void Process_add_ErrorDataReceived_m990288085 (Process_t209016206 * __this, DataReceivedEventHandler_t1372593658 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Process::remove_ErrorDataReceived(System.Diagnostics.DataReceivedEventHandler)
extern "C"  void Process_remove_ErrorDataReceived_m3954223432 (Process_t209016206 * __this, DataReceivedEventHandler_t1372593658 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Process::StartExitCallbackIfNeeded()
extern "C"  void Process_StartExitCallbackIfNeeded_m3476331139 (Process_t209016206 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Diagnostics.Process::ExitCode_internal(System.IntPtr)
extern "C"  int32_t Process_ExitCode_internal_m3694630823 (Il2CppObject * __this /* static, unused */, IntPtr_t ___handle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Diagnostics.Process::get_ExitCode()
extern "C"  int32_t Process_get_ExitCode_m1387130202 (Process_t209016206 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Diagnostics.Process::get_Handle()
extern "C"  IntPtr_t Process_get_Handle_m3328875036 (Process_t209016206 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Diagnostics.Process::ProcessName_internal(System.IntPtr)
extern "C"  String_t* Process_ProcessName_internal_m3358785305 (Il2CppObject * __this /* static, unused */, IntPtr_t ___handle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Diagnostics.Process::get_ProcessName()
extern "C"  String_t* Process_get_ProcessName_m2882853658 (Process_t209016206 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Diagnostics.ProcessStartInfo System.Diagnostics.Process::get_StartInfo()
extern "C"  ProcessStartInfo_t170085856 * Process_get_StartInfo_m481171906 (Process_t209016206 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Process::Close()
extern "C"  void Process_Close_m3051428964 (Process_t209016206 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Diagnostics.Process::GetProcess_internal(System.Int32)
extern "C"  IntPtr_t Process_GetProcess_internal_m3276598699 (Il2CppObject * __this /* static, unused */, int32_t ___pid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Diagnostics.Process::GetPid_internal()
extern "C"  int32_t Process_GetPid_internal_m188854307 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Diagnostics.Process System.Diagnostics.Process::GetCurrentProcess()
extern "C"  Process_t209016206 * Process_GetCurrentProcess_m2000703143 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Diagnostics.Process::ShellExecuteEx_internal(System.Diagnostics.ProcessStartInfo,System.Diagnostics.Process/ProcInfo&)
extern "C"  bool Process_ShellExecuteEx_internal_m3931647695 (Il2CppObject * __this /* static, unused */, ProcessStartInfo_t170085856 * ___startInfo, ProcInfo_t3353625924 * ___proc_info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Diagnostics.Process::CreateProcess_internal(System.Diagnostics.ProcessStartInfo,System.IntPtr,System.IntPtr,System.IntPtr,System.Diagnostics.Process/ProcInfo&)
extern "C"  bool Process_CreateProcess_internal_m849852512 (Il2CppObject * __this /* static, unused */, ProcessStartInfo_t170085856 * ___startInfo, IntPtr_t ___stdin, IntPtr_t ___stdout, IntPtr_t ___stderr, ProcInfo_t3353625924 * ___proc_info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Diagnostics.Process::Start_shell(System.Diagnostics.ProcessStartInfo,System.Diagnostics.Process)
extern "C"  bool Process_Start_shell_m1865964273 (Il2CppObject * __this /* static, unused */, ProcessStartInfo_t170085856 * ___startInfo, Process_t209016206 * ___process, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Diagnostics.Process::Start_noshell(System.Diagnostics.ProcessStartInfo,System.Diagnostics.Process)
extern "C"  bool Process_Start_noshell_m2245298128 (Il2CppObject * __this /* static, unused */, ProcessStartInfo_t170085856 * ___startInfo, Process_t209016206 * ___process, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Process::FillUserInfo(System.Diagnostics.ProcessStartInfo,System.Diagnostics.Process/ProcInfo&)
extern "C"  void Process_FillUserInfo_m2286797959 (Il2CppObject * __this /* static, unused */, ProcessStartInfo_t170085856 * ___startInfo, ProcInfo_t3353625924 * ___proc_info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Diagnostics.Process::Start_common(System.Diagnostics.ProcessStartInfo,System.Diagnostics.Process)
extern "C"  bool Process_Start_common_m1702570172 (Il2CppObject * __this /* static, unused */, ProcessStartInfo_t170085856 * ___startInfo, Process_t209016206 * ___process, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Diagnostics.Process::Start()
extern "C"  bool Process_Start_m1310011384 (Process_t209016206 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Diagnostics.Process::ToString()
extern "C"  String_t* Process_ToString_m185300293 (Process_t209016206 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Diagnostics.Process::WaitForExit_internal(System.IntPtr,System.Int32)
extern "C"  bool Process_WaitForExit_internal_m59639385 (Process_t209016206 * __this, IntPtr_t ___handle, int32_t ___ms, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Process::WaitForExit()
extern "C"  void Process_WaitForExit_m326019582 (Process_t209016206 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Diagnostics.Process::WaitForExit(System.Int32)
extern "C"  bool Process_WaitForExit_m1316068217 (Process_t209016206 * __this, int32_t ___milliseconds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Process::OnOutputDataReceived(System.String)
extern "C"  void Process_OnOutputDataReceived_m3025755553 (Process_t209016206 * __this, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Process::OnErrorDataReceived(System.String)
extern "C"  void Process_OnErrorDataReceived_m2233870626 (Process_t209016206 * __this, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Process::BeginOutputReadLine()
extern "C"  void Process_BeginOutputReadLine_m3470096384 (Process_t209016206 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Process::CancelOutputRead()
extern "C"  void Process_CancelOutputRead_m456479943 (Process_t209016206 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Process::BeginErrorReadLine()
extern "C"  void Process_BeginErrorReadLine_m4107735007 (Process_t209016206 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Process::CancelErrorRead()
extern "C"  void Process_CancelErrorRead_m3803955216 (Process_t209016206 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Process::Process_free_internal(System.IntPtr)
extern "C"  void Process_Process_free_internal_m1841038344 (Process_t209016206 * __this, IntPtr_t ___handle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Process::Dispose(System.Boolean)
extern "C"  void Process_Dispose_m1227689538 (Process_t209016206 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Process::Finalize()
extern "C"  void Process_Finalize_m2400239188 (Process_t209016206 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Process::CBOnExit(System.Object,System.Boolean)
extern "C"  void Process_CBOnExit_m2322066395 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___state, bool ___unused, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Process::OnExited()
extern "C"  void Process_OnExited_m604893106 (Process_t209016206 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Diagnostics.Process::get_IsWindows()
extern "C"  bool Process_get_IsWindows_m3239637862 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
