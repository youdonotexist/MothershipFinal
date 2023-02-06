#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3499186955;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// System.Collections.Generic.List`1<AIPathNode>
struct List_1_t3407171848;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "AssemblyU2DCSharp_AIPath_PATH_TYPE2438574868.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AIPath
struct  AIPath_t1930792045  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.GameObject[] AIPath::prefabs
	GameObjectU5BU5D_t3499186955* ___prefabs_2;
	// UnityEngine.GameObject AIPath::nodes
	GameObject_t4012695102 * ___nodes_3;
	// UnityEngine.GameObject AIPath::startNode
	GameObject_t4012695102 * ___startNode_4;
	// UnityEngine.GameObject AIPath::endNode
	GameObject_t4012695102 * ___endNode_5;
	// System.Single AIPath::spawnTime
	float ___spawnTime_6;
	// System.Int32 AIPath::spawnAmt
	int32_t ___spawnAmt_7;
	// System.Single AIPath::spawnRadius
	float ___spawnRadius_8;
	// System.Single AIPath::nodeRadius
	float ___nodeRadius_9;
	// System.Collections.Generic.List`1<AIPathNode> AIPath::_visibleNodes
	List_1_t3407171848 * ____visibleNodes_10;
	// System.Collections.Generic.List`1<AIPathNode> AIPath::_spawnNodes
	List_1_t3407171848 * ____spawnNodes_11;
	// System.Boolean AIPath::updateNodes
	bool ___updateNodes_12;
	// System.Int32 AIPath::path_index
	int32_t ___path_index_13;
	// System.Boolean AIPath::prewarm
	bool ___prewarm_14;
	// AIPath/PATH_TYPE AIPath::pathType
	int32_t ___pathType_15;
	// System.Single AIPath::_timeSinceLastSpawn
	float ____timeSinceLastSpawn_16;
	// System.Boolean AIPath::drawGizmos
	bool ___drawGizmos_17;

public:
	inline static int32_t get_offset_of_prefabs_2() { return static_cast<int32_t>(offsetof(AIPath_t1930792045, ___prefabs_2)); }
	inline GameObjectU5BU5D_t3499186955* get_prefabs_2() const { return ___prefabs_2; }
	inline GameObjectU5BU5D_t3499186955** get_address_of_prefabs_2() { return &___prefabs_2; }
	inline void set_prefabs_2(GameObjectU5BU5D_t3499186955* value)
	{
		___prefabs_2 = value;
		Il2CppCodeGenWriteBarrier(&___prefabs_2, value);
	}

	inline static int32_t get_offset_of_nodes_3() { return static_cast<int32_t>(offsetof(AIPath_t1930792045, ___nodes_3)); }
	inline GameObject_t4012695102 * get_nodes_3() const { return ___nodes_3; }
	inline GameObject_t4012695102 ** get_address_of_nodes_3() { return &___nodes_3; }
	inline void set_nodes_3(GameObject_t4012695102 * value)
	{
		___nodes_3 = value;
		Il2CppCodeGenWriteBarrier(&___nodes_3, value);
	}

	inline static int32_t get_offset_of_startNode_4() { return static_cast<int32_t>(offsetof(AIPath_t1930792045, ___startNode_4)); }
	inline GameObject_t4012695102 * get_startNode_4() const { return ___startNode_4; }
	inline GameObject_t4012695102 ** get_address_of_startNode_4() { return &___startNode_4; }
	inline void set_startNode_4(GameObject_t4012695102 * value)
	{
		___startNode_4 = value;
		Il2CppCodeGenWriteBarrier(&___startNode_4, value);
	}

	inline static int32_t get_offset_of_endNode_5() { return static_cast<int32_t>(offsetof(AIPath_t1930792045, ___endNode_5)); }
	inline GameObject_t4012695102 * get_endNode_5() const { return ___endNode_5; }
	inline GameObject_t4012695102 ** get_address_of_endNode_5() { return &___endNode_5; }
	inline void set_endNode_5(GameObject_t4012695102 * value)
	{
		___endNode_5 = value;
		Il2CppCodeGenWriteBarrier(&___endNode_5, value);
	}

	inline static int32_t get_offset_of_spawnTime_6() { return static_cast<int32_t>(offsetof(AIPath_t1930792045, ___spawnTime_6)); }
	inline float get_spawnTime_6() const { return ___spawnTime_6; }
	inline float* get_address_of_spawnTime_6() { return &___spawnTime_6; }
	inline void set_spawnTime_6(float value)
	{
		___spawnTime_6 = value;
	}

	inline static int32_t get_offset_of_spawnAmt_7() { return static_cast<int32_t>(offsetof(AIPath_t1930792045, ___spawnAmt_7)); }
	inline int32_t get_spawnAmt_7() const { return ___spawnAmt_7; }
	inline int32_t* get_address_of_spawnAmt_7() { return &___spawnAmt_7; }
	inline void set_spawnAmt_7(int32_t value)
	{
		___spawnAmt_7 = value;
	}

	inline static int32_t get_offset_of_spawnRadius_8() { return static_cast<int32_t>(offsetof(AIPath_t1930792045, ___spawnRadius_8)); }
	inline float get_spawnRadius_8() const { return ___spawnRadius_8; }
	inline float* get_address_of_spawnRadius_8() { return &___spawnRadius_8; }
	inline void set_spawnRadius_8(float value)
	{
		___spawnRadius_8 = value;
	}

	inline static int32_t get_offset_of_nodeRadius_9() { return static_cast<int32_t>(offsetof(AIPath_t1930792045, ___nodeRadius_9)); }
	inline float get_nodeRadius_9() const { return ___nodeRadius_9; }
	inline float* get_address_of_nodeRadius_9() { return &___nodeRadius_9; }
	inline void set_nodeRadius_9(float value)
	{
		___nodeRadius_9 = value;
	}

	inline static int32_t get_offset_of__visibleNodes_10() { return static_cast<int32_t>(offsetof(AIPath_t1930792045, ____visibleNodes_10)); }
	inline List_1_t3407171848 * get__visibleNodes_10() const { return ____visibleNodes_10; }
	inline List_1_t3407171848 ** get_address_of__visibleNodes_10() { return &____visibleNodes_10; }
	inline void set__visibleNodes_10(List_1_t3407171848 * value)
	{
		____visibleNodes_10 = value;
		Il2CppCodeGenWriteBarrier(&____visibleNodes_10, value);
	}

	inline static int32_t get_offset_of__spawnNodes_11() { return static_cast<int32_t>(offsetof(AIPath_t1930792045, ____spawnNodes_11)); }
	inline List_1_t3407171848 * get__spawnNodes_11() const { return ____spawnNodes_11; }
	inline List_1_t3407171848 ** get_address_of__spawnNodes_11() { return &____spawnNodes_11; }
	inline void set__spawnNodes_11(List_1_t3407171848 * value)
	{
		____spawnNodes_11 = value;
		Il2CppCodeGenWriteBarrier(&____spawnNodes_11, value);
	}

	inline static int32_t get_offset_of_updateNodes_12() { return static_cast<int32_t>(offsetof(AIPath_t1930792045, ___updateNodes_12)); }
	inline bool get_updateNodes_12() const { return ___updateNodes_12; }
	inline bool* get_address_of_updateNodes_12() { return &___updateNodes_12; }
	inline void set_updateNodes_12(bool value)
	{
		___updateNodes_12 = value;
	}

	inline static int32_t get_offset_of_path_index_13() { return static_cast<int32_t>(offsetof(AIPath_t1930792045, ___path_index_13)); }
	inline int32_t get_path_index_13() const { return ___path_index_13; }
	inline int32_t* get_address_of_path_index_13() { return &___path_index_13; }
	inline void set_path_index_13(int32_t value)
	{
		___path_index_13 = value;
	}

	inline static int32_t get_offset_of_prewarm_14() { return static_cast<int32_t>(offsetof(AIPath_t1930792045, ___prewarm_14)); }
	inline bool get_prewarm_14() const { return ___prewarm_14; }
	inline bool* get_address_of_prewarm_14() { return &___prewarm_14; }
	inline void set_prewarm_14(bool value)
	{
		___prewarm_14 = value;
	}

	inline static int32_t get_offset_of_pathType_15() { return static_cast<int32_t>(offsetof(AIPath_t1930792045, ___pathType_15)); }
	inline int32_t get_pathType_15() const { return ___pathType_15; }
	inline int32_t* get_address_of_pathType_15() { return &___pathType_15; }
	inline void set_pathType_15(int32_t value)
	{
		___pathType_15 = value;
	}

	inline static int32_t get_offset_of__timeSinceLastSpawn_16() { return static_cast<int32_t>(offsetof(AIPath_t1930792045, ____timeSinceLastSpawn_16)); }
	inline float get__timeSinceLastSpawn_16() const { return ____timeSinceLastSpawn_16; }
	inline float* get_address_of__timeSinceLastSpawn_16() { return &____timeSinceLastSpawn_16; }
	inline void set__timeSinceLastSpawn_16(float value)
	{
		____timeSinceLastSpawn_16 = value;
	}

	inline static int32_t get_offset_of_drawGizmos_17() { return static_cast<int32_t>(offsetof(AIPath_t1930792045, ___drawGizmos_17)); }
	inline bool get_drawGizmos_17() const { return ___drawGizmos_17; }
	inline bool* get_address_of_drawGizmos_17() { return &___drawGizmos_17; }
	inline void set_drawGizmos_17(bool value)
	{
		___drawGizmos_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
