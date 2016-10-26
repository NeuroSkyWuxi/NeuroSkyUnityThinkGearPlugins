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

// UnityEngine.NetworkView
struct NetworkView_t3656680617;
// UnityEngine.NetworkMessageInfo
struct NetworkMessageInfo_t3807997963;
struct NetworkMessageInfo_t3807997963_marshaled_pinvoke;
struct NetworkMessageInfo_t3807997963_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_NetworkMessageInfo3807997963.h"
#include "UnityEngine_UnityEngine_NetworkPlayer3231273765.h"

// System.Double UnityEngine.NetworkMessageInfo::get_timestamp()
extern "C"  double NetworkMessageInfo_get_timestamp_m3597535726 (NetworkMessageInfo_t3807997963 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.NetworkPlayer UnityEngine.NetworkMessageInfo::get_sender()
extern "C"  NetworkPlayer_t3231273765  NetworkMessageInfo_get_sender_m2720861079 (NetworkMessageInfo_t3807997963 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.NetworkView UnityEngine.NetworkMessageInfo::get_networkView()
extern "C"  NetworkView_t3656680617 * NetworkMessageInfo_get_networkView_m221874487 (NetworkMessageInfo_t3807997963 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.NetworkView UnityEngine.NetworkMessageInfo::NullNetworkView()
extern "C"  NetworkView_t3656680617 * NetworkMessageInfo_NullNetworkView_m516412409 (NetworkMessageInfo_t3807997963 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct NetworkMessageInfo_t3807997963;
struct NetworkMessageInfo_t3807997963_marshaled_pinvoke;

extern "C" void NetworkMessageInfo_t3807997963_marshal_pinvoke(const NetworkMessageInfo_t3807997963& unmarshaled, NetworkMessageInfo_t3807997963_marshaled_pinvoke& marshaled);
extern "C" void NetworkMessageInfo_t3807997963_marshal_pinvoke_back(const NetworkMessageInfo_t3807997963_marshaled_pinvoke& marshaled, NetworkMessageInfo_t3807997963& unmarshaled);
extern "C" void NetworkMessageInfo_t3807997963_marshal_pinvoke_cleanup(NetworkMessageInfo_t3807997963_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct NetworkMessageInfo_t3807997963;
struct NetworkMessageInfo_t3807997963_marshaled_com;

extern "C" void NetworkMessageInfo_t3807997963_marshal_com(const NetworkMessageInfo_t3807997963& unmarshaled, NetworkMessageInfo_t3807997963_marshaled_com& marshaled);
extern "C" void NetworkMessageInfo_t3807997963_marshal_com_back(const NetworkMessageInfo_t3807997963_marshaled_com& marshaled, NetworkMessageInfo_t3807997963& unmarshaled);
extern "C" void NetworkMessageInfo_t3807997963_marshal_com_cleanup(NetworkMessageInfo_t3807997963_marshaled_com& marshaled);
