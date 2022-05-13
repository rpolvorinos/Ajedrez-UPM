#pragma once

class Vector
{
public:
	//Se crean los parametros de vector
	float x;
	float y;

	//Metodos
	Vector(float xv=0.0f, float yv=0.0f);
	virtual ~Vector(){}
	Vector operator+ (Vector op);
	float operator* (Vector op);
	Vector operator* (float op);
	Vector operator+ (float real);
	Vector conversor(int _f, int _c);
};