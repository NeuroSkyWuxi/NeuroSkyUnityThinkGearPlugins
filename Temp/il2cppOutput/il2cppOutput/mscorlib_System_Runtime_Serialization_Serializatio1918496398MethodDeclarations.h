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

// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Object
struct Il2CppObject;
// System.Runtime.Serialization.SerializationEntry
struct SerializationEntry_t1918496398;
struct SerializationEntry_t1918496398_marshaled_pinvoke;
struct SerializationEntry_t1918496398_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio1918496398.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Type2863145774.h"
#include "mscorlib_System_Object4170816371.h"

// System.Void System.Runtime.Serialization.SerializationEntry::.ctor(System.String,System.Type,System.Object)
extern "C"  void SerializationEntry__ctor_m2883191396 (SerializationEntry_t1918496398 * __this, String_t* ___name0, Type_t * ___type1, Il2CppObject * ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Serialization.SerializationEntry::get_Name()
extern "C"  String_t* SerializationEntry_get_Name_m929676406 (SerializationEntry_t1918496398 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Serialization.SerializationEntry::get_Value()
extern "C"  Il2CppObject * SerializationEntry_get_Value_m522021722 (SerializationEntry_t1918496398 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct SerializationEntry_t1918496398;
struct SerializationEntry_t1918496398_marshaled_pinvoke;

extern "C" void SerializationEntry_t1918496398_marshal_pinvoke(const SerializationEntry_t1918496398& unmarshaled, SerializationEntry_t1918496398_marshaled_pinvoke& marshaled);
extern "C" void SerializationEntry_t1918496398_marshal_pinvoke_back(const SerializationEntry_t1918496398_marshaled_pinvoke& marshaled, SerializationEntry_t1918496398& unmarshaled);
extern "C" void SerializationEntry_t1918496398_marshal_pinvoke_cleanup(SerializationEntry_t1918496398_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct SerializationEntry_t1918496398;
struct SerializationEntry_t1918496398_marshaled_com;

extern "C" void SerializationEntry_t1918496398_marshal_com(const SerializationEntry_t1918496398& unmarshaled, SerializationEntry_t1918496398_marshaled_com& marshaled);
extern "C" void SerializationEntry_t1918496398_marshal_com_back(const SerializationEntry_t1918496398_marshaled_com& marshaled, SerializationEntry_t1918496398& unmarshaled);
extern "C" void SerializationEntry_t1918496398_marshal_com_cleanup(SerializationEntry_t1918496398_marshaled_com& marshaled);
