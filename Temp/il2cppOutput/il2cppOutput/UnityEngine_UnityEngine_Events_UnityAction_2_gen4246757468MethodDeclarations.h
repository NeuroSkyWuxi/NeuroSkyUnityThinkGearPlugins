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

// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>
struct UnityAction_2_t4246757468;
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
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>::.ctor(System.Object,System.IntPtr)
extern "C"  void UnityAction_2__ctor_m1940257211_gshared (UnityAction_2_t4246757468 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define UnityAction_2__ctor_m1940257211(__this, ___object0, ___method1, method) ((  void (*) (UnityAction_2_t4246757468 *, Il2CppObject *, IntPtr_t, const MethodInfo*))UnityAction_2__ctor_m1940257211_gshared)(__this, ___object0, ___method1, method)
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>::Invoke(T0,T1)
extern "C"  void UnityAction_2_Invoke_m1752698864_gshared (UnityAction_2_t4246757468 * __this, Scene_t1080795294  ___arg00, Scene_t1080795294  ___arg11, const MethodInfo* method);
#define UnityAction_2_Invoke_m1752698864(__this, ___arg00, ___arg11, method) ((  void (*) (UnityAction_2_t4246757468 *, Scene_t1080795294 , Scene_t1080795294 , const MethodInfo*))UnityAction_2_Invoke_m1752698864_gshared)(__this, ___arg00, ___arg11, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>::BeginInvoke(T0,T1,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * UnityAction_2_BeginInvoke_m3535407831_gshared (UnityAction_2_t4246757468 * __this, Scene_t1080795294  ___arg00, Scene_t1080795294  ___arg11, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define UnityAction_2_BeginInvoke_m3535407831(__this, ___arg00, ___arg11, ___callback2, ___object3, method) ((  Il2CppObject * (*) (UnityAction_2_t4246757468 *, Scene_t1080795294 , Scene_t1080795294 , AsyncCallback_t1369114871 *, Il2CppObject *, const MethodInfo*))UnityAction_2_BeginInvoke_m3535407831_gshared)(__this, ___arg00, ___arg11, ___callback2, ___object3, method)
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>::EndInvoke(System.IAsyncResult)
extern "C"  void UnityAction_2_EndInvoke_m4166615371_gshared (UnityAction_2_t4246757468 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define UnityAction_2_EndInvoke_m4166615371(__this, ___result0, method) ((  void (*) (UnityAction_2_t4246757468 *, Il2CppObject *, const MethodInfo*))UnityAction_2_EndInvoke_m4166615371_gshared)(__this, ___result0, method)
