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

// System.Reflection.MonoProperty
struct MonoProperty_t;
// System.Type[]
struct TypeU5BU5D_t3339007067;
// System.Reflection.MonoPropertyInfo
struct MonoPropertyInfo_t3938502968;
struct MonoPropertyInfo_t3938502968_marshaled_pinvoke;
struct MonoPropertyInfo_t3938502968_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_MonoProperty1246977642.h"
#include "mscorlib_System_Reflection_MonoPropertyInfo3938502968.h"
#include "mscorlib_System_Reflection_PInfo2721197512.h"

// System.Void System.Reflection.MonoPropertyInfo::get_property_info(System.Reflection.MonoProperty,System.Reflection.MonoPropertyInfo&,System.Reflection.PInfo)
extern "C"  void MonoPropertyInfo_get_property_info_m1244288251 (Il2CppObject * __this /* static, unused */, MonoProperty_t * ___prop0, MonoPropertyInfo_t3938502968 * ___info1, int32_t ___req_info2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.MonoPropertyInfo::GetTypeModifiers(System.Reflection.MonoProperty,System.Boolean)
extern "C"  TypeU5BU5D_t3339007067* MonoPropertyInfo_GetTypeModifiers_m3740551417 (Il2CppObject * __this /* static, unused */, MonoProperty_t * ___prop0, bool ___optional1, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct MonoPropertyInfo_t3938502968;
struct MonoPropertyInfo_t3938502968_marshaled_pinvoke;

extern "C" void MonoPropertyInfo_t3938502968_marshal_pinvoke(const MonoPropertyInfo_t3938502968& unmarshaled, MonoPropertyInfo_t3938502968_marshaled_pinvoke& marshaled);
extern "C" void MonoPropertyInfo_t3938502968_marshal_pinvoke_back(const MonoPropertyInfo_t3938502968_marshaled_pinvoke& marshaled, MonoPropertyInfo_t3938502968& unmarshaled);
extern "C" void MonoPropertyInfo_t3938502968_marshal_pinvoke_cleanup(MonoPropertyInfo_t3938502968_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct MonoPropertyInfo_t3938502968;
struct MonoPropertyInfo_t3938502968_marshaled_com;

extern "C" void MonoPropertyInfo_t3938502968_marshal_com(const MonoPropertyInfo_t3938502968& unmarshaled, MonoPropertyInfo_t3938502968_marshaled_com& marshaled);
extern "C" void MonoPropertyInfo_t3938502968_marshal_com_back(const MonoPropertyInfo_t3938502968_marshaled_com& marshaled, MonoPropertyInfo_t3938502968& unmarshaled);
extern "C" void MonoPropertyInfo_t3938502968_marshal_com_cleanup(MonoPropertyInfo_t3938502968_marshaled_com& marshaled);
