#include "Vector3D.h"

#include <iostream>

Vector3D::Vector3D()
{}

Vector3D::Vector3D(float x, float y, float z)
	: x(x), y(y), z(z) {}

Vector3D operator+(const Vector3D& a, const Vector3D& b)
{
	return Vector3D(a.x + b.x, a.y + b.y, a.z + b.z);
}

Vector3D operator-(const Vector3D& a, const Vector3D& b)
{
	return Vector3D(a.x - b.x, a.y - b.y, a.z - b.z);
}

Vector3D operator-(const Vector3D& v)
{
	return Vector3D(-v.x, -v.y, -v.z);
}

Vector3D operator*(float k, const Vector3D& v)
{
	return Vector3D(k * v.x, k * v.y, k * v.z);
}


void Vector3D::log() const
{
	std::cout << "[" << x << ", " << y << ", " << z << "]" << std::endl;
}