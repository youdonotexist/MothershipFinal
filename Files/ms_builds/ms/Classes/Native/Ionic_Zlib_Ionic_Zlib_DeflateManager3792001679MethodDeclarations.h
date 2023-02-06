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

// Ionic.Zlib.DeflateManager
struct DeflateManager_t3792001679;
// System.Int16[]
struct Int16U5BU5D_t3675865332;
// System.SByte[]
struct SByteU5BU5D_t1084170289;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// Ionic.Zlib.ZlibCodec
struct ZlibCodec_t3910383704;

#include "codegen/il2cpp-codegen.h"
#include "Ionic_Zlib_Ionic_Zlib_BlockState1531979153.h"
#include "Ionic_Zlib_Ionic_Zlib_FlushType3984958891.h"
#include "Ionic_Zlib_Ionic_Zlib_ZlibCodec3910383704.h"
#include "Ionic_Zlib_Ionic_Zlib_CompressionLevel3940478795.h"
#include "Ionic_Zlib_Ionic_Zlib_CompressionStrategy2328611910.h"

// System.Void Ionic.Zlib.DeflateManager::.ctor()
extern "C"  void DeflateManager__ctor_m3740433929 (DeflateManager_t3792001679 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zlib.DeflateManager::_InitializeLazyMatch()
extern "C"  void DeflateManager__InitializeLazyMatch_m3351360413 (DeflateManager_t3792001679 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zlib.DeflateManager::_InitializeTreeData()
extern "C"  void DeflateManager__InitializeTreeData_m71694814 (DeflateManager_t3792001679 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zlib.DeflateManager::_InitializeBlocks()
extern "C"  void DeflateManager__InitializeBlocks_m1842559164 (DeflateManager_t3792001679 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zlib.DeflateManager::pqdownheap(System.Int16[],System.Int32)
extern "C"  void DeflateManager_pqdownheap_m760203588 (DeflateManager_t3792001679 * __this, Int16U5BU5D_t3675865332* ___tree, int32_t ___k, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Ionic.Zlib.DeflateManager::_IsSmaller(System.Int16[],System.Int32,System.Int32,System.SByte[])
extern "C"  bool DeflateManager__IsSmaller_m4063168127 (Il2CppObject * __this /* static, unused */, Int16U5BU5D_t3675865332* ___tree, int32_t ___n, int32_t ___m, SByteU5BU5D_t1084170289* ___depth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zlib.DeflateManager::scan_tree(System.Int16[],System.Int32)
extern "C"  void DeflateManager_scan_tree_m423707655 (DeflateManager_t3792001679 * __this, Int16U5BU5D_t3675865332* ___tree, int32_t ___max_code, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Ionic.Zlib.DeflateManager::build_bl_tree()
extern "C"  int32_t DeflateManager_build_bl_tree_m3706376617 (DeflateManager_t3792001679 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zlib.DeflateManager::send_all_trees(System.Int32,System.Int32,System.Int32)
extern "C"  void DeflateManager_send_all_trees_m721940780 (DeflateManager_t3792001679 * __this, int32_t ___lcodes, int32_t ___dcodes, int32_t ___blcodes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zlib.DeflateManager::send_tree(System.Int16[],System.Int32)
extern "C"  void DeflateManager_send_tree_m592398930 (DeflateManager_t3792001679 * __this, Int16U5BU5D_t3675865332* ___tree, int32_t ___max_code, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zlib.DeflateManager::put_bytes(System.Byte[],System.Int32,System.Int32)
extern "C"  void DeflateManager_put_bytes_m2676252903 (DeflateManager_t3792001679 * __this, ByteU5BU5D_t58506160* ___p, int32_t ___start, int32_t ___len, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zlib.DeflateManager::send_code(System.Int32,System.Int16[])
extern "C"  void DeflateManager_send_code_m1155066067 (DeflateManager_t3792001679 * __this, int32_t ___c, Int16U5BU5D_t3675865332* ___tree, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zlib.DeflateManager::send_bits(System.Int32,System.Int32)
extern "C"  void DeflateManager_send_bits_m1273426754 (DeflateManager_t3792001679 * __this, int32_t ___value, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zlib.DeflateManager::_tr_align()
extern "C"  void DeflateManager__tr_align_m209932010 (DeflateManager_t3792001679 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Ionic.Zlib.DeflateManager::_tr_tally(System.Int32,System.Int32)
extern "C"  bool DeflateManager__tr_tally_m3277709903 (DeflateManager_t3792001679 * __this, int32_t ___dist, int32_t ___lc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zlib.DeflateManager::send_compressed_block(System.Int16[],System.Int16[])
extern "C"  void DeflateManager_send_compressed_block_m3148877337 (DeflateManager_t3792001679 * __this, Int16U5BU5D_t3675865332* ___ltree, Int16U5BU5D_t3675865332* ___dtree, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zlib.DeflateManager::set_data_type()
extern "C"  void DeflateManager_set_data_type_m2906120153 (DeflateManager_t3792001679 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zlib.DeflateManager::bi_flush()
extern "C"  void DeflateManager_bi_flush_m1311823623 (DeflateManager_t3792001679 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zlib.DeflateManager::bi_windup()
extern "C"  void DeflateManager_bi_windup_m2993487138 (DeflateManager_t3792001679 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zlib.DeflateManager::copy_block(System.Int32,System.Int32,System.Boolean)
extern "C"  void DeflateManager_copy_block_m1049746069 (DeflateManager_t3792001679 * __this, int32_t ___buf, int32_t ___len, bool ___header, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zlib.DeflateManager::flush_block_only(System.Boolean)
extern "C"  void DeflateManager_flush_block_only_m496548715 (DeflateManager_t3792001679 * __this, bool ___eof, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Ionic.Zlib.BlockState Ionic.Zlib.DeflateManager::DeflateNone(Ionic.Zlib.FlushType)
extern "C"  int32_t DeflateManager_DeflateNone_m278934843 (DeflateManager_t3792001679 * __this, int32_t ___flush, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zlib.DeflateManager::_tr_stored_block(System.Int32,System.Int32,System.Boolean)
extern "C"  void DeflateManager__tr_stored_block_m1158359717 (DeflateManager_t3792001679 * __this, int32_t ___buf, int32_t ___stored_len, bool ___eof, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zlib.DeflateManager::_tr_flush_block(System.Int32,System.Int32,System.Boolean)
extern "C"  void DeflateManager__tr_flush_block_m2977561038 (DeflateManager_t3792001679 * __this, int32_t ___buf, int32_t ___stored_len, bool ___eof, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zlib.DeflateManager::_fillWindow()
extern "C"  void DeflateManager__fillWindow_m2648911673 (DeflateManager_t3792001679 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Ionic.Zlib.BlockState Ionic.Zlib.DeflateManager::DeflateFast(Ionic.Zlib.FlushType)
extern "C"  int32_t DeflateManager_DeflateFast_m203500383 (DeflateManager_t3792001679 * __this, int32_t ___flush, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Ionic.Zlib.BlockState Ionic.Zlib.DeflateManager::DeflateSlow(Ionic.Zlib.FlushType)
extern "C"  int32_t DeflateManager_DeflateSlow_m3234612036 (DeflateManager_t3792001679 * __this, int32_t ___flush, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Ionic.Zlib.DeflateManager::longest_match(System.Int32)
extern "C"  int32_t DeflateManager_longest_match_m2897222184 (DeflateManager_t3792001679 * __this, int32_t ___cur_match, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Ionic.Zlib.DeflateManager::get_WantRfc1950HeaderBytes()
extern "C"  bool DeflateManager_get_WantRfc1950HeaderBytes_m1073759418 (DeflateManager_t3792001679 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zlib.DeflateManager::set_WantRfc1950HeaderBytes(System.Boolean)
extern "C"  void DeflateManager_set_WantRfc1950HeaderBytes_m2593361931 (DeflateManager_t3792001679 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Ionic.Zlib.DeflateManager::Initialize(Ionic.Zlib.ZlibCodec,Ionic.Zlib.CompressionLevel,System.Int32,Ionic.Zlib.CompressionStrategy)
extern "C"  int32_t DeflateManager_Initialize_m96209179 (DeflateManager_t3792001679 * __this, ZlibCodec_t3910383704 * ___codec, int32_t ___level, int32_t ___bits, int32_t ___compressionStrategy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Ionic.Zlib.DeflateManager::Initialize(Ionic.Zlib.ZlibCodec,Ionic.Zlib.CompressionLevel,System.Int32,System.Int32,Ionic.Zlib.CompressionStrategy)
extern "C"  int32_t DeflateManager_Initialize_m1408553238 (DeflateManager_t3792001679 * __this, ZlibCodec_t3910383704 * ___codec, int32_t ___level, int32_t ___windowBits, int32_t ___memLevel, int32_t ___strategy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zlib.DeflateManager::Reset()
extern "C"  void DeflateManager_Reset_m1386866870 (DeflateManager_t3792001679 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zlib.DeflateManager::SetDeflater()
extern "C"  void DeflateManager_SetDeflater_m874143888 (DeflateManager_t3792001679 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Ionic.Zlib.DeflateManager::Deflate(Ionic.Zlib.FlushType)
extern "C"  int32_t DeflateManager_Deflate_m1504299595 (DeflateManager_t3792001679 * __this, int32_t ___flush, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zlib.DeflateManager::.cctor()
extern "C"  void DeflateManager__cctor_m3802205892 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
