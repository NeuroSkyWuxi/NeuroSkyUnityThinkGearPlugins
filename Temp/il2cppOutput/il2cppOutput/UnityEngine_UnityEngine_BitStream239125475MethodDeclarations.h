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

// UnityEngine.BitStream
struct BitStream_t239125475;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Quaternion1553702882.h"
#include "UnityEngine_UnityEngine_BitStream239125475.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_NetworkViewID3400394436.h"
#include "UnityEngine_UnityEngine_NetworkPlayer3231273765.h"
#include "mscorlib_System_String7231557.h"

// System.Void UnityEngine.BitStream::.ctor()
extern "C"  void BitStream__ctor_m922403980 (BitStream_t239125475 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::Serializeb(System.Int32&)
extern "C"  void BitStream_Serializeb_m1472011233 (BitStream_t239125475 * __this, int32_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::Serializec(System.Char&)
extern "C"  void BitStream_Serializec_m1377214154 (BitStream_t239125475 * __this, Il2CppChar* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::Serializes(System.Int16&)
extern "C"  void BitStream_Serializes_m1382809078 (BitStream_t239125475 * __this, int16_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::Serializei(System.Int32&)
extern "C"  void BitStream_Serializei_m2193239290 (BitStream_t239125475 * __this, int32_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::Serializef(System.Single&,System.Single)
extern "C"  void BitStream_Serializef_m145870244 (BitStream_t239125475 * __this, float* ___value0, float ___maximumDelta1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::Serializeq(UnityEngine.Quaternion&,System.Single)
extern "C"  void BitStream_Serializeq_m2989370589 (BitStream_t239125475 * __this, Quaternion_t1553702882 * ___value0, float ___maximumDelta1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::INTERNAL_CALL_Serializeq(UnityEngine.BitStream,UnityEngine.Quaternion&,System.Single)
extern "C"  void BitStream_INTERNAL_CALL_Serializeq_m999142740 (Il2CppObject * __this /* static, unused */, BitStream_t239125475 * ___self0, Quaternion_t1553702882 * ___value1, float ___maximumDelta2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::Serializev(UnityEngine.Vector3&,System.Single)
extern "C"  void BitStream_Serializev_m2820325190 (BitStream_t239125475 * __this, Vector3_t4282066566 * ___value0, float ___maximumDelta1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::INTERNAL_CALL_Serializev(UnityEngine.BitStream,UnityEngine.Vector3&,System.Single)
extern "C"  void BitStream_INTERNAL_CALL_Serializev_m2004861039 (Il2CppObject * __this /* static, unused */, BitStream_t239125475 * ___self0, Vector3_t4282066566 * ___value1, float ___maximumDelta2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::Serializen(UnityEngine.NetworkViewID&)
extern "C"  void BitStream_Serializen_m3655149335 (BitStream_t239125475 * __this, NetworkViewID_t3400394436 * ___viewID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::INTERNAL_CALL_Serializen(UnityEngine.BitStream,UnityEngine.NetworkViewID&)
extern "C"  void BitStream_INTERNAL_CALL_Serializen_m4031551296 (Il2CppObject * __this /* static, unused */, BitStream_t239125475 * ___self0, NetworkViewID_t3400394436 * ___viewID1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::Serialize(System.Boolean&)
extern "C"  void BitStream_Serialize_m2001881067 (BitStream_t239125475 * __this, bool* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::Serialize(System.Char&)
extern "C"  void BitStream_Serialize_m2728753561 (BitStream_t239125475 * __this, Il2CppChar* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::Serialize(System.Int16&)
extern "C"  void BitStream_Serialize_m4204437271 (BitStream_t239125475 * __this, int16_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::Serialize(System.Int32&)
extern "C"  void BitStream_Serialize_m4204493009 (BitStream_t239125475 * __this, int32_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::Serialize(System.Single&)
extern "C"  void BitStream_Serialize_m1473984011 (BitStream_t239125475 * __this, float* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::Serialize(System.Single&,System.Single)
extern "C"  void BitStream_Serialize_m518836656 (BitStream_t239125475 * __this, float* ___value0, float ___maxDelta1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::Serialize(UnityEngine.Quaternion&)
extern "C"  void BitStream_Serialize_m4132505111 (BitStream_t239125475 * __this, Quaternion_t1553702882 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::Serialize(UnityEngine.Quaternion&,System.Single)
extern "C"  void BitStream_Serialize_m1228905660 (BitStream_t239125475 * __this, Quaternion_t1553702882 * ___value0, float ___maxDelta1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::Serialize(UnityEngine.Vector3&)
extern "C"  void BitStream_Serialize_m981417501 (BitStream_t239125475 * __this, Vector3_t4282066566 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::Serialize(UnityEngine.Vector3&,System.Single)
extern "C"  void BitStream_Serialize_m3209712194 (BitStream_t239125475 * __this, Vector3_t4282066566 * ___value0, float ___maxDelta1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::Serialize(UnityEngine.NetworkPlayer&)
extern "C"  void BitStream_Serialize_m4247024188 (BitStream_t239125475 * __this, NetworkPlayer_t3231273765 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::Serialize(UnityEngine.NetworkViewID&)
extern "C"  void BitStream_Serialize_m3563231771 (BitStream_t239125475 * __this, NetworkViewID_t3400394436 * ___viewID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.BitStream::get_isReading()
extern "C"  bool BitStream_get_isReading_m3929869641 (BitStream_t239125475 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.BitStream::get_isWriting()
extern "C"  bool BitStream_get_isWriting_m3632391065 (BitStream_t239125475 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::Serialize(System.String&)
extern "C"  void BitStream_Serialize_m2763015060 (BitStream_t239125475 * __this, String_t** ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
