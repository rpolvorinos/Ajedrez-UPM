#pragma once
#include "Vector.h"
#include "Casilla.h"

class Tablero {

private:

	Vector limite1;
	Vector limite2;
	Casilla casillas[8][8];

public:
	Tablero();
	virtual ~Tablero() {};
	void dibuja();
	
};
