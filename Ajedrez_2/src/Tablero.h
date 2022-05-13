#pragma once
#include "Vector.h"
#include "Casilla.h"
#include "Selector.h"

class Tablero {

protected:

	Vector posicion;
	Casilla casillas[8][8];
	Selector selector;

public:
	Tablero();
	virtual ~Tablero() {};
	void dibuja();

	friend class Mundo;
};
