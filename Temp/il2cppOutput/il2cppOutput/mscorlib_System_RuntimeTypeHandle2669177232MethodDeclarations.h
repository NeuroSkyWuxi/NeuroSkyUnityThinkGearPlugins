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
// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t2669177232;
struct RuntimeTypeHandle_t2669177232_marshaled_pinvoke;
struct RuntimeTypeHandle_t2669177232_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_RuntimeTypeHandle2669177232.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2185721892.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon2761351129.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_Object4170816371.h"

// System.Void System.RuntimeTypeHandle::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void RuntimeTypeHandle__ctor_m437060952 (RuntimeTypeHandle_t2669177232 * __this, SerializationInfo_t2185721892 * ___info0, StreamingContext_t2761351129  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.RuntimeTypeHandle::get_Value()
extern "C"  IntPtr_t RuntimeTypeHandle_get_Value_m3549598952 (RuntimeTypeHandle_t2669177232 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.RuntimeTypeHandle::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void RuntimeTypeHandle_GetObjectData_m2331997365 (RuntimeTypeHandle_t2669177232 * __this, SerializationInfo_t2185721892 * ___info0, StreamingContext_t2761351129  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.RuntimeTypeHandle::Equals(System.Object)
extern "C"  bool RuntimeTypeHandle_Equals_m3214712582 (RuntimeTypeHandle_t2669177232 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.RuntimeTypeHandle::GetHashCode()
extern "C"  int32_t RuntimeTypeHandle_GetHashCode_m3575892074 (RuntimeTypeHandle_t2669177232 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct RuntimeTypeHandle_t2669177232;
struct RuntimeTypeHandle_t2669177232_marshaled_pinvoke;

extern "C" void RuntimeTypeHandle_t2669177232_marshal_pinvoke(const RuntimeTypeHandle_t2669177232& unmarshaled, RuntimeTypeHandle_t2669177232_marshaled_pinvoke& marshaled);
extern "C" void RuntimeTypeHandle_t2669177232_marshal_pinvoke_back(const RuntimeTypeHandle_t2669177232_marshaled_pinvoke& marshaled, RuntimeTypeHandle_t2669177232& unmarshaled);
extern "C" void RuntimeTypeHandle_t2669177232_marshal_pinvoke_cleanup(RuntimeTypeHandle_t2669177232_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct RuntimeTypeHandle_t2669177232;
struct RuntimeTypeHandle_t2669177232_marshaled_com;

extern "C" void RuntimeTypeHandle_t2669177232_marshal_com(const RuntimeTypeHandle_t2669177232& unmarshaled, RuntimeTypeHandle_t2669177232_marshaled_com& marshaled);
extern "C" void RuntimeTypeHandle_t2669177232_marshal_com_back(const RuntimeTypeHandle_t2669177232_marshaled_com& marshaled, RuntimeTypeHandle_t2669177232& unmarshaled);
extern "C" void RuntimeTypeHandle_t2669177232_marshal_com_cleanup(RuntimeTypeHandle_t2669177232_marshaled_com& marshaled);
