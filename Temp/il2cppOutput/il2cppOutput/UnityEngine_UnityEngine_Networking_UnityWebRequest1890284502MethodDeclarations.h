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

// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t1890284502;
// System.String
struct String_t;
// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t4125766536;
// UnityEngine.Networking.UploadHandler
struct UploadHandler_t4062689071;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// UnityEngine.WWWForm
struct WWWForm_t461342257;
// System.Collections.Generic.List`1<UnityEngine.Networking.IMultipartFormSection>
struct List_1_t3975180852;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t827649927;
// UnityEngine.AsyncOperation
struct AsyncOperation_t3699081103;
// System.String[]
struct StringU5BU5D_t4054002952;
struct UnityWebRequest_t1890284502_marshaled_pinvoke;
struct UnityWebRequest_t1890284502_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "UnityEngine_UnityEngine_Networking_DownloadHandler4125766536.h"
#include "UnityEngine_UnityEngine_Networking_UploadHandler4062689071.h"
#include "UnityEngine_UnityEngine_AudioType794660134.h"
#include "UnityEngine_UnityEngine_Hash128346790303.h"
#include "UnityEngine_UnityEngine_WWWForm461342257.h"
#include "UnityEngine_UnityEngine_Networking_UnityWebRequest3819726735.h"
#include "UnityEngine_UnityEngine_Networking_UnityWebRequest_947498394.h"

// System.Void UnityEngine.Networking.UnityWebRequest::.ctor()
extern "C"  void UnityWebRequest__ctor_m1876705495 (UnityWebRequest_t1890284502 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.UnityWebRequest::.ctor(System.String)
extern "C"  void UnityWebRequest__ctor_m800174987 (UnityWebRequest_t1890284502 * __this, String_t* ___url0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.UnityWebRequest::.ctor(System.String,System.String)
extern "C"  void UnityWebRequest__ctor_m2883079303 (UnityWebRequest_t1890284502 * __this, String_t* ___url0, String_t* ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.UnityWebRequest::.ctor(System.String,System.String,UnityEngine.Networking.DownloadHandler,UnityEngine.Networking.UploadHandler)
extern "C"  void UnityWebRequest__ctor_m3561636576 (UnityWebRequest_t1890284502 * __this, String_t* ___url0, String_t* ___method1, DownloadHandler_t4125766536 * ___downloadHandler2, UploadHandler_t4062689071 * ___uploadHandler3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.UnityWebRequest::.cctor()
extern "C"  void UnityWebRequest__cctor_m1861199286 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequest::Get(System.String)
extern "C"  UnityWebRequest_t1890284502 * UnityWebRequest_Get_m242769177 (Il2CppObject * __this /* static, unused */, String_t* ___uri0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequest::Delete(System.String)
extern "C"  UnityWebRequest_t1890284502 * UnityWebRequest_Delete_m263716936 (Il2CppObject * __this /* static, unused */, String_t* ___uri0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequest::Head(System.String)
extern "C"  UnityWebRequest_t1890284502 * UnityWebRequest_Head_m587951091 (Il2CppObject * __this /* static, unused */, String_t* ___uri0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequest::GetTexture(System.String)
extern "C"  UnityWebRequest_t1890284502 * UnityWebRequest_GetTexture_m3181785294 (Il2CppObject * __this /* static, unused */, String_t* ___uri0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequest::GetTexture(System.String,System.Boolean)
extern "C"  UnityWebRequest_t1890284502 * UnityWebRequest_GetTexture_m1775545583 (Il2CppObject * __this /* static, unused */, String_t* ___uri0, bool ___nonReadable1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequest::GetAudioClip(System.String,UnityEngine.AudioType)
extern "C"  UnityWebRequest_t1890284502 * UnityWebRequest_GetAudioClip_m1644470838 (Il2CppObject * __this /* static, unused */, String_t* ___uri0, int32_t ___audioType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequest::GetAssetBundle(System.String)
extern "C"  UnityWebRequest_t1890284502 * UnityWebRequest_GetAssetBundle_m3001500023 (Il2CppObject * __this /* static, unused */, String_t* ___uri0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequest::GetAssetBundle(System.String,System.UInt32)
extern "C"  UnityWebRequest_t1890284502 * UnityWebRequest_GetAssetBundle_m3192971115 (Il2CppObject * __this /* static, unused */, String_t* ___uri0, uint32_t ___crc1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequest::GetAssetBundle(System.String,System.UInt32,System.UInt32)
extern "C"  UnityWebRequest_t1890284502 * UnityWebRequest_GetAssetBundle_m1397031519 (Il2CppObject * __this /* static, unused */, String_t* ___uri0, uint32_t ___version1, uint32_t ___crc2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequest::GetAssetBundle(System.String,UnityEngine.Hash128,System.UInt32)
extern "C"  UnityWebRequest_t1890284502 * UnityWebRequest_GetAssetBundle_m3405356549 (Il2CppObject * __this /* static, unused */, String_t* ___uri0, Hash128_t346790303  ___hash1, uint32_t ___crc2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequest::Put(System.String,System.Byte[])
extern "C"  UnityWebRequest_t1890284502 * UnityWebRequest_Put_m2257537347 (Il2CppObject * __this /* static, unused */, String_t* ___uri0, ByteU5BU5D_t4260760469* ___bodyData1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequest::Put(System.String,System.String)
extern "C"  UnityWebRequest_t1890284502 * UnityWebRequest_Put_m20375676 (Il2CppObject * __this /* static, unused */, String_t* ___uri0, String_t* ___bodyData1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequest::Post(System.String,System.String)
extern "C"  UnityWebRequest_t1890284502 * UnityWebRequest_Post_m1220303919 (Il2CppObject * __this /* static, unused */, String_t* ___uri0, String_t* ___postData1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequest::Post(System.String,UnityEngine.WWWForm)
extern "C"  UnityWebRequest_t1890284502 * UnityWebRequest_Post_m1253059835 (Il2CppObject * __this /* static, unused */, String_t* ___uri0, WWWForm_t461342257 * ___formData1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequest::Post(System.String,System.Collections.Generic.List`1<UnityEngine.Networking.IMultipartFormSection>)
extern "C"  UnityWebRequest_t1890284502 * UnityWebRequest_Post_m2284933306 (Il2CppObject * __this /* static, unused */, String_t* ___uri0, List_1_t3975180852 * ___multipartFormSections1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequest::Post(System.String,System.Collections.Generic.List`1<UnityEngine.Networking.IMultipartFormSection>,System.Byte[])
extern "C"  UnityWebRequest_t1890284502 * UnityWebRequest_Post_m1323437117 (Il2CppObject * __this /* static, unused */, String_t* ___uri0, List_1_t3975180852 * ___multipartFormSections1, ByteU5BU5D_t4260760469* ___boundary2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequest::Post(System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C"  UnityWebRequest_t1890284502 * UnityWebRequest_Post_m3509843812 (Il2CppObject * __this /* static, unused */, String_t* ___uri0, Dictionary_2_t827649927 * ___formFields1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] UnityEngine.Networking.UnityWebRequest::SerializeFormSections(System.Collections.Generic.List`1<UnityEngine.Networking.IMultipartFormSection>,System.Byte[])
extern "C"  ByteU5BU5D_t4260760469* UnityWebRequest_SerializeFormSections_m1305467155 (Il2CppObject * __this /* static, unused */, List_1_t3975180852 * ___multipartFormSections0, ByteU5BU5D_t4260760469* ___boundary1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] UnityEngine.Networking.UnityWebRequest::GenerateBoundary()
extern "C"  ByteU5BU5D_t4260760469* UnityWebRequest_GenerateBoundary_m3873910070 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] UnityEngine.Networking.UnityWebRequest::SerializeSimpleForm(System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C"  ByteU5BU5D_t4260760469* UnityWebRequest_SerializeSimpleForm_m302816210 (Il2CppObject * __this /* static, unused */, Dictionary_2_t827649927 * ___formFields0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_disposeDownloadHandlerOnDispose()
extern "C"  bool UnityWebRequest_get_disposeDownloadHandlerOnDispose_m2347066627 (UnityWebRequest_t1890284502 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.UnityWebRequest::set_disposeDownloadHandlerOnDispose(System.Boolean)
extern "C"  void UnityWebRequest_set_disposeDownloadHandlerOnDispose_m4263077100 (UnityWebRequest_t1890284502 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_disposeUploadHandlerOnDispose()
extern "C"  bool UnityWebRequest_get_disposeUploadHandlerOnDispose_m2617950012 (UnityWebRequest_t1890284502 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.UnityWebRequest::set_disposeUploadHandlerOnDispose(System.Boolean)
extern "C"  void UnityWebRequest_set_disposeUploadHandlerOnDispose_m3879152613 (UnityWebRequest_t1890284502 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.UnityWebRequest::InternalCreate()
extern "C"  void UnityWebRequest_InternalCreate_m2803869286 (UnityWebRequest_t1890284502 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.UnityWebRequest::InternalDestroy()
extern "C"  void UnityWebRequest_InternalDestroy_m2409049138 (UnityWebRequest_t1890284502 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.UnityWebRequest::InternalSetDefaults()
extern "C"  void UnityWebRequest_InternalSetDefaults_m2130746124 (UnityWebRequest_t1890284502 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.UnityWebRequest::Finalize()
extern "C"  void UnityWebRequest_Finalize_m1446616107 (UnityWebRequest_t1890284502 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.UnityWebRequest::Dispose()
extern "C"  void UnityWebRequest_Dispose_m3820966740 (UnityWebRequest_t1890284502 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AsyncOperation UnityEngine.Networking.UnityWebRequest::InternalBegin()
extern "C"  AsyncOperation_t3699081103 * UnityWebRequest_InternalBegin_m3730330388 (UnityWebRequest_t1890284502 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.UnityWebRequest::InternalAbort()
extern "C"  void UnityWebRequest_InternalAbort_m2162080680 (UnityWebRequest_t1890284502 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AsyncOperation UnityEngine.Networking.UnityWebRequest::Send()
extern "C"  AsyncOperation_t3699081103 * UnityWebRequest_Send_m3727536514 (UnityWebRequest_t1890284502 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.UnityWebRequest::Abort()
extern "C"  void UnityWebRequest_Abort_m1526250789 (UnityWebRequest_t1890284502 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.UnityWebRequest::InternalSetMethod(UnityEngine.Networking.UnityWebRequest/UnityWebRequestMethod)
extern "C"  void UnityWebRequest_InternalSetMethod_m2772078444 (UnityWebRequest_t1890284502 * __this, int32_t ___methodType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.UnityWebRequest::InternalSetCustomMethod(System.String)
extern "C"  void UnityWebRequest_InternalSetCustomMethod_m1516182 (UnityWebRequest_t1890284502 * __this, String_t* ___customMethodName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.UnityWebRequest::InternalGetMethod()
extern "C"  int32_t UnityWebRequest_InternalGetMethod_m3295898255 (UnityWebRequest_t1890284502 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.UnityWebRequest::InternalGetCustomMethod()
extern "C"  String_t* UnityWebRequest_InternalGetCustomMethod_m1233973213 (UnityWebRequest_t1890284502 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.UnityWebRequest::get_method()
extern "C"  String_t* UnityWebRequest_get_method_m2179159226 (UnityWebRequest_t1890284502 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.UnityWebRequest::set_method(System.String)
extern "C"  void UnityWebRequest_set_method_m1722009751 (UnityWebRequest_t1890284502 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.UnityWebRequest::InternalGetError()
extern "C"  int32_t UnityWebRequest_InternalGetError_m2798049916 (UnityWebRequest_t1890284502 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.UnityWebRequest::get_error()
extern "C"  String_t* UnityWebRequest_get_error_m3454762737 (UnityWebRequest_t1890284502 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_useHttpContinue()
extern "C"  bool UnityWebRequest_get_useHttpContinue_m1179324476 (UnityWebRequest_t1890284502 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.UnityWebRequest::set_useHttpContinue(System.Boolean)
extern "C"  void UnityWebRequest_set_useHttpContinue_m2050235493 (UnityWebRequest_t1890284502 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.UnityWebRequest::get_url()
extern "C"  String_t* UnityWebRequest_get_url_m2722270872 (UnityWebRequest_t1890284502 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.UnityWebRequest::set_url(System.String)
extern "C"  void UnityWebRequest_set_url_m2069928379 (UnityWebRequest_t1890284502 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.UnityWebRequest::InternalGetUrl()
extern "C"  String_t* UnityWebRequest_InternalGetUrl_m3811648454 (UnityWebRequest_t1890284502 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.UnityWebRequest::InternalSetUrl(System.String)
extern "C"  void UnityWebRequest_InternalSetUrl_m786692491 (UnityWebRequest_t1890284502 * __this, String_t* ___url0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 UnityEngine.Networking.UnityWebRequest::get_responseCode()
extern "C"  int64_t UnityWebRequest_get_responseCode_m3154397829 (UnityWebRequest_t1890284502 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Networking.UnityWebRequest::get_uploadProgress()
extern "C"  float UnityWebRequest_get_uploadProgress_m3424452368 (UnityWebRequest_t1890284502 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_isModifiable()
extern "C"  bool UnityWebRequest_get_isModifiable_m1721967914 (UnityWebRequest_t1890284502 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_isDone()
extern "C"  bool UnityWebRequest_get_isDone_m3067820008 (UnityWebRequest_t1890284502 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_isError()
extern "C"  bool UnityWebRequest_get_isError_m1590593988 (UnityWebRequest_t1890284502 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Networking.UnityWebRequest::get_downloadProgress()
extern "C"  float UnityWebRequest_get_downloadProgress_m2117726359 (UnityWebRequest_t1890284502 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 UnityEngine.Networking.UnityWebRequest::get_uploadedBytes()
extern "C"  uint64_t UnityWebRequest_get_uploadedBytes_m320219387 (UnityWebRequest_t1890284502 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 UnityEngine.Networking.UnityWebRequest::get_downloadedBytes()
extern "C"  uint64_t UnityWebRequest_get_downloadedBytes_m835542676 (UnityWebRequest_t1890284502 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.UnityWebRequest::get_redirectLimit()
extern "C"  int32_t UnityWebRequest_get_redirectLimit_m800465451 (UnityWebRequest_t1890284502 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.UnityWebRequest::set_redirectLimit(System.Int32)
extern "C"  void UnityWebRequest_set_redirectLimit_m1472631432 (UnityWebRequest_t1890284502 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_chunkedTransfer()
extern "C"  bool UnityWebRequest_get_chunkedTransfer_m3211590493 (UnityWebRequest_t1890284502 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.UnityWebRequest::set_chunkedTransfer(System.Boolean)
extern "C"  void UnityWebRequest_set_chunkedTransfer_m3848763846 (UnityWebRequest_t1890284502 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.UnityWebRequest::GetRequestHeader(System.String)
extern "C"  String_t* UnityWebRequest_GetRequestHeader_m3609839564 (UnityWebRequest_t1890284502 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.UnityWebRequest::InternalSetRequestHeader(System.String,System.String)
extern "C"  void UnityWebRequest_InternalSetRequestHeader_m2365080026 (UnityWebRequest_t1890284502 * __this, String_t* ___name0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.UnityWebRequest::SetRequestHeader(System.String,System.String)
extern "C"  void UnityWebRequest_SetRequestHeader_m704789911 (UnityWebRequest_t1890284502 * __this, String_t* ___name0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.UnityWebRequest::GetResponseHeader(System.String)
extern "C"  String_t* UnityWebRequest_GetResponseHeader_m2057835244 (UnityWebRequest_t1890284502 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] UnityEngine.Networking.UnityWebRequest::InternalGetResponseHeaderKeys()
extern "C"  StringU5BU5D_t4054002952* UnityWebRequest_InternalGetResponseHeaderKeys_m3036141519 (UnityWebRequest_t1890284502 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.String> UnityEngine.Networking.UnityWebRequest::GetResponseHeaders()
extern "C"  Dictionary_2_t827649927 * UnityWebRequest_GetResponseHeaders_m3107028988 (UnityWebRequest_t1890284502 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.UploadHandler UnityEngine.Networking.UnityWebRequest::get_uploadHandler()
extern "C"  UploadHandler_t4062689071 * UnityWebRequest_get_uploadHandler_m1049527436 (UnityWebRequest_t1890284502 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.UnityWebRequest::set_uploadHandler(UnityEngine.Networking.UploadHandler)
extern "C"  void UnityWebRequest_set_uploadHandler_m2165710363 (UnityWebRequest_t1890284502 * __this, UploadHandler_t4062689071 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::get_downloadHandler()
extern "C"  DownloadHandler_t4125766536 * UnityWebRequest_get_downloadHandler_m2799190910 (UnityWebRequest_t1890284502 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.UnityWebRequest::set_downloadHandler(UnityEngine.Networking.DownloadHandler)
extern "C"  void UnityWebRequest_set_downloadHandler_m1376606139 (UnityWebRequest_t1890284502 * __this, DownloadHandler_t4125766536 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.UnityWebRequest::ContainsForbiddenCharacters(System.String,System.Int32)
extern "C"  bool UnityWebRequest_ContainsForbiddenCharacters_m630797512 (Il2CppObject * __this /* static, unused */, String_t* ___s0, int32_t ___firstAllowedCharCode1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.UnityWebRequest::IsHeaderNameLegal(System.String)
extern "C"  bool UnityWebRequest_IsHeaderNameLegal_m1178792156 (Il2CppObject * __this /* static, unused */, String_t* ___headerName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.UnityWebRequest::IsHeaderValueLegal(System.String)
extern "C"  bool UnityWebRequest_IsHeaderValueLegal_m2225854992 (Il2CppObject * __this /* static, unused */, String_t* ___headerValue0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.UnityWebRequest::GetErrorDescription(UnityEngine.Networking.UnityWebRequest/UnityWebRequestError)
extern "C"  String_t* UnityWebRequest_GetErrorDescription_m2694082268 (Il2CppObject * __this /* static, unused */, int32_t ___errorCode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct UnityWebRequest_t1890284502;
struct UnityWebRequest_t1890284502_marshaled_pinvoke;

extern "C" void UnityWebRequest_t1890284502_marshal_pinvoke(const UnityWebRequest_t1890284502& unmarshaled, UnityWebRequest_t1890284502_marshaled_pinvoke& marshaled);
extern "C" void UnityWebRequest_t1890284502_marshal_pinvoke_back(const UnityWebRequest_t1890284502_marshaled_pinvoke& marshaled, UnityWebRequest_t1890284502& unmarshaled);
extern "C" void UnityWebRequest_t1890284502_marshal_pinvoke_cleanup(UnityWebRequest_t1890284502_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct UnityWebRequest_t1890284502;
struct UnityWebRequest_t1890284502_marshaled_com;

extern "C" void UnityWebRequest_t1890284502_marshal_com(const UnityWebRequest_t1890284502& unmarshaled, UnityWebRequest_t1890284502_marshaled_com& marshaled);
extern "C" void UnityWebRequest_t1890284502_marshal_com_back(const UnityWebRequest_t1890284502_marshaled_com& marshaled, UnityWebRequest_t1890284502& unmarshaled);
extern "C" void UnityWebRequest_t1890284502_marshal_com_cleanup(UnityWebRequest_t1890284502_marshaled_com& marshaled);
