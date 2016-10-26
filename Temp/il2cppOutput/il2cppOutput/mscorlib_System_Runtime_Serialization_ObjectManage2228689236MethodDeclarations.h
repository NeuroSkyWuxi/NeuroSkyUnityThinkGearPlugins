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

// System.Runtime.Serialization.ObjectManager
struct ObjectManager_t2228689236;
// System.Runtime.Serialization.ISurrogateSelector
struct ISurrogateSelector_t2300150170;
// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t402472668;
// System.Object
struct Il2CppObject;
// System.Runtime.Serialization.BaseFixupRecord
struct BaseFixupRecord_t293418230;
// System.Int32[]
struct Int32U5BU5D_t3230847821;
// System.String
struct String_t;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2185721892;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon2761351129.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_Runtime_Serialization_BaseFixupReco293418230.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Reflection_MemberInfo3995515898.h"
#include "mscorlib_System_Runtime_Serialization_ObjectRecord402472668.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2185721892.h"

// System.Void System.Runtime.Serialization.ObjectManager::.ctor(System.Runtime.Serialization.ISurrogateSelector,System.Runtime.Serialization.StreamingContext)
extern "C"  void ObjectManager__ctor_m2952664102 (ObjectManager_t2228689236 * __this, Il2CppObject * ___selector0, StreamingContext_t2761351129  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectManager::DoFixups()
extern "C"  void ObjectManager_DoFixups_m109839835 (ObjectManager_t2228689236 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.ObjectRecord System.Runtime.Serialization.ObjectManager::GetObjectRecord(System.Int64)
extern "C"  ObjectRecord_t402472668 * ObjectManager_GetObjectRecord_m2090112317 (ObjectManager_t2228689236 * __this, int64_t ___objectID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Serialization.ObjectManager::GetObject(System.Int64)
extern "C"  Il2CppObject * ObjectManager_GetObject_m3336105927 (ObjectManager_t2228689236 * __this, int64_t ___objectID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectManager::RaiseDeserializationEvent()
extern "C"  void ObjectManager_RaiseDeserializationEvent_m4065308332 (ObjectManager_t2228689236 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectManager::RaiseOnDeserializingEvent(System.Object)
extern "C"  void ObjectManager_RaiseOnDeserializingEvent_m2769114934 (ObjectManager_t2228689236 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectManager::RaiseOnDeserializedEvent(System.Object)
extern "C"  void ObjectManager_RaiseOnDeserializedEvent_m3868580957 (ObjectManager_t2228689236 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectManager::AddFixup(System.Runtime.Serialization.BaseFixupRecord)
extern "C"  void ObjectManager_AddFixup_m470602911 (ObjectManager_t2228689236 * __this, BaseFixupRecord_t293418230 * ___record0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectManager::RecordArrayElementFixup(System.Int64,System.Int32,System.Int64)
extern "C"  void ObjectManager_RecordArrayElementFixup_m2718232708 (ObjectManager_t2228689236 * __this, int64_t ___arrayToBeFixed0, int32_t ___index1, int64_t ___objectRequired2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectManager::RecordArrayElementFixup(System.Int64,System.Int32[],System.Int64)
extern "C"  void ObjectManager_RecordArrayElementFixup_m1349242662 (ObjectManager_t2228689236 * __this, int64_t ___arrayToBeFixed0, Int32U5BU5D_t3230847821* ___indices1, int64_t ___objectRequired2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectManager::RecordDelayedFixup(System.Int64,System.String,System.Int64)
extern "C"  void ObjectManager_RecordDelayedFixup_m3667857086 (ObjectManager_t2228689236 * __this, int64_t ___objectToBeFixed0, String_t* ___memberName1, int64_t ___objectRequired2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectManager::RecordFixup(System.Int64,System.Reflection.MemberInfo,System.Int64)
extern "C"  void ObjectManager_RecordFixup_m542439812 (ObjectManager_t2228689236 * __this, int64_t ___objectToBeFixed0, MemberInfo_t * ___member1, int64_t ___objectRequired2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectManager::RegisterObjectInternal(System.Object,System.Runtime.Serialization.ObjectRecord)
extern "C"  void ObjectManager_RegisterObjectInternal_m1270172209 (ObjectManager_t2228689236 * __this, Il2CppObject * ___obj0, ObjectRecord_t402472668 * ___record1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectManager::RegisterObject(System.Object,System.Int64,System.Runtime.Serialization.SerializationInfo,System.Int64,System.Reflection.MemberInfo,System.Int32[])
extern "C"  void ObjectManager_RegisterObject_m2067765899 (ObjectManager_t2228689236 * __this, Il2CppObject * ___obj0, int64_t ___objectID1, SerializationInfo_t2185721892 * ___info2, int64_t ___idOfContainingObj3, MemberInfo_t * ___member4, Int32U5BU5D_t3230847821* ___arrayIndex5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
