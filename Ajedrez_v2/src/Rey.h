#pragma once
#include "Vector.h"
#include "ETSIDI.h"
#include "Casilla.h"
#include "Pieza.h"

using ETSIDI::Sprite;
class Rey : public Pieza
{
public:
	Rey();
	Rey(int _f, int _c, int _color);
	virtual ~Rey() {}
	void dibuja();
	int getTipoPieza();
	
};