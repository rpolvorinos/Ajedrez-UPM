#pragma once
#include "Vector.h"
#include "Casilla.h"
#include "ETSIDI.h"


class Pieza
{
protected:
	float radio;
	Vector posicion;
	int estado, color;
	Casilla fc;

public:
	void setDatos(float _r, int _f, int _c);
	virtual void dibuja();

	friend class Interaccion;
};

