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

// System.Text.EncoderExceptionFallbackBuffer
struct EncoderExceptionFallbackBuffer_t820700859;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Text.EncoderExceptionFallbackBuffer::.ctor()
extern "C"  void EncoderExceptionFallbackBuffer__ctor_m2397415515 (EncoderExceptionFallbackBuffer_t820700859 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.EncoderExceptionFallbackBuffer::get_Remaining()
extern "C"  int32_t EncoderExceptionFallbackBuffer_get_Remaining_m540069098 (EncoderExceptionFallbackBuffer_t820700859 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.EncoderExceptionFallbackBuffer::Fallback(System.Char,System.Int32)
extern "C"  bool EncoderExceptionFallbackBuffer_Fallback_m3905093511 (EncoderExceptionFallbackBuffer_t820700859 * __this, Il2CppChar ___charUnknown0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.EncoderExceptionFallbackBuffer::Fallback(System.Char,System.Char,System.Int32)
extern "C"  bool EncoderExceptionFallbackBuffer_Fallback_m3413448272 (EncoderExceptionFallbackBuffer_t820700859 * __this, Il2CppChar ___charUnknownHigh0, Il2CppChar ___charUnknownLow1, int32_t ___index2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Text.EncoderExceptionFallbackBuffer::GetNextChar()
extern "C"  Il2CppChar EncoderExceptionFallbackBuffer_GetNextChar_m1461911898 (EncoderExceptionFallbackBuffer_t820700859 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
