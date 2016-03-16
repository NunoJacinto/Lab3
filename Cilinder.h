#pragma once

#include "Object.h"

//Cilinder or Cone
class Cilinder : public Object
{
private:
	float _baseX;
	float _baseY;
	float _baseZ;
	float _baseRadius;
	float _apexX;
	float _apexY;
	float _apexZ;
	float _apexRadius;


public:
	Cilinder(float baseX, float baseY, float baseZ, float baseRadius, float apexX, float apexY, float apexZ, float apexRadius);
};