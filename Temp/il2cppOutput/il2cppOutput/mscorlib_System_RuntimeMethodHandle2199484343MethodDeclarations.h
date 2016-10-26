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

// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2185721892;
// System.Object
struct Il2CppObject;
// System.RuntimeMethodHandle
struct RuntimeMethodHandle_t2199484343;
struct RuntimeMethodHandle_t2199484343_marshaled_pinvoke;
struct RuntimeMethodHandle_t2199484343_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_RuntimeMethodHandle2199484343.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2185721892.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon2761351129.h"
#include "mscorlib_System_Object4170816371.h"

// System.Void System.RuntimeMethodHandle::.ctor(System.IntPtr)
extern "C"  void RuntimeMethodHandle__ctor_m794057668 (RuntimeMethodHandle_t2199484343 * __this, IntPtr_t ___v0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.RuntimeMethodHandle::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void RuntimeMethodHandle__ctor_m3786030033 (RuntimeMethodHandle_t2199484343 * __this, SerializationInfo_t2185721892 * ___info0, StreamingContext_t2761351129  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.RuntimeMethodHandle::get_Value()
extern "C"  IntPtr_t RuntimeMethodHandle_get_Value_m2270388129 (RuntimeMethodHandle_t2199484343 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.RuntimeMethodHandle::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void RuntimeMethodHandle_GetObjectData_m3915325998 (RuntimeMethodHandle_t2199484343 * __this, SerializationInfo_t2185721892 * ___info0, StreamingContext_t2761351129  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.RuntimeMethodHandle::Equals(System.Object)
extern "C"  bool RuntimeMethodHandle_Equals_m3425680831 (RuntimeMethodHandle_t2199484343 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.RuntimeMethodHandle::GetHashCode()
extern "C"  int32_t RuntimeMethodHandle_GetHashCode_m1771691683 (RuntimeMethodHandle_t2199484343 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct RuntimeMethodHandle_t2199484343;
struct RuntimeMethodHandle_t2199484343_marshaled_pinvoke;

extern "C" void RuntimeMethodHandle_t2199484343_marshal_pinvoke(const RuntimeMethodHandle_t2199484343& unmarshaled, RuntimeMethodHandle_t2199484343_marshaled_pinvoke& marshaled);
extern "C" void RuntimeMethodHandle_t2199484343_marshal_pinvoke_back(const RuntimeMethodHandle_t2199484343_marshaled_pinvoke& marshaled, RuntimeMethodHandle_t2199484343& unmarshaled);
extern "C" void RuntimeMethodHandle_t2199484343_marshal_pinvoke_cleanup(RuntimeMethodHandle_t2199484343_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct RuntimeMethodHandle_t2199484343;
struct RuntimeMethodHandle_t2199484343_marshaled_com;

extern "C" void RuntimeMethodHandle_t2199484343_marshal_com(const RuntimeMethodHandle_t2199484343& unmarshaled, RuntimeMethodHandle_t2199484343_marshaled_com& marshaled);
extern "C" void RuntimeMethodHandle_t2199484343_marshal_com_back(const RuntimeMethodHandle_t2199484343_marshaled_com& marshaled, RuntimeMethodHandle_t2199484343& unmarshaled);
extern "C" void RuntimeMethodHandle_t2199484343_marshal_com_cleanup(RuntimeMethodHandle_t2199484343_marshaled_com& marshaled);
