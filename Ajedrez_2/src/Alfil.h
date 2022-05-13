#pragma once
#include "Vector.h"
#include "Casilla.h"
#include "ETSIDI.h"
using ETSIDI::Sprite;

class Alfil {
	friend class Piezas;
	friend class Mundo;
	friend class ListaPiezas;
	friend class Interaccion;

private:
	Sprite sprite1{ "imagenes/alfil_w.png", 5 };
	Sprite sprite2{ "imagenes/alfil_b.png", 5 };
	float radio;
	Casilla fc;
	Vector posicion;


public:
	Alfil();
	Alfil(int _f, int _c);
	virtual ~Alfil() {};
	void dibujaw();
	void dibujab();
	void setDatos(float _r, int _f, int _c);
	void movimiento(int _f, int _c);


};
