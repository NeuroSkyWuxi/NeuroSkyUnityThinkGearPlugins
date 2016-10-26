#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Mono.Security.Protocol.Tls.Alert
struct Alert_t2013630382;

#include "mscorlib_System_Exception3991598821.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.TlsException
struct  TlsException_t1031360050  : public Exception_t3991598821
{
public:
	// Mono.Security.Protocol.Tls.Alert Mono.Security.Protocol.Tls.TlsException::alert
	Alert_t2013630382 * ___alert_11;

public:
	inline static int32_t get_offset_of_alert_11() { return static_cast<int32_t>(offsetof(TlsException_t1031360050, ___alert_11)); }
	inline Alert_t2013630382 * get_alert_11() const { return ___alert_11; }
	inline Alert_t2013630382 ** get_address_of_alert_11() { return &___alert_11; }
	inline void set_alert_11(Alert_t2013630382 * value)
	{
		___alert_11 = value;
		Il2CppCodeGenWriteBarrier(&___alert_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
