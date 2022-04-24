#pragma once
#include "Vector.h"

class Caballos
{
private:
	unsigned char rojo, verde, azul;
	float radio;
	Vector posicion;

public:
	Caballos();
	Caballos(float r, float _x, float _y);
	virtual ~Caballos() {}
	void dibuja();
	void setDatos(float _r, float _x, float _y);
};