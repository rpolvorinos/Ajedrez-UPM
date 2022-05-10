#pragma once
#include "Listapiezas.h"


class Piezas {

public:
	void tecla(unsigned char key);
	void inicializa();
	void mueve();
	void dibuja();

	//Creacion de los objetos
	Listapiezas piezas;

	int estado;
};