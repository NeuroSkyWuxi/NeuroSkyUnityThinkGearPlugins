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

// UnityEngine.Logger
struct Logger_t2997509588;
// UnityEngine.ILogHandler
struct ILogHandler_t2265139045;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// UnityEngine.Object
struct Object_t3071478659;
// System.Object[]
struct ObjectU5BU5D_t1108656482;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_LogType4286006228.h"
#include "mscorlib_System_Object4170816371.h"
#include "UnityEngine_UnityEngine_Object3071478659.h"
#include "mscorlib_System_String7231557.h"

// System.Void UnityEngine.Logger::.ctor(UnityEngine.ILogHandler)
extern "C"  void Logger__ctor_m654679389 (Logger_t2997509588 * __this, Il2CppObject * ___logHandler0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ILogHandler UnityEngine.Logger::get_logHandler()
extern "C"  Il2CppObject * Logger_get_logHandler_m2576399569 (Logger_t2997509588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Logger::set_logHandler(UnityEngine.ILogHandler)
extern "C"  void Logger_set_logHandler_m2661029584 (Logger_t2997509588 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Logger::get_logEnabled()
extern "C"  bool Logger_get_logEnabled_m3803347955 (Logger_t2997509588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Logger::set_logEnabled(System.Boolean)
extern "C"  void Logger_set_logEnabled_m1919624760 (Logger_t2997509588 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.LogType UnityEngine.Logger::get_filterLogType()
extern "C"  int32_t Logger_get_filterLogType_m1512373196 (Logger_t2997509588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Logger::set_filterLogType(UnityEngine.LogType)
extern "C"  void Logger_set_filterLogType_m3244716167 (Logger_t2997509588 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Logger::IsLogTypeAllowed(UnityEngine.LogType)
extern "C"  bool Logger_IsLogTypeAllowed_m3362907658 (Logger_t2997509588 * __this, int32_t ___logType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Logger::GetString(System.Object)
extern "C"  String_t* Logger_GetString_m3033796341 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Logger::Log(UnityEngine.LogType,System.Object)
extern "C"  void Logger_Log_m3875808634 (Logger_t2997509588 * __this, int32_t ___logType0, Il2CppObject * ___message1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Logger::LogFormat(UnityEngine.LogType,UnityEngine.Object,System.String,System.Object[])
extern "C"  void Logger_LogFormat_m4050017187 (Logger_t2997509588 * __this, int32_t ___logType0, Object_t3071478659 * ___context1, String_t* ___format2, ObjectU5BU5D_t1108656482* ___args3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
