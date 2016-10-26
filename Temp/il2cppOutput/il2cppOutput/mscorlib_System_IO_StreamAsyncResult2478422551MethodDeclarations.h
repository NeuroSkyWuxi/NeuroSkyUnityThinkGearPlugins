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

// System.IO.StreamAsyncResult
struct StreamAsyncResult_t2478422551;
// System.Object
struct Il2CppObject;
// System.Exception
struct Exception_t3991598821;
// System.Threading.WaitHandle
struct WaitHandle_t1661568373;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_Exception3991598821.h"

// System.Void System.IO.StreamAsyncResult::.ctor(System.Object)
extern "C"  void StreamAsyncResult__ctor_m3640305936 (StreamAsyncResult_t2478422551 * __this, Il2CppObject * ___state0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamAsyncResult::SetComplete(System.Exception)
extern "C"  void StreamAsyncResult_SetComplete_m1144351501 (StreamAsyncResult_t2478422551 * __this, Exception_t3991598821 * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamAsyncResult::SetComplete(System.Exception,System.Int32)
extern "C"  void StreamAsyncResult_SetComplete_m345427690 (StreamAsyncResult_t2478422551 * __this, Exception_t3991598821 * ___e0, int32_t ___nbytes1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.IO.StreamAsyncResult::get_AsyncState()
extern "C"  Il2CppObject * StreamAsyncResult_get_AsyncState_m3529626409 (StreamAsyncResult_t2478422551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle System.IO.StreamAsyncResult::get_AsyncWaitHandle()
extern "C"  WaitHandle_t1661568373 * StreamAsyncResult_get_AsyncWaitHandle_m452819475 (StreamAsyncResult_t2478422551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.StreamAsyncResult::get_IsCompleted()
extern "C"  bool StreamAsyncResult_get_IsCompleted_m1862707516 (StreamAsyncResult_t2478422551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.IO.StreamAsyncResult::get_Exception()
extern "C"  Exception_t3991598821 * StreamAsyncResult_get_Exception_m58775747 (StreamAsyncResult_t2478422551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.StreamAsyncResult::get_NBytes()
extern "C"  int32_t StreamAsyncResult_get_NBytes_m3491482122 (StreamAsyncResult_t2478422551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.StreamAsyncResult::get_Done()
extern "C"  bool StreamAsyncResult_get_Done_m3820504329 (StreamAsyncResult_t2478422551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamAsyncResult::set_Done(System.Boolean)
extern "C"  void StreamAsyncResult_set_Done_m603695862 (StreamAsyncResult_t2478422551 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
