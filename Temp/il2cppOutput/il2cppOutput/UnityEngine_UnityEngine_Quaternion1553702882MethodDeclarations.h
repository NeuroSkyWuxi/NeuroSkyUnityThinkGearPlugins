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
// UnityEngine.Quaternion
struct Quaternion_t1553702882;
struct Quaternion_t1553702882_marshaled_pinvoke;
struct Quaternion_t1553702882_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Quaternion1553702882.h"
#include "mscorlib_System_Object4170816371.h"

// System.String UnityEngine.Quaternion::ToString()
extern "C"  String_t* Quaternion_ToString_m1793285860 (Quaternion_t1553702882 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Quaternion::GetHashCode()
extern "C"  int32_t Quaternion_GetHashCode_m3823258238 (Quaternion_t1553702882 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Quaternion::Equals(System.Object)
extern "C"  bool Quaternion_Equals_m3843409946 (Quaternion_t1553702882 * __this, Il2CppObject * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct Quaternion_t1553702882;
struct Quaternion_t1553702882_marshaled_pinvoke;

extern "C" void Quaternion_t1553702882_marshal_pinvoke(const Quaternion_t1553702882& unmarshaled, Quaternion_t1553702882_marshaled_pinvoke& marshaled);
extern "C" void Quaternion_t1553702882_marshal_pinvoke_back(const Quaternion_t1553702882_marshaled_pinvoke& marshaled, Quaternion_t1553702882& unmarshaled);
extern "C" void Quaternion_t1553702882_marshal_pinvoke_cleanup(Quaternion_t1553702882_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct Quaternion_t1553702882;
struct Quaternion_t1553702882_marshaled_com;

extern "C" void Quaternion_t1553702882_marshal_com(const Quaternion_t1553702882& unmarshaled, Quaternion_t1553702882_marshaled_com& marshaled);
extern "C" void Quaternion_t1553702882_marshal_com_back(const Quaternion_t1553702882_marshaled_com& marshaled, Quaternion_t1553702882& unmarshaled);
extern "C" void Quaternion_t1553702882_marshal_com_cleanup(Quaternion_t1553702882_marshaled_com& marshaled);
