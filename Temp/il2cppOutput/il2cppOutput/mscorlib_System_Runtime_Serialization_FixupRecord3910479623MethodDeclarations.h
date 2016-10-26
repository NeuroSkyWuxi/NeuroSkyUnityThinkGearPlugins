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

// System.Runtime.Serialization.FixupRecord
struct FixupRecord_t3910479623;
// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t402472668;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Runtime.Serialization.ObjectManager
struct ObjectManager_t2228689236;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_ObjectRecord402472668.h"
#include "mscorlib_System_Reflection_MemberInfo3995515898.h"
#include "mscorlib_System_Runtime_Serialization_ObjectManage2228689236.h"

// System.Void System.Runtime.Serialization.FixupRecord::.ctor(System.Runtime.Serialization.ObjectRecord,System.Reflection.MemberInfo,System.Runtime.Serialization.ObjectRecord)
extern "C"  void FixupRecord__ctor_m118269336 (FixupRecord_t3910479623 * __this, ObjectRecord_t402472668 * ___objectToBeFixed0, MemberInfo_t * ___member1, ObjectRecord_t402472668 * ___objectRequired2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.FixupRecord::FixupImpl(System.Runtime.Serialization.ObjectManager)
extern "C"  void FixupRecord_FixupImpl_m200950775 (FixupRecord_t3910479623 * __this, ObjectManager_t2228689236 * ___manager0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
