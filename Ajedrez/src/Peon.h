#pragma once
#include "Vector.h"
#include "ETSIDI.h"
#include "Casilla.h"
#include "Pieza.h"

using ETSIDI::Sprite;


class Peon : public Pieza
{
private:
	Sprite sprite1{ "imagenes/peon_w.png", 5};
	Sprite sprite2{ "imagenes/peon_b.png", 5 };

public:
	Peon();
	Peon(int _f, int _c, int _color);
	virtual ~Peon() {}
	void dibuja();
	int getTipoPieza();

};