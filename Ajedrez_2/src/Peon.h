#pragma once
#include "Vector.h"
#include "Casilla.h"
#include "ETSIDI.h"
using ETSIDI::Sprite;

class Peon
{
	friend class Piezas;
	friend class Mundo;
	friend class ListaPiezas;
	friend class Interaccion;

private:

	Sprite sprite1{ "imagenes/peon_w.png", 5 };
	Sprite sprite2{ "imagenes/peon_b.png", 5 };
	float radio;
	Casilla fc;
	Vector posicion;

public:
	Peon();
	Peon(int _f, int _c);
	virtual ~Peon() {}
	void dibujaw();
	void dibujab();
	void movimiento(int _f, int _c);
};