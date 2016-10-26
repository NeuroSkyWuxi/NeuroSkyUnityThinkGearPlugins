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

// System.Runtime.Remoting.Messaging.RemotingSurrogateSelector
struct RemotingSurrogateSelector_t1566232206;
// System.Runtime.Serialization.ISerializationSurrogate
struct ISerializationSurrogate_t132171319;
// System.Type
struct Type_t;
// System.Runtime.Serialization.ISurrogateSelector
struct ISurrogateSelector_t2300150170;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2863145774.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon2761351129.h"

// System.Void System.Runtime.Remoting.Messaging.RemotingSurrogateSelector::.ctor()
extern "C"  void RemotingSurrogateSelector__ctor_m1480647200 (RemotingSurrogateSelector_t1566232206 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.RemotingSurrogateSelector::.cctor()
extern "C"  void RemotingSurrogateSelector__cctor_m2468294029 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.ISerializationSurrogate System.Runtime.Remoting.Messaging.RemotingSurrogateSelector::GetSurrogate(System.Type,System.Runtime.Serialization.StreamingContext,System.Runtime.Serialization.ISurrogateSelector&)
extern "C"  Il2CppObject * RemotingSurrogateSelector_GetSurrogate_m2656182773 (RemotingSurrogateSelector_t1566232206 * __this, Type_t * ___type0, StreamingContext_t2761351129  ___context1, Il2CppObject ** ___ssout2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
