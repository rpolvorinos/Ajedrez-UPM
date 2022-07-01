#pragma once
#include "Tablero.h"
#include "ETSIDI.h"
using ETSIDI::Sprite;


class CoordinadorAjedrez
{
public:
	CoordinadorAjedrez();
	virtual ~CoordinadorAjedrez();
	void tecla(unsigned char key);
	void dibuja();
	Sprite sprite1{ "imagenes/inicio.png", 5 };
	Sprite sprite2{ "imagenes/simpson.png", 5 };
	Sprite sprite3{ "imagenes/padre.png", 5 };

protected:
	Tablero tablero;
	enum Estado { INICIO, JUEGO, GanaB, GanaW };
	Estado estado;
	int fin;

};