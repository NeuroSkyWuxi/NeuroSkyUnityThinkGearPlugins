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

// System.Threading.ExecutionContext
struct ExecutionContext_t1900239151;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2185721892;
// System.Security.SecurityContext
struct SecurityContext_t444694245;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Threading_ExecutionContext1900239151.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2185721892.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon2761351129.h"
#include "mscorlib_System_Security_SecurityContext444694245.h"

// System.Void System.Threading.ExecutionContext::.ctor()
extern "C"  void ExecutionContext__ctor_m3342294760 (ExecutionContext_t1900239151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ExecutionContext::.ctor(System.Threading.ExecutionContext)
extern "C"  void ExecutionContext__ctor_m881535614 (ExecutionContext_t1900239151 * __this, ExecutionContext_t1900239151 * ___ec0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ExecutionContext::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void ExecutionContext__ctor_m469890089 (ExecutionContext_t1900239151 * __this, SerializationInfo_t2185721892 * ___info0, StreamingContext_t2761351129  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.ExecutionContext System.Threading.ExecutionContext::Capture()
extern "C"  ExecutionContext_t1900239151 * ExecutionContext_Capture_m1949565907 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ExecutionContext::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void ExecutionContext_GetObjectData_m67437190 (ExecutionContext_t1900239151 * __this, SerializationInfo_t2185721892 * ___info0, StreamingContext_t2761351129  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityContext System.Threading.ExecutionContext::get_SecurityContext()
extern "C"  SecurityContext_t444694245 * ExecutionContext_get_SecurityContext_m2311120735 (ExecutionContext_t1900239151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ExecutionContext::set_SecurityContext(System.Security.SecurityContext)
extern "C"  void ExecutionContext_set_SecurityContext_m3974986970 (ExecutionContext_t1900239151 * __this, SecurityContext_t444694245 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.ExecutionContext::get_FlowSuppressed()
extern "C"  bool ExecutionContext_get_FlowSuppressed_m927554565 (ExecutionContext_t1900239151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.ExecutionContext::IsFlowSuppressed()
extern "C"  bool ExecutionContext_IsFlowSuppressed_m2941747654 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
