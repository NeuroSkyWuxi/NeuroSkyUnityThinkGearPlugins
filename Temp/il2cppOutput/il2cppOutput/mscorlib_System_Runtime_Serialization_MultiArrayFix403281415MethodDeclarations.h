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

// System.Runtime.Serialization.MultiArrayFixupRecord
struct MultiArrayFixupRecord_t403281415;
// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t402472668;
// System.Int32[]
struct Int32U5BU5D_t3230847821;
// System.Runtime.Serialization.ObjectManager
struct ObjectManager_t2228689236;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_ObjectRecord402472668.h"
#include "mscorlib_System_Runtime_Serialization_ObjectManage2228689236.h"

// System.Void System.Runtime.Serialization.MultiArrayFixupRecord::.ctor(System.Runtime.Serialization.ObjectRecord,System.Int32[],System.Runtime.Serialization.ObjectRecord)
extern "C"  void MultiArrayFixupRecord__ctor_m3677967923 (MultiArrayFixupRecord_t403281415 * __this, ObjectRecord_t402472668 * ___objectToBeFixed0, Int32U5BU5D_t3230847821* ___indices1, ObjectRecord_t402472668 * ___objectRequired2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.MultiArrayFixupRecord::FixupImpl(System.Runtime.Serialization.ObjectManager)
extern "C"  void MultiArrayFixupRecord_FixupImpl_m2043330103 (MultiArrayFixupRecord_t403281415 * __this, ObjectManager_t2228689236 * ___manager0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
