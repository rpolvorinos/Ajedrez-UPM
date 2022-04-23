#pragma once
#include "Vector.h"

class Peones
{
private:
	unsigned char rojo, verde, azul;
	float radio;
	Vector posicion;
	
public:
	Peones();
	Peones(float r, float _x, float _y);
	virtual ~Peones() {}
	void dibuja();
};