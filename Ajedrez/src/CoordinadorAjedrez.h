#pragma once
#include "Mundo.h"


class CoordinadorAjedrez
{
public:
	CoordinadorAjedrez();
	virtual ~CoordinadorAjedrez();
	void tecla(unsigned char key);
	void mueve();
	void dibuja();

protected:
	Mundo mundo;
	enum Estado { INICIO, JUEGO, GAMEOVER, FIN };
	Estado estado;


};