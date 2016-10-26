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

// System.MissingMemberException
struct MissingMemberException_t1382746819;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2185721892;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2185721892.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon2761351129.h"

// System.Void System.MissingMemberException::.ctor()
extern "C"  void MissingMemberException__ctor_m4083184326 (MissingMemberException_t1382746819 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.MissingMemberException::.ctor(System.String)
extern "C"  void MissingMemberException__ctor_m3562298876 (MissingMemberException_t1382746819 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.MissingMemberException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void MissingMemberException__ctor_m4213358343 (MissingMemberException_t1382746819 * __this, SerializationInfo_t2185721892 * ___info0, StreamingContext_t2761351129  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.MissingMemberException::.ctor(System.String,System.String)
extern "C"  void MissingMemberException__ctor_m3949157688 (MissingMemberException_t1382746819 * __this, String_t* ___className0, String_t* ___memberName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.MissingMemberException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void MissingMemberException_GetObjectData_m1444155236 (MissingMemberException_t1382746819 * __this, SerializationInfo_t2185721892 * ___info0, StreamingContext_t2761351129  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.MissingMemberException::get_Message()
extern "C"  String_t* MissingMemberException_get_Message_m388478373 (MissingMemberException_t1382746819 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
