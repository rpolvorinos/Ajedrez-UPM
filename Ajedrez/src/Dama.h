#pragma once
#include "Vector.h"
#include "ETSIDI.h"

using ETSIDI::Sprite;

class Dama
{
private:
	Sprite sprite1{ "imagenes/dama_w.png", 5 };
	Sprite sprite2{ "imagenes/dama_b.png", 5 };
	float radio;
	Vector posicion;

public:
	Dama();
	virtual ~Dama() {}
	void dibujaw();
	void dibujab();
	void setDatos(float _r, float _x, float _y);
};