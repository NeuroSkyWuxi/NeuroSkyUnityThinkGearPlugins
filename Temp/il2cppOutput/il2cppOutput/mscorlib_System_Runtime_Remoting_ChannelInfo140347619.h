#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Object[]
struct ObjectU5BU5D_t1108656482;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.ChannelInfo
struct  ChannelInfo_t140347619  : public Il2CppObject
{
public:
	// System.Object[] System.Runtime.Remoting.ChannelInfo::channelData
	ObjectU5BU5D_t1108656482* ___channelData_0;

public:
	inline static int32_t get_offset_of_channelData_0() { return static_cast<int32_t>(offsetof(ChannelInfo_t140347619, ___channelData_0)); }
	inline ObjectU5BU5D_t1108656482* get_channelData_0() const { return ___channelData_0; }
	inline ObjectU5BU5D_t1108656482** get_address_of_channelData_0() { return &___channelData_0; }
	inline void set_channelData_0(ObjectU5BU5D_t1108656482* value)
	{
		___channelData_0 = value;
		Il2CppCodeGenWriteBarrier(&___channelData_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
