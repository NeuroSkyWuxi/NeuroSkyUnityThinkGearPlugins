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

// System.DelegateSerializationHolder
struct DelegateSerializationHolder_t2093474893;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2185721892;
// System.Delegate
struct Delegate_t3310234105;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2185721892.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon2761351129.h"
#include "mscorlib_System_Delegate3310234105.h"

// System.Void System.DelegateSerializationHolder::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void DelegateSerializationHolder__ctor_m3368674811 (DelegateSerializationHolder_t2093474893 * __this, SerializationInfo_t2185721892 * ___info0, StreamingContext_t2761351129  ___ctx1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DelegateSerializationHolder::GetDelegateData(System.Delegate,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void DelegateSerializationHolder_GetDelegateData_m3517598358 (Il2CppObject * __this /* static, unused */, Delegate_t3310234105 * ___instance0, SerializationInfo_t2185721892 * ___info1, StreamingContext_t2761351129  ___ctx2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DelegateSerializationHolder::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void DelegateSerializationHolder_GetObjectData_m107938392 (DelegateSerializationHolder_t2093474893 * __this, SerializationInfo_t2185721892 * ___info0, StreamingContext_t2761351129  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.DelegateSerializationHolder::GetRealObject(System.Runtime.Serialization.StreamingContext)
extern "C"  Il2CppObject * DelegateSerializationHolder_GetRealObject_m296541084 (DelegateSerializationHolder_t2093474893 * __this, StreamingContext_t2761351129  ___context0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
