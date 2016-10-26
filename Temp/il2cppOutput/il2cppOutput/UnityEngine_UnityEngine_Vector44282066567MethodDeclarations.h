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

// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// UnityEngine.Vector4
struct Vector4_t4282066567;
struct Vector4_t4282066567_marshaled_pinvoke;
struct Vector4_t4282066567_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector44282066567.h"
#include "mscorlib_System_Object4170816371.h"

// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C"  void Vector4__ctor_m2441427762 (Vector4_t4282066567 * __this, float ___x0, float ___y1, float ___z2, float ___w3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Vector4::GetHashCode()
extern "C"  int32_t Vector4_GetHashCode_m3402333527 (Vector4_t4282066567 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Vector4::Equals(System.Object)
extern "C"  bool Vector4_Equals_m3270185343 (Vector4_t4282066567 * __this, Il2CppObject * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Vector4::ToString()
extern "C"  String_t* Vector4_ToString_m3272970053 (Vector4_t4282066567 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct Vector4_t4282066567;
struct Vector4_t4282066567_marshaled_pinvoke;

extern "C" void Vector4_t4282066567_marshal_pinvoke(const Vector4_t4282066567& unmarshaled, Vector4_t4282066567_marshaled_pinvoke& marshaled);
extern "C" void Vector4_t4282066567_marshal_pinvoke_back(const Vector4_t4282066567_marshaled_pinvoke& marshaled, Vector4_t4282066567& unmarshaled);
extern "C" void Vector4_t4282066567_marshal_pinvoke_cleanup(Vector4_t4282066567_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct Vector4_t4282066567;
struct Vector4_t4282066567_marshaled_com;

extern "C" void Vector4_t4282066567_marshal_com(const Vector4_t4282066567& unmarshaled, Vector4_t4282066567_marshaled_com& marshaled);
extern "C" void Vector4_t4282066567_marshal_com_back(const Vector4_t4282066567_marshaled_com& marshaled, Vector4_t4282066567& unmarshaled);
extern "C" void Vector4_t4282066567_marshal_com_cleanup(Vector4_t4282066567_marshaled_com& marshaled);
