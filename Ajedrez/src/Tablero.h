#pragma once
#include "Vector.h"
#include "Casilla.h"
#include "ListasPiezas.h"
#include "Interaccion.h"

class Tablero {

private:

	//Variables para la creacion y funcionamiento del tablero
	Vector posicion;
	Casilla casillas[8][8];
	Selector selector;
	float posf[8];
	float posc[8];
	int color;

	//Variables para el funcionamiento del juego
	ListasPiezas piezas;
	int turno;
	int ocupacion[8][8];

	//Variables para la posicion del punto de vista del tablero
	float x_ojo;
	float y_ojo;
	float z_ojo;

public:
	
	virtual ~Tablero() {};
	void tecla(unsigned char key);
	void inicializa();
	void dibuja();
	bool jaque(Casilla aux);
	bool jaqueMate();
	int getColor(){ return color; }
	void eliminarContenido();

};
