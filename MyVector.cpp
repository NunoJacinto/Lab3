#include "MyVector.h"



Vec2::Vec2(float x, float y) { setX(x); setY(y); }
float Vec2::getX() { return _x; }
float Vec2::getY() { return _y; }
void Vec2::setX(float x) { _x = x; }
void Vec2::setY(float y) { _y = y; }




Vec3::Vec3(float x, float y, float z){ setX(x); setY(y); setZ(z);}
float Vec3::getX() { return _x; }
float Vec3::getY() { return _y; }
float Vec3::getZ() { return _z; }
void Vec3::setX(float x) { _x = x; }
void Vec3::setY(float y) { _y = y; }
void Vec3::setZ(float z) { _z = z; }



