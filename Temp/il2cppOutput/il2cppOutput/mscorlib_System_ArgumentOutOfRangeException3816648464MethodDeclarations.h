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

// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_t3816648464;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2185721892;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2185721892.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon2761351129.h"

// System.Void System.ArgumentOutOfRangeException::.ctor()
extern "C"  void ArgumentOutOfRangeException__ctor_m410800215 (ArgumentOutOfRangeException_t3816648464 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
extern "C"  void ArgumentOutOfRangeException__ctor_m2026296331 (ArgumentOutOfRangeException_t3816648464 * __this, String_t* ___paramName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.String)
extern "C"  void ArgumentOutOfRangeException__ctor_m1193970951 (ArgumentOutOfRangeException_t3816648464 * __this, String_t* ___paramName0, String_t* ___message1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.Object,System.String)
extern "C"  void ArgumentOutOfRangeException__ctor_m3596949525 (ArgumentOutOfRangeException_t3816648464 * __this, String_t* ___paramName0, Il2CppObject * ___actualValue1, String_t* ___message2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void ArgumentOutOfRangeException__ctor_m1722319128 (ArgumentOutOfRangeException_t3816648464 * __this, SerializationInfo_t2185721892 * ___info0, StreamingContext_t2761351129  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ArgumentOutOfRangeException::get_Message()
extern "C"  String_t* ArgumentOutOfRangeException_get_Message_m873931152 (ArgumentOutOfRangeException_t3816648464 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentOutOfRangeException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void ArgumentOutOfRangeException_GetObjectData_m558051445 (ArgumentOutOfRangeException_t3816648464 * __this, SerializationInfo_t2185721892 * ___info0, StreamingContext_t2761351129  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
