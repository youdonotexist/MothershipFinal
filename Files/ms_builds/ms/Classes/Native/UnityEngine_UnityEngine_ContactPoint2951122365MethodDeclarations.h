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

// UnityEngine.Collider
struct Collider_t955670625;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_ContactPoint2951122365.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

// UnityEngine.Vector3 UnityEngine.ContactPoint::get_point()
extern "C"  Vector3_t3525329789  ContactPoint_get_point_m1387782344 (ContactPoint_t2951122365 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.ContactPoint::get_normal()
extern "C"  Vector3_t3525329789  ContactPoint_get_normal_m1137164497 (ContactPoint_t2951122365 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Collider UnityEngine.ContactPoint::get_otherCollider()
extern "C"  Collider_t955670625 * ContactPoint_get_otherCollider_m1221222194 (ContactPoint_t2951122365 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Collider UnityEngine.ContactPoint::ColliderFromInstanceId(System.Int32)
extern "C"  Collider_t955670625 * ContactPoint_ColliderFromInstanceId_m3839718698 (Il2CppObject * __this /* static, unused */, int32_t ___instanceID, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct ContactPoint_t2951122365;
struct ContactPoint_t2951122365_marshaled_pinvoke;

extern "C" void ContactPoint_t2951122365_marshal_pinvoke(const ContactPoint_t2951122365& unmarshaled, ContactPoint_t2951122365_marshaled_pinvoke& marshaled);
extern "C" void ContactPoint_t2951122365_marshal_pinvoke_back(const ContactPoint_t2951122365_marshaled_pinvoke& marshaled, ContactPoint_t2951122365& unmarshaled);
extern "C" void ContactPoint_t2951122365_marshal_pinvoke_cleanup(ContactPoint_t2951122365_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct ContactPoint_t2951122365;
struct ContactPoint_t2951122365_marshaled_com;

extern "C" void ContactPoint_t2951122365_marshal_com(const ContactPoint_t2951122365& unmarshaled, ContactPoint_t2951122365_marshaled_com& marshaled);
extern "C" void ContactPoint_t2951122365_marshal_com_back(const ContactPoint_t2951122365_marshaled_com& marshaled, ContactPoint_t2951122365& unmarshaled);
extern "C" void ContactPoint_t2951122365_marshal_com_cleanup(ContactPoint_t2951122365_marshaled_com& marshaled);
