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

// HeroAIManager
struct HeroAIManager_t825711499;
// SpatialNode
struct SpatialNode_t3293136134;
// AIDirective[]
struct AIDirectiveU5BU5D_t257938174;
// HeroMovementNode
struct HeroMovementNode_t3096409227;
// SpatialNode[]
struct SpatialNodeU5BU5D_t1480054819;
// AIDirective
struct AIDirective_t3038039303;
// HeroVehicle
struct HeroVehicle_t3389256114;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// Deployable
struct Deployable_t3932624609;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_SpatialNode3293136134.h"
#include "AssemblyU2DCSharp_SpatialNode_SpatialNodeZone1151199698.h"
#include "AssemblyU2DCSharp_HeroVehicle3389256114.h"
#include "AssemblyU2DCSharp_Deployable3932624609.h"

// System.Void HeroAIManager::.ctor()
extern "C"  void HeroAIManager__ctor_m3799634496 (HeroAIManager_t825711499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HeroAIManager::Awake()
extern "C"  void HeroAIManager_Awake_m4037239715 (HeroAIManager_t825711499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean HeroAIManager::ShieldInSlot()
extern "C"  bool HeroAIManager_ShieldInSlot_m983536732 (HeroAIManager_t825711499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HeroAIManager::AddMissile(System.Int32)
extern "C"  void HeroAIManager_AddMissile_m765276314 (HeroAIManager_t825711499 * __this, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 HeroAIManager::GetMissileCount()
extern "C"  int32_t HeroAIManager_GetMissileCount_m3016083307 (HeroAIManager_t825711499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SpatialNode HeroAIManager::MiddleHeroNode()
extern "C"  SpatialNode_t3293136134 * HeroAIManager_MiddleHeroNode_m772683752 (HeroAIManager_t825711499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// AIDirective[] HeroAIManager::AIDirectiveList()
extern "C"  AIDirectiveU5BU5D_t257938174* HeroAIManager_AIDirectiveList_m430427021 (HeroAIManager_t825711499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 HeroAIManager::UsedSpacedFarSlots()
extern "C"  int32_t HeroAIManager_UsedSpacedFarSlots_m833973103 (HeroAIManager_t825711499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 HeroAIManager::UsedFarSlots()
extern "C"  int32_t HeroAIManager_UsedFarSlots_m1617867313 (HeroAIManager_t825711499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 HeroAIManager::UsedMiddleSlots()
extern "C"  int32_t HeroAIManager_UsedMiddleSlots_m3774114319 (HeroAIManager_t825711499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// HeroMovementNode HeroAIManager::GetHeroNodeForIndex(System.Int32)
extern "C"  HeroMovementNode_t3096409227 * HeroAIManager_GetHeroNodeForIndex_m2427839612 (HeroAIManager_t825711499 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SpatialNode HeroAIManager::GetMidNode(System.Int32)
extern "C"  SpatialNode_t3293136134 * HeroAIManager_GetMidNode_m2590696796 (HeroAIManager_t825711499 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SpatialNode HeroAIManager::GetFarNode(System.Int32)
extern "C"  SpatialNode_t3293136134 * HeroAIManager_GetFarNode_m1149162603 (HeroAIManager_t825711499 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SpatialNode[] HeroAIManager::AdjacentNodes(SpatialNode)
extern "C"  SpatialNodeU5BU5D_t1480054819* HeroAIManager_AdjacentNodes_m1392531924 (HeroAIManager_t825711499 * __this, SpatialNode_t3293136134 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SpatialNode[] HeroAIManager::FindSpotInZone(SpatialNode/SpatialNodeZone)
extern "C"  SpatialNodeU5BU5D_t1480054819* HeroAIManager_FindSpotInZone_m3634453636 (HeroAIManager_t825711499 * __this, int32_t ___zone, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SpatialNode HeroAIManager::FindSpotInZone2(SpatialNode/SpatialNodeZone)
extern "C"  SpatialNode_t3293136134 * HeroAIManager_FindSpotInZone2_m2733427640 (HeroAIManager_t825711499 * __this, int32_t ___zone, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SpatialNode[] HeroAIManager::FindSpotForHero()
extern "C"  SpatialNodeU5BU5D_t1480054819* HeroAIManager_FindSpotForHero_m1610002833 (HeroAIManager_t825711499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SpatialNode[] HeroAIManager::FindSpotForShield()
extern "C"  SpatialNodeU5BU5D_t1480054819* HeroAIManager_FindSpotForShield_m1118270400 (HeroAIManager_t825711499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SpatialNode HeroAIManager::ForwardNodeForNode(SpatialNode)
extern "C"  SpatialNode_t3293136134 * HeroAIManager_ForwardNodeForNode_m405949553 (HeroAIManager_t825711499 * __this, SpatialNode_t3293136134 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SpatialNode HeroAIManager::ForwardNodeForMid(SpatialNode)
extern "C"  SpatialNode_t3293136134 * HeroAIManager_ForwardNodeForMid_m2559861403 (HeroAIManager_t825711499 * __this, SpatialNode_t3293136134 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SpatialNode HeroAIManager::ForwardNodeForFar(SpatialNode)
extern "C"  SpatialNode_t3293136134 * HeroAIManager_ForwardNodeForFar_m4175234604 (HeroAIManager_t825711499 * __this, SpatialNode_t3293136134 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SpatialNode HeroAIManager::RandomNodeFromList(SpatialNode[])
extern "C"  SpatialNode_t3293136134 * HeroAIManager_RandomNodeFromList_m1806456390 (HeroAIManager_t825711499 * __this, SpatialNodeU5BU5D_t1480054819* ___nodes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SpatialNode[] HeroAIManager::FindSpotForMine()
extern "C"  SpatialNodeU5BU5D_t1480054819* HeroAIManager_FindSpotForMine_m1756713898 (HeroAIManager_t825711499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SpatialNode[] HeroAIManager::FindSpotSpacedForMine()
extern "C"  SpatialNodeU5BU5D_t1480054819* HeroAIManager_FindSpotSpacedForMine_m4083244908 (HeroAIManager_t825711499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// AIDirective HeroAIManager::Next()
extern "C"  AIDirective_t3038039303 * HeroAIManager_Next_m2311878987 (HeroAIManager_t825711499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HeroAIManager::PushAIDirective()
extern "C"  void HeroAIManager_PushAIDirective_m1061648779 (HeroAIManager_t825711499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HeroAIManager::SetVehicle(HeroVehicle)
extern "C"  void HeroAIManager_SetVehicle_m1395426578 (HeroAIManager_t825711499 * __this, HeroVehicle_t3389256114 * ___v, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 HeroAIManager::FindSpotForShield2()
extern "C"  int32_t HeroAIManager_FindSpotForShield2_m2039636945 (HeroAIManager_t825711499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 HeroAIManager::FindSpotForMine2()
extern "C"  int32_t HeroAIManager_FindSpotForMine2_m2647710823 (HeroAIManager_t825711499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator HeroAIManager::DelayedPush()
extern "C"  Il2CppObject * HeroAIManager_DelayedPush_m2300288130 (HeroAIManager_t825711499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SpatialNode[] HeroAIManager::GetHeroNodes()
extern "C"  SpatialNodeU5BU5D_t1480054819* HeroAIManager_GetHeroNodes_m814272730 (HeroAIManager_t825711499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SpatialNode[] HeroAIManager::GetMidNodes()
extern "C"  SpatialNodeU5BU5D_t1480054819* HeroAIManager_GetMidNodes_m1407858952 (HeroAIManager_t825711499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SpatialNode[] HeroAIManager::GetFarNodes()
extern "C"  SpatialNodeU5BU5D_t1480054819* HeroAIManager_GetFarNodes_m2987728217 (HeroAIManager_t825711499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SpatialNode[] HeroAIManager::GetNodesForZone(SpatialNode/SpatialNodeZone)
extern "C"  SpatialNodeU5BU5D_t1480054819* HeroAIManager_GetNodesForZone_m1129862214 (HeroAIManager_t825711499 * __this, int32_t ___zone, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SpatialNode HeroAIManager::GetCurrentHeroNode()
extern "C"  SpatialNode_t3293136134 * HeroAIManager_GetCurrentHeroNode_m2680716054 (HeroAIManager_t825711499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HeroAIManager::AcquireNodeLock(SpatialNode,Deployable)
extern "C"  void HeroAIManager_AcquireNodeLock_m759151418 (HeroAIManager_t825711499 * __this, SpatialNode_t3293136134 * ___node, Deployable_t3932624609 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HeroAIManager::ReleaseNodeLock(SpatialNode,Deployable)
extern "C"  void HeroAIManager_ReleaseNodeLock_m2836692587 (HeroAIManager_t825711499 * __this, SpatialNode_t3293136134 * ___node, Deployable_t3932624609 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
