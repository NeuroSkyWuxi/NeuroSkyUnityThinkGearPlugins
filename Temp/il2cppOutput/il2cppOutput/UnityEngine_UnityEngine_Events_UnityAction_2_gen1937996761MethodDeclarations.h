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

// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>
struct UnityAction_2_t1937996761;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "UnityEngine_UnityEngine_SceneManagement_Scene1080795294.h"
#include "UnityEngine_UnityEngine_SceneManagement_LoadSceneM3067001883.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>::.ctor(System.Object,System.IntPtr)
extern "C"  void UnityAction_2__ctor_m3451855966_gshared (UnityAction_2_t1937996761 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define UnityAction_2__ctor_m3451855966(__this, ___object0, ___method1, method) ((  void (*) (UnityAction_2_t1937996761 *, Il2CppObject *, IntPtr_t, const MethodInfo*))UnityAction_2__ctor_m3451855966_gshared)(__this, ___object0, ___method1, method)
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>::Invoke(T0,T1)
extern "C"  void UnityAction_2_Invoke_m1664755053_gshared (UnityAction_2_t1937996761 * __this, Scene_t1080795294  ___arg00, int32_t ___arg11, const MethodInfo* method);
#define UnityAction_2_Invoke_m1664755053(__this, ___arg00, ___arg11, method) ((  void (*) (UnityAction_2_t1937996761 *, Scene_t1080795294 , int32_t, const MethodInfo*))UnityAction_2_Invoke_m1664755053_gshared)(__this, ___arg00, ___arg11, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>::BeginInvoke(T0,T1,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * UnityAction_2_BeginInvoke_m3517406036_gshared (UnityAction_2_t1937996761 * __this, Scene_t1080795294  ___arg00, int32_t ___arg11, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define UnityAction_2_BeginInvoke_m3517406036(__this, ___arg00, ___arg11, ___callback2, ___object3, method) ((  Il2CppObject * (*) (UnityAction_2_t1937996761 *, Scene_t1080795294 , int32_t, AsyncCallback_t1369114871 *, Il2CppObject *, const MethodInfo*))UnityAction_2_BeginInvoke_m3517406036_gshared)(__this, ___arg00, ___arg11, ___callback2, ___object3, method)
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>::EndInvoke(System.IAsyncResult)
extern "C"  void UnityAction_2_EndInvoke_m2359260526_gshared (UnityAction_2_t1937996761 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define UnityAction_2_EndInvoke_m2359260526(__this, ___result0, method) ((  void (*) (UnityAction_2_t1937996761 *, Il2CppObject *, const MethodInfo*))UnityAction_2_EndInvoke_m2359260526_gshared)(__this, ___result0, method)
