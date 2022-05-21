#pragma once
#include "Vector.h"
#include "ETSIDI.h"
#include "Casilla.h"
#include "Pieza.h"

using ETSIDI::Sprite;

class Alfil: public Pieza {
private:
	Sprite sprite1{ "imagenes/alfil_w.png", 5 };
	Sprite sprite2{ "imagenes/alfil_b.png", 5 };

public:
	Alfil();
	Alfil(int _f, int _c, int _color);
	virtual ~Alfil() {};
	void dibujaw();
	void dibujab();
	void dibuja();

	friend class Interaccion;
};
