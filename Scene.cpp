#include "Scene.h"



//Parser do NFF
bool Scene::Load_nff(string nff_file_path) {

}



Scene::Scene(Camera camera, vector<Light> lights, vector<Object> objects, Color background) {
	_camera=camera;
	_lights=lights;
	_objects=objects;
	_background=background;
}

Camera Scene::GetCamera(){
	return _camera;
}

vector<Light> Scene::GetLights() {
	return _lights;
}


vector<Object> Scene::GetObjects(){
	return _objects;
}


Color Scene::GetBackground() {
	return _background;
}


//---------------------------------------------------------------------------------------------------------------
//CLASSE CAMERA METHODS



//---------------------------------------------------------------------------------------------------------------
//CLASSE SCENE METHODS



//---------------------------------------------------------------------------------------------------------------
//CLASSE SCENE METHODS



//---------------------------------------------------------------------------------------------------------------
//CLASSE SCENE METHODS