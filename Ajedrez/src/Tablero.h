#pragma once
#include "Vector.h"
#include "Casillas.h"
#include "Selector.h"

class Tablero {

protected:

	Vector posicion;
	Casillas casillas[8][8];
	Selector selector;
	float posf[8];
	float posc[8];
	

public:
	Tablero();
	virtual ~Tablero() {};
	void dibuja();

	friend class Mundo;
};
