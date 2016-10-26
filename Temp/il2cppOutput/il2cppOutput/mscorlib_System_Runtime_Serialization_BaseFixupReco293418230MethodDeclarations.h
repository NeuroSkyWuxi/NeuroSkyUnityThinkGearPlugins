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

// System.Runtime.Serialization.BaseFixupRecord
struct BaseFixupRecord_t293418230;
// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t402472668;
// System.Runtime.Serialization.ObjectManager
struct ObjectManager_t2228689236;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_ObjectRecord402472668.h"
#include "mscorlib_System_Runtime_Serialization_ObjectManage2228689236.h"

// System.Void System.Runtime.Serialization.BaseFixupRecord::.ctor(System.Runtime.Serialization.ObjectRecord,System.Runtime.Serialization.ObjectRecord)
extern "C"  void BaseFixupRecord__ctor_m1604080483 (BaseFixupRecord_t293418230 * __this, ObjectRecord_t402472668 * ___objectToBeFixed0, ObjectRecord_t402472668 * ___objectRequired1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.BaseFixupRecord::DoFixup(System.Runtime.Serialization.ObjectManager,System.Boolean)
extern "C"  bool BaseFixupRecord_DoFixup_m3820060226 (BaseFixupRecord_t293418230 * __this, ObjectManager_t2228689236 * ___manager0, bool ___strict1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
