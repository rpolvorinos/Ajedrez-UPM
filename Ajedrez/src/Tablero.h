#pragma once
#include "Vector.h"
#include "Casillas.h"

class Tablero {

private:

	Vector limite1;
	Vector limite2;
	Casillas casillas[8][8];
	int fila_selector;
	int columna_selector;

public:
	Tablero();
	virtual ~Tablero() {};
	void dibuja();
	void setSelector(int aux);
};
