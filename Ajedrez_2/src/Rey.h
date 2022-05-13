#pragma once
#include "Vector.h"
#include "Casilla.h"
#include "ETSIDI.h"

using ETSIDI::Sprite;
class Rey
{
	friend class Piezas;
	friend class Mundo;
	friend class ListaPiezas;
	friend class Interaccion;

private:
	Sprite sprite1{ "imagenes/rey_w.png", 5 };
	Sprite sprite2{ "imagenes/rey_b.png", 5 };
	float radio;
	Vector posicion;
	Casilla fc;

public:
	Rey();
	Rey(int _f, int _c);
	void setDatos(float r, int _f, int _c);
	virtual ~Rey() {}
	void dibujaw();
	void dibujab();
	void movimiento(int _f, int _c);
};