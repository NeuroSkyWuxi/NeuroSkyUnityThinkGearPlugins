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

// UnityEngine.GUIStyleState
struct GUIStyleState_t1997423985;
// UnityEngine.GUIStyle
struct GUIStyle_t2990928826;
// UnityEngine.Texture2D
struct Texture2D_t3884108195;
struct GUIStyleState_t1997423985_marshaled_pinvoke;
struct GUIStyleState_t1997423985_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GUIStyle2990928826.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"

// System.Void UnityEngine.GUIStyleState::.ctor()
extern "C"  void GUIStyleState__ctor_m2789776190 (GUIStyleState_t1997423985 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyleState::.ctor(UnityEngine.GUIStyle,System.IntPtr)
extern "C"  void GUIStyleState__ctor_m1478971583 (GUIStyleState_t1997423985 * __this, GUIStyle_t2990928826 * ___sourceStyle0, IntPtr_t ___source1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyleState UnityEngine.GUIStyleState::ProduceGUIStyleStateFromDeserialization(UnityEngine.GUIStyle,System.IntPtr)
extern "C"  GUIStyleState_t1997423985 * GUIStyleState_ProduceGUIStyleStateFromDeserialization_m243465942 (Il2CppObject * __this /* static, unused */, GUIStyle_t2990928826 * ___sourceStyle0, IntPtr_t ___source1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyleState UnityEngine.GUIStyleState::GetGUIStyleState(UnityEngine.GUIStyle,System.IntPtr)
extern "C"  GUIStyleState_t1997423985 * GUIStyleState_GetGUIStyleState_m511242685 (Il2CppObject * __this /* static, unused */, GUIStyle_t2990928826 * ___sourceStyle0, IntPtr_t ___source1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyleState::Finalize()
extern "C"  void GUIStyleState_Finalize_m2707805284 (GUIStyleState_t1997423985 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyleState::Init()
extern "C"  void GUIStyleState_Init_m872813398 (GUIStyleState_t1997423985 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyleState::Cleanup()
extern "C"  void GUIStyleState_Cleanup_m3584086848 (GUIStyleState_t1997423985 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D UnityEngine.GUIStyleState::GetBackgroundInternalFromDeserialization()
extern "C"  Texture2D_t3884108195 * GUIStyleState_GetBackgroundInternalFromDeserialization_m2608056493 (GUIStyleState_t1997423985 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D UnityEngine.GUIStyleState::GetBackgroundInternal()
extern "C"  Texture2D_t3884108195 * GUIStyleState_GetBackgroundInternal_m2898492250 (GUIStyleState_t1997423985 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyleState::set_textColor(UnityEngine.Color)
extern "C"  void GUIStyleState_set_textColor_m3058467057 (GUIStyleState_t1997423985 * __this, Color_t4194546905  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyleState::INTERNAL_set_textColor(UnityEngine.Color&)
extern "C"  void GUIStyleState_INTERNAL_set_textColor_m2711899875 (GUIStyleState_t1997423985 * __this, Color_t4194546905 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct GUIStyleState_t1997423985;
struct GUIStyleState_t1997423985_marshaled_pinvoke;

extern "C" void GUIStyleState_t1997423985_marshal_pinvoke(const GUIStyleState_t1997423985& unmarshaled, GUIStyleState_t1997423985_marshaled_pinvoke& marshaled);
extern "C" void GUIStyleState_t1997423985_marshal_pinvoke_back(const GUIStyleState_t1997423985_marshaled_pinvoke& marshaled, GUIStyleState_t1997423985& unmarshaled);
extern "C" void GUIStyleState_t1997423985_marshal_pinvoke_cleanup(GUIStyleState_t1997423985_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct GUIStyleState_t1997423985;
struct GUIStyleState_t1997423985_marshaled_com;

extern "C" void GUIStyleState_t1997423985_marshal_com(const GUIStyleState_t1997423985& unmarshaled, GUIStyleState_t1997423985_marshaled_com& marshaled);
extern "C" void GUIStyleState_t1997423985_marshal_com_back(const GUIStyleState_t1997423985_marshaled_com& marshaled, GUIStyleState_t1997423985& unmarshaled);
extern "C" void GUIStyleState_t1997423985_marshal_com_cleanup(GUIStyleState_t1997423985_marshaled_com& marshaled);
