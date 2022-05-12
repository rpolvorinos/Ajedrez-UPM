#pragma once
#include "Peon.h"
#define MAX_PEONES 16
#include "Selector.h"

class ListaPeones {
private:
	Peon* lista[MAX_PEONES];
	int numero;
public:
	ListaPeones();
	virtual ~ListaPeones() {}
	void dibuja();
	bool agregar(Peon* t);
	int getNumero() { return numero; }
	void mover(Selector s);

	//void destruirContenido();
	//void eliminar(int index);
	//void eliminar(Esfera* e);

	friend class Interaccion;
};