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

// System.Runtime.Remoting.Messaging.RemotingSurrogate
struct RemotingSurrogate_t971316111;
// System.Object
struct Il2CppObject;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2185721892;
// System.Runtime.Serialization.ISurrogateSelector
struct ISurrogateSelector_t2300150170;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2185721892.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon2761351129.h"

// System.Void System.Runtime.Remoting.Messaging.RemotingSurrogate::.ctor()
extern "C"  void RemotingSurrogate__ctor_m1724131135 (RemotingSurrogate_t971316111 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.RemotingSurrogate::SetObjectData(System.Object,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext,System.Runtime.Serialization.ISurrogateSelector)
extern "C"  Il2CppObject * RemotingSurrogate_SetObjectData_m3663110203 (RemotingSurrogate_t971316111 * __this, Il2CppObject * ___obj0, SerializationInfo_t2185721892 * ___si1, StreamingContext_t2761351129  ___sc2, Il2CppObject * ___selector3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
