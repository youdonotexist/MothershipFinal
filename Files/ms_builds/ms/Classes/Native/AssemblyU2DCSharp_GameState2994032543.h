#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GameState
struct GameState_t2994032543;
// UnityEngine.AudioSource
struct AudioSource_t3628549054;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "AssemblyU2DCSharp_GameState_GAMESTATE3806212031.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameState
struct  GameState_t2994032543  : public MonoBehaviour_t3012272455
{
public:
	// GameState/GAMESTATE GameState::_gameState
	int32_t ____gameState_3;
	// UnityEngine.AudioSource GameState::audioSource
	AudioSource_t3628549054 * ___audioSource_4;

public:
	inline static int32_t get_offset_of__gameState_3() { return static_cast<int32_t>(offsetof(GameState_t2994032543, ____gameState_3)); }
	inline int32_t get__gameState_3() const { return ____gameState_3; }
	inline int32_t* get_address_of__gameState_3() { return &____gameState_3; }
	inline void set__gameState_3(int32_t value)
	{
		____gameState_3 = value;
	}

	inline static int32_t get_offset_of_audioSource_4() { return static_cast<int32_t>(offsetof(GameState_t2994032543, ___audioSource_4)); }
	inline AudioSource_t3628549054 * get_audioSource_4() const { return ___audioSource_4; }
	inline AudioSource_t3628549054 ** get_address_of_audioSource_4() { return &___audioSource_4; }
	inline void set_audioSource_4(AudioSource_t3628549054 * value)
	{
		___audioSource_4 = value;
		Il2CppCodeGenWriteBarrier(&___audioSource_4, value);
	}
};

struct GameState_t2994032543_StaticFields
{
public:
	// GameState GameState::instance
	GameState_t2994032543 * ___instance_2;

public:
	inline static int32_t get_offset_of_instance_2() { return static_cast<int32_t>(offsetof(GameState_t2994032543_StaticFields, ___instance_2)); }
	inline GameState_t2994032543 * get_instance_2() const { return ___instance_2; }
	inline GameState_t2994032543 ** get_address_of_instance_2() { return &___instance_2; }
	inline void set_instance_2(GameState_t2994032543 * value)
	{
		___instance_2 = value;
		Il2CppCodeGenWriteBarrier(&___instance_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
