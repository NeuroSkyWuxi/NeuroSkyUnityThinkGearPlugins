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

// System.Reflection.MonoEvent
struct MonoEvent_t;
// System.Reflection.MonoEventInfo
struct MonoEventInfo_t3743085391;
struct MonoEventInfo_t3743085391_marshaled_pinvoke;
struct MonoEventInfo_t3743085391_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_MonoEvent1233923073.h"
#include "mscorlib_System_Reflection_MonoEventInfo3743085391.h"

// System.Void System.Reflection.MonoEventInfo::get_event_info(System.Reflection.MonoEvent,System.Reflection.MonoEventInfo&)
extern "C"  void MonoEventInfo_get_event_info_m4253936399 (Il2CppObject * __this /* static, unused */, MonoEvent_t * ___ev0, MonoEventInfo_t3743085391 * ___info1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MonoEventInfo System.Reflection.MonoEventInfo::GetEventInfo(System.Reflection.MonoEvent)
extern "C"  MonoEventInfo_t3743085391  MonoEventInfo_GetEventInfo_m3342016238 (Il2CppObject * __this /* static, unused */, MonoEvent_t * ___ev0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct MonoEventInfo_t3743085391;
struct MonoEventInfo_t3743085391_marshaled_pinvoke;

extern "C" void MonoEventInfo_t3743085391_marshal_pinvoke(const MonoEventInfo_t3743085391& unmarshaled, MonoEventInfo_t3743085391_marshaled_pinvoke& marshaled);
extern "C" void MonoEventInfo_t3743085391_marshal_pinvoke_back(const MonoEventInfo_t3743085391_marshaled_pinvoke& marshaled, MonoEventInfo_t3743085391& unmarshaled);
extern "C" void MonoEventInfo_t3743085391_marshal_pinvoke_cleanup(MonoEventInfo_t3743085391_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct MonoEventInfo_t3743085391;
struct MonoEventInfo_t3743085391_marshaled_com;

extern "C" void MonoEventInfo_t3743085391_marshal_com(const MonoEventInfo_t3743085391& unmarshaled, MonoEventInfo_t3743085391_marshaled_com& marshaled);
extern "C" void MonoEventInfo_t3743085391_marshal_com_back(const MonoEventInfo_t3743085391_marshaled_com& marshaled, MonoEventInfo_t3743085391& unmarshaled);
extern "C" void MonoEventInfo_t3743085391_marshal_com_cleanup(MonoEventInfo_t3743085391_marshaled_com& marshaled);
