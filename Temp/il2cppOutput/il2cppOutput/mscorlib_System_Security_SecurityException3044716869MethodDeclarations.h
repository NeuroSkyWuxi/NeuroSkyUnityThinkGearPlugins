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

// System.Security.SecurityException
struct SecurityException_t3044716869;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2185721892;
// System.Object
struct Il2CppObject;
// System.Security.IPermission
struct IPermission_t1411806254;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2185721892.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon2761351129.h"

// System.Void System.Security.SecurityException::.ctor()
extern "C"  void SecurityException__ctor_m4184458484 (SecurityException_t3044716869 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityException::.ctor(System.String)
extern "C"  void SecurityException__ctor_m1163560590 (SecurityException_t3044716869 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void SecurityException__ctor_m1779937333 (SecurityException_t3044716869 * __this, SerializationInfo_t2185721892 * ___info0, StreamingContext_t2761351129  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Security.SecurityException::get_Demanded()
extern "C"  Il2CppObject * SecurityException_get_Demanded_m370801454 (SecurityException_t3044716869 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.SecurityException::get_FirstPermissionThatFailed()
extern "C"  Il2CppObject * SecurityException_get_FirstPermissionThatFailed_m4208204342 (SecurityException_t3044716869 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.SecurityException::get_PermissionState()
extern "C"  String_t* SecurityException_get_PermissionState_m2560577038 (SecurityException_t3044716869 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Security.SecurityException::get_PermissionType()
extern "C"  Type_t * SecurityException_get_PermissionType_m2335749224 (SecurityException_t3044716869 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.SecurityException::get_GrantedSet()
extern "C"  String_t* SecurityException_get_GrantedSet_m3460059773 (SecurityException_t3044716869 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.SecurityException::get_RefusedSet()
extern "C"  String_t* SecurityException_get_RefusedSet_m4272843656 (SecurityException_t3044716869 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void SecurityException_GetObjectData_m2715021970 (SecurityException_t3044716869 * __this, SerializationInfo_t2185721892 * ___info0, StreamingContext_t2761351129  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.SecurityException::ToString()
extern "C"  String_t* SecurityException_ToString_m3022084793 (SecurityException_t3044716869 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
