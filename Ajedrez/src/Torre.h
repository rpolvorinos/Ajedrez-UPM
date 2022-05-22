#pragma once
#include "Vector.h"
#include "ETSIDI.h"
#include "Casilla.h"
#include "Pieza.h"

using ETSIDI::Sprite;

class Torre : public Pieza {
private:
	Sprite sprite1{ "imagenes/Torre_w.png", 5 };
	Sprite sprite2{ "imagenes/Torre_b.png", 5 };
public:
	Torre();
	Torre(int _f, int _c, int _color);
	virtual ~Torre() {}
	void dibuja();
	void movimiento(int _f, int _c);
	int getFila();
	int getColumna();
	int getTipoPieza();

	friend class Interaccion;
};

