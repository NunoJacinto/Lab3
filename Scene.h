// Scene.h
#pragma once


#include <iostream>
#include <cstring>
#include <vector>

#include "Camera.h"
#include "Light.h"
#include "Object.h"
#include "Color.h"
using namespace std;


class Scene
{
private:
	Camera _camera;
	vector<Light> _lights;
	vector<Object> _objects;
	Color _background;

public:
	Scene(Camera _camera, vector<Light> _lights, vector<Object> _objects, Color _background);
	bool Load_nff(string nff_file_path);
	Camera GetCamera();
	vector<Light> GetLights();
	vector<Object> GetObjects();
	Color GetBackground();
};