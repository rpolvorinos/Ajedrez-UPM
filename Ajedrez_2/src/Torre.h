#pragma once
#include "Vector.h"
#include "ETSIDI.h"
#include "Casilla.h"

using ETSIDI::Sprite;

class Torre {
	friend class Piezas;
	friend class Mundo;
	friend class ListaPiezas;
	friend class Interaccion;

private:
	Sprite sprite1{ "imagenes/Torre_w.png", 5 };
	Sprite sprite2{ "imagenes/Torre_b.png", 5 };
	float radio;
	Vector posicion;
	Casilla fc;

public:
	Torre();
	Torre(int _f, int _c);
	virtual ~Torre() {}
	void dibujaw();
	void dibujab();
	void setDatos(float _r, int _f, int _c);
	void movimiento(int _f, int _c);
	int getFila();
	int getColumna();


};


