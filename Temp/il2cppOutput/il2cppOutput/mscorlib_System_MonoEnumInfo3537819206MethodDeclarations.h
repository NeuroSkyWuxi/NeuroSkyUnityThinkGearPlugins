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

// System.Type
struct Type_t;
// System.Collections.Hashtable
struct Hashtable_t1407064410;
// System.MonoEnumInfo
struct MonoEnumInfo_t3537819206;
struct MonoEnumInfo_t3537819206_marshaled_pinvoke;
struct MonoEnumInfo_t3537819206_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_MonoEnumInfo3537819206.h"
#include "mscorlib_System_Type2863145774.h"

// System.Void System.MonoEnumInfo::.ctor(System.MonoEnumInfo)
extern "C"  void MonoEnumInfo__ctor_m427288990 (MonoEnumInfo_t3537819206 * __this, MonoEnumInfo_t3537819206  ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.MonoEnumInfo::.cctor()
extern "C"  void MonoEnumInfo__cctor_m2878678058 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.MonoEnumInfo::get_enum_info(System.Type,System.MonoEnumInfo&)
extern "C"  void MonoEnumInfo_get_enum_info_m1623052572 (Il2CppObject * __this /* static, unused */, Type_t * ___enumType0, MonoEnumInfo_t3537819206 * ___info1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Hashtable System.MonoEnumInfo::get_Cache()
extern "C"  Hashtable_t1407064410 * MonoEnumInfo_get_Cache_m295946653 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.MonoEnumInfo::GetInfo(System.Type,System.MonoEnumInfo&)
extern "C"  void MonoEnumInfo_GetInfo_m2492061277 (Il2CppObject * __this /* static, unused */, Type_t * ___enumType0, MonoEnumInfo_t3537819206 * ___info1, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct MonoEnumInfo_t3537819206;
struct MonoEnumInfo_t3537819206_marshaled_pinvoke;

extern "C" void MonoEnumInfo_t3537819206_marshal_pinvoke(const MonoEnumInfo_t3537819206& unmarshaled, MonoEnumInfo_t3537819206_marshaled_pinvoke& marshaled);
extern "C" void MonoEnumInfo_t3537819206_marshal_pinvoke_back(const MonoEnumInfo_t3537819206_marshaled_pinvoke& marshaled, MonoEnumInfo_t3537819206& unmarshaled);
extern "C" void MonoEnumInfo_t3537819206_marshal_pinvoke_cleanup(MonoEnumInfo_t3537819206_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct MonoEnumInfo_t3537819206;
struct MonoEnumInfo_t3537819206_marshaled_com;

extern "C" void MonoEnumInfo_t3537819206_marshal_com(const MonoEnumInfo_t3537819206& unmarshaled, MonoEnumInfo_t3537819206_marshaled_com& marshaled);
extern "C" void MonoEnumInfo_t3537819206_marshal_com_back(const MonoEnumInfo_t3537819206_marshaled_com& marshaled, MonoEnumInfo_t3537819206& unmarshaled);
extern "C" void MonoEnumInfo_t3537819206_marshal_com_cleanup(MonoEnumInfo_t3537819206_marshaled_com& marshaled);
