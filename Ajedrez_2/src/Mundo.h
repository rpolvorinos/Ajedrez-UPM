#pragma once
#include "Piezas.h"
#include "Tablero.h"


class Mundo
{
public:
	void tecla(unsigned char key);
	void inicializa();
	void rotarOjo();
	void mueve();
	void dibuja();

	float x_ojo;
	float y_ojo;
	float z_ojo;

	Piezas piezas;
	Tablero tablero;
	int estado;
	int n;
	Casilla c_i;
};