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

// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2185721892;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.IFormatProvider
struct IFormatProvider_t192740775;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTimeOffset3884714306.h"
#include "mscorlib_System_DateTime4283661327.h"
#include "mscorlib_System_TimeSpan413522987.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2185721892.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon2761351129.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_String7231557.h"

// System.Void System.DateTimeOffset::.ctor(System.DateTime)
extern "C"  void DateTimeOffset__ctor_m206991153 (DateTimeOffset_t3884714306 * __this, DateTime_t4283661327  ___dateTime0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTimeOffset::.ctor(System.DateTime,System.TimeSpan)
extern "C"  void DateTimeOffset__ctor_m2612619655 (DateTimeOffset_t3884714306 * __this, DateTime_t4283661327  ___dateTime0, TimeSpan_t413522987  ___offset1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTimeOffset::.ctor(System.Int64,System.TimeSpan)
extern "C"  void DateTimeOffset__ctor_m2468003023 (DateTimeOffset_t3884714306 * __this, int64_t ___ticks0, TimeSpan_t413522987  ___offset1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTimeOffset::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void DateTimeOffset__ctor_m846097640 (DateTimeOffset_t3884714306 * __this, SerializationInfo_t2185721892 * ___info0, StreamingContext_t2761351129  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTimeOffset::.cctor()
extern "C"  void DateTimeOffset__cctor_m2485435494 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTimeOffset::System.IComparable.CompareTo(System.Object)
extern "C"  int32_t DateTimeOffset_System_IComparable_CompareTo_m1459743069 (DateTimeOffset_t3884714306 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTimeOffset::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void DateTimeOffset_System_Runtime_Serialization_ISerializable_GetObjectData_m2682194308 (DateTimeOffset_t3884714306 * __this, SerializationInfo_t2185721892 * ___info0, StreamingContext_t2761351129  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTimeOffset::System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(System.Object)
extern "C"  void DateTimeOffset_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_m3161484655 (DateTimeOffset_t3884714306 * __this, Il2CppObject * ___sender0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTimeOffset::CompareTo(System.DateTimeOffset)
extern "C"  int32_t DateTimeOffset_CompareTo_m1122350244 (DateTimeOffset_t3884714306 * __this, DateTimeOffset_t3884714306  ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTimeOffset::Equals(System.DateTimeOffset)
extern "C"  bool DateTimeOffset_Equals_m4108087019 (DateTimeOffset_t3884714306 * __this, DateTimeOffset_t3884714306  ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTimeOffset::Equals(System.Object)
extern "C"  bool DateTimeOffset_Equals_m1431331290 (DateTimeOffset_t3884714306 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTimeOffset::GetHashCode()
extern "C"  int32_t DateTimeOffset_GetHashCode_m1972583858 (DateTimeOffset_t3884714306 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.DateTimeOffset::ToString()
extern "C"  String_t* DateTimeOffset_ToString_m983707174 (DateTimeOffset_t3884714306 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.DateTimeOffset::ToString(System.String,System.IFormatProvider)
extern "C"  String_t* DateTimeOffset_ToString_m4001156824 (DateTimeOffset_t3884714306 * __this, String_t* ___format0, Il2CppObject * ___formatProvider1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTimeOffset::get_DateTime()
extern "C"  DateTime_t4283661327  DateTimeOffset_get_DateTime_m2501837032 (DateTimeOffset_t3884714306 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.DateTimeOffset::get_Offset()
extern "C"  TimeSpan_t413522987  DateTimeOffset_get_Offset_m3938299132 (DateTimeOffset_t3884714306 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTimeOffset::get_UtcDateTime()
extern "C"  DateTime_t4283661327  DateTimeOffset_get_UtcDateTime_m2831969300 (DateTimeOffset_t3884714306 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
