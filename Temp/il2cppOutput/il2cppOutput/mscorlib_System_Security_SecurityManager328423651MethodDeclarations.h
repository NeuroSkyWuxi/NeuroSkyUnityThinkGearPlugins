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

// System.Security.PermissionSet
struct PermissionSet_t1199249641;
// System.Byte[]
struct ByteU5BU5D_t4260760469;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr4010401971.h"

// System.Void System.Security.SecurityManager::.cctor()
extern "C"  void SecurityManager__cctor_m3992604439 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityManager::get_SecurityEnabled()
extern "C"  bool SecurityManager_get_SecurityEnabled_m2857115566 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.SecurityManager::Decode(System.IntPtr,System.Int32)
extern "C"  PermissionSet_t1199249641 * SecurityManager_Decode_m1966008144 (Il2CppObject * __this /* static, unused */, IntPtr_t ___permissions0, int32_t ___length1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.SecurityManager::Decode(System.Byte[])
extern "C"  PermissionSet_t1199249641 * SecurityManager_Decode_m958562396 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t4260760469* ___encodedPermissions0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
