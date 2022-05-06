#pragma once
#include "Vector.h"
#include "ETSIDI.h"
#include "Tablero.h"

using ETSIDI::Sprite;

class Torre: public Tablero{
private:
	Sprite sprite1{ "imagenes/Torre_w.png", 5 };
	Sprite sprite2{ "imagenes/Torre_b.png", 5 };
	float radio;
	Vector posicion;
	int fila, columna;
public:
	Torre();
	virtual ~Torre() {}
	void dibujaw();
	void dibujab();
	void setDatos(float _r, int _f, int _c);
};

