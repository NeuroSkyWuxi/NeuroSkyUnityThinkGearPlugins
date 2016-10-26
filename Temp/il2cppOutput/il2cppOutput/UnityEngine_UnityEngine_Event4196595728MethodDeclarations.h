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

// UnityEngine.Event
struct Event_t4196595728;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
struct Event_t4196595728_marshaled_pinvoke;
struct Event_t4196595728_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"
#include "mscorlib_System_Object4170816371.h"
#include "UnityEngine_UnityEngine_EventType637886954.h"
#include "UnityEngine_UnityEngine_EventModifiers4195406918.h"
#include "UnityEngine_UnityEngine_KeyCode3128317986.h"
#include "mscorlib_System_IntPtr4010401971.h"

// System.Void UnityEngine.Event::.ctor(System.Int32)
extern "C"  void Event__ctor_m66398544 (Event_t4196595728 * __this, int32_t ___displayIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::Finalize()
extern "C"  void Event_Finalize_m2449826179 (Event_t4196595728 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Event::get_mousePosition()
extern "C"  Vector2_t4282066565  Event_get_mousePosition_m3610425949 (Event_t4196595728 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Event::get_delta()
extern "C"  Vector2_t4282066565  Event_get_delta_m489813159 (Event_t4196595728 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Event UnityEngine.Event::get_current()
extern "C"  Event_t4196595728 * Event_get_current_m238587645 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::Internal_MakeMasterEventCurrent(System.Int32)
extern "C"  void Event_Internal_MakeMasterEventCurrent_m213199903 (Il2CppObject * __this /* static, unused */, int32_t ___displayIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Event::get_isKey()
extern "C"  bool Event_get_isKey_m645126607 (Event_t4196595728 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Event::get_isMouse()
extern "C"  bool Event_get_isMouse_m3551276757 (Event_t4196595728 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Event::GetHashCode()
extern "C"  int32_t Event_GetHashCode_m2341647470 (Event_t4196595728 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Event::Equals(System.Object)
extern "C"  bool Event_Equals_m2374615830 (Event_t4196595728 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Event::ToString()
extern "C"  String_t* Event_ToString_m3661517518 (Event_t4196595728 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::Init(System.Int32)
extern "C"  void Event_Init_m3525277126 (Event_t4196595728 * __this, int32_t ___displayIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::Cleanup()
extern "C"  void Event_Cleanup_m3160122945 (Event_t4196595728 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventType UnityEngine.Event::get_rawType()
extern "C"  int32_t Event_get_rawType_m696564524 (Event_t4196595728 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventType UnityEngine.Event::get_type()
extern "C"  int32_t Event_get_type_m2209939250 (Event_t4196595728 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventType UnityEngine.Event::GetTypeForControl(System.Int32)
extern "C"  int32_t Event_GetTypeForControl_m854773288 (Event_t4196595728 * __this, int32_t ___controlID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::Internal_GetMousePosition(UnityEngine.Vector2&)
extern "C"  void Event_Internal_GetMousePosition_m2054214537 (Event_t4196595728 * __this, Vector2_t4282066565 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::Internal_GetMouseDelta(UnityEngine.Vector2&)
extern "C"  void Event_Internal_GetMouseDelta_m798523742 (Event_t4196595728 * __this, Vector2_t4282066565 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventModifiers UnityEngine.Event::get_modifiers()
extern "C"  int32_t Event_get_modifiers_m4020990886 (Event_t4196595728 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char UnityEngine.Event::get_character()
extern "C"  Il2CppChar Event_get_character_m3663172667 (Event_t4196595728 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Event::get_commandName()
extern "C"  String_t* Event_get_commandName_m1197792621 (Event_t4196595728 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.KeyCode UnityEngine.Event::get_keyCode()
extern "C"  int32_t Event_get_keyCode_m1820698462 (Event_t4196595728 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::Internal_SetNativeEvent(System.IntPtr)
extern "C"  void Event_Internal_SetNativeEvent_m930902932 (Il2CppObject * __this /* static, unused */, IntPtr_t ___ptr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::set_displayIndex(System.Int32)
extern "C"  void Event_set_displayIndex_m4130090435 (Event_t4196595728 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::Use()
extern "C"  void Event_Use_m310777444 (Event_t4196595728 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct Event_t4196595728;
struct Event_t4196595728_marshaled_pinvoke;

extern "C" void Event_t4196595728_marshal_pinvoke(const Event_t4196595728& unmarshaled, Event_t4196595728_marshaled_pinvoke& marshaled);
extern "C" void Event_t4196595728_marshal_pinvoke_back(const Event_t4196595728_marshaled_pinvoke& marshaled, Event_t4196595728& unmarshaled);
extern "C" void Event_t4196595728_marshal_pinvoke_cleanup(Event_t4196595728_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct Event_t4196595728;
struct Event_t4196595728_marshaled_com;

extern "C" void Event_t4196595728_marshal_com(const Event_t4196595728& unmarshaled, Event_t4196595728_marshaled_com& marshaled);
extern "C" void Event_t4196595728_marshal_com_back(const Event_t4196595728_marshaled_com& marshaled, Event_t4196595728& unmarshaled);
extern "C" void Event_t4196595728_marshal_com_cleanup(Event_t4196595728_marshaled_com& marshaled);
