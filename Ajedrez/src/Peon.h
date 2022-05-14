#pragma once
#include "Vector.h"
#include "ETSIDI.h"
using ETSIDI::Sprite;
#include "Casilla.h"

class Peon
{
private:
	Sprite sprite1{ "imagenes/peon_w.png", 5};
	Sprite sprite2{ "imagenes/peon_b.png", 5 };
	float radio;
	Casilla fc;
	Vector posicion;
	int estado, color;

public:
	Peon();
	Peon(int _f, int _c);
	virtual ~Peon() {}
	void dibujaw();
	void dibujab();
	void setDatos(float _r, int _f, int _c);

	friend class Interaccion;
};