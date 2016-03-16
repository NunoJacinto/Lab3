// Camera.h
#pragma once
#include "MyVector.h"

class Camera
{
private:
	Vec3 _from = Vec3(0, 0, 0);			//vector from default=(0,0,0)
	Vec3 _at = Vec3(0, 0, 0);			//vector at default=(0,0,0)
	Vec3 _up = Vec3(0, 0, 0);			//vector up default=(0,0,0)
	float _angle;						//vem em graus
	float _hither;						//distancia ao near plane Perguntar ao prof -> Como saber o vector do raio?
	int _resX;							//resolution
	int _resY;							//resolution


public:

	Camera(float fromX, float fromY, float fromZ,
		float atX, float atY, float atZ,
		float upX, float upY, float upZ,
		float _angle, float hither, int resX, int resY);


	Vec3 GetFrom();
	void SetFrom(Vec3 vecFrom);

	Vec3 GetAt();
	void SetAt(Vec3 vecAt);

	Vec3 GetUp();
	void SetUp(Vec3 vecUp);

	float GetAngle();
	void SetAngle(float angle);

	float GetHither();
	void SetHither(float hither);

	int GetResX();
	void SetResX(float resX);

	int GetResY();
	void SetResY(float resY);
};
