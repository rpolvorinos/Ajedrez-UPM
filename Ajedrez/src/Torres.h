#pragma once
#include "Vector.h"

class Torres
{
private:
	unsigned char rojo, verde, azul;
	float radio;
	Vector posicion;

public:
	Torres();
	Torres(float r, float _x, float _y);
	virtual ~Torres() {}
	void dibuja();
	void setDatos(float _r, float _x, float _y);
};