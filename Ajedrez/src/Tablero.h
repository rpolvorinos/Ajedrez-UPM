#pragma once
#include "Vector.h"
#include "Casillas.h"

class Tablero {


protected:

	Vector posicion;
	Casillas casillas[8][8];
	int fila_selector;
	int columna_selector;
	float posf[8];
	float posc[8];

public:
	Tablero();
	virtual ~Tablero() {};
	void dibuja();
	void setSelector(int aux);
};
