#pragma once
#include "Mundo.h"
#include "ETSIDI.h"
using ETSIDI::Sprite;



class CoordinadorAjedrez
{
public:
	CoordinadorAjedrez();
	virtual ~CoordinadorAjedrez();
	void tecla(unsigned char key);
	void mueve();
	void dibuja();
	Sprite sprite1{ "imagenes/inicio.png", 5 };
protected:
	Mundo mundo;
	enum Estado { INICIO, JUEGO, GAMEOVER, FIN };
	Estado estado;


};