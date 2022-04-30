#pragma once
#include "Vector.h"
#include "ETSIDI.h"

using ETSIDI::Sprite;
class Rey
{
private:
	Sprite sprite1{ "imagenes/rey_w.png", 5 };
	Sprite sprite2{ "imagenes/rey_b.png", 5 };
	float radio;
	Vector posicion;

public:
	Rey();
	void setDatos(float r, float _x, float _y);
	virtual ~Rey() {}
	void dibujaw();
	void dibujab();
};