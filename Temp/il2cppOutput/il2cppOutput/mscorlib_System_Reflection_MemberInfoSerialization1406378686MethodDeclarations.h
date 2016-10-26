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

// System.Reflection.MemberInfoSerializationHolder
struct MemberInfoSerializationHolder_t1406378686;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2185721892;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t3339007067;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2185721892.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon2761351129.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Type2863145774.h"
#include "mscorlib_System_Reflection_MemberTypes2305219977.h"

// System.Void System.Reflection.MemberInfoSerializationHolder::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void MemberInfoSerializationHolder__ctor_m939139269 (MemberInfoSerializationHolder_t1406378686 * __this, SerializationInfo_t2185721892 * ___info0, StreamingContext_t2761351129  ___ctx1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.MemberInfoSerializationHolder::Serialize(System.Runtime.Serialization.SerializationInfo,System.String,System.Type,System.String,System.Reflection.MemberTypes)
extern "C"  void MemberInfoSerializationHolder_Serialize_m1332311411 (Il2CppObject * __this /* static, unused */, SerializationInfo_t2185721892 * ___info0, String_t* ___name1, Type_t * ___klass2, String_t* ___signature3, int32_t ___type4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.MemberInfoSerializationHolder::Serialize(System.Runtime.Serialization.SerializationInfo,System.String,System.Type,System.String,System.Reflection.MemberTypes,System.Type[])
extern "C"  void MemberInfoSerializationHolder_Serialize_m2526201284 (Il2CppObject * __this /* static, unused */, SerializationInfo_t2185721892 * ___info0, String_t* ___name1, Type_t * ___klass2, String_t* ___signature3, int32_t ___type4, TypeU5BU5D_t3339007067* ___genericArguments5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.MemberInfoSerializationHolder::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void MemberInfoSerializationHolder_GetObjectData_m3301233442 (MemberInfoSerializationHolder_t1406378686 * __this, SerializationInfo_t2185721892 * ___info0, StreamingContext_t2761351129  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.MemberInfoSerializationHolder::GetRealObject(System.Runtime.Serialization.StreamingContext)
extern "C"  Il2CppObject * MemberInfoSerializationHolder_GetRealObject_m2979973448 (MemberInfoSerializationHolder_t1406378686 * __this, StreamingContext_t2761351129  ___context0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
