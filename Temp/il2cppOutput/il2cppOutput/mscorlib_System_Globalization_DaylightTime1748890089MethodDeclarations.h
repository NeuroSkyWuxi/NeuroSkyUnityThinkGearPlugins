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

// System.Globalization.DaylightTime
struct DaylightTime_t1748890089;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime4283661327.h"
#include "mscorlib_System_TimeSpan413522987.h"

// System.Void System.Globalization.DaylightTime::.ctor(System.DateTime,System.DateTime,System.TimeSpan)
extern "C"  void DaylightTime__ctor_m3056331743 (DaylightTime_t1748890089 * __this, DateTime_t4283661327  ___start0, DateTime_t4283661327  ___end1, TimeSpan_t413522987  ___delta2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Globalization.DaylightTime::get_Start()
extern "C"  DateTime_t4283661327  DaylightTime_get_Start_m3918072881 (DaylightTime_t1748890089 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Globalization.DaylightTime::get_End()
extern "C"  DateTime_t4283661327  DaylightTime_get_End_m1152979434 (DaylightTime_t1748890089 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.Globalization.DaylightTime::get_Delta()
extern "C"  TimeSpan_t413522987  DaylightTime_get_Delta_m2790906475 (DaylightTime_t1748890089 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
