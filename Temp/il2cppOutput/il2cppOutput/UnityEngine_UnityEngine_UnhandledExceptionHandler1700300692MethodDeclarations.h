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

// System.Object
struct Il2CppObject;
// System.UnhandledExceptionEventArgs
struct UnhandledExceptionEventArgs_t3134093121;
// System.String
struct String_t;
// System.Exception
struct Exception_t3991598821;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_UnhandledExceptionEventArgs3134093121.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Exception3991598821.h"

// System.Void UnityEngine.UnhandledExceptionHandler::RegisterUECatcher()
extern "C"  void UnhandledExceptionHandler_RegisterUECatcher_m143130254 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UnhandledExceptionHandler::HandleUnhandledException(System.Object,System.UnhandledExceptionEventArgs)
extern "C"  void UnhandledExceptionHandler_HandleUnhandledException_m4033241923 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___sender0, UnhandledExceptionEventArgs_t3134093121 * ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UnhandledExceptionHandler::PrintException(System.String,System.Exception)
extern "C"  void UnhandledExceptionHandler_PrintException_m3142367935 (Il2CppObject * __this /* static, unused */, String_t* ___title0, Exception_t3991598821 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UnhandledExceptionHandler::NativeUnhandledExceptionHandler()
extern "C"  void UnhandledExceptionHandler_NativeUnhandledExceptionHandler_m1608070048 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
