#pragma once
#include "Vector.h"


class ObjetoMovil {

protected:
	Vector posicion;
	Vector velocidad;
	Vector aceleracion;
public:

	void mueve(float t);
};