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

// Mono.Security.X509.Extensions.BasicConstraintsExtension
struct BasicConstraintsExtension_t455698011;
// Mono.Security.X509.X509Extension
struct X509Extension_t1510964269;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "Mono_Security_Mono_Security_X509_X509Extension1510964268.h"

// System.Void Mono.Security.X509.Extensions.BasicConstraintsExtension::.ctor(Mono.Security.X509.X509Extension)
extern "C"  void BasicConstraintsExtension__ctor_m1872483704 (BasicConstraintsExtension_t455698011 * __this, X509Extension_t1510964269 * ___extension, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.Extensions.BasicConstraintsExtension::Decode()
extern "C"  void BasicConstraintsExtension_Decode_m3853789606 (BasicConstraintsExtension_t455698011 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.Extensions.BasicConstraintsExtension::Encode()
extern "C"  void BasicConstraintsExtension_Encode_m699231182 (BasicConstraintsExtension_t455698011 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.Extensions.BasicConstraintsExtension::get_CertificateAuthority()
extern "C"  bool BasicConstraintsExtension_get_CertificateAuthority_m1090073055 (BasicConstraintsExtension_t455698011 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.Extensions.BasicConstraintsExtension::ToString()
extern "C"  String_t* BasicConstraintsExtension_ToString_m2175497377 (BasicConstraintsExtension_t455698011 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
