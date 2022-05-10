#pragma once
#include "Vector.h"
#include "ETSIDI.h"

using ETSIDI::Sprite;

class Caballo
{
private:
	Sprite sprite1{ "imagenes/caballo_w.png", 5 };
	Sprite sprite2{ "imagenes/caballo_b.png", 5 };
	float radio;
	int fila, columna;
	Vector posicion;
public:
	Caballo();
	Caballo(int _f, int _c);
	virtual ~Caballo() {};
	void dibujaw();
	void dibujab();
	void setDatos(float _r, int _f, int _c);
};