#pragma once
#include "Vector.h"
#include "ETSIDI.h"
using ETSIDI::Sprite;

class Peon
{
private:
	Sprite sprite1{ "imagenes/peon_w.png", 5};
	Sprite sprite2{ "imagenes/peon_b.png", 5 };
	float radio;
	int fila, columna;
	Vector posicion;
	
public:
	Peon();
	Peon(int _f, int _c);
	virtual ~Peon() {}
	void dibujaw();
	void dibujab();
};