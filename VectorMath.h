#ifndef VECTORMATH_H
#define VECTORMATH_H

#include "Vector3D.h"

float dot(const Vector3D& a, const Vector3D& b);

Vector3D cross(const Vector3D& a, const Vector3D& b);

float mag(const Vector3D& v);

Vector3D normalize(const Vector3D& v);


#endif
