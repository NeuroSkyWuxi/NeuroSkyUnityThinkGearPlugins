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

// System.Reflection.TargetInvocationException
struct TargetInvocationException_t3880899288;
// System.Exception
struct Exception_t3991598821;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2185721892;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Exception3991598821.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2185721892.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon2761351129.h"

// System.Void System.Reflection.TargetInvocationException::.ctor(System.Exception)
extern "C"  void TargetInvocationException__ctor_m2876037082 (TargetInvocationException_t3880899288 * __this, Exception_t3991598821 * ___inner0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.TargetInvocationException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void TargetInvocationException__ctor_m706824555 (TargetInvocationException_t3880899288 * __this, SerializationInfo_t2185721892 * ___info0, StreamingContext_t2761351129  ___sc1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
