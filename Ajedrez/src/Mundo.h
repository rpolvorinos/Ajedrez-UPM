#pragma once
#include "Tablero.h"
#include "Interaccion.h"
#include "ListasPiezas.h"

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

	Tablero tablero;
	ListasPiezas piezas;
};