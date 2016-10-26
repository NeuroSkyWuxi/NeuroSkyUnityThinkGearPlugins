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

// System.Runtime.Serialization.DelayedFixupRecord
struct DelayedFixupRecord_t4036501323;
// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t402472668;
// System.String
struct String_t;
// System.Runtime.Serialization.ObjectManager
struct ObjectManager_t2228689236;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_ObjectRecord402472668.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Runtime_Serialization_ObjectManage2228689236.h"

// System.Void System.Runtime.Serialization.DelayedFixupRecord::.ctor(System.Runtime.Serialization.ObjectRecord,System.String,System.Runtime.Serialization.ObjectRecord)
extern "C"  void DelayedFixupRecord__ctor_m4059832882 (DelayedFixupRecord_t4036501323 * __this, ObjectRecord_t402472668 * ___objectToBeFixed0, String_t* ___memberName1, ObjectRecord_t402472668 * ___objectRequired2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.DelayedFixupRecord::FixupImpl(System.Runtime.Serialization.ObjectManager)
extern "C"  void DelayedFixupRecord_FixupImpl_m2011618677 (DelayedFixupRecord_t4036501323 * __this, ObjectManager_t2228689236 * ___manager0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
