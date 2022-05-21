#pragma once
#include "Vector.h"
#include "ETSIDI.h"
#include "Casilla.h"
#include "Pieza.h"

using ETSIDI::Sprite;
class Rey : public Pieza
{
private:
	Sprite sprite1{ "imagenes/rey_w.png", 5 };
	Sprite sprite2{ "imagenes/rey_b.png", 5 };
	float radio;
	Vector posicion;
	int estado, color;
	Casilla fc;

public:
	Rey();
	Rey(int _f, int _c, int _color);
	virtual ~Rey() {}
	void dibujaw();
	void dibujab();
	void dibuja();

	friend class Interaccion;
};