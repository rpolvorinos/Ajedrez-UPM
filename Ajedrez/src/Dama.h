#pragma once
#include "Vector.h"
#include "ETSIDI.h"
#include "Casilla.h"

using ETSIDI::Sprite;

class Dama
{
private:
	Sprite sprite1{ "imagenes/dama_w.png", 5 };
	Sprite sprite2{ "imagenes/dama_b.png", 5 };
	float radio;
	int estado, color;
	Casilla fc;
	Vector posicion;

public:
	Dama();
	Dama(int _f, int _c);
	virtual ~Dama() {}
	void dibujaw();
	void dibujab();
	void setDatos(float _r, int _f, int _c);

	friend class Interaccion;
};