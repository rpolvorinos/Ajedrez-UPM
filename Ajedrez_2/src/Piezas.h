#pragma once
#include "Listapiezas.h"


class Piezas {

public:
	friend class Mundo;

	void tecla(unsigned char key);
	void inicializa();
	void mueve();
	void dibuja();

	//Creacion de los objetos
	Listapiezas p;

	int estado;
};