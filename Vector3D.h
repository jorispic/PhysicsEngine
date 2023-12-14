#ifndef VECTOR3D_H
#define VECTOR3D_H

class Vector3D {

public:
	float x;
	float y;
	float z;

	Vector3D();	//Constructor
	Vector3D(float x, float y, float z);

	friend Vector3D operator+(const Vector3D& a, const Vector3D& b);

	friend Vector3D operator-(const Vector3D& a, const Vector3D& b);
	friend Vector3D operator-(const Vector3D& v);

	friend Vector3D operator*(float k, const Vector3D& v);

	void log() const;
};

#endif
