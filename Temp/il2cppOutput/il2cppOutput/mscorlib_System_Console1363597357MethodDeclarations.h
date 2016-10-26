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

// System.Text.Encoding
struct Encoding_t2012439129;
// System.IO.TextWriter
struct TextWriter_t2304124208;
// System.IO.Stream
struct Stream_t1561764144;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Text_Encoding2012439129.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_IO_FileAccess1610034992.h"

// System.Void System.Console::.cctor()
extern "C"  void Console__cctor_m3994882451 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Console::SetEncodings(System.Text.Encoding,System.Text.Encoding)
extern "C"  void Console_SetEncodings_m3783235582 (Il2CppObject * __this /* static, unused */, Encoding_t2012439129 * ___inputEncoding0, Encoding_t2012439129 * ___outputEncoding1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.TextWriter System.Console::get_Error()
extern "C"  TextWriter_t2304124208 * Console_get_Error_m3008907509 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Console::Open(System.IntPtr,System.IO.FileAccess,System.Int32)
extern "C"  Stream_t1561764144 * Console_Open_m1728401432 (Il2CppObject * __this /* static, unused */, IntPtr_t ___handle0, int32_t ___access1, int32_t ___bufferSize2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Console::OpenStandardError(System.Int32)
extern "C"  Stream_t1561764144 * Console_OpenStandardError_m1760848776 (Il2CppObject * __this /* static, unused */, int32_t ___bufferSize0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Console::OpenStandardInput(System.Int32)
extern "C"  Stream_t1561764144 * Console_OpenStandardInput_m3911497162 (Il2CppObject * __this /* static, unused */, int32_t ___bufferSize0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Console::OpenStandardOutput(System.Int32)
extern "C"  Stream_t1561764144 * Console_OpenStandardOutput_m51663653 (Il2CppObject * __this /* static, unused */, int32_t ___bufferSize0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
