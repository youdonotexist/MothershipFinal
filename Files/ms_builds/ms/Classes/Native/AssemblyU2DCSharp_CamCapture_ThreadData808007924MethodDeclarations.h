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
struct ThreadData_t808007924;
struct ThreadData_t808007924_marshaled_pinvoke;

extern "C" void ThreadData_t808007924_marshal_pinvoke(const ThreadData_t808007924& unmarshaled, ThreadData_t808007924_marshaled_pinvoke& marshaled);
extern "C" void ThreadData_t808007924_marshal_pinvoke_back(const ThreadData_t808007924_marshaled_pinvoke& marshaled, ThreadData_t808007924& unmarshaled);
extern "C" void ThreadData_t808007924_marshal_pinvoke_cleanup(ThreadData_t808007924_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct ThreadData_t808007924;
struct ThreadData_t808007924_marshaled_com;

extern "C" void ThreadData_t808007924_marshal_com(const ThreadData_t808007924& unmarshaled, ThreadData_t808007924_marshaled_com& marshaled);
extern "C" void ThreadData_t808007924_marshal_com_back(const ThreadData_t808007924_marshaled_com& marshaled, ThreadData_t808007924& unmarshaled);
extern "C" void ThreadData_t808007924_marshal_com_cleanup(ThreadData_t808007924_marshaled_com& marshaled);
