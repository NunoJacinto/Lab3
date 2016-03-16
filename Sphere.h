#pragma once

#include "Object.h"

class Sphere : public Object
{
private:
	float _centerX;
	float _centerY;
	float _centerZ;
	float _radius;

public:
	Sphere(float centerX, float centerY, float centerZ, float radius);
};

