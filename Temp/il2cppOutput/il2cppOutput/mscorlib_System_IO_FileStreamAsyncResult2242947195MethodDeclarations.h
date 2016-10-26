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

// System.IO.FileStreamAsyncResult
struct FileStreamAsyncResult_t2242947195;
// System.AsyncCallback
struct AsyncCallback_t1369114871;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.Threading.WaitHandle
struct WaitHandle_t1661568373;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_AsyncCallback1369114871.h"
#include "mscorlib_System_Object4170816371.h"

// System.Void System.IO.FileStreamAsyncResult::.ctor(System.AsyncCallback,System.Object)
extern "C"  void FileStreamAsyncResult__ctor_m3962676300 (FileStreamAsyncResult_t2242947195 * __this, AsyncCallback_t1369114871 * ___cb0, Il2CppObject * ___state1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStreamAsyncResult::CBWrapper(System.IAsyncResult)
extern "C"  void FileStreamAsyncResult_CBWrapper_m1193154321 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___ares0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.IO.FileStreamAsyncResult::get_AsyncState()
extern "C"  Il2CppObject * FileStreamAsyncResult_get_AsyncState_m840004493 (FileStreamAsyncResult_t2242947195 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle System.IO.FileStreamAsyncResult::get_AsyncWaitHandle()
extern "C"  WaitHandle_t1661568373 * FileStreamAsyncResult_get_AsyncWaitHandle_m4264276527 (FileStreamAsyncResult_t2242947195 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.FileStreamAsyncResult::get_IsCompleted()
extern "C"  bool FileStreamAsyncResult_get_IsCompleted_m3246614232 (FileStreamAsyncResult_t2242947195 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
