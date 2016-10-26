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

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>
struct DefaultComparer_t1310531096;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Guid2862754429.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::.ctor()
extern "C"  void DefaultComparer__ctor_m4213267622_gshared (DefaultComparer_t1310531096 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m4213267622(__this, method) ((  void (*) (DefaultComparer_t1310531096 *, const MethodInfo*))DefaultComparer__ctor_m4213267622_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::GetHashCode(T)
extern "C"  int32_t DefaultComparer_GetHashCode_m4200825925_gshared (DefaultComparer_t1310531096 * __this, Guid_t2862754429  ___obj0, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m4200825925(__this, ___obj0, method) ((  int32_t (*) (DefaultComparer_t1310531096 *, Guid_t2862754429 , const MethodInfo*))DefaultComparer_GetHashCode_m4200825925_gshared)(__this, ___obj0, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::Equals(T,T)
extern "C"  bool DefaultComparer_Equals_m2432212087_gshared (DefaultComparer_t1310531096 * __this, Guid_t2862754429  ___x0, Guid_t2862754429  ___y1, const MethodInfo* method);
#define DefaultComparer_Equals_m2432212087(__this, ___x0, ___y1, method) ((  bool (*) (DefaultComparer_t1310531096 *, Guid_t2862754429 , Guid_t2862754429 , const MethodInfo*))DefaultComparer_Equals_m2432212087_gshared)(__this, ___x0, ___y1, method)
