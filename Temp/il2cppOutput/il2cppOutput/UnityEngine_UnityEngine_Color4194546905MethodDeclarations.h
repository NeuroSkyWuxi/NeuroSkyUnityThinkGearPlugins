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

// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// UnityEngine.Color
struct Color_t4194546905;
struct Color_t4194546905_marshaled_pinvoke;
struct Color_t4194546905_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"
#include "mscorlib_System_Object4170816371.h"
#include "UnityEngine_UnityEngine_Vector44282066567.h"

// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C"  void Color__ctor_m2252924356 (Color_t4194546905 * __this, float ___r0, float ___g1, float ___b2, float ___a3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single)
extern "C"  void Color__ctor_m103496991 (Color_t4194546905 * __this, float ___r0, float ___g1, float ___b2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Color::ToString()
extern "C"  String_t* Color_ToString_m2277845527 (Color_t4194546905 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Color::GetHashCode()
extern "C"  int32_t Color_GetHashCode_m170503301 (Color_t4194546905 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Color::Equals(System.Object)
extern "C"  bool Color_Equals_m3016668205 (Color_t4194546905 * __this, Il2CppObject * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Color::get_red()
extern "C"  Color_t4194546905  Color_get_red_m4288945411 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Color::get_white()
extern "C"  Color_t4194546905  Color_get_white_m3038282331 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.Color::op_Implicit(UnityEngine.Color)
extern "C"  Vector4_t4282066567  Color_op_Implicit_m2638307542 (Il2CppObject * __this /* static, unused */, Color_t4194546905  ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct Color_t4194546905;
struct Color_t4194546905_marshaled_pinvoke;

extern "C" void Color_t4194546905_marshal_pinvoke(const Color_t4194546905& unmarshaled, Color_t4194546905_marshaled_pinvoke& marshaled);
extern "C" void Color_t4194546905_marshal_pinvoke_back(const Color_t4194546905_marshaled_pinvoke& marshaled, Color_t4194546905& unmarshaled);
extern "C" void Color_t4194546905_marshal_pinvoke_cleanup(Color_t4194546905_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct Color_t4194546905;
struct Color_t4194546905_marshaled_com;

extern "C" void Color_t4194546905_marshal_com(const Color_t4194546905& unmarshaled, Color_t4194546905_marshaled_com& marshaled);
extern "C" void Color_t4194546905_marshal_com_back(const Color_t4194546905_marshaled_com& marshaled, Color_t4194546905& unmarshaled);
extern "C" void Color_t4194546905_marshal_com_cleanup(Color_t4194546905_marshaled_com& marshaled);
