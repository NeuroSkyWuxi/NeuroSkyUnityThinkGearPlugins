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

// System.Text.Latin1Encoding
struct Latin1Encoding_t2319396262;
// System.Char[]
struct CharU5BU5D_t3324145743;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// System.Text.EncoderFallbackBuffer
struct EncoderFallbackBuffer_t671205824;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Text_EncoderFallbackBuffer671205824.h"

// System.Void System.Text.Latin1Encoding::.ctor()
extern "C"  void Latin1Encoding__ctor_m1980938192 (Latin1Encoding_t2319396262 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Latin1Encoding::GetByteCount(System.Char[],System.Int32,System.Int32)
extern "C"  int32_t Latin1Encoding_GetByteCount_m706721210 (Latin1Encoding_t2319396262 * __this, CharU5BU5D_t3324145743* ___chars0, int32_t ___index1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Latin1Encoding::GetByteCount(System.String)
extern "C"  int32_t Latin1Encoding_GetByteCount_m4034541857 (Latin1Encoding_t2319396262 * __this, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Latin1Encoding::GetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t Latin1Encoding_GetBytes_m4245120190 (Latin1Encoding_t2319396262 * __this, CharU5BU5D_t3324145743* ___chars0, int32_t ___charIndex1, int32_t ___charCount2, ByteU5BU5D_t4260760469* ___bytes3, int32_t ___byteIndex4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Latin1Encoding::GetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32,System.Text.EncoderFallbackBuffer&,System.Char[]&)
extern "C"  int32_t Latin1Encoding_GetBytes_m3965378137 (Latin1Encoding_t2319396262 * __this, CharU5BU5D_t3324145743* ___chars0, int32_t ___charIndex1, int32_t ___charCount2, ByteU5BU5D_t4260760469* ___bytes3, int32_t ___byteIndex4, EncoderFallbackBuffer_t671205824 ** ___buffer5, CharU5BU5D_t3324145743** ___fallback_chars6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Latin1Encoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t Latin1Encoding_GetBytes_m3819398871 (Latin1Encoding_t2319396262 * __this, String_t* ___s0, int32_t ___charIndex1, int32_t ___charCount2, ByteU5BU5D_t4260760469* ___bytes3, int32_t ___byteIndex4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Latin1Encoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32,System.Text.EncoderFallbackBuffer&,System.Char[]&)
extern "C"  int32_t Latin1Encoding_GetBytes_m2580301874 (Latin1Encoding_t2319396262 * __this, String_t* ___s0, int32_t ___charIndex1, int32_t ___charCount2, ByteU5BU5D_t4260760469* ___bytes3, int32_t ___byteIndex4, EncoderFallbackBuffer_t671205824 ** ___buffer5, CharU5BU5D_t3324145743** ___fallback_chars6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Latin1Encoding::GetCharCount(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t Latin1Encoding_GetCharCount_m3803100950 (Latin1Encoding_t2319396262 * __this, ByteU5BU5D_t4260760469* ___bytes0, int32_t ___index1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Latin1Encoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
extern "C"  int32_t Latin1Encoding_GetChars_m2290403632 (Latin1Encoding_t2319396262 * __this, ByteU5BU5D_t4260760469* ___bytes0, int32_t ___byteIndex1, int32_t ___byteCount2, CharU5BU5D_t3324145743* ___chars3, int32_t ___charIndex4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Latin1Encoding::GetMaxByteCount(System.Int32)
extern "C"  int32_t Latin1Encoding_GetMaxByteCount_m2399868668 (Latin1Encoding_t2319396262 * __this, int32_t ___charCount0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Latin1Encoding::GetMaxCharCount(System.Int32)
extern "C"  int32_t Latin1Encoding_GetMaxCharCount_m3191404014 (Latin1Encoding_t2319396262 * __this, int32_t ___byteCount0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.Latin1Encoding::GetString(System.Byte[],System.Int32,System.Int32)
extern "C"  String_t* Latin1Encoding_GetString_m1453607223 (Latin1Encoding_t2319396262 * __this, ByteU5BU5D_t4260760469* ___bytes0, int32_t ___index1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.Latin1Encoding::GetString(System.Byte[])
extern "C"  String_t* Latin1Encoding_GetString_m2574520983 (Latin1Encoding_t2319396262 * __this, ByteU5BU5D_t4260760469* ___bytes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.Latin1Encoding::get_HeaderName()
extern "C"  String_t* Latin1Encoding_get_HeaderName_m1411610136 (Latin1Encoding_t2319396262 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
