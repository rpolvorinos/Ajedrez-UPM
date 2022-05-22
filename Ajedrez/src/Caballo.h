#pragma once
#include "Vector.h"
#include "ETSIDI.h"
#include "Casilla.h"
#include "Pieza.h"

using ETSIDI::Sprite;

class Caballo : public Pieza
{
private:
	Sprite sprite1{ "imagenes/caballo_w.png", 5 };
	Sprite sprite2{ "imagenes/caballo_b.png", 5 };
public:
	Caballo();
	Caballo(int _f, int _c, int _color);
	virtual ~Caballo() {};
	void dibuja();
	int getTipoPieza();

	friend class Interaccion;
};