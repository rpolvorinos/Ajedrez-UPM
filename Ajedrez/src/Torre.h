#pragma once
#include "Vector.h"
#include "ETSIDI.h"

using ETSIDI::Sprite;

class Torre
{
private:
	Sprite sprite1{ "imagenes/Torre_w.png", 5 };
	Sprite sprite2{ "imagenes/Torre_b.png", 5 };
	float radio;
	Vector posicion;

public:
	Torre();
	virtual ~Torre() {}
	void dibujaw();
	void dibujab();
	void setDatos(float _r, float _x, float _y);
};