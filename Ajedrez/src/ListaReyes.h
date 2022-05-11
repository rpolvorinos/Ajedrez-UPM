#pragma once
#include "Rey.h"
#define MAX_REYES 2

class ListaReyes {
private:
	Rey* lista[MAX_REYES];
	int numero;
public:
	ListaReyes();
	virtual ~ListaReyes() {}
	void dibuja();
	bool agregar(Rey* t);
	int getNumero() { return numero; }

	//void destruirContenido();
	//void eliminar(int index);
	//void eliminar(Esfera* e);

	friend class Interaccion;
};