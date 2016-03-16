#include "Camera.h"


Camera::Camera(float fromX, float fromY, float fromZ,
	float atX, float atY, float atZ,
	float upX, float upY, float upZ,
	float angle, float hither, int resX, int resY) {
	_from.setX(fromX);_from.setY(fromY);_from.setZ(fromZ);
	_at.setX(atX);_at.setY(atY);_at.setZ(atZ);
	_up.setX(upX); _up.setY(upY); _up.setZ(upZ);
	SetAngle(angle); SetHither(hither); SetResX(resX); SetResY(resY);
}


Vec3 Camera::GetFrom() { return _from; }
void Camera::SetFrom(Vec3 vecFrom) { _from = vecFrom; }

Vec3 Camera::GetAt() { return _at; }
void Camera::SetAt(Vec3 vecAt) { _at = vecAt; }

Vec3 Camera::GetUp() { return _up; }
void Camera::SetUp(Vec3 vecUp) { _up = vecUp; }

float Camera::GetAngle() { return _angle; }
void Camera::SetAngle(float angle) { _angle = angle; }

float Camera::GetHither() { return _hither; }
void Camera::SetHither(float hither) { _hither = hither; }

int Camera::GetResX() { return _resX; }
void Camera::SetResX(float resX) { _resX = resX; }

int Camera::GetResY() { return _resY; }
void Camera::SetResY(float resY) { _resY=resY; }