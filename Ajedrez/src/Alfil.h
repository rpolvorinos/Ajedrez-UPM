#pragma once
#include "Vector.h"
#include "ETSIDI.h"
#include "Casilla.h"
using ETSIDI::Sprite;

class Alfil {
private:
	Sprite sprite1{ "imagenes/alfil_w.png", 5 };
	Sprite sprite2{ "imagenes/alfil_b.png", 5 };
	float radio;
	Vector posicion;
	Casilla fc;
	int estado;

public:
	Alfil();
	Alfil(int _f, int _c);
	virtual ~Alfil() {};
	void dibujaw();
	void dibujab();
	void setDatos(float _r, int _f, int _c);

	friend class Interaccion;
};
