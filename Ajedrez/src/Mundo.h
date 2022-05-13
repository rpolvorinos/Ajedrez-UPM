#pragma once
#include "Tablero.h"
#include "ListaTorres.h"
#include "ListaCaballos.h"
#include "ListaAlfiles.h"
#include "ListaReyes.h"
#include "ListaDamas.h"
#include "ListaPeones.h"
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
	ListaTorres torres;
	ListaCaballos caballos;
	ListaAlfiles alfiles;
	ListaReyes reyes;
	ListaDamas damas;
	ListaPeones peones;
	ListasPiezas piezas;
};