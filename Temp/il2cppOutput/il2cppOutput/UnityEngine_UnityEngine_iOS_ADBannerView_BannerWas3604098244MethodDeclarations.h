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

// UnityEngine.iOS.ADBannerView/BannerWasLoadedDelegate
struct BannerWasLoadedDelegate_t3604098244;
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

// System.Void UnityEngine.iOS.ADBannerView/BannerWasLoadedDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void BannerWasLoadedDelegate__ctor_m74826402 (BannerWasLoadedDelegate_t3604098244 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.ADBannerView/BannerWasLoadedDelegate::Invoke()
extern "C"  void BannerWasLoadedDelegate_Invoke_m3949163900 (BannerWasLoadedDelegate_t3604098244 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UnityEngine.iOS.ADBannerView/BannerWasLoadedDelegate::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * BannerWasLoadedDelegate_BeginInvoke_m2489699591 (BannerWasLoadedDelegate_t3604098244 * __this, AsyncCallback_t1369114871 * ___callback0, Il2CppObject * ___object1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.ADBannerView/BannerWasLoadedDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void BannerWasLoadedDelegate_EndInvoke_m3402094002 (BannerWasLoadedDelegate_t3604098244 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
