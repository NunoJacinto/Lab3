#pragma once




class Vec2{
private:
	float _x;
	float _y;
public:
	Vec2(float x, float y);
	float getX();
	float getY();

	void setX(float x);
	void setY(float y);


};


class Vec3{
private:
	float _x;
	float _y;
	float _z;
public:
	Vec3(float x, float y, float z);

	float getX();
	float getY();
	float getZ();

	void setX(float x);
	void setY(float y);
	void setZ(float z);

};

