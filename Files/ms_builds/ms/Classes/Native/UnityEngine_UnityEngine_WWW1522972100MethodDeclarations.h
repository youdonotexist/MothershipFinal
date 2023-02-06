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

// UnityEngine.WWW
struct WWW_t1522972100;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.String[]
struct StringU5BU5D_t2956870243;
// System.Text.Encoding
struct Encoding_t180559927;
// UnityEngine.Texture2D
struct Texture2D_t2509538522;
// UnityEngine.AudioClip
struct AudioClip_t3714538611;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Text_Encoding180559927.h"
#include "UnityEngine_UnityEngine_AudioType3715057757.h"
#include "UnityEngine_UnityEngine_Texture2D2509538522.h"

// System.Void UnityEngine.WWW::.ctor(System.String)
extern "C"  void WWW__ctor_m1985874080 (WWW_t1522972100 * __this, String_t* ___url, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWW::Dispose()
extern "C"  void WWW_Dispose_m2446678367 (WWW_t1522972100 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWW::Finalize()
extern "C"  void WWW_Finalize_m1793349504 (WWW_t1522972100 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWW::DestroyWWW(System.Boolean)
extern "C"  void WWW_DestroyWWW_m300967382 (WWW_t1522972100 * __this, bool ___cancel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWW::InitWWW(System.String,System.Byte[],System.String[])
extern "C"  void WWW_InitWWW_m3594284248 (WWW_t1522972100 * __this, String_t* ___url, ByteU5BU5D_t58506160* ___postData, StringU5BU5D_t2956870243* ___iHeaders, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.WWW::EscapeURL(System.String)
extern "C"  String_t* WWW_EscapeURL_m1167392721 (Il2CppObject * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.WWW::EscapeURL(System.String,System.Text.Encoding)
extern "C"  String_t* WWW_EscapeURL_m1690274784 (Il2CppObject * __this /* static, unused */, String_t* ___s, Encoding_t180559927 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding UnityEngine.WWW::get_DefaultEncoding()
extern "C"  Encoding_t180559927 * WWW_get_DefaultEncoding_m2507364293 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.WWW::get_error()
extern "C"  String_t* WWW_get_error_m1787423074 (WWW_t1522972100 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D UnityEngine.WWW::GetTexture(System.Boolean)
extern "C"  Texture2D_t2509538522 * WWW_GetTexture_m1996665057 (WWW_t1522972100 * __this, bool ___markNonReadable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D UnityEngine.WWW::get_texture()
extern "C"  Texture2D_t2509538522 * WWW_get_texture_m2854732303 (WWW_t1522972100 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioClip UnityEngine.WWW::get_audioClip()
extern "C"  AudioClip_t3714538611 * WWW_get_audioClip_m232785217 (WWW_t1522972100 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioClip UnityEngine.WWW::GetAudioClip(System.Boolean)
extern "C"  AudioClip_t3714538611 * WWW_GetAudioClip_m163276389 (WWW_t1522972100 * __this, bool ___threeD, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioClip UnityEngine.WWW::GetAudioClip(System.Boolean,System.Boolean)
extern "C"  AudioClip_t3714538611 * WWW_GetAudioClip_m286832248 (WWW_t1522972100 * __this, bool ___threeD, bool ___stream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioClip UnityEngine.WWW::GetAudioClip(System.Boolean,System.Boolean,UnityEngine.AudioType)
extern "C"  AudioClip_t3714538611 * WWW_GetAudioClip_m1447938731 (WWW_t1522972100 * __this, bool ___threeD, bool ___stream, int32_t ___audioType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioClip UnityEngine.WWW::GetAudioClipInternal(System.Boolean,System.Boolean,System.Boolean,UnityEngine.AudioType)
extern "C"  AudioClip_t3714538611 * WWW_GetAudioClipInternal_m850700757 (WWW_t1522972100 * __this, bool ___threeD, bool ___stream, bool ___compressed, int32_t ___audioType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWW::LoadImageIntoTexture(UnityEngine.Texture2D)
extern "C"  void WWW_LoadImageIntoTexture_m1974117364 (WWW_t1522972100 * __this, Texture2D_t2509538522 * ___tex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.WWW::get_isDone()
extern "C"  bool WWW_get_isDone_m634060017 (WWW_t1522972100 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
