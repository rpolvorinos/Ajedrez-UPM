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
	Vector posicion;
public:
	Caballo();
	virtual ~Caballo() {};
	void dibujaw();
	void dibujab();
	void setDatos(float _r, float _x, float _y);
};