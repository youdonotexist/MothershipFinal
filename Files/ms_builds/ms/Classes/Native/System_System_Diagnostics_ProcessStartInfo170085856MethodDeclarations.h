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

// System.Diagnostics.ProcessStartInfo
struct ProcessStartInfo_t170085856;
// System.String
struct String_t;
// System.Collections.Specialized.StringDictionary
struct StringDictionary_t2792775730;
// System.Text.Encoding
struct Encoding_t180559927;
// System.Security.SecureString
struct SecureString_t4183656205;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"

// System.Void System.Diagnostics.ProcessStartInfo::.ctor()
extern "C"  void ProcessStartInfo__ctor_m2302534664 (ProcessStartInfo_t170085856 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.ProcessStartInfo::.cctor()
extern "C"  void ProcessStartInfo__cctor_m2177001637 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Diagnostics.ProcessStartInfo::get_Arguments()
extern "C"  String_t* ProcessStartInfo_get_Arguments_m186351478 (ProcessStartInfo_t170085856 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.ProcessStartInfo::set_Arguments(System.String)
extern "C"  void ProcessStartInfo_set_Arguments_m2869879235 (ProcessStartInfo_t170085856 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.ProcessStartInfo::set_CreateNoWindow(System.Boolean)
extern "C"  void ProcessStartInfo_set_CreateNoWindow_m2078234909 (ProcessStartInfo_t170085856 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.StringDictionary System.Diagnostics.ProcessStartInfo::get_EnvironmentVariables()
extern "C"  StringDictionary_t2792775730 * ProcessStartInfo_get_EnvironmentVariables_m1790549594 (ProcessStartInfo_t170085856 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Diagnostics.ProcessStartInfo::get_HaveEnvVars()
extern "C"  bool ProcessStartInfo_get_HaveEnvVars_m4127245252 (ProcessStartInfo_t170085856 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Diagnostics.ProcessStartInfo::get_FileName()
extern "C"  String_t* ProcessStartInfo_get_FileName_m2817199849 (ProcessStartInfo_t170085856 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.ProcessStartInfo::set_FileName(System.String)
extern "C"  void ProcessStartInfo_set_FileName_m2116990306 (ProcessStartInfo_t170085856 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Diagnostics.ProcessStartInfo::get_RedirectStandardError()
extern "C"  bool ProcessStartInfo_get_RedirectStandardError_m3397334626 (ProcessStartInfo_t170085856 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.ProcessStartInfo::set_RedirectStandardError(System.Boolean)
extern "C"  void ProcessStartInfo_set_RedirectStandardError_m2468258383 (ProcessStartInfo_t170085856 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Diagnostics.ProcessStartInfo::get_RedirectStandardInput()
extern "C"  bool ProcessStartInfo_get_RedirectStandardInput_m2536199076 (ProcessStartInfo_t170085856 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Diagnostics.ProcessStartInfo::get_RedirectStandardOutput()
extern "C"  bool ProcessStartInfo_get_RedirectStandardOutput_m912280457 (ProcessStartInfo_t170085856 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.ProcessStartInfo::set_RedirectStandardOutput(System.Boolean)
extern "C"  void ProcessStartInfo_set_RedirectStandardOutput_m1330926090 (ProcessStartInfo_t170085856 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Diagnostics.ProcessStartInfo::get_StandardErrorEncoding()
extern "C"  Encoding_t180559927 * ProcessStartInfo_get_StandardErrorEncoding_m3185784933 (ProcessStartInfo_t170085856 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Diagnostics.ProcessStartInfo::get_StandardOutputEncoding()
extern "C"  Encoding_t180559927 * ProcessStartInfo_get_StandardOutputEncoding_m2563939308 (ProcessStartInfo_t170085856 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Diagnostics.ProcessStartInfo::get_UseShellExecute()
extern "C"  bool ProcessStartInfo_get_UseShellExecute_m414942239 (ProcessStartInfo_t170085856 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.ProcessStartInfo::set_UseShellExecute(System.Boolean)
extern "C"  void ProcessStartInfo_set_UseShellExecute_m1881264588 (ProcessStartInfo_t170085856 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Diagnostics.ProcessStartInfo::get_WorkingDirectory()
extern "C"  String_t* ProcessStartInfo_get_WorkingDirectory_m2922684606 (ProcessStartInfo_t170085856 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Diagnostics.ProcessStartInfo::get_LoadUserProfile()
extern "C"  bool ProcessStartInfo_get_LoadUserProfile_m3109495147 (ProcessStartInfo_t170085856 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Diagnostics.ProcessStartInfo::get_UserName()
extern "C"  String_t* ProcessStartInfo_get_UserName_m2607664632 (ProcessStartInfo_t170085856 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Diagnostics.ProcessStartInfo::get_Domain()
extern "C"  String_t* ProcessStartInfo_get_Domain_m580933254 (ProcessStartInfo_t170085856 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecureString System.Diagnostics.ProcessStartInfo::get_Password()
extern "C"  SecureString_t4183656205 * ProcessStartInfo_get_Password_m414565720 (ProcessStartInfo_t170085856 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
