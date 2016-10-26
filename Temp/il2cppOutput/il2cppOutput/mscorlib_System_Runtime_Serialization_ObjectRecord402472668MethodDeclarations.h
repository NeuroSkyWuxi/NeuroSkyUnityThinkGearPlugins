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

// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t402472668;
// System.Runtime.Serialization.ObjectManager
struct ObjectManager_t2228689236;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Object
struct Il2CppObject;
// System.Int32[]
struct Int32U5BU5D_t3230847821;
// System.String
struct String_t;
// System.Runtime.Serialization.BaseFixupRecord
struct BaseFixupRecord_t293418230;
// System.Runtime.Serialization.ISurrogateSelector
struct ISurrogateSelector_t2300150170;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_ObjectManage2228689236.h"
#include "mscorlib_System_Reflection_MemberInfo3995515898.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Runtime_Serialization_BaseFixupReco293418230.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon2761351129.h"

// System.Void System.Runtime.Serialization.ObjectRecord::.ctor()
extern "C"  void ObjectRecord__ctor_m3259851313 (ObjectRecord_t402472668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectRecord::SetMemberValue(System.Runtime.Serialization.ObjectManager,System.Reflection.MemberInfo,System.Object)
extern "C"  void ObjectRecord_SetMemberValue_m4010306395 (ObjectRecord_t402472668 * __this, ObjectManager_t2228689236 * ___manager0, MemberInfo_t * ___member1, Il2CppObject * ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectRecord::SetArrayValue(System.Runtime.Serialization.ObjectManager,System.Object,System.Int32[])
extern "C"  void ObjectRecord_SetArrayValue_m2737762809 (ObjectRecord_t402472668 * __this, ObjectManager_t2228689236 * ___manager0, Il2CppObject * ___value1, Int32U5BU5D_t3230847821* ___indices2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectRecord::SetMemberValue(System.Runtime.Serialization.ObjectManager,System.String,System.Object)
extern "C"  void ObjectRecord_SetMemberValue_m2579656503 (ObjectRecord_t402472668 * __this, ObjectManager_t2228689236 * ___manager0, String_t* ___memberName1, Il2CppObject * ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.ObjectRecord::get_IsInstanceReady()
extern "C"  bool ObjectRecord_get_IsInstanceReady_m760710444 (ObjectRecord_t402472668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.ObjectRecord::get_IsUnsolvedObjectReference()
extern "C"  bool ObjectRecord_get_IsUnsolvedObjectReference_m201102828 (ObjectRecord_t402472668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.ObjectRecord::get_IsRegistered()
extern "C"  bool ObjectRecord_get_IsRegistered_m3870447238 (ObjectRecord_t402472668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.ObjectRecord::DoFixups(System.Boolean,System.Runtime.Serialization.ObjectManager,System.Boolean)
extern "C"  bool ObjectRecord_DoFixups_m2556266664 (ObjectRecord_t402472668 * __this, bool ___asContainer0, ObjectManager_t2228689236 * ___manager1, bool ___strict2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectRecord::RemoveFixup(System.Runtime.Serialization.BaseFixupRecord,System.Boolean)
extern "C"  void ObjectRecord_RemoveFixup_m716979711 (ObjectRecord_t402472668 * __this, BaseFixupRecord_t293418230 * ___fixupToRemove0, bool ___asContainer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectRecord::UnchainFixup(System.Runtime.Serialization.BaseFixupRecord,System.Runtime.Serialization.BaseFixupRecord,System.Boolean)
extern "C"  void ObjectRecord_UnchainFixup_m3906372306 (ObjectRecord_t402472668 * __this, BaseFixupRecord_t293418230 * ___fixup0, BaseFixupRecord_t293418230 * ___prevFixup1, bool ___asContainer2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectRecord::ChainFixup(System.Runtime.Serialization.BaseFixupRecord,System.Boolean)
extern "C"  void ObjectRecord_ChainFixup_m2539942872 (ObjectRecord_t402472668 * __this, BaseFixupRecord_t293418230 * ___fixup0, bool ___asContainer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.ObjectRecord::LoadData(System.Runtime.Serialization.ObjectManager,System.Runtime.Serialization.ISurrogateSelector,System.Runtime.Serialization.StreamingContext)
extern "C"  bool ObjectRecord_LoadData_m3154866397 (ObjectRecord_t402472668 * __this, ObjectManager_t2228689236 * ___manager0, Il2CppObject * ___selector1, StreamingContext_t2761351129  ___context2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.ObjectRecord::get_HasPendingFixups()
extern "C"  bool ObjectRecord_get_HasPendingFixups_m2308927162 (ObjectRecord_t402472668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
