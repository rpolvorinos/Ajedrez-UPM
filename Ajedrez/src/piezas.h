#pragma once
#include "Peon.h"
#include "ListaPeones.h"
#include "Torre.h"
#include "Rey.h"
#include "Dama.h"
#include "Alfil.h"
#include "Caballo.h"


class piezas{

public:
	void tecla(unsigned char key);
	void inicializa();
	void mueve();
	void dibuja();

	//Creacion de los objetos
	ListaPeones peones;
	Rey rey1, rey2;
	Dama dama1, dama2;
	Torre torre1, torre2, torre3, torre4;
	Alfil alfil1, alfil2, alfil3, alfil4;
	Caballo caballo1, caballo2, caballo3, caballo4;

	int estado;
};