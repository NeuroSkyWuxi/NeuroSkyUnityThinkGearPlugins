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

// System.OperatingSystem
struct OperatingSystem_t1654038694;
// System.Version
struct Version_t763695022;
// System.Object
struct Il2CppObject;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2185721892;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_PlatformID785953154.h"
#include "mscorlib_System_Version763695022.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2185721892.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon2761351129.h"

// System.Void System.OperatingSystem::.ctor(System.PlatformID,System.Version)
extern "C"  void OperatingSystem__ctor_m1430692681 (OperatingSystem_t1654038694 * __this, int32_t ___platform0, Version_t763695022 * ___version1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.PlatformID System.OperatingSystem::get_Platform()
extern "C"  int32_t OperatingSystem_get_Platform_m949444901 (OperatingSystem_t1654038694 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.OperatingSystem::Clone()
extern "C"  Il2CppObject * OperatingSystem_Clone_m984082471 (OperatingSystem_t1654038694 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.OperatingSystem::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void OperatingSystem_GetObjectData_m746174751 (OperatingSystem_t1654038694 * __this, SerializationInfo_t2185721892 * ___info0, StreamingContext_t2761351129  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.OperatingSystem::ToString()
extern "C"  String_t* OperatingSystem_ToString_m3670342834 (OperatingSystem_t1654038694 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
