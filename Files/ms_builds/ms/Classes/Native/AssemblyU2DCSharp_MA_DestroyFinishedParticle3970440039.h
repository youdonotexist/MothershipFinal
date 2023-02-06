#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.ParticleSystem
struct ParticleSystem_t56787138;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MA_DestroyFinishedParticle
struct  MA_DestroyFinishedParticle_t3970440039  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.ParticleSystem MA_DestroyFinishedParticle::particles
	ParticleSystem_t56787138 * ___particles_2;

public:
	inline static int32_t get_offset_of_particles_2() { return static_cast<int32_t>(offsetof(MA_DestroyFinishedParticle_t3970440039, ___particles_2)); }
	inline ParticleSystem_t56787138 * get_particles_2() const { return ___particles_2; }
	inline ParticleSystem_t56787138 ** get_address_of_particles_2() { return &___particles_2; }
	inline void set_particles_2(ParticleSystem_t56787138 * value)
	{
		___particles_2 = value;
		Il2CppCodeGenWriteBarrier(&___particles_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
