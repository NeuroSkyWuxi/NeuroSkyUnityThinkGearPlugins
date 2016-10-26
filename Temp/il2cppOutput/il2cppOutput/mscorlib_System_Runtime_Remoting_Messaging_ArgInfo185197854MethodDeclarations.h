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

// System.Runtime.Remoting.Messaging.ArgInfo
struct ArgInfo_t185197854;
// System.Reflection.MethodBase
struct MethodBase_t318515428;
// System.Object[]
struct ObjectU5BU5D_t1108656482;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_MethodBase318515428.h"
#include "mscorlib_System_Runtime_Remoting_Messaging_ArgInfo4189099640.h"

// System.Void System.Runtime.Remoting.Messaging.ArgInfo::.ctor(System.Reflection.MethodBase,System.Runtime.Remoting.Messaging.ArgInfoType)
extern "C"  void ArgInfo__ctor_m2209263080 (ArgInfo_t185197854 * __this, MethodBase_t318515428 * ___method0, uint8_t ___type1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Runtime.Remoting.Messaging.ArgInfo::GetInOutArgs(System.Object[])
extern "C"  ObjectU5BU5D_t1108656482* ArgInfo_GetInOutArgs_m2515374049 (ArgInfo_t185197854 * __this, ObjectU5BU5D_t1108656482* ___args0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
