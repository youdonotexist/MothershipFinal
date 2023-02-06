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

// FractalNoise
struct FractalNoise_t683998921;
// Perlin
struct Perlin_t2387111028;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Perlin2387111028.h"

// System.Void FractalNoise::.ctor(System.Single,System.Single,System.Single)
extern "C"  void FractalNoise__ctor_m3644987011 (FractalNoise_t683998921 * __this, float ___inH, float ___inLacunarity, float ___inOctaves, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FractalNoise::.ctor(System.Single,System.Single,System.Single,Perlin)
extern "C"  void FractalNoise__ctor_m2365311215 (FractalNoise_t683998921 * __this, float ___inH, float ___inLacunarity, float ___inOctaves, Perlin_t2387111028 * ___noise, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single FractalNoise::HybridMultifractal(System.Single,System.Single,System.Single)
extern "C"  float FractalNoise_HybridMultifractal_m245390499 (FractalNoise_t683998921 * __this, float ___x, float ___y, float ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single FractalNoise::RidgedMultifractal(System.Single,System.Single,System.Single,System.Single)
extern "C"  float FractalNoise_RidgedMultifractal_m3404718923 (FractalNoise_t683998921 * __this, float ___x, float ___y, float ___offset, float ___gain, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single FractalNoise::BrownianMotion(System.Single,System.Single)
extern "C"  float FractalNoise_BrownianMotion_m391246204 (FractalNoise_t683998921 * __this, float ___x, float ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
