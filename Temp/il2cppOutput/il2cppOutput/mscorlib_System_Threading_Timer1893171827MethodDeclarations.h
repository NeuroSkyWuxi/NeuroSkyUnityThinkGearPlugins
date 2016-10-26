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

// System.Threading.Timer
struct Timer_t1893171827;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_TimeSpan413522987.h"

// System.Void System.Threading.Timer::.cctor()
extern "C"  void Timer__cctor_m1320176523 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Timer::Change(System.TimeSpan,System.TimeSpan)
extern "C"  bool Timer_Change_m4108080222 (Timer_t1893171827 * __this, TimeSpan_t413522987  ___dueTime0, TimeSpan_t413522987  ___period1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Timer::Dispose()
extern "C"  void Timer_Dispose_m4229130271 (Timer_t1893171827 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Timer::Change(System.Int64,System.Int64,System.Boolean)
extern "C"  bool Timer_Change_m4132562187 (Timer_t1893171827 * __this, int64_t ___dueTime0, int64_t ___period1, bool ___first2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
