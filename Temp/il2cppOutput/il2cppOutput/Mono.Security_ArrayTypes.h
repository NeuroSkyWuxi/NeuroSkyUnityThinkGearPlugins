#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


// Mono.Math.BigInteger
struct BigInteger_t3334373499;

#include "mscorlib_System_Array1146569071.h"
#include "Mono_Security_Mono_Math_BigInteger3334373498.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake3167042548.h"

#pragma once
// Mono.Math.BigInteger[]
struct BigIntegerU5BU5D_t1634278496  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) BigInteger_t3334373499 * m_Items[1];

public:
	inline BigInteger_t3334373499 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline BigInteger_t3334373499 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, BigInteger_t3334373499 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Mono.Security.Protocol.Tls.Handshake.ClientCertificateType[]
struct ClientCertificateTypeU5BU5D_t2297606589  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline int32_t* GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
