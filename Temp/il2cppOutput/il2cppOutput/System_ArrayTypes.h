#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


// System.Text.RegularExpressions.Capture
struct Capture_t754001812;
// System.Text.RegularExpressions.Group
struct Group_t2151468941;

#include "mscorlib_System_Array1146569071.h"
#include "System_System_Security_Cryptography_X509Certificate766901931.h"
#include "System_System_Text_RegularExpressions_Capture754001812.h"
#include "System_System_Text_RegularExpressions_Group2151468941.h"
#include "System_System_Text_RegularExpressions_Mark3811539797.h"
#include "System_System_Uri_UriScheme1290668975.h"

#pragma once
// System.Security.Cryptography.X509Certificates.X509ChainStatus[]
struct X509ChainStatusU5BU5D_t2899776074  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) X509ChainStatus_t766901931  m_Items[1];

public:
	inline X509ChainStatus_t766901931  GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline X509ChainStatus_t766901931 * GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, X509ChainStatus_t766901931  value)
	{
		m_Items[index] = value;
	}
};
// System.Text.RegularExpressions.Capture[]
struct CaptureU5BU5D_t3823141789  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) Capture_t754001812 * m_Items[1];

public:
	inline Capture_t754001812 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline Capture_t754001812 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, Capture_t754001812 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Text.RegularExpressions.Group[]
struct GroupU5BU5D_t1259259808  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) Group_t2151468941 * m_Items[1];

public:
	inline Group_t2151468941 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline Group_t2151468941 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, Group_t2151468941 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Text.RegularExpressions.Mark[]
struct MarkU5BU5D_t581716920  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) Mark_t3811539797  m_Items[1];

public:
	inline Mark_t3811539797  GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline Mark_t3811539797 * GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, Mark_t3811539797  value)
	{
		m_Items[index] = value;
	}
};
// System.Uri/UriScheme[]
struct UriSchemeU5BU5D_t4293835958  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) UriScheme_t1290668975  m_Items[1];

public:
	inline UriScheme_t1290668975  GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline UriScheme_t1290668975 * GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, UriScheme_t1290668975  value)
	{
		m_Items[index] = value;
	}
};
