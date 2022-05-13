#pragma once
#include "Casilla.h"
#include "Vector.h"

class Movimiento
{
protected:
	Casilla c_inicial;
	Casilla c_final;

public:

	Casilla vertical(int n);
	Casilla horizontal(int n);
	void getFC(int _f, int _c);
};

