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

// System.Byte[]
struct ByteU5BU5D_t4260760469;
// System.String
struct String_t;
// System.Text.Encoding
struct Encoding_t2012439129;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Text_Encoding2012439129.h"

// System.Void UnityEngine.WWWTranscoder::.cctor()
extern "C"  void WWWTranscoder__cctor_m1486747496 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] UnityEngine.WWWTranscoder::Byte2Hex(System.Byte,System.Byte[])
extern "C"  ByteU5BU5D_t4260760469* WWWTranscoder_Byte2Hex_m2414999496 (Il2CppObject * __this /* static, unused */, uint8_t ___b0, ByteU5BU5D_t4260760469* ___hexChars1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.WWWTranscoder::URLEncode(System.String,System.Text.Encoding)
extern "C"  String_t* WWWTranscoder_URLEncode_m3301913818 (Il2CppObject * __this /* static, unused */, String_t* ___toEncode0, Encoding_t2012439129 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] UnityEngine.WWWTranscoder::URLEncode(System.Byte[])
extern "C"  ByteU5BU5D_t4260760469* WWWTranscoder_URLEncode_m4039667511 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t4260760469* ___toEncode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.WWWTranscoder::QPEncode(System.String,System.Text.Encoding)
extern "C"  String_t* WWWTranscoder_QPEncode_m1021207296 (Il2CppObject * __this /* static, unused */, String_t* ___toEncode0, Encoding_t2012439129 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] UnityEngine.WWWTranscoder::Encode(System.Byte[],System.Byte,System.Byte,System.Byte[],System.Boolean)
extern "C"  ByteU5BU5D_t4260760469* WWWTranscoder_Encode_m2677436946 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t4260760469* ___input0, uint8_t ___escapeChar1, uint8_t ___space2, ByteU5BU5D_t4260760469* ___forbidden3, bool ___uppercase4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.WWWTranscoder::ByteArrayContains(System.Byte[],System.Byte)
extern "C"  bool WWWTranscoder_ByteArrayContains_m3244919989 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t4260760469* ___array0, uint8_t ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.WWWTranscoder::SevenBitClean(System.String,System.Text.Encoding)
extern "C"  bool WWWTranscoder_SevenBitClean_m1805125217 (Il2CppObject * __this /* static, unused */, String_t* ___s0, Encoding_t2012439129 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.WWWTranscoder::SevenBitClean(System.Byte[])
extern "C"  bool WWWTranscoder_SevenBitClean_m945043319 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t4260760469* ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
