#pragma once
#include "Vector.h"
#include "ETSIDI.h"
#include "Casilla.h"

using ETSIDI::Sprite;

class Caballo
{
private:
	Sprite sprite1{ "imagenes/caballo_w.png", 5 };
	Sprite sprite2{ "imagenes/caballo_b.png", 5 };
	float radio;
	Casilla fc;
	Vector posicion;
	int estado, color;
public:
	Caballo();
	Caballo(int _f, int _c);
	virtual ~Caballo() {};
	void dibujaw();
	void dibujab();
	void setDatos(float _r, int _f, int _c);

	friend class Interaccion;
};