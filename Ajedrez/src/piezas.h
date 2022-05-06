#pragma once
#include "Vector.h"
#include "ETSIDI.h"
#include "Tablero.h"

using ETSIDI::Sprite;

class piezas: public Tablero {

private:
	
	Sprite torrew{ "imagenes/Torre_w.png", 5 };
	Sprite torreb{ "imagenes/Torre_b.png", 5 };
	float radio;
	Vector posicion;
	int fila, columna;


public:
	void inicializa();
	void dibuja();
	void setDatos(float _r, int _f, int _c);
};