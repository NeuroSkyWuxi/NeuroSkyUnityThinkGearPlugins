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

// System.UnauthorizedAccessException
struct UnauthorizedAccessException_t2285874189;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2185721892;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2185721892.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon2761351129.h"

// System.Void System.UnauthorizedAccessException::.ctor()
extern "C"  void UnauthorizedAccessException__ctor_m1360158714 (UnauthorizedAccessException_t2285874189 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnauthorizedAccessException::.ctor(System.String)
extern "C"  void UnauthorizedAccessException__ctor_m855147848 (UnauthorizedAccessException_t2285874189 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnauthorizedAccessException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void UnauthorizedAccessException__ctor_m415626811 (UnauthorizedAccessException_t2285874189 * __this, SerializationInfo_t2185721892 * ___info0, StreamingContext_t2761351129  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
