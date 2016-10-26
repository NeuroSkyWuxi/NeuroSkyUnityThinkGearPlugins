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

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>
struct DefaultComparer_t2731437994;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime4283661327.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>::.ctor()
extern "C"  void DefaultComparer__ctor_m3105741624_gshared (DefaultComparer_t2731437994 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m3105741624(__this, method) ((  void (*) (DefaultComparer_t2731437994 *, const MethodInfo*))DefaultComparer__ctor_m3105741624_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>::GetHashCode(T)
extern "C"  int32_t DefaultComparer_GetHashCode_m3158503283_gshared (DefaultComparer_t2731437994 * __this, DateTime_t4283661327  ___obj0, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m3158503283(__this, ___obj0, method) ((  int32_t (*) (DefaultComparer_t2731437994 *, DateTime_t4283661327 , const MethodInfo*))DefaultComparer_GetHashCode_m3158503283_gshared)(__this, ___obj0, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>::Equals(T,T)
extern "C"  bool DefaultComparer_Equals_m2514350857_gshared (DefaultComparer_t2731437994 * __this, DateTime_t4283661327  ___x0, DateTime_t4283661327  ___y1, const MethodInfo* method);
#define DefaultComparer_Equals_m2514350857(__this, ___x0, ___y1, method) ((  bool (*) (DefaultComparer_t2731437994 *, DateTime_t4283661327 , DateTime_t4283661327 , const MethodInfo*))DefaultComparer_Equals_m2514350857_gshared)(__this, ___x0, ___y1, method)
