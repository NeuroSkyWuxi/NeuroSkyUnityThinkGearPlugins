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
// UnityEngine.Ray
struct Ray_t3134616544;
struct Ray_t3134616544_marshaled_pinvoke;
struct Ray_t3134616544_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Ray3134616544.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

// UnityEngine.Vector3 UnityEngine.Ray::get_direction()
extern "C"  Vector3_t4282066566  Ray_get_direction_m3201866877 (Ray_t3134616544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Ray::ToString()
extern "C"  String_t* Ray_ToString_m1391619614 (Ray_t3134616544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct Ray_t3134616544;
struct Ray_t3134616544_marshaled_pinvoke;

extern "C" void Ray_t3134616544_marshal_pinvoke(const Ray_t3134616544& unmarshaled, Ray_t3134616544_marshaled_pinvoke& marshaled);
extern "C" void Ray_t3134616544_marshal_pinvoke_back(const Ray_t3134616544_marshaled_pinvoke& marshaled, Ray_t3134616544& unmarshaled);
extern "C" void Ray_t3134616544_marshal_pinvoke_cleanup(Ray_t3134616544_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct Ray_t3134616544;
struct Ray_t3134616544_marshaled_com;

extern "C" void Ray_t3134616544_marshal_com(const Ray_t3134616544& unmarshaled, Ray_t3134616544_marshaled_com& marshaled);
extern "C" void Ray_t3134616544_marshal_com_back(const Ray_t3134616544_marshaled_com& marshaled, Ray_t3134616544& unmarshaled);
extern "C" void Ray_t3134616544_marshal_com_cleanup(Ray_t3134616544_marshaled_com& marshaled);
