#pragma once
#include "Vector.h"
#include "ETSIDI.h"
#include "Casilla.h"
#include "Pieza.h"

using ETSIDI::Sprite;

class Dama: public Pieza
{
private:
	Sprite sprite1{ "imagenes/dama_w.png", 5 };
	Sprite sprite2{ "imagenes/dama_b.png", 5 };

public:
	Dama();
	Dama(int _f, int _c, int _color);
	virtual ~Dama() {}
	void dibuja();
	int getTipoPieza();

	friend class Interaccion;
};