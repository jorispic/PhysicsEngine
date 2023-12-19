#define _USE_MATH_DEFINES

#include "RigidBody.h"

#include <cmath>

RigidBody::RigidBody()
{}

RigidBody* RigidBody::createCircleBody(float radius, Vector3D position, float density, bool isFixed)
{
	RigidBody* body = nullptr;

	float area = radius * radius * M_PI;
	float mass = area * 1 * density;

	body = new RigidBody(position, density, mass, area, radius, 0.0f, 0.0f, isFixed, Circle);

	return body;
}

RigidBody* RigidBody::createBoxBody(float width, float height, Vector3D position, float density, bool isFixed)
{
	float area = width * height;;
	float mass = area * 1 * density;

	RigidBody* body = new RigidBody(position, density, mass, area, 0.0f, width, height, isFixed, Box);

	return body;
}
