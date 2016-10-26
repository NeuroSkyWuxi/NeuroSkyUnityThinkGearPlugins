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

// UnityEngine.iOS.ADInterstitialAd/InterstitialWasLoadedDelegate
struct InterstitialWasLoadedDelegate_t3068494210;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void UnityEngine.iOS.ADInterstitialAd/InterstitialWasLoadedDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void InterstitialWasLoadedDelegate__ctor_m2439394720 (InterstitialWasLoadedDelegate_t3068494210 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.ADInterstitialAd/InterstitialWasLoadedDelegate::Invoke()
extern "C"  void InterstitialWasLoadedDelegate_Invoke_m2428938746 (InterstitialWasLoadedDelegate_t3068494210 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UnityEngine.iOS.ADInterstitialAd/InterstitialWasLoadedDelegate::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * InterstitialWasLoadedDelegate_BeginInvoke_m1425628105 (InterstitialWasLoadedDelegate_t3068494210 * __this, AsyncCallback_t1369114871 * ___callback0, Il2CppObject * ___object1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.ADInterstitialAd/InterstitialWasLoadedDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void InterstitialWasLoadedDelegate_EndInvoke_m2339731376 (InterstitialWasLoadedDelegate_t3068494210 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
