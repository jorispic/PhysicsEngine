#ifndef RIGIDBODY_H
#define RIGIDBODY_H

#include "Vector3D.h"


enum shapeType
{
	Box = 0, Circle = 1
};


class RigidBody {

public:
	bool isFixed;
	RigidBody();

private :

	Vector3D position;
	Vector3D velocity;
	Vector3D rotation;
	Vector3D rotationVelocity;

public :
	float density;
	float mass;
	float area;

	float radius;
	float width;
	float height;

	shapeType shape;

private :
	RigidBody(Vector3D position, float density, float mass, float area, float radius, float width, float height, bool isFixed, shapeType shape)
	{
		this->position = position;
		this->velocity = Vector3D::zero;
		this->rotation = Vector3D::zero;
		this->rotationVelocity = Vector3D::zero;

		this->density = density;
		this->mass = mass;
		this->area = area;

		this->radius = radius;
		this->width = width;
		this->height = height;
		this->isFixed = isFixed;
		this->shape = shape;
	}

public :
	static RigidBody* createCircleBody(float radius, Vector3D position, float density, bool isFixed);	//Fonction qui retourne un pointeur vers un RigidBody de type cercle ou nullptr si la creation a echoué
	static RigidBody* createBoxBody(float width, float height, Vector3D position, float density, bool isFixed);
};

#endif
