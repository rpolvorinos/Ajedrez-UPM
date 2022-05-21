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
	//int ocupacion[8][8];

public:
	ListasPiezas();
	virtual ~ListasPiezas() {}
	void dibuja();
	//int getNumero() { return numero; }
	void mover(Selector s, int& _turno,int& _o);
	bool agregar(Pieza* t);
	//void destruirContenido();
	//void eliminar(int index);
	//void eliminar(Esfera* e);
	//void setOcupacion(int _f, int _c,int _o);
	//int getOcupacion(int _f, int _c);
	friend class Interaccion;
};