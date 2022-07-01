#pragma once
#include "Pieza.h"
#include "Selector.h"
#define MAX_4 4
#define MAX_2 2
#define MAX_16 16
#define MAX_32 32


class ListasPiezas {
protected:
	int n;
	Pieza* lista[MAX_32];

public:
	ListasPiezas();
	virtual ~ListasPiezas() {}
	void dibuja();
	
	void mover(Selector s, int& _turno,int& _o, ListasPiezas& l);
	bool agregar(Pieza* t);
	
	void eliminar(Pieza* e);
	void eliminar(int index);
	Pieza* colision(int _f, int _c, int _turno);

	friend class Interaccion;
	friend class Mundo;
};


