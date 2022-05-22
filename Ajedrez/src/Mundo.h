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
	int turno;

	int ocupacion[8][8];
	//void setOcupacion(int _f, int _c, int _o);
	//int getOcupacion(int _f, int _c);
	int jaqueMate();

	friend class Interaccion;
};