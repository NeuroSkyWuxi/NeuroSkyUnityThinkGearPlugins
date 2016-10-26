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

// System.Exception
struct Exception_t3991598821;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2185721892;
// System.Text.StringBuilder
struct StringBuilder_t243639308;
// System.Reflection.MethodBase
struct MethodBase_t318515428;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2185721892.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon2761351129.h"
#include "mscorlib_System_Exception3991598821.h"
#include "mscorlib_System_Text_StringBuilder243639308.h"
#include "mscorlib_System_Reflection_MethodBase318515428.h"

// System.Void System.Exception::.ctor()
extern "C"  void Exception__ctor_m3223090658 (Exception_t3991598821 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Exception::.ctor(System.String)
extern "C"  void Exception__ctor_m3870771296 (Exception_t3991598821 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Exception::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Exception__ctor_m3602014243 (Exception_t3991598821 * __this, SerializationInfo_t2185721892 * ___info0, StreamingContext_t2761351129  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Exception::.ctor(System.String,System.Exception)
extern "C"  void Exception__ctor_m1328171222 (Exception_t3991598821 * __this, String_t* ___message0, Exception_t3991598821 * ___innerException1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Exception::get_InnerException()
extern "C"  Exception_t3991598821 * Exception_get_InnerException_m1427945535 (Exception_t3991598821 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Exception::get_HResult()
extern "C"  int32_t Exception_get_HResult_m3941496800 (Exception_t3991598821 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Exception::set_HResult(System.Int32)
extern "C"  void Exception_set_HResult_m3566571225 (Exception_t3991598821 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Exception::get_ClassName()
extern "C"  String_t* Exception_get_ClassName_m2925782135 (Exception_t3991598821 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Exception::get_Message()
extern "C"  String_t* Exception_get_Message_m1013139483 (Exception_t3991598821 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Exception::get_Source()
extern "C"  String_t* Exception_get_Source_m2795291433 (Exception_t3991598821 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Exception::get_StackTrace()
extern "C"  String_t* Exception_get_StackTrace_m382134187 (Exception_t3991598821 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Exception::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Exception_GetObjectData_m1945031808 (Exception_t3991598821 * __this, SerializationInfo_t2185721892 * ___info0, StreamingContext_t2761351129  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Exception::ToString()
extern "C"  String_t* Exception_ToString_m1076460401 (Exception_t3991598821 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Exception::GetFullNameForStackTrace(System.Text.StringBuilder,System.Reflection.MethodBase)
extern "C"  void Exception_GetFullNameForStackTrace_m130874526 (Exception_t3991598821 * __this, StringBuilder_t243639308 * ___sb0, MethodBase_t318515428 * ___mi1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Exception::GetType()
extern "C"  Type_t * Exception_GetType_m913902486 (Exception_t3991598821 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
