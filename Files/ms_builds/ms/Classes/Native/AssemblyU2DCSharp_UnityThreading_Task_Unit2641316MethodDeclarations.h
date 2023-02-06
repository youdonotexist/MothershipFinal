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


#include "codegen/il2cpp-codegen.h"


// Methods for marshaling
struct Unit_t2641317;
struct Unit_t2641317_marshaled_pinvoke;

extern "C" void Unit_t2641317_marshal_pinvoke(const Unit_t2641317& unmarshaled, Unit_t2641317_marshaled_pinvoke& marshaled);
extern "C" void Unit_t2641317_marshal_pinvoke_back(const Unit_t2641317_marshaled_pinvoke& marshaled, Unit_t2641317& unmarshaled);
extern "C" void Unit_t2641317_marshal_pinvoke_cleanup(Unit_t2641317_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct Unit_t2641317;
struct Unit_t2641317_marshaled_com;

extern "C" void Unit_t2641317_marshal_com(const Unit_t2641317& unmarshaled, Unit_t2641317_marshaled_com& marshaled);
extern "C" void Unit_t2641317_marshal_com_back(const Unit_t2641317_marshaled_com& marshaled, Unit_t2641317& unmarshaled);
extern "C" void Unit_t2641317_marshal_com_cleanup(Unit_t2641317_marshaled_com& marshaled);
