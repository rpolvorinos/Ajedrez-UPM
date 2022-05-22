#pragma once
#include "Mundo.h"


class CoordinadorAjedrez
{
public:
	CoordinadorAjedrez();
	virtual ~CoordinadorAjedrez();
	void tecla(unsigned char key);
	void dibuja();

protected:
	Mundo mundo;
	enum Estado { INICIO, JUEGO, GanaB, GanaW };
	Estado estado;
	int fin;

};