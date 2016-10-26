#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Type
struct Type_t;
// System.MarshalByRefObject
struct MarshalByRefObject_t1219038801;
// System.Runtime.Remoting.Contexts.Context
struct Context_t515654137;

#include "mscorlib_System_Runtime_Remoting_Identity3943038460.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.ServerIdentity
struct  ServerIdentity_t2542955999  : public Identity_t3943038460
{
public:
	// System.Type System.Runtime.Remoting.ServerIdentity::_objectType
	Type_t * ____objectType_7;
	// System.MarshalByRefObject System.Runtime.Remoting.ServerIdentity::_serverObject
	MarshalByRefObject_t1219038801 * ____serverObject_8;
	// System.Runtime.Remoting.Contexts.Context System.Runtime.Remoting.ServerIdentity::_context
	Context_t515654137 * ____context_9;

public:
	inline static int32_t get_offset_of__objectType_7() { return static_cast<int32_t>(offsetof(ServerIdentity_t2542955999, ____objectType_7)); }
	inline Type_t * get__objectType_7() const { return ____objectType_7; }
	inline Type_t ** get_address_of__objectType_7() { return &____objectType_7; }
	inline void set__objectType_7(Type_t * value)
	{
		____objectType_7 = value;
		Il2CppCodeGenWriteBarrier(&____objectType_7, value);
	}

	inline static int32_t get_offset_of__serverObject_8() { return static_cast<int32_t>(offsetof(ServerIdentity_t2542955999, ____serverObject_8)); }
	inline MarshalByRefObject_t1219038801 * get__serverObject_8() const { return ____serverObject_8; }
	inline MarshalByRefObject_t1219038801 ** get_address_of__serverObject_8() { return &____serverObject_8; }
	inline void set__serverObject_8(MarshalByRefObject_t1219038801 * value)
	{
		____serverObject_8 = value;
		Il2CppCodeGenWriteBarrier(&____serverObject_8, value);
	}

	inline static int32_t get_offset_of__context_9() { return static_cast<int32_t>(offsetof(ServerIdentity_t2542955999, ____context_9)); }
	inline Context_t515654137 * get__context_9() const { return ____context_9; }
	inline Context_t515654137 ** get_address_of__context_9() { return &____context_9; }
	inline void set__context_9(Context_t515654137 * value)
	{
		____context_9 = value;
		Il2CppCodeGenWriteBarrier(&____context_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
