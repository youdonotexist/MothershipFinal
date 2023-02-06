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

// ConfigXmlTextReader
struct ConfigXmlTextReader_t1241202565;
// System.IO.Stream
struct Stream_t219029575;
// System.String
struct String_t;
// System.IO.TextReader
struct TextReader_t1534522647;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream219029575.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_IO_TextReader1534522647.h"

// System.Void ConfigXmlTextReader::.ctor(System.IO.Stream,System.String)
extern "C"  void ConfigXmlTextReader__ctor_m1105518992 (ConfigXmlTextReader_t1241202565 * __this, Stream_t219029575 * ___s, String_t* ___fileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConfigXmlTextReader::.ctor(System.IO.TextReader,System.String)
extern "C"  void ConfigXmlTextReader__ctor_m2641532224 (ConfigXmlTextReader_t1241202565 * __this, TextReader_t1534522647 * ___input, String_t* ___fileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ConfigXmlTextReader::get_Filename()
extern "C"  String_t* ConfigXmlTextReader_get_Filename_m527049076 (ConfigXmlTextReader_t1241202565 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
