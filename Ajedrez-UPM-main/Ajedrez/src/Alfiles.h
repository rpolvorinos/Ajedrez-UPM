#pragma once
#include "Vector.h"

class Alfiles
{
private:
	unsigned char rojo, verde, azul;
	float radio;
	Vector posicion;

public:
	Alfiles();
	Alfiles(float r, float _x, float _y);
	virtual ~Alfiles() {}
	void dibuja();
	void setDatos(float _r, float _x, float _y);
};