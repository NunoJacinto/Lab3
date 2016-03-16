#pragma once

class Object
{
private:
	Color _color;
	float _diffuse;
	float _specular;
	float _shininness;
	float _transmitance;
	float _indice_refraction;

public:
	//boolean GetIntersection(Ray ray, vector* posIntersection); //FIXME
	void Draw(); // é preciso?
};


