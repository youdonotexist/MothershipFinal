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

// Perlin
struct Perlin_t2387111028;

#include "codegen/il2cpp-codegen.h"

// System.Void Perlin::.ctor()
extern "C"  void Perlin__ctor_m4227840679 (Perlin_t2387111028 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Perlin::s_curve(System.Single)
extern "C"  float Perlin_s_curve_m2676195887 (Perlin_t2387111028 * __this, float ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Perlin::lerp(System.Single,System.Single,System.Single)
extern "C"  float Perlin_lerp_m1351060245 (Perlin_t2387111028 * __this, float ___t, float ___a, float ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Perlin::setup(System.Single,System.Int32&,System.Int32&,System.Single&,System.Single&)
extern "C"  void Perlin_setup_m3662848787 (Perlin_t2387111028 * __this, float ___value, int32_t* ___b0, int32_t* ___b1, float* ___r0, float* ___r1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Perlin::at2(System.Single,System.Single,System.Single,System.Single)
extern "C"  float Perlin_at2_m2664583458 (Perlin_t2387111028 * __this, float ___rx, float ___ry, float ___x, float ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Perlin::at3(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
extern "C"  float Perlin_at3_m2673741259 (Perlin_t2387111028 * __this, float ___rx, float ___ry, float ___rz, float ___x, float ___y, float ___z, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Perlin::Noise(System.Single)
extern "C"  float Perlin_Noise_m2636193400 (Perlin_t2387111028 * __this, float ___arg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Perlin::Noise(System.Single,System.Single)
extern "C"  float Perlin_Noise_m1646851933 (Perlin_t2387111028 * __this, float ___x, float ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Perlin::Noise(System.Single,System.Single,System.Single)
extern "C"  float Perlin_Noise_m3520912258 (Perlin_t2387111028 * __this, float ___x, float ___y, float ___z, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Perlin::normalize2(System.Single&,System.Single&)
extern "C"  void Perlin_normalize2_m3392733444 (Perlin_t2387111028 * __this, float* ___x, float* ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Perlin::normalize3(System.Single&,System.Single&,System.Single&)
extern "C"  void Perlin_normalize3_m2619166276 (Perlin_t2387111028 * __this, float* ___x, float* ___y, float* ___z, const MethodInfo* method) IL2CPP_METHOD_ATTR;
