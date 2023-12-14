#include "VectorMath.h"

#include <cmath>

float dot(const Vector3D& a, const Vector3D& b)
{
	return a.x * b.x + a.y * b.y + a.z * b.z;
}

Vector3D cross(const Vector3D& a, const Vector3D& b)
{
	return Vector3D(a.y * b.z - a.z * b.y, a.z * b.x - a.x * b.z, a.x * b.y - a.y * b.x);
}

float mag(const Vector3D& v)
{
	return sqrt(dot(v, v));
}

Vector3D normalize(const Vector3D& v)
{
	return Vector3D(v.x / mag(v), v.y / mag(v), v.z / mag(v));
}