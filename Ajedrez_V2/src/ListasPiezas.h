#pragma once
#include "Pieza.h"
#include "Torre.h"
#include "Dama.h"
#include "Rey.h"
#include "Caballo.h"
#include "Alfil.h"
#include "Peon.h"
#include "Selector.h"


#define MAX_4 4
#define MAX_2 2
#define MAX_16 16
#define MAX_32 32


class ListasPiezas {
private:
	int n;
	Pieza* lista[MAX_32];
	friend class Tablero;

public:
	ListasPiezas();
	virtual ~ListasPiezas() {}
	void dibuja();
	void mover(Selector s, int& _turno, int& _o, ListasPiezas& l);
	bool agregar(Pieza* t);
	void eliminar(Pieza* e);
	void eliminar(int index);
	int getNumero_Piezas() { return n; }
	Pieza* colision(int _f, int _c, int _turno);
	//bool comprobarjaque(Casilla c, int _turno, int _o);
	/*bool comprobarjaque(int _turno, int _o);*/

};
