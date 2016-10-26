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

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>
struct DefaultComparer_t2332490973;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTimeOffset3884714306.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::.ctor()
extern "C"  void DefaultComparer__ctor_m2725721579_gshared (DefaultComparer_t2332490973 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m2725721579(__this, method) ((  void (*) (DefaultComparer_t2332490973 *, const MethodInfo*))DefaultComparer__ctor_m2725721579_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::GetHashCode(T)
extern "C"  int32_t DefaultComparer_GetHashCode_m2221600864_gshared (DefaultComparer_t2332490973 * __this, DateTimeOffset_t3884714306  ___obj0, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m2221600864(__this, ___obj0, method) ((  int32_t (*) (DefaultComparer_t2332490973 *, DateTimeOffset_t3884714306 , const MethodInfo*))DefaultComparer_GetHashCode_m2221600864_gshared)(__this, ___obj0, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::Equals(T,T)
extern "C"  bool DefaultComparer_Equals_m32601532_gshared (DefaultComparer_t2332490973 * __this, DateTimeOffset_t3884714306  ___x0, DateTimeOffset_t3884714306  ___y1, const MethodInfo* method);
#define DefaultComparer_Equals_m32601532(__this, ___x0, ___y1, method) ((  bool (*) (DefaultComparer_t2332490973 *, DateTimeOffset_t3884714306 , DateTimeOffset_t3884714306 , const MethodInfo*))DefaultComparer_Equals_m32601532_gshared)(__this, ___x0, ___y1, method)
