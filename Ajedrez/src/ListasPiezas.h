#pragma once
#include "Torre.h"
#include "Caballo.h"
#include "Alfil.h"
#include "Peon.h"
#include "Dama.h"
#include "Rey.h"
#include "Peon.h"
#define MAX_4 4
#define MAX_2 2
#define MAX_16 16
#include "Selector.h"

class ListasPiezas {
protected:
	Torre* lista1[MAX_4];
	Alfil* lista2[MAX_4];
	Caballo* lista3[MAX_4];
	Rey* lista4[MAX_2];
	Dama* lista5[MAX_2];
	Peon* lista6[MAX_16];
	int numero1, numero2, numero3, numero4, numero5,numero6 ;
	//int ocupacion[8][8];

public:
	ListasPiezas();
	virtual ~ListasPiezas() {}
	void dibuja();
	bool agregar(Torre* t);
	bool agregar(Alfil* t);
	bool agregar(Caballo* t);
	bool agregar(Rey* t);
	bool agregar(Dama* t);
	bool agregar(Peon* t);
	//int getNumero() { return numero; }
	void mover(Selector s, int& _turno,int& _o);

	//void destruirContenido();
	//void eliminar(int index);
	//void eliminar(Esfera* e);
	//void setOcupacion(int _f, int _c,int _o);
	//int getOcupacion(int _f, int _c);
	friend class Interaccion;
};