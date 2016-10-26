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

// UnityEngine.Networking.UploadHandler
struct UploadHandler_t4062689071;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// System.String
struct String_t;
struct UploadHandler_t4062689071_marshaled_pinvoke;
struct UploadHandler_t4062689071_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"

// System.Void UnityEngine.Networking.UploadHandler::.ctor()
extern "C"  void UploadHandler__ctor_m4145774046 (UploadHandler_t4062689071 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.UploadHandler::InternalCreateRaw(System.Byte[])
extern "C"  void UploadHandler_InternalCreateRaw_m3364909982 (UploadHandler_t4062689071 * __this, ByteU5BU5D_t4260760469* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.UploadHandler::InternalDestroy()
extern "C"  void UploadHandler_InternalDestroy_m3840871545 (UploadHandler_t4062689071 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.UploadHandler::Finalize()
extern "C"  void UploadHandler_Finalize_m777547204 (UploadHandler_t4062689071 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.UploadHandler::Dispose()
extern "C"  void UploadHandler_Dispose_m2552457883 (UploadHandler_t4062689071 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.UploadHandler::set_contentType(System.String)
extern "C"  void UploadHandler_set_contentType_m3087243632 (UploadHandler_t4062689071 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.UploadHandler::SetContentType(System.String)
extern "C"  void UploadHandler_SetContentType_m1034215851 (UploadHandler_t4062689071 * __this, String_t* ___newContentType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct UploadHandler_t4062689071;
struct UploadHandler_t4062689071_marshaled_pinvoke;

extern "C" void UploadHandler_t4062689071_marshal_pinvoke(const UploadHandler_t4062689071& unmarshaled, UploadHandler_t4062689071_marshaled_pinvoke& marshaled);
extern "C" void UploadHandler_t4062689071_marshal_pinvoke_back(const UploadHandler_t4062689071_marshaled_pinvoke& marshaled, UploadHandler_t4062689071& unmarshaled);
extern "C" void UploadHandler_t4062689071_marshal_pinvoke_cleanup(UploadHandler_t4062689071_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct UploadHandler_t4062689071;
struct UploadHandler_t4062689071_marshaled_com;

extern "C" void UploadHandler_t4062689071_marshal_com(const UploadHandler_t4062689071& unmarshaled, UploadHandler_t4062689071_marshaled_com& marshaled);
extern "C" void UploadHandler_t4062689071_marshal_com_back(const UploadHandler_t4062689071_marshaled_com& marshaled, UploadHandler_t4062689071& unmarshaled);
extern "C" void UploadHandler_t4062689071_marshal_com_cleanup(UploadHandler_t4062689071_marshaled_com& marshaled);
