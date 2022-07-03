#pragma once

class Vector
{
private:
	//Se crean los parametros de vector
	float x;
	float y;
public:
	//Metodos
	Vector(float xv=0.0f, float yv=0.0f);
	virtual ~Vector(){}
	Vector operator+ (Vector op);
	float operator* (Vector op);
	Vector operator* (float op);
	Vector operator+ (float real);
	Vector conversor(int _f, int _c);
	float getX() {	return x;}
	float getY() { return y; }
	void setX(float _x) { x = _x; }
	void setY(float _y) { y = _y; }
};